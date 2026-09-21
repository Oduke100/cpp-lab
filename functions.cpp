/* here we get into functions and how to write them

   syntax shout:
   returnValueType FunctionName(parameterType parameterName){
   code(function)
   return value - only if not void, if void no return value, we still need the statement as the return word is like the fullstop to a function
   it marks the official end to a function and runs nothing else after the return
   }
   
*/

# include<iostream>
# include<string>

int rem;

bool isEven(int number){
  rem = number % 2;
  if (rem == 0){
    return true;
  }else{
    return false;
  }
}

int main(){
  bool odd = isEven(5);
  bool even = isEven(50);
  std::cout<<odd<<std::endl;
  std::cout<<even<<std::endl;
    }
