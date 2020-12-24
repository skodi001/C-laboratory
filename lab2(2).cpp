#include <iostream>
using namespace std;
//task1

int main() {
    char Game;
    cout << "Enter an operator (Pubg-'P', Asphalt-'A', CounterStrike-'C', GrandTheftAuto-'G', TempleRun-'T'): ";
    cin >> Game;

    switch (Game) {
        case 'P':
            cout <<"PlayerUnknown's Battlegrounds (PUBG) is an online multiplayer battle royale game"<<endl;
            break;
        case 'A':
            cout << "Asphalt is a series of racing video games developed and published by Gameloft."<<endl;
            break;
        case 'C':
            cout << "Counter-Strike is a series of multiplayer first-person shooter video games "<<endl;
            break;
        case 'G':
            cout << "Grand Theft Auto is a series of action-adventure games created by David Jones and Mike Dailly"<<endl;
            break;
        case 'T':
            cout << "Temple Run is an endless running video game developed and published by Imangi Studios"<<endl;
            break;
        default:
            // operator is doesn't match any case 
            cout << "Error! The operator is not correct";
            break;
    }

}