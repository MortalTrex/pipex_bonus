#include "../include/pipex.h"

// char *get_env(char **envp)
// {
// 	//recherche le path
// 	int i = 0;
// 	while (envp[i])
// 	{
// 		if (ft_strncmp(envp[i], "PATH=", 5) == 0)
// 			return (envp[i]);
// 		i++;
// 	}
// 	return (NULL);
// }

// get_path()
// {

// }

exec_child(char *cmd, char **envp)
{
	int fd[2];
	int status = 0;
	pipe(fd);
	char *args[2] = {""}
}

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
	return (0);
}