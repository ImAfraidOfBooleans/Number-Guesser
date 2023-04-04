#include <iostream>
using namespace std;

void numGuesser(int &high, int guess, int &mid, int &low); 

int main(){
    int guess = 0;
    int high = 1;
    int low = 0;
    int mid = 0;

    cout <<"what is the highest number that you want to choose?" << endl;
    cin >> high;

    do{
        mid = (high+low)/2;

        cout << "Is your number " << mid << '?'<< endl;
        cout << "type 0 for too low; 1 for too high; 2 for yes" <<endl;
        cin >> guess;
        if (guess == 2){
            break;
        }
        numGuesser(high, guess, mid, low);
        if ((mid == low) || (mid == high)){
        cout << "Error: Your number is not in the range [" << low << ", " << high << "]." << endl;
        break;
    }
    }while (guess != 2);

    return 0;
}
void numGuesser(int &high, int guess, int &mid, int &low){
    if (guess == 0){
        low = mid + 1; 
    }
    else if (guess == 1){
        high = mid - 1;
    }
    else{
        cout << "Error: invalid input." << endl;
    }   
}
