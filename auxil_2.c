#include "main.h"
/**
* env_builtin - Entry point
* @argv: argument array
* @env: enviroment array
* Description: Prints enviroment variables
* Return: Nothing
*/
void env_builtin(char **argv, char **env)
{
	int i = 0;
		if ((_strcmp(argv[0], "env") == 0) && argv[1] == NULL)
		{
			for (i = 0; env[i] != '\0' ; i++)
				_puts(env[i]);
			argv[0] = NULL;
			return;
		}
		if ((_strcmp(argv[0], "env") == 0) && argv[1] != NULL)
		{
			for (i = 1 ; argv[i] != '\0' ; i++)
				_strcpy(argv[i - 1], argv[i]);
			argv[i - 1] = NULL;
		}
}
/**
* replace_env_val - Entry point
* @name: name of new val
* @value: value of new val
* @pos: position on enviroment
* @env: enviroment array
* Description: Replace a enviroment variable
* Return: 0 Success
*/
int replace_env_val(char *name, char *value, int pos, char **env)
{
	int size = 0;
	char *new_val;

	size = (_strlen(name) + 2 + _strlen(value));
	new_val = malloc(sizeof(char) * size);
	if (!new_val)
		return (-1);
	_strcpy(new_val, name);
	_strcat(new_val, "=");
	_strcat(new_val, value);
	_strcat(new_val, "\0");
	free(env[pos]);
	env[pos] = malloc(sizeof(char) * size);
	_strcpy(env[pos], new_val);
	free(new_val);
	return (0);
}
/**
* add_env_val - Entry point
* @name: name of new val
* @value: value of new val
* @pos: position on enviroment array
* @env: enviroment array
* @envi: pointer to enviroment array
* Description: Add a new value to enviroment
* Return: 0 Success
*/
int add_env_val(char *name, char *value, int pos, char **env, char ***envi)
{
	int size = 0;
	char *new_val;
	char **new_env;

	size = (_strlen(name) + 2 + _strlen(value));
	new_val = malloc(sizeof(char) * size);
	if (!new_val)
		return (-1);
	new_env = array_copy(env, 1);
	new_env[pos] = malloc(sizeof(char) * size);
	_strcpy(new_val, name);
	_strcat(new_val, "=");
	_strcat(new_val, value);
	_strcat(new_val, "\0");
	_strcpy(new_env[pos], new_val);
	new_env[pos + 1] = NULL;
	free_grid(env);
	*envi = new_env;
	free(new_val);
	return (0);
}
/**
 * ctrl_d - entry point
 * @eof: end of file
 * @f: flag
 * Return: -1 if ctrl d was pressed 1 if not
 */
int ctrl_d(int eof, int f)
{
	if (eof == EOF)
	{
		if (f == 1)
		{
			_putchar('\n');
			fflush(STDIN_FILENO);
			return (0);
		}
		else
			return (0);
	}
	return (1);
}
/**
* exec_aux - Entry point
* @args: arguments for execution
* @my_envi: enviroment array
* @argv: arguments of the shell execution
* @times: times the shell do a cycle
* Description: Makes logic to execute
* Return: Nothing
*/
void exec_aux(char **args, char **my_envi, char **argv, int times)
{
	char *cmd;
	char *error;
	char pichu[8];
	int size = 0;

	if (args[0])
	{
		cmd = _which(args[0], my_envi);
		if (_strcmp(cmd, "notfound") == 0)
		{
			size = (_strlen(argv[0]) + _strlen(args[0]) + 22);
			error = malloc(sizeof(char) * size);
			if (!error)
				return;
			_itoa(times, pichu);
			_strcpy(error, argv[0]);
			_strcat(error, ": ");
			_strcat(error, pichu);
			_strcat(error, ": ");
			_strcat(error, args[0]);
			_strcat(error, ": not found");
			_puts(error);
			free(error);
		}
		else
			if (execve(cmd, args, my_envi) == -1)
				perror(argv[0]);
	}
}
