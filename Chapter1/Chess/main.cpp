#include <iostream>

int main() {
    char a ,b;
    for (a = 'd';a<='f';a++){
        for (b = 'd';b <= 'f';b++)
        {
            if (a == b)
                continue;
            else{
                for (int i = 8;i<=10;i++)
                {
                    for (int j = 1;j<=3;j++)
                    {
                        std::cout<<"A :" << a<< " " << i << "\tB: "<<b<< " " <<j<<std::endl;
                    }
                }
            }
        }
    }
    return 0;
}