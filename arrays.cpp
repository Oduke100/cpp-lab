// we are learning arrays, they are lists

/* syntax shout:

   format:

   type name[size] - this is initialization
   type name[] = [90,80,90,89,78] - this is naming and storage directly

*/

# include <iostream>

int scores[5];

int main(){
  scores[0] = 90;
  scores[1] = 89;
  scores[2] = 12;
  scores[3] = 23;
  scores[4] = 45;

  for(int i = 0; i < 5; i ++){
    std::cout<<scores[i]<<std::endl;
  }
}
