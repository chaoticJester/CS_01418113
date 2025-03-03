//01 Class MusicPlaylist
#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist {
private:
    string playlist[20];
    int currentTrack;

public:
    void add(string music) {
        for(int i = 0; i < 20; i++) {
            if(playlist[i] == "") {
                playlist[i] = music;
                break;
            }
        }
    }

    void setCurrentTrack(int trackNo) {
        currentTrack = trackNo - 1;
    }

    string play(void) {
        string result;
        for(int i = 0; i < 20; i++) {
            if(i == currentTrack) {
                result = playlist[i];
            }
        }
        return result;
    }
};

int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}