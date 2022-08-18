
#include <iostream>
using namespace std;

class Player {
public:
    int x, y;
    int speed;

};

void Move(Player& player, int xa, int ya) {
    player.x += xa * player.speed;
    player.y += ya * player.speed;
}

struct Vec2
{
    float x, y;
    void Add(const Vec2& other)
    {
        x += other.x;
        y += other.y;
    }
};

int main()
{
    Vec2 other;
    Player player;
    player.x = 5;
    player.y = 3;
    player.speed = 4;
    Move(player,1, 5);
    cout << player.x;
    cout << "\n";
    cout <<player.y;
    
}

