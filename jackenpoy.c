#include <ncurses.h>

int main(void) {
  initscr();
  int c = getch();
  mvaddstr(13, 33, "Hello, world!");
  refresh();
  sleep(3);

  endwin();
  printf ("%d %c\n", c, c);
  return 0;
}
