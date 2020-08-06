#include <iostream> 
#include <string.h>
#include <unistd.h>

int main(){
    
    int option1 = 0;
    int option2 = 0;
    double cupsIn = 0;
    double gallonsIn = 0;
    double tablespoonsIn = 0;
    double pintsIn = 0;
    double gallons = 0;
    double tablespoons = 0;
    double pints = 0;
    double cups = 0;
    int answer = 0;
    
while(true) {
  

    std::cout << "\nUnit Converter! What unit are you converting from? Please select an option from below.  \n";
    std::cout << "\n" << " 1. Cups     2. Gallons \n\n 3. Tablespoons  4. Pints \n\n 5. Exit \n\n";
    std::cin >> option1;
    if (option1 < 1 || option1 > 5)
    {
        std::cout << "\n\n**** Invalid entry. Please try again. ****\n\n\n";
        continue;
    }
    if(option1 == 5)
    {
        std::cout << "\nHate to see you go but love to watch you leave ;)\n\n";
        break;
    
    }

        std::cout << "\nOkay! And what unit are you trying to convert to?  \n";
        std::cout << "\n" << " 1. Cups     2. Gallons \n\n 3. Tablespoons  4. Pints \n\n 5. Exit \n\n";
        std::cin >> option2;

    if(option1 == 1 && option2 == 2)
    {
        std::cout << "\nCups to Gallons Converter!\n\n Enter the amount of Cups you would like to convert to Gallons.\n\n";
        std::cin >> cupsIn;
        std::cout << "\n*****  Calculating  *****\n\n\n";
        sleep(2);

        gallons = cupsIn / 16;
        std::cout << "*** " << cupsIn << " cups converts to " << gallons << " gallons. ***\n\n";
    }
    else if(option1 == 1 && option2 == 3)
    {
        std::cout << "\nCups to Tablespoons Converter!\n\n Enter the amount of Cups you would like to convert to Tablespoons.\n\n";
        std::cin >> cupsIn;
        std::cout << "\n*****  Calculating  *****\n\n\n";
        sleep(2);

        tablespoons = cupsIn * 16;
        std::cout << "*** " << cupsIn << " cups converts to " << tablespoons << " tablespoons. ***\n\n";
    }
    else if(option1 == 1 && option2 == 4)
    {
        std::cout << "\nCups to Pints Converter!\n\n Enter the amount of Cups you would like to convert to Pints.\n\n";
        std::cin >> cupsIn;
        std::cout << "\n*****  Calculating  *****\n\n\n";
        sleep(2);

        pints = cupsIn / 2;
        std::cout << "*** " << cupsIn << " cups converts to " << pints << " pints. ***\n\n";
    }
    else if(option1 == 2 && option2 == 1)
    {
        std::cout << "\nGallons to Cups Converter!\n\n Enter the amount of Gallons you would like to convert to Cups.\n\n";
        std::cin >> gallonsIn;
        std::cout << "\n*****  Calculating  *****\n\n\n";
        sleep(2);

        cups = gallonsIn * 16;
        std::cout << "*** " << gallonsIn << " gallons converts to " << cups << " cups. ***\n\n";
    }
    else if(option1 == 2 && option2 == 3)
    {
        std::cout << "\nGallons to Tablespoons Converter!\n\n Enter the amount of Gallons you would like to convert to Tablespoons.\n\n";
        std::cin >> gallonsIn;
        std::cout << "\n*****  Calculating  *****\n\n\n";
        sleep(2);

        tablespoons = gallonsIn * 256;
        std::cout << "*** " << gallonsIn << " gallons converts to " << tablespoons << " tablespoons. ***\n\n";
    }
    else if(option1 == 2 && option2 == 4)
    {
        std::cout << "\nGallons to Pints Converter!\n\n Enter the amount of Gallons you would like to convert to Pints.\n\n";
        std::cin >> gallonsIn;
        std::cout << "\n*****  Calculating  *****\n\n\n";
        sleep(2);

        pints = gallonsIn * 8;
        std::cout << "*** " << gallonsIn << " gallons converts to " << pints << " pints. ***\n\n";
    }
    else if(option1 == 3 && option2 == 1)
    {
        std::cout << "\nTablespoons to Cups Converter!\n\n Enter the amount of Tablespoons you would like to convert to Cups.\n\n";
        std::cin >> tablespoonsIn;
        std::cout << "\n*****  Calculating  *****\n\n\n";
        sleep(2);

        cups = tablespoonsIn / 16;
        std::cout << "*** " << tablespoonsIn << " tablespoons converts to " << cups << " cups. ***\n\n";
    }
    else if(option1 == 3 && option2 == 2)
    {
        std::cout << "\nTablespoons to Gallons Converter!\n\n Enter the amount of Tablespoons you would like to convert to Gallons.\n\n";
        std::cin >> tablespoonsIn;
        std::cout << "\n*****  Calculating  *****\n\n\n";
        sleep(2);

        gallons = tablespoonsIn / 256;
        std::cout << "*** " << tablespoonsIn << " tablespoons converts to " << gallons << " gallons. ***\n\n";
    }
    else if(option1 == 3 && option2 == 4)
    {
        std::cout << "\nTablespoons to Pints Converter!\n\n Enter the amount of Tablespoons you would like to convert to Pints.\n\n";
        std::cin >> tablespoonsIn;
        std::cout << "\n*****  Calculating  *****\n\n\n";
        sleep(2);

        pints = tablespoonsIn / 32;
        std::cout << "*** " << tablespoonsIn << " tablespoons converts to " << pints << " pints. ***\n\n";
    }
    else if(option1 == 4 && option2 == 1)
    {
        std::cout << "\nPints to Cups Converter!\n\n Enter the amount of Pints you would like to convert to Cups.\n\n";
        std::cin >> pintsIn;
        std::cout << "\n*****  Calculating  *****\n\n\n";
        sleep(2);

        cups = pintsIn * 2;
        std::cout << "*** " << pintsIn << " pints converts to " << cups << " cups. ***\n\n";
    }
    else if(option1 == 4 && option2 == 2)
    {
        std::cout << "\nPints to Gallons Converter!\n\n Enter the amount of Pints you would like to convert to Gallons.\n\n";
        std::cin >> pintsIn;
        std::cout << "\n*****  Calculating  *****\n\n\n";
        sleep(2);

        gallons = pintsIn / 8;
        std::cout << "*** " << pintsIn << " pints converts to " << gallons << " gallons. ***\n\n";
    }
    else if(option1 == 4 && option2 == 3)
    {
        std::cout << "\nPints to Tablespoons Converter!\n\n Enter the amount of Pints you would like to convert to Tablespoons.\n\n";
        std::cin >> pintsIn;
        std::cout << "\n*****  Calculating  *****\n\n\n";
        sleep(2);

        tablespoons = pintsIn *32;
        std::cout << "*** " << pintsIn << " pints converts to " << tablespoons << " tablespoons. ***\n\n";
    }
    else if((option1 == 1 && option2 ==1) || (option1 == 2 && option2 ==2) || (option1 == 3 && option2 ==3) || (option1 == 4 && option2 == 4) )

    {
        std::cout << "\n*** Same units selected. Please select two different units to convert. ***\n\n";
        continue;
    }
    
    
    else if(option2 == 5)
        {
            std::cout << "\nSee you Later, hot stuff!\n\n";
            break;
        }
    else
    {
        std::cout << "\n***** Invalid Entry. Please try again. *****\n\n";
        continue;
    }
    
    
    
    
    std::cout <<"\n\nWould you like to convert more units? \n\n1. Yes     2. No\n\n";  
    std::cin >> answer;
    if (answer == 1)
    {
        std::cout << "\nOkay!\n\n\n";
    }
    else 
    {
        std::cout << "\nHave a good day!\n\n";
        break;
    }

}



}