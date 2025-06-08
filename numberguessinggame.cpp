#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));
    int number = rand() % 100 +1;
    int guess,attempts =0;

    do{
     cout<< "enter your guess(1-100):";
     cin >> guess;
     attempts++;

    if (guess <number){
        cout<<"too low.try again"<<endl;
    }else if (guess >number){
        cout<<"too high.try again"<<endl;
    }else {
        cout<<"Congratulation.you guessed the number"<<attempts<<"attemps"<<endl;
    }
    }while (guess!=number);
return 0;
}
