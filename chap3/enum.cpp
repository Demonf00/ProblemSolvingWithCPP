#include<iostream>
#include<stdlib.h>

int main(void)
{
    enum MonthLength {Jan=31, Feb=28, Mar=31};
    std::cout<< MonthLength::Jan <<MonthLength::Feb<<std::endl;
    class month {
        public:
            int day;
    };
    // enum class month {Jan, Feb};
    month example;
    example.day = 10;

    // std::cout << typeof(month::Feb) << std::endl;

    

    return 0;
}