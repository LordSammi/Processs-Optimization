#include <iostream>

using namespace std;

    int power(int baseNum, int powerNum){
       int result = 1;
        for(int i = 0; i < powerNum; i++){
            result = result * baseNum;
           // cout << result << endl;
        }

       return result;
    }

int main()
{
    cout << power(10,4) << endl;

    return 0;
}
