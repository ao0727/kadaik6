#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{
   
    srand(time(NULL));

    int count = 100;

    while (count > 0) {
        int randomNumber = rand() % 2;// 0か1の乱数を生成し、それを1または-1に変換する
        randomNumber = randomNumber + (randomNumber - 1);
        cout << randomNumber << " ";
        count--;

    }

}

