#include<iostream>
using namespace std;
int main() {
    char cap_letter = 'A';
    while (cap_letter <= 'Z') {
        cout << "Character: " << cap_letter << ", ASCII Number: " << static_cast<int>(cap_letter) <<endl;
        cap_letter++; // Move to the next character
    }
    char letter = 'a';
    while (letter <= 'z') {
        cout << "Character: " << letter << ", ASCII Number: " << static_cast<int>(letter) <<endl;
        letter++; // Move to the next character
    }
}