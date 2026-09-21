/* we are doing loops here, similar to python from what I gather
   for; when you know how many times
   while; when you dont know how many times

   syntax shout;
   for(start; condition; update){
   after start and condition we use a semicolon(;) and not a comma(,) as I assumed 
   function
   }

   while(condition){
   function - make sure loop will eventually close, prevent infinite loops
   }
*/

# include<iostream>
# include<string>


int main(){
  std::cout<<"For Loop"<<std::endl;
  
  for(int number = 0; number < 10; number ++){
    std::cout<<number<<std::endl;
  }
}

/*
int main(){
  int number = 0;
  std::cout<<"While Loop"<<std::endl;
  
  while(number<10){    
    std::cout<<number<<std::endl;
    number ++;
  }
}
*/
