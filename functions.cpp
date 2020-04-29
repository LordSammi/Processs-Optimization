/* #include <iostream>

using namespace std;

void sayHi(string name, int age){

    cout << "Hello There!!!\n I believe you are " << name << ". And you are " << age << " years old" << endl;
}

int main()
{

   sayHi("Ogunbor", 26);
    return 0;
}
*/

#include <iostream>

using namespace std;

double cube(double num){
   //return num * num * num; same as below
   double result = num * num * num;
   return result;
}

int main()
{

    cout << cube(5.2);

    return 0;

}
