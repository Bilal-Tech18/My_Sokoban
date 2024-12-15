/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

typedef struct game_s {
    char **map;
    char **map_init;
    char *buff;
    int y_player;
    int x_player;
    int nbr_site;
    int nbr_box;
    int nbr_p;
    int error;
    int nbr_x;
} game_t;

void map_open(game_t *game);

void create_window(game_t *game, char **av);

int loop_in_game(game_t *game, int key);

int loop_for_lose(game_t *game);

void loop_for_o(game_t *game);

void condition_lose(game_t *game, int y, int x);

int loop_for_count_o(game_t *game);

int create_map(game_t *game, char **av);

void check_map_open(game_t *game, int y, int x);

void read_me(void);

void init_variable(game_t *game);

void count_o_and_x(game_t *game, int y, int x);

void check_the_o(game_t *game, int y, int x);

int all_error(game_t *game);

void all_pos(game_t *game);

int no_map(int ac);

void loop_for_error(game_t *game);

void update_map(game_t *game, int key);

void update_map_two(game_t *game, int key);

char **my_str_to_word_array(char const *str);

char *my_strcat(char *dest, char const *src);

int my_putchar(char c);

int my_put_nbr(int nb);

int my_putstr(char const *str);

int my_strlen(char const *str);

int my_getnbr(char *str);

long my_strcmp(char const *str1, char const *str2);

int my_str_isalpha(char *str);

int fs_open_file(char const *filepath);

int fs_understand_return_of_read(int fd, char *buffer, int size);

int calc_size(char const *buff);

void print_the_map(game_t *game);

int open_and_read(game_t *game, char **av);

#endif/* !MY_H_ */
