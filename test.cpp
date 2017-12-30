#include <include/card.h>
#include <cassert>
#include <vector>

int main();

namespace TexasTerminal{

  void test1(){
    Card c(Five, Clubs);
    assert(c == Card(Five, Clubs));
  }
  
  void equalityTest(){
    Card c1(Seven, Hearts);

    Card c2(Ace, Spades);

    Card c3(Ace, Diamonds);

    Card c4(Seven, Hearts);

    assert(c1 == c4);

    assert(c2 != c3);

  }



}

int main(){

/*
  Test suite for card class.
*/
  TexasTerminal::test1();


  TexasTerminal::equalityTest();


//  TexasTerminal::uniqueTest();
  


  

}



