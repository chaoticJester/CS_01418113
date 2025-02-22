//04 Word Count
#include <iostream>
using namespace std;

struct Word {
    string word;
    int count;
};

int main(){
    string input;
    int i, last_word = 0, find = 0;
    Word data[20];

    while (true) {
        cin >> input;
        if (input == "exit") {
            break;
        }
        for(i = 0; i < last_word; i++) {
            if(data[i].word == input) {
                data[i].count++;
                find = 1;
                break;
            }
        }
        if(find == 0){
            data[last_word].word = input; 
            data[last_word].count = 1;
            last_word++;
        } else {
            find = 0;
        }
    }
    cout << "Output:" << endl;
    for(i=0;i<last_word;i++){
        cout << data[i].word << " = " << data[i].count << endl;
    }
}