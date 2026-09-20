// here we will practise the input taking and all
// cpp uses all naming conventions, camelCase, snake_case and PascalCase

# include<iostream>
# include<string>

int age;
int favNumber;

int main(){
  // input
  
  std::cout<<"Please enter your age: ";
  std::cin >> age;

  // tried to chain the two lines below but cpp doesn't work that way and one line has to finish for another to work, line is completed by ";"
  
  std::cout<<"Please enter your favourite Number: ";
  std::cin >> favNumber;

  // output

  std::cout<<"Your age is "<< age << " and your favourite number is " << favNumber << std::endl;
  
}
