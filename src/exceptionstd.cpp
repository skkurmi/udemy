#include <iostream>

using namespace std;

class allocme{
  public allocme {
    obj = new char(999999999999);
    delete obj;
  }
};


int main()
{
  try {
    memobj allocme;
  }

  catch (alloc_error &e)
    {
      cout << "allocerror" << e << endl;
    }

  cout << "still running" << endl;

  return 0;
}

