
#pragma once
#include <cliext\vector>
#include <cliext\algorithm>
#include <cliext\iterator>
#include <string>
#include <vcclr.h>
#include "Difficulty.h"
#include "liste.h"
#include <ctime>
    using namespace System;

    using namespace cliext;
    ref class InAr
    {
    public:
        int nb = 0;
        int p, q, r, s;
        int coup;
        Difficulty^ d;
        bool turn;
        String^ name;
    public:
        InAr(Difficulty^ dd,String^ na)
        {
            d = dd;
            name = na;
        }

        int getcoup()
        {
            return coup;
        }

        void setcoup(liste^ lm,int x,vector <int>l)
        {
            
           if (d->getLevel() < 4)
            {
                srand(time(NULL));
                int random_number = (rand() % lm->Lmd.size());
                int pos = lm->Lmd[random_number];
                coup = pos;

            }
            else
            {
               
               if (nb == 0) {
                   

                   for (int i = 0; i < 100; i++) {
                       if ((l[i] <= 100 && (2 * l[i] <= 100) && (3 * l[i] <= 100) && (4 * l[i] > 100) && estpremier(l[i]))) {
                           p = l[i];
                       }
                   }
                   for (int i = 0; i < 100; i++) {
                       if ((l[i] <= 100 && (2 * l[i] <= 100) && (3 * l[i] <= 100) && (4 * l[i] > 100) && estpremier(l[i]) && p != l[i])) {
                           q = l[i];
                       }
                   }
                   for (int i = 0; i < 100; i++) {
                       if (l[i] > 17 && l[i] <= 20 && estpremier(l[i]))//20=n/5 17=n/6
                           r = l[i];
                   }
                   for (int i = 0; i < 100; i++) {
                       if (l[i] > 10 && l[i] <= 17 && estpremier(l[i])) {//10=n/10 17=n/6
                           s = l[i];
                       }
                   }
                   nb++;
               }
                   if (x == 0)
                       coup = 2 * p;
                   else if (x == p)
                       coup = 3 * p;
                   else if (x == 2)
                       coup = 2 * q;
                   else if (x == q)
                       coup = 3 * q;
                   else if (x == 3)
                       coup = 3 * r;
                   else if (x == r)
                       coup = 5 * r;
                   else if (x == 5)
                       coup = 5 * s;
                   else if (x == s)
                       coup = 3 * s;
                   else if (x == 1)
                       coup = 97;
                   else {
                       int i = 0;
                       while (i < lm->Lmd.size())
                       {
                           if (lm->Lmd[i] > 50)

                               coup= lm->Lmd[i];

                           i++;
                       }
                       coup= lm->Lmd[lm->Lmd.size() - 1];
                   }

               }
        }
        void setturn(bool t)
        {
            turn = t;
        }
        bool getturn()
        {
            return turn;
        }
        bool estpremier(int x) {
            int i = 2;
            while (x % i != 0 && i <= x)
            {
                i++;
            }
            if (i == x)
                return true;
            else
                return false;
        }
    };
    




