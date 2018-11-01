#include <iostream>
#include <time.h>
int main()
{
    
    int m,n,money,bet,win,loose;

    money = 500;

    std::cout << "--------------------------------" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "**Welcoming to the gambling game**" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << "---------------------------------" << std::endl;


    do

    {

    std::cout << "Select amount for gambling = " << money << std::endl;
    std::cout << "Choose any number 1 or 0 = " << std::endl;
    std::cin>>m ;
    std::cout << "How much you want to bet = " << std::endl;
    std::cin>>bet;

    if (bet > money) 


{
  std::cout << "You Loose" << std::endl;

  std::cout << "You are cashing out" << std::endl;

  return 0;

}

   if (m == 0) 

{

std::cout << "Congratulations...!! You are Winner" << std::endl;

win = 2 * bet + money;

money = win ;

std::cout << "Now your Money = " << win << std::endl;

std::cout << "Press 1 to continue the gambling game" << std::endl;

std::cin>>n;

}
       
   else if (m == 1) 
	
{
std::cout << "Sorry... you loose" << std::endl;

loose = money - bet;

std::cout << "Your remainig money = " << loose << std::endl;

money= loose;

std::cout << "Press 1 to continue the gambling game" << std::endl;

std::cin>>n;

}
      
  else
	
	{

std::cout << "You Loose" << std::endl;
std::cout << "You are cashing out" << std::endl;
return 0;

  } 

    }  

  while (n==1); 
  
while(bet>=money || loose==money);

return 0;
  
}

    


