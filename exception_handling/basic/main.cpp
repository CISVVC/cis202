#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>


class MyError {
   public:
      MyError(const std::string &s):error_string(s){};
      std::string what(){return error_string;};
   private:
      std::string error_string;
};

class SomeError {
   public:
      SomeError(const std::string &s):error_string(s){};
      std::string what(){return error_string;};
   private:
      std::string error_string;
};

int sensor()
{
   int chance = rand()%100+1;
   if(chance < 30)
      return -1;
   return rand() % 100 + 30;

}

void foo()
{
   int value;
   std::cin >> value;
   //int value = sensor();
   std::cout << "Some stuff is done" << std::endl;
   if(value != -1 && value <= 30)
      throw MyError("MyError:Invalid sensor value");
   else if(value == -1)
      throw SomeError("SomeError:Invalid sensor value");
   else
      std::cout << "Processing value " << value << std::endl;


   // there is a part where we divide a number by denom
}

/*
 * general outline for a try block 
try
{
   Code_to_try
   Possibly_throw_an_exception
   execute_other_code
}
catch(ErrorType e)
{
   Exception_is_handled
   Possibly_end_program_or_continue_program
}


 **/
int main()
{
   srand(time(NULL));

   try {
      for(int i=0;i<100;i++)
         foo();
   }
   catch(MyError e) {
      std::cerr << e.what() << std::endl;
      //exit(1);
   }
   catch(int errornumber) {
      std::cerr << errornumber << std::endl;
      exit(1);
   }
   catch(const char* e) {
      std::cerr << e << std::endl;
      exit(1);
   }
   catch(...) {
      std::cerr << "Some error happened, exiting" << std::endl;
      exit(1);
   }
   return 0;
}
