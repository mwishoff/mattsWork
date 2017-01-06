//By Matthew Wishoff
// 2/20/16
//WHY DID I SAVE THIS TILL SATURDAY

#include <iostream>
#include <time.h>
#define N 2002


double sec(clock_t& c) 
{
	return double(c=clock())/CLOCKS_PER_SEC;
}

using namespace std;

int main()
{
	double T1, T2, r = 0.0, c, cave = 0.0, cmin = 999999.0, cmax = 0.0;
	clock_t c1, c2;
	
	for(int i = 1; i <= N; i++)
	{
		T1 = T2 = sec(c2); 
		c1 = c2;
		while(T2 == T1)
		{
			T2 = sec(c2);
		}
		
		r += (T2 - T1);
		cave += (c = c2 - c1);
		
		if( c > cmax )
		{
			cmax = c;
		}
		else if(c < cmin )
		{
			cmin = c;
		}
		
		if( N - i < 11)
		{
			std::cout << "\nr = " << T2-T1 << " sec Clock increment = "<< c;
		}
	}
	r /= N; cave /= N;
	
	cout << "\n\nRazer Blade stealth Clock time (2.6 GHz) = " << N
			<< " iterations\nCLOCKS_PER_SEC = " << CLOCKS_PER_SEC
			<< "\nClock increment min,ave,max = "
			<< cmin << " , " << cave << " , " << cmax
			<< "\nr = " << r << " sec, 1/r = "
			<< 1./r << " increments per sec	\n";
}


