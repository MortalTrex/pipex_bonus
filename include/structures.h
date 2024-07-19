typedef enum e_redir_type
{
	IN,
	OUT,
	D_IN,
	D_OUT
}					t_redir_type;

typedef struct s_redir
{
	char			*file;
	t_redir_type	type;
	struct s_redir	*next;
}					t_redir;

typedef struct s_cmd
{
	char			**argv;
	pid_t			pid;
	struct s_cmd	*next;
	t_redir			*redir_in;
	t_redir			*redir_out;
}					t_cmd;

typedef struct s_data
{
	t_cmd			*cmds;
}					t_data;