#include<iostream>
#include <stdlib.h>
#include <ctime>
#include<cstring>
using namespace std;

int main(int argc, char * argv[4])
{

{
if (argv[1][0] == 1)
{
cout<< "Thats correct! I take ", cout<< argc, cout<< " parameters." << endl;
return 0;
}
if (argc == 2)
{
cout<< "Thats correct! I take ", cout<< argc, cout<< " parameters." << endl;
return 0;
}
if (argc == 3)
{
cout<< "Thats correct! I take ", cout<< argc, cout<< " parameters." << endl;
return 0;
}
if (argc == 4)
{
cout<< "Thats correct! I take ", cout<< argc, cout<< " parameters." << endl;
return 0;
}
else 
{
cout<< "You have guessed incorrectly. I take ", cout<< argv[4], cout<< " parameters. Do not pass go and do not collect $200." << endl;
return 1;
}
}
    return 0;
}