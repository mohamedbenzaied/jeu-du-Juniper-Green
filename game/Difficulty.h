#pragma once
ref class Difficulty
{
    int level, Nmax;
public:
    Difficulty(){}
    Difficulty(int^ lvl)
    {
        
        switch (*lvl) {
        case 4:
            Nmax = 100;
            break;
        case 3:
            Nmax = 100;
            break;
        case 2:
            Nmax = 64;
            break;
        case 1:
            Nmax = 25;
            break;
        }
        level = *lvl;
    }
    Difficulty(const Difficulty^ diff) {
        level = diff->level;
        Nmax = diff->Nmax;
    }
    Difficulty% operator = (Difficulty% diff) {
        level = diff.level;
        Nmax = diff.Nmax;
        return(*this);
    }
    int getNmax() { return Nmax; }
    int getLevel() { return level; }

};
