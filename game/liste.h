#pragma once
#include <cliext\algorithm>
#include <cliext\iterator>
#include <cliext\vector>
#include <windows.h>
#include <string>
#include <vcclr.h>
#include  <random>
using namespace cliext;
public ref class liste
{

public:  vector <int> Lmd;
	  liste(int ^ n) {
			  for (int i = 2; i <= *n; i++)
			  {
				 

					  if (i % 2 == 0)
					  {
						  Lmd.push_back(i);
					  }
				  
			  }
		  
		 
	  }
	  void multdiv(int n, cliext::vector < int> l) {
		  Lmd.clear();
		  for (int i = 0; i < l.size(); i++)
		  {
			  int d = l[i];
			  if (n % d == 0)
			  {
				  Lmd.push_back(d);
			  }
			  else {

				  if (d % n == 0)
				  {
					  Lmd.push_back(d);
				  }
			  }
		  }


	  }
	  bool verif(int x)
	  {
		  if (Lmd.empty() == false) {
			  for (int i = 0; i <Lmd.size(); i++)
			  {
				  if (Lmd[i] == x)
				  {
					  return(true);
				  }
			  }
			  return(false);
		  }

	  };
};

