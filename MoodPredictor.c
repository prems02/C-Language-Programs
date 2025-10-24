#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const char *moods[] = {
        "😎 Cool as ice",
        "😂 Laughing nonstop",
        "😡 Angry for no reason",
        "🤯 Brain overloaded",
        "😴 Sleepy but happy",
        "🤓 Nerd mode ON",
        "🥳 Party animal"
    };
    int total = sizeof(moods) / sizeof(moods[0]);

    srand(time(0));
    int randomIndex = rand() % total;

    printf("🔮 Your mood today: %s\n", moods[randomIndex]);
    return 0;
}
