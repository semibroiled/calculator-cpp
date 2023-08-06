#include <iostream>
#include <string>

char operation{}; //+,-,*,/
double operand1{};
double operand2{};
bool end{false};
char continue_code{'y'};

int main(){



while((end==false)){


    std::cout << "Specify your operation with +, -, *, or /: ";
    std::cin>> operation;

    std::cout << std::endl;

    std::cout << "Put in your numbers separated by a space: ";
    std::cin>> operand1 >>operand2;

    switch(operation){
        case '+':
        {   
            std::cout << "The addition of " << operand1 << " and " << operand2 << " is: "<< operand1+operand2;
            std::cout<< std::endl;
            break;
        }

        case '-':
        {
            std::cout << "The subtraction of " << operand1 << " and "
            << operand2 << " is: "<< operand1-operand2;
            std::cout<< std::endl;
            break;

        }

        case '*':
        {   std::cout << "The multiplication of " << operand1 << " and "<<
            operand2 << " is: "<< operand1*operand2;
            std::cout<< std::endl;
            break;
        }
        case '/':
        {
            std::cout << "The division of " << operand1 << " and " <<
            operand2 << " is: "<< operand1/operand2;
            std::cout<< std::endl;
            break;
        }
        default:
        {
            std::cout << "Operation not supported"<< std::endl;
            break;
        }
    }


    std::cout << "Continue? ";
    std::cin>> continue_code;

    if((continue_code=='Y')||(continue_code=='y')) {
        continue;
    }else {
        end = true;
    };
};


return 0;
};