#ifndef CRITTER_H
#define CRITTER_H
#include<string>
#include<vector>

class Critter
{
public:
   Critter(); //Constructs a critter at position 0 with blank history.
   std::string get_history() const; /** @return the history */
   /**Adds to the history 
   @param event the event to add to the history */
   void add_history(std::string event); 

   int get_position() const;
   void move(int steps); // @param steps the number of steps to move.
   void act(); //The action of this critter in one pass of simulation.

private:
   int position;
   std::vector<std::string> history;
};
#endif
