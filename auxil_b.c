#include "main.h"
/**
* _which_aux - Entry point
* Description: Logic to find a command in paths folders or localy
* @path: Array contains diferent path folders
* @cmd: command to execute
* @i: position to search in path
* Return: Path of looking command or NULL
*/
char *_which_aux(char **path, char *cmd, int i)
{
	char *buff;
	int size = 0;

	if (cmd[0] == '.')
	{
		buff = malloc(sizeof(*cmd));
		if (!buff)
		{
			free(path);
			return (NULL);
		}
		_strcpy(buff, cmd);
	}
	else
	{
		size = (_strlen(path[i]) + 2 + _strlen(cmd));
		buff = malloc(sizeof(char) * size);
		if (!buff)
		{
			free(path);
			return (NULL);
		}
		_strcpy(buff, path[i]);
		_strcat(buff, "/");
		_strcat(buff, cmd);
		return (buff);
	}

	return (cmd);
}
/**
* parent_wait - Entry point
* Descrption: Wait for child procces and catch exit status
* @child_pid: pid of child process
* @status: status int
* Return: Exit status code
*/
int parent_wait(int child_pid, int *status)
{
	if (waitpid(child_pid, status, 0) == -1)
	{
		perror("Waitpid failed");
		return (0);
	}
	if (WIFEXITED(*status))
	{
		return (WEXITSTATUS(*status));
	}

	return (1);
}
