#include <iostream>
#include <cstring>


using namespace std;

int main() {

    string str = "Lorem Ipsum is simply dummy text of the printing and typesetting industry.";
    const char *word = "text";

    bool found = false;

    int i=0 , wordIndex = 0 , wordLen = strlen(word);
    while(str[i] != '\0'){
        if (str[i] == word[wordIndex]){
            while(str[i] == word[wordIndex]){
                i++ , wordIndex++;
            }
            if (wordIndex == wordLen){
                found = true;
            }
        }else{
            while(str[i] !=  ' '){
                i++;
                if (str[i] == '\0')
                    break;
            }
        }wordIndex=0; i++;
    }

    if (found)
        cout<<"Found!"<<endl;
    else
        cout<<"Not Found!"<<endl;
    return 0;
}
