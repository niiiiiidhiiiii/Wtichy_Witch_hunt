#ifndef WITCH_H
#define WITCH_H
class witch{
private:
int health, magic, mana;

public:
witch();
void attack();
void power(int mana, int magic);

};

#endif