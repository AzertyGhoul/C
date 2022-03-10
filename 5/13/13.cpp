#include<iostream>


using namespace std;

int sogl(char letter)
{
    char *letters = "bcdfghjklmnpqrstvwxyz";

    bool check;

    letter = tolower(letter);

    for (int i = 0; i < 21; i++)
        if (letter == letters[i])
            return 1;
            
            
    return 0;   
}

int main()
{
    srand(time(NULL));

    char a;

    cout << "\nEnter letter : ";
    cin >> a;

    cout << sogl(a);

}