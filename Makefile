NAME = minitalk
LIBFT_PATH = libft
LIBFT = $(LIBFT_PATH)/libft.a 
INCLUDES = -I ./includes -I $(LIBFT_PATH)
CFLAGS = -Wall -Wextra -Werror $(INCLUDES)

SERVER_SRCS = srcs/server.c
CLIENT_SRCS = srcs/client.c

SERVER_OBJS = $(SERVER_SRCS:.c=.o)
CLIENT_OBJS = $(CLIENT_SRCS:.c=.o)

SERVER = server
CLIENT = client

RM = rm -f

all: $(NAME)

$(NAME): $(SERVER) $(CLIENT)

$(SERVER): $(SERVER_OBJS) $(LIBFT)
	$(CC) $< -o $@ -L$(LIBFT_PATH) -lft

$(CLIENT): $(CLIENT_OBJS) $(LIBFT)
	$(CC) $< -o $@ -L$(LIBFT_PATH) -lft

$(SERVER_OBJS): $(SERVER_SRCS)
	$(CC) -c $(SERVER_SRCS) -o $@

$(CLIENT_OBJS): $(CLIENT_SRCS)
	$(CC) -c $(CLIENT_SRCS) -o $@

clean:
	$(RM) $(SERVER_OBJS) $(CLIENT_OBJS)
	$(MAKE) clean -C $(LIBFT_PATH)

fclean:
	$(RM) $(SERVER_OBJS) $(CLIENT_OBJS)
	$(RM) $(SERVER) $(CLIENT)
	$(MAKE) fclean -C $(LIBFT_PATH)

re: fclean all

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH)

.PHONY: all clean fclean re