#pragma once
#include <cliext\vector>
#include <cliext\algorithm>
#include <cliext\iterator>
#include <string>
#include <vcclr.h>
using namespace System;

using namespace cliext;
ref class joueur
{
    String^ name;
    long score = 0;
    int coup = 0;
    bool turn;

public:
    joueur(String^ nom,bool tr)
    {
        turn = tr;
        name = nom;
    }
    String^ getname()
    {
        return name;
    }

    long getscore()
    {
        return score;
    }
    void changescore(long addtoscore)
    {
        score += addtoscore;
    }
    int getcoup()
    {
        return coup;
    }
    void setcoup(int c)
    {
        coup = c;
    }
    void setturn(bool t)
    {
        turn = t;
    }
    bool getturn()
    {
        return turn;
    }

};

