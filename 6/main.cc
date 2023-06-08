#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

const int WIDTH = 20;
const int HEIGHT = 10;

void clearScreen() {
  std::cout << "\033[2J\033[1;1H";
}

void draw(int x, int y) {
  clearScreen();

  for (int i = 0; i < HEIGHT; i++) {
    for (int j = 0; j < WIDTH; j++) {
      if (i == y && j == x) {
        std::cout << "@";
      } else {
        std::cout << ".";
      }
    }
    std::cout << "\n";
  }
}

int main() {
  srand(time(NULL));

  int x = WIDTH / 2;
  int y = HEIGHT / 2;

  while (true) {
    draw(x, y);

    x += rand() % 3 - 1;
    y += rand() % 3 - 1;

    if (x < 0) x = 0;
    if (x >= WIDTH) x = WIDTH - 1;
    if (y < 0) y = 0;
    if (y >= HEIGHT) y = HEIGHT - 1;

    usleep(100000);
  }

  return 0;
}

