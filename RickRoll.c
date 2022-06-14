#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("open https://www.youtube.com/watch?v=dQw4w9WgXcQ"); // Launch "Never Gonna Give You Up" YouTube music video on Windows 
    system("xdg-open https://www.youtube.com/watch?v=dQw4w9WgXcQ"); // Launch "Never Gonna Give You Up" YouTube video on Linux
    system("start https://www.youtube.com/watch?v=dQw4w9WgXcQ"); // Launch "Never Gonna Give You Up" YouTube video on macOS
    return 0;
}