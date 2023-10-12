//Daniela Valencia Gómez

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream> 

//exercise 1
static bool Nonprime(int n) //Function to identify prime numbers
{
   if (n == 1 || n == 0) 
    {
        return false; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i <= n/2; i++) //Checks all the possible divisors
    {
        
        if (n % i == 0)
        {
            return false; //If the number is divisible by some of the numbers in the range,it is not a prime number
        }
    }
    return true; //If it doesn't meet the conditions above, it is a prime number 
}   

static void sLength(char* str7) //Function to count the characters in a word
{
    int count = 0; //Declaring a counter with cero elements

    while (true)
    {
        if (str7[count] == false) //Stop counting when there are no more characters
        break;
        count++;//Increase 1 for every character
    }

    std::cout << "The string's length is: " << count << std::endl;
}
static void frequency(int n8) //Function to count how many times a digit is repeated in a number
{
    int i, j, counter, k;
    
    for (i = 0; i < 10; i++)
    {
       std:: cout << "The frequency of " << i << " = ";
        counter = 0;
        for (j = n8; j > 0; j = j / 10)  //Repeat for every digit and reduce the number
        {
            k = j % 10; //Take the last digit 
            if (k == i) //Theck whether it is equal to each number
            {
                counter++; //If it matches with some digit, it will increase its count
            }
        }
        std::cout << counter <<std::endl;
    }
}
//exercise 1
int main()
{
   
    int Num1;
    do
    {
        std::cout << "Enter any positive integer: "; 
        std::cin >> Num1;
    } while (Num1 < 1); //To avoid negative numbers or cero
    for (int i = 1; i <= Num1; i++)
    {
        //It will just print the numbers that are not prime
        if (Nonprime(i) == false) 
        {
            std::cout << i << std::endl;
        }
    }
    std::cout << std::endl;
}

//exercise 2________________________________________________________________________________
int main()
{
    std::cout << "Enter how many numbers you draw with the #: " << std:: endl; //ask to the user to enter the number of pattern they want to draw
    float num2 = 0; // declare variabels
    std::cin >> num2;

    for (int i= 0; i < num2; i++) // for cicle for the rows and columns
    {
         for (int n= 0; n < num2; n++) 
         {
         std:: cout << "#"; //the drawing we want to print
         }
         std::cout<<"\n";
    }
    
}

//exercise 3_________________________________________________________________________________
int main()
{
    std::cout << "Enter how many numbers you want to draw : " << std:: endl; //ask to the user to enter the number of pattern they want to draw
    int num3 = 0;
    std::cin >> num3;

    for (int i= 0; i < num3; i++) // for cicle for the rows and columns
    {
         for (int n= 0; n < num3; n++) 
         {
         std:: cout << num3; //the drawing we want to print
         }
         std::cout<<"\n";
    }
    
}

//exercise 4_________________________________________________________________________________
int main()
{
    std::cout << "Enter the number of the table you want to print : " << std:: endl; //ask how many tables you want to print
    int num4 = 0; // enter variables for the input
    std::cin >> num4;
         for (int i= 0; i < num4; i++)  // for cicle for the number the user input and the numbers we want to print
        {
            for (int n= 0; n < num4; n++) 
            {
                float mult = i * n;
                std:: cout << i << "*" << n << "=" << mult << std::endl; //write the format we want to use
            }
            
             std::cout<<"\n";
        }
    
}
//exercise 5____________________________________________________________________________
int main()
{
    int num5 = 0;
    float sum = 0.0;
    std::cout << " Enter the number of terms for harmonic series: "; //ask the user to input the number of terms
    std::cin >> num5;

 if (num5 < 0) // use an if for not let the user enter negative numbers
 {
    std::cout << "ERROR. Try with a positive number ";
 } 
    for (float i = 1; i <= num5; i++)  
    {
        if (i < num5) 
        {
            std::cout << "1/" << i << " + "; //write the format you want to output 
            sum += 1 / i; // for the sum asked to make the fraction with the correspondant number
        }
        if (i == num5) 
        {
            std::cout<< "1/" << i;
            sum += 1 / i;
        }

        if (num5 < 0)
        {
            std::cout<< "\n ERROR. Try with a positive number. " << std::endl;
        }
    }
    std::cout<< "\n The sum of the terms is: " << sum << std::endl; // Output the final result
}

//exercise 6_____________________________________________________________________________
int main()
{
 int num6, r, reverse = 0;
 std::cout << "Enter the number you want to reverse: "; //ask to the user to enter the number to reverse
 std::cin >> num6;

do // use a do while loop until the num6 is 0
{
    r = num6 % 10; // first we need to divide the num6 between 10 and that needs to be the remainder
    reverse = (reverse * 10) + r; // for reverse the number we need this mathematical process 
    num6= num6/10; // and finally delete the last number and try again
}while( num6 != 0);

 std::cout <<"The reverse number is:" << reverse << std::endl; // show the output 

}

//exercise 7_____________________________________________________________________________
int main()
{
    char* str7 = new char[0];

    std::cout << "Enter a word: ";
    std::cin >> str7;

    sLength(str7);
    std::cout << std::endl;
}
   
//exercise 8______________________________________________________________________________
int main()
{
    int number;
    std::cout << "Input a number";
    std::cin >>number;
    for (int i = 0; i <10; i++)
    {
        std::cout <<"The amount of" << i << "s is: ";
        int counter = 0;
        for (int j = number; j > 0; j= j/10)
        {
            currentValue = 0;

        }
    }
}
//exercise 9______________________________________________________________________________
int main()
{
    int num9,n= 0;
    int i;
    std:: cout << "Enter the number you want to print in words: " << std::endl; //asked to the user for the info
    std::cin >> num9;
     while (num9 != 0) {
        n = (n* 10) + (num9 % 10); // we use a while loop until num9 is 0, insted de n is going to multiply and and the division of num9 %10
        num9 /= 10; //also we use this to remove a number
    }
    for (i = n; i > 0; i = i / 10)
    {
        switch (i % 10) // we also use a switch for 0-9 numbers to be print corresponding to the loop and user info add before
        {
        case 0:
            std::cout << "Zero ";
            break;
        case 1:
            std::cout <<"One ";
            break;
         case 2:
            std::cout <<"Two ";
            break;
         case 3:
            std::cout <<"Three ";
            break;
         case 4:
            std::cout <<"Four ";
            break;
         case 5:
            std::cout <<"Five ";
            break;
         case 6:
            std::cout <<"Six ";
            break;
         case 7:
            std::cout <<"Seven ";
            break;
         case 8:
            std::cout <<"Eight ";
            break;
         case 9:
            std::cout <<"Nine ";
            break;
        }
    }
    std:: cout << std::endl;
}

// exercise 10____________________________________________________________________________
int main()
{
    std::cout << "Enter how many numbers you draw like a pattern: " << std:: endl; // ask to the user for the input
    float num10 = 0;
    std::cin >> num10; //delcare variables 

    for (int i= 1; i <=num10; i++) //use a for loop for the colums and rows corresponding the numbers
    {
         for (int n= 0; n < i; n++) 
         {
         std:: cout << i ; // and print the number according the for loop
         }
         std::cout<<"\n";
    }
    
}
