/*
  we are writting conditions here

  syntax shout

  if(condition){
  }else if{
  }else{}

  std::endl- only needed when you need cursor in the next line, otherwise its not needed

  syntax shout:
  && is and
  || is or
  ! is not
  
*/

# include<iostream>
# include<string>

// variable declaration
int age;

int main(){

  std::cout<<"Enter your Age Please:";
  std::cin>>age;

  if (age <= 18){
    std::cout<< "You are a Minor" << std::endl;
  }else if(age >= 19 && age <= 65){
    std::cout<<"Welcome to Adulthood" << std::endl;
  }else{
    std::cout<<"You are a Senior Citizen"<<std::endl;
  }
}
