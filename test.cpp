#include <include/card.h>
#include <cassert>
#include <vector>

int main();

namespace TexasTerminal{

  void test1(){
    Card c(Five, Clubs);
    assert(c == Card(Five, Clubs));
  }



}

int main(){

/*
  Test suite for card class.
*/
  TexasTerminal::test1();

  {


  }

}



