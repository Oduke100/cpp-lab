/*
  we are learning storage of data in memory(use of variables)
  
  in cpp it follows the following format;

  type name = value

  now examples of types that can go there;
  int, double, char, std::string, bool
*/

# include <iostream>
# include <string>

int age = 20;
std::string name = "Michael Gilbert Oduke";
double GPA = 3.2;

int main(){
  std::cout<<"Hi, My name is "<< name << std::endl;
  std::cout<<"My age is "<< age << std::endl;
  std::cout<<"My last semester's GPA is "<< GPA << std::endl;
}

