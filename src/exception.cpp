#include <iostream>

using namespace std;

void throwexception()
{
  bool error1=false;
  bool error2=true;

  if(error1)
    throw 8;

  if(error2)
    throw(string("error object"));

}

void mightthrowexception()
{
  throwexception();
}

int main()
{
  try {
     throwexception();
  }

  catch(int e) {
    cout << "error is "<< e << endl;
  }

  catch(const char * e) {
    cout << "str err" << e << endl;
  }

   catch(string e) {
     cout << "str err 1" << e << endl;
  }

  cout << "main keep going" << endl;

  return 0;
}

