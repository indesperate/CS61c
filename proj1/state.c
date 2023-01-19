#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "snake_utils.h"
#include "state.h"

/* Helper function definitions */
static char get_board_at(game_state_t* state, int x, int y);
static void set_board_at(game_state_t* state, int x, int y, char ch);
static bool is_tail(char c);
static bool is_snake(char c);
static char body_to_tail(char c);
static int incr_x(char c);
static int incr_y(char c);
static void find_head(game_state_t* state, int snum);
static char next_square(game_state_t* state, int snum);
static void update_tail(game_state_t* state, int snum);
static void update_head(game_state_t* state, int snum);

/* Helper function to get a character from the board (already implemented for you). */
static char get_board_at(game_state_t* state, int x, int y) {
  return state->board[y][x];
}

/* Helper function to set a character on the board (already implemented for you). */
static void set_board_at(game_state_t* state, int x, int y, char ch) {
  state->board[y][x] = ch;
}

/* Task 1 */
game_state_t* create_default_state() {
  game_state_t *default_state = calloc(sizeof(game_state_t), 1);
  int x_size = 14;
  int y_size = 10;
  int num_snakes = 1;
  default_state->x_size = x_size;
  default_state->y_size = y_size;
  default_state->num_snakes = num_snakes;
  snake_t *snakes = calloc(sizeof(snake_t), num_snakes);
  snakes[0].head_x = 5;
  snakes[0].head_y = 4;
  snakes[0].tail_x = 4;
  snakes[0].tail_y = 4;
  snakes[0].live = true;
  default_state->snakes = snakes;
  default_state->board = calloc(sizeof(char *), y_size);
  for (int y = 0; y < y_size; y += 1)
  {
    default_state->board[y] = calloc(sizeof(char), x_size + 1);
    for (int x = 0; x < x_size; x += 1)
    {
      set_board_at(default_state, x, y, ' ');
    }
    set_board_at(default_state, x_size, y, '\0');
  }
  for (int x = 0; x < x_size; x += 1) {
    set_board_at(default_state, x, 0, '#');
    set_board_at(default_state, x, y_size - 1, '#');
  }
  for (int y = 0; y < y_size; y += 1) {
    set_board_at(default_state, 0, y, '#');
    set_board_at(default_state, x_size - 1, y, '#');
  }
  set_board_at(default_state, 9, 2, '*');
  set_board_at(default_state, 4, 4, 'd');
  set_board_at(default_state, 5, 4, '>');
  return default_state;
}

/* Task 2 */
void free_state(game_state_t* state) {
  for (int y = 0; y < state->y_size; y += 1) {
    free(state->board[y]);
  }
  free(state->board);
  free(state->snakes);
  free(state);
  return;
}

/* Task 3 */
void print_board(game_state_t* state, FILE* fp) {
  for (int y = 0; y < state->y_size; y += 1){
    fprintf(fp, "%s\n", state->board[y]);
  }
  return;
}

/* Saves the current state into filename (already implemented for you). */
void save_board(game_state_t* state, char* filename) {
  FILE* f = fopen(filename, "w");
  print_board(state, f);
  fclose(f);
}

/* Task 4.1 */
static bool is_tail(char c) {
  // TODO: Implement this function.
  return true;
}

static bool is_snake(char c) {
  // TODO: Implement this function.
  return true;
}

static char body_to_tail(char c) {
  // TODO: Implement this function.
  return '?';
}

static int incr_x(char c) {
  // TODO: Implement this function.
  return 0;
}

static int incr_y(char c) {
  // TODO: Implement this function.
  return 0;
}

/* Task 4.2 */
static char next_square(game_state_t* state, int snum) {
  // TODO: Implement this function.
  return '?';
}

/* Task 4.3 */
static void update_head(game_state_t* state, int snum) {
  // TODO: Implement this function.
  return;
}

/* Task 4.4 */
static void update_tail(game_state_t* state, int snum) {
  // TODO: Implement this function.
  return;
}

/* Task 4.5 */
void update_state(game_state_t* state, int (*add_food)(game_state_t* state)) {
  // TODO: Implement this function.
  return;
}

/* Task 5 */
game_state_t* load_board(char* filename) {
  // TODO: Implement this function.
  return NULL;
}

/* Task 6.1 */
static void find_head(game_state_t* state, int snum) {
  // TODO: Implement this function.
  return;
}

/* Task 6.2 */
game_state_t* initialize_snakes(game_state_t* state) {
  // TODO: Implement this function.
  return NULL;
}
