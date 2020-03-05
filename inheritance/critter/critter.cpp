#include "critter.h"

Critter::Critter()
{
   position = 0;
   history = "";
}

std::string Critter::get_history() const
{
}

void Critter::add_history(std::string event)
{
}

int get_position() const;
void move(int steps); // @param steps the number of steps to move.
void act(); //The action of this critter in one pass of simulation.
