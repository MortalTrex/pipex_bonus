#include "../include/pipex.h"
#include "../include/structures.h"

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*my_getenv(char *name, char **env)
{
	int		i;
	int		j;
	char	*sub;

	i = 0;
	while (env[i])
	{
		j = 0;
		while (env[i][j] && env[i][j] != '=')
			j++;
		sub = ft_substr(env[i], 0, j);
		if (ft_strcmp(sub, name) == 0)
		{
			free(sub);
			return (env[i] + j + 1);
		}
		free(sub);
		i++;
	}
	return (NULL);
}

char *get_env(char **envp)
{
	//recherche le path
	int i = 0;
	while (envp[i])
	{
		if (ft_strncmp(envp[i], "PATH=", 5) == 0)
			return (envp[i]);
		i++;
	}
	return (NULL);
}

// char	*get_path(char *cmd, char **env)
// {
// 	int		i;
// 	char	*exec;
// 	char	**allpath;
// 	char	*path_part;
// 	char	**s_cmd;

// 	i = -1;
// 	allpath = ft_split(my_getenv("PATH", env), ':');
// 	s_cmd = ft_split(cmd, ' ');
// 	while (allpath[++i])
// 	{
// 		path_part = ft_strjoin(allpath[i], "/");
// 		exec = ft_strjoin(path_part, s_cmd[0]);
// 		free(path_part);
// 		if (access(exec, F_OK | X_OK) == 0)
// 		{
// 			ft_free_tab(s_cmd);
// 			return (exec);
// 		}
// 		free(exec);
// 	}
// 	ft_free_tab(allpath);
// 	ft_free_tab(s_cmd);
// 	return (cmd);
// }

// get_path()
// {

// }

// exec_child(char *cmd, char **envp)
// {
// 	int fd[2];
// 	int status = 0;
// 	pipe(fd);
// 	char *args[2] = {""}
// }

int main (int argc, char **argv, char **envp)
{
	(void)argv;
	(void)argc;
	if (argc < 5)
		exit(0);
	//Récuperer l'environnement
	//Rechercher à l'intérieur de l'environnement les path qui ccommencent par : ²	
	//Ajouter à la fin de chaque portion de path le caracètère /
	//Vérifier si le fichier existe
	char *path = get_env(envp);
	ft_printf("Le path actuel vaut : %s\n", path);
	path = my_getenv("PATH", envp);
	ft_printf("Le path deux actuel vaut : %s\n", path);
	return (0);
}