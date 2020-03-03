#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

#define DEBUG

struct Character
{
   std::string name;
   int health;
};

int roll(int sides)
{
   return rand() % sides + 1;
}

void fight(Character *a,Character *b)
{
   while(a->health > 0 && b->health > 0)
   {
      int die = roll(10); // roll for the first character
#ifdef DEBUG
      std::cout << a->name << " rolled " << die << std::endl;
#endif
      b->health -= die;
      die = roll(10); // roll for the second character
#ifdef DEBUG
      std::cout << b->name << " rolled " << die << std::endl;
#endif
      a->health -= die;
   }

}

void print_winner(Character *a,Character *b)
{
   if(a->health != 0)
      std::cout << a->name << " is the winner" << std::endl;
   else
      std::cout << b->name << " is the winner" << std::endl;
}

int main()
{
   srand(time(0));
   
   Character monster;
   monster.name = "Evil Guy";
   monster.health = 100;
   Character hero;
   hero.name = "Good Guy";
   hero.health = 100;
   fight(&hero,&monster);
   print_winner(&hero,&monster);

   return 0;
}
