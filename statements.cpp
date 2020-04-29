/* #include <iostream>

using namespace std;
int main()
{
    bool isTall = true;
    bool isMale = true;

    if(isTall && isMale){
        cout << "You are a tall male" << endl;
    }
    else if (isTall && !isMale){
        cout << "You are tall but not male" << endl;
    }
    else if (!isTall && isMale){
        cout << "You are not tall but you are male" << endl;
    }
    else {
        cout << "You are neither tall nor a male" << endl;
    }

 return 0;
}


#include <iostream>

using namespace std;

int getMax(int num1, int num2){
    int result;
    if(num1 > num2){
        result = num1;
    }
    else{
        result = num2;
    }

    return result;
}


int main()
{
    cout << getMax(5,4);

    return 0;
}

*/

#include <iostream>

using namespace std;

int getMax(int num1, int num2, int num3, int num4){
    int result;
    if(num1 > num2 && num1 > num3 && num1 > num4){
        result = num1;
    }
    else if(num2 > num1 && num2 > num3 && num2 > num4){
        result = num2;
    }
    else if(num3 > num1 && num3 > num2 && num3 > num4){
        result = num3;
    }
   // else if(num4 > num1 && num4 > num2 && num4 > num3){
    //    result = num4;
   // }
    else{
        result = num4;
    }

    return result;
}


int main()
{
    cout << getMax(5,4,57,9);

    return 0;
}
