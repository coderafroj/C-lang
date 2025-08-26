#include <stdio.h>
#include <termios.h> // Linux/macOS ke liye
#include <unistd.h>

int my_getch(void) {
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

int main() {
    printf("Press any key to continue...");
    my_getch(); // getch() jaisa kaam karega
    printf("\nKey pressed!\n");
    return 0;
}
