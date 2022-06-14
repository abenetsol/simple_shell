#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int input(char *s,int length);

int main()
{
        char *buffer;
        size_t bufsize = 32;
        buffer = (char *) malloc(bufsize * sizeof(char));
        if( buffer == NULL)
        {
                perror("unable to allocate buffer");
                exit(1);
        }
        printf("$ ");
        getline(&buffer ,&bufsize , stdin);
	char * token = strtok(buffer, " ");
	while(token != NULL)
	{
		printf("%s\n" ,token);
		token = strtok(NULL, " ");
	}
        return(0);
}
