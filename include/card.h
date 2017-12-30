#pragma once

namespace TexasTerminal{


  enum Rank{
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King,
    Ace
  };

  enum Suit{
    Diamonds,
    Hearts,
    Spades,
    Clubs
  };


  class Card{
    public:
      Card(Rank r, Suit s)
        :rank(r), suit(s)
      { }

      bool operator==(Card){return true;}


    Rank rank;
    Suit suit;


  };




};
