#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[38],IFEcnt[51],SWcnt[25],WHILEcnt[51],DOcnt[51],FORcnt[76];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         m += (l-c+j-j-l-l+a-e-l)%100;
         b -= (m*f)%100;
         j += (n+i+k)%100;
         d  = (m-h+l-f+a-d)%100;
         f -= (l*n+k+k*i*j+k-h-c+g+c-i-f+k)%100;
         c -= (c-c*g)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  k += (l-e-j-k+f+h-j+f*c-b*b-d)%100;
                  n += (h+c-d-b+f+e+n+b*b+n)%100;
                  g += (a+h-j-h+m*h+k-m+d*d*c+d)%100;
               }
               l -= (b*m-d-j-e*m*j-l+d*c+e+k)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  d += (d-c)%100;
                  n += (l+k-h)%100;
                  j  = (m-j+a-n*g*f+c-g+h-b)%100;
                  m += (e-a)%100;
                  f += (n+l+a-j+n-l*b+d+h+f+d-n)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  f  = (d-d-d+c+e-h-h+g-m)%100;
                  f -= (j+b*g*h+f*n-c*a+l)%100;
                  n -= (d+k-n+b-n-f-m)%100;
                  h += (l-e-m+b)%100;
               }
               break;

               case 2:
               {
                  a -= (j-j+l+d-a-i)%100;
                  b += (m-k+d+m+c-f+c-k*f+c+f-n)%100;
                  g -= (k+g*l+n*e-a+n*m-c+m+h*d+d)%100;
                  k -= (n-n+i+c*l-e-j-h-m)%100;
                  j += (h-g-k)%100;
                  c += (f-g+m+k-l-l*b-l*e-d)%100;
               }
               break;

               default:
               {
                  n -= (c-j+b)%100;
                  k -= (e+c)%100;
                  h -= (m*a*b-j+b-c)%100;
                  n -= (m-k*i-f-h+m+h)%100;
                  b -= (i+i+l*c+b-b-c+l-c+n+h+b*j)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  d += (i+e+i+j-f*a*e+j-g*j+i)%100;
                  a += (f*f+m+j-j-e+a)%100;
               }
               else
               {
                  d -= (m*h-a+i+d-c*c)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  j -= (f+m+f+h-m+f+g-c-l*m-j*h+n-i)%100;
                  k -= (i-l-c)%100;
                  e -= (k-m)%100;
                  c -= (j-c+k+j*l-k*g+j-k+g-m-b+l)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  m -= (l+k-h-b+l*g)%100;
                  n += (h-i*g+m-k+e+b*h*f-d-n)%100;
                  k -= (n-n+l+j*a-c-f*b*e*n+n+f-k-b)%100;
                  j -= (g-b*c)%100;
                  l += (a-j+g+c+e-e-g+c+b)%100;
                  l += (d+g-h+g)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  c -= (f+h-d+n*j+h*n+n-m+b+a+m-c-i)%100;
                  h += (n-c-k-e-c-d-e-a*g-i-a*c)%100;
                  h += (e-l*d+h+i-d-l+h*j*n)%100;
                  f += (d+j-k+n+k+a)%100;
                  i += (i+f-k-g*h-c+f*a*l+b+a-e+f-j)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  n -= (g+d*j+f-m+a*e-j+l*i+n)%100;
                  i += (j+e)%100;
                  k  = (i*i+f+d+c+i+m+j-m+j-g*b)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  g += (g+k*m+n+i+h-b*f+e-g-i-d+d)%100;
                  m += (a-c-b+d-d*d-m*a)%100;
                  g  = (l-f-c)%100;
                  a -= (e-g+a-i-b-h+h*e*j+h+e)%100;
               }
               else
               {
                  l -= (e-b-j)%100;
                  l += (e-g-c+b-a*e+f*h+f)%100;
                  b  = (n+n+h-a-m-e-b-e+b+m*k+e-n)%100;
                  h -= (i+e+g+l-d)%100;
                  b -= (f*l+g*c*g-n+a-l-n-l)%100;
               }
            }
            h -= (b*c-g+f+i-h+f*g-n-b)%100;
            e += (d+m+j+i-e-f+l)%100;
            b += (c*l+h+d+j+n-f-e*c+b+n-c-c)%100;
            l += (g-n-b+g-f*n+f*g+l+m)%100;
         }
         k -= (k*k+e*g+j-c*h)%100;
         m  = (i-d-a+f-e*i+l-k)%100;
         d -= (n-g*j-e-f-c)%100;
      }
      c += (g-l-h+g+d*i-h-b+a+n-j-g-c)%100;
      k -= (f+l*l)%100;
      b -= (m+b)%100;
      c -= (c-a-i+n+c+n-n+m)%100;
   }
   g += (j-i*n+l*g)%100;
   m += (g-f-j)%100;
   e += (b+e-b)%100;
   h -= (a-h*l+k-c-d+i-n-e+n)%100;
   j += (n*h+l-e-n-g-a*i)%100;
   l -= (i+j+k+d*j+g*g-i+k-a-g)%100;
   d -= (c-i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F2(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[4]%5 )
   {
      do
      {
         c += (e-h*g-h+d+n+c*b+m+h+n-k)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%3 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  m -= (b+a+j-f-n-l+k)%100;
                  c += (k+f*m-c+h-h-a+l+d)%100;
                  n -= (f*l+l+f*l+g)%100;
                  g += (b-d+m-e)%100;
                  h -= (l*n-g+b-k-h+a*n-b-e)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  k -= (c*j-a-h+d*a*a+k)%100;
                  h  = (k+c-k+i)%100;
                  e -= (d+j-l+h+i-a+k-l+i+a+a*m)%100;
                  m -= (b*j-e-a*e-e-k)%100;
                  b -= (m+f)%100;
               }
               else
               {
                  i -= (f*e+c-k-j-f-a-l+b)%100;
                  h += (b+c+l-g-e*c+d*h+f-d-j)%100;
                  i -= (l*b-k+g+b-f*m*n+g-c-f-c)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  d -= (c*c+h)%100;
                  f += (i+d-g+d*m-g+n+e*i-n-l+g-a)%100;
                  i -= (b-a+j-h-k*f+a*b-e+j+j)%100;
                  i -= (j-f+k)%100;
               }
               do
               {
                  f -= (j-h+i-e+e-j-f-e-c)%100;
                  f -= (k+n-h+c*a+m-a*m)%100;
                  k += (d+f*i)%100;
                  c += (a+i-l-k*k)%100;
                  j += (d*g)%100;
                  l += (e-i+d+a+e*i+l*k+m+h)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  f -= (m-e*a-n-j-f+g*a+d-e*j-d-m+d)%100;
                  f -= (i+n*d-g-h*n)%100;
                  b -= (d+c-n+j+d+m*m+j-e+g-b)%100;
                  e += (i+j+e*m+n-c+d+k*k-m+j)%100;
                  h -= (g-n+f-f*l*i-m+e)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  n += (n+m+n-n-l-f+i*c*c+g*j-a-k)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  a -= (e-d+j+m+j+i+g+a-n+l-j*g*g)%100;
                  e -= (k+b)%100;
                  b -= (j+b+l+c-b+a*m-c+b-b-g-l)%100;
                  b -= (c+k)%100;
               }
               else
               {
                  m -= (a*k+j-h+j-i+l-c+c*k*i*b)%100;
                  k += (c+k+c-g-n-f)%100;
                  k += (m+c*b*l+a)%100;
                  i -= (d*l+b+d-j+n-l*m+l-a+c-l+g*c)%100;
                  j -= (m-g*l-d*g)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  d -= (n+i*b*g-l)%100;
                  c -= (i+c-g-g)%100;
                  l += (j+a+d+a+n-g*c-d-n*n+a+c-b-m)%100;
                  l -= (b*n-b-f+b*e)%100;
                  g += (l+k+n-m-b+m+l+d+a)%100;
                  j += (a-i)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  f  = (d+a-m+e+a-m*m*j+m*e-b+i*f)%100;
                  m -= (a+d)%100;
                  f -= (i+l+l*b-b-d*f-h+l*a+b+d)%100;
               } while( ++DOcnt[4]%5 );
               d += (h+m+e-d+a)%100;
               m -= (d+c-j+n-m*n+g)%100;
               d += (m*j+i*k-i-g+b*c-c+n+c+j*l)%100;
               h  = (f+e*i+e)%100;
            }
            }

            l -= (g+f-a-b+j-g*h-b+c+k*k-k-e)%100;
            e -= (l-l)%100;
            f -= (a+m+c+c+d-g-d-k)%100;
         }
         n += (b*k)%100;
         e += (d+a*m-e-n-n+j+b-e-g-j-d+d*k)%100;
         d  = (d+n)%100;
      } while( ++DOcnt[2]%5 );
      l  = (g-c+n-b*d)%100;
      e += (d+b)%100;
      a -= (e+n+l-d*e-b+h+g*j+a+d-k-l)%100;
      m -= (h-e+e*b)%100;
   }
   k += (n-c+b-c*g-c)%100;
   d  = (e+e-h+b-m*b*m*l*h-j+c*e+n+m)%100;
   f -= (b+n*i-i+g)%100;
   d += (n-b-a-f*a-i+c+f-a+a+i*m-m-i)%100;
   f -= (b*g+k+m+l-d+e+f)%100;
   i -= (m-g-f+n-a*a-k+a-b*h*i)%100;
   f += (d-b+d+k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[5]%10 )
   {
      d += (f-l)%100;
      for( ; ++FORcnt[10]%5 ; )
      {
         
         switch( ++SWcnt[2]%3 )
         {

         case 1:
         {
            if( ++IFEcnt[6]%2 )
            {
               if( ++IFEcnt[5]%2 )
               {
                  b -= (i+n+i+l+g-d-k*i)%100;
                  b += (n*l-f)%100;
                  n += (d*l+j-i-g-i-l+b)%100;
                  f -= (j-b+f+c*f+l+g+m*c)%100;
                  l += (e+l+m+h+h+f+b-c-l-d)%100;
                  b -= (b*d-n*l-n)%100;
               }
               else
               {
                  i += (i*e+g)%100;
                  n  = (b+a*i*d+f-a)%100;
                  d += (d-c)%100;
                  b -= (g+i*n-m-g)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  f += (g+f)%100;
                  h -= (e*h-e+j-j*h-k-i*g+i-j-l)%100;
                  i -= (e-l-f*b+l-m-i+f-m)%100;
                  j -= (m-e+n+n-k+d*e+e)%100;
                  j -= (i+a*a)%100;
               }
               do
               {
                  h += (c+g-f-m-m*a-j*d)%100;
               } while( ++DOcnt[6]%5 );
               b -= (a*b+i+m*b-b-a-i-i+j+m+g-i+k)%100;
               for( ; ++FORcnt[9]%5 ; )
               {
                  b += (n+g)%100;
                  m -= (j+f-i+m+h-b-c-m+b+b-f+k-c)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  d += (l+f*m*n-d-m*i+b*a-a-b-h)%100;
                  e -= (i-e-k-g+e+b-i+k-g-m-g-j+j+f)%100;
                  d += (d-a-m)%100;
                  k += (b-d-i-k-m+a-m+c+i*m)%100;
                  e -= (m-k-l*f*b+b*j*f-e+m*c+n+f-m)%100;
               }
               do
               {
                  m += (e*e-a)%100;
                  i += (e-g-i)%100;
                  n -= (b-g-l-j*f-a+i-b-i+a-l*b-i*d)%100;
                  j += (j-e-l-d-b-d-b-f-c)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  c += (d+g+m+m-h-e+m+m-h-d)%100;
                  n += (j*d+d-h-b*m+g+f*e+l*i+a-d*m)%100;
                  f += (l+g+e+c-d)%100;
                  c -= (f-c+c-l+d+b-h*k-g-m+d-k+g)%100;
                  k -= (k+d-n+b+c+e-j)%100;
                  l -= (e+h-d+g*k+b+l+e+f+c*l-m)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  i += (k-a+c+c+n*e*a+b*h*e+k)%100;
                  f -= (k-f-l+g+e+n+i*n-k-i-i)%100;
                  n  = (d-g-j+d-m*k)%100;
                  n -= (l+f)%100;
                  m -= (h+d*d+c+h+h)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  m -= (g-f-e-j-b)%100;
                  k += (g-f)%100;
                  d += (d*c-i+e-k)%100;
               }
            }
            
            switch( ++SWcnt[3]%3 )
            {

            case 1:
            {
               if( ++IFcnt[4]%10 )
               {
                  i += (j-g)%100;
                  m += (i+i-a+a-k-l+m+f*m+c-d+n)%100;
                  g -= (h+e+d-i+h-h-a-h*e)%100;
                  g += (g*k*d+m)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  e -= (c*i+f*m-d)%100;
                  b  = (d-c-f-d-j-l-d+e+b-g*b)%100;
                  c -= (j+c-d-h*k+n*m-j+a+i+k*k)%100;
                  i -= (i-j-e+i-b-j*g+f*m+j+n+j)%100;
                  l += (j+b-d+b+e)%100;
               }
               else
               {
                  d -= (c+g-a*i-g-l)%100;
                  c  = (l+d-d-m-h-h*e+h)%100;
                  c -= (g-m)%100;
                  g -= (n*j-l+j-l-d*i+a+j+l*f+b*c)%100;
                  f += (k-f+a+f+f-g-j+n-d*g-j*l-b-g)%100;
                  c  = (n-e-l-a-n-i*n)%100;
               }
               e -= (h+m)%100;
               b -= (i+e-a*e+l+i-j*m-b-m-j-l+f-g)%100;
               h -= (c+k-e+c*d-k+n)%100;
            }
            break;

            case 2:
            {
               c  = (e*c+a-e+i*i+f)%100;
               f += (h-f+j+i-h-c+d-f-b)%100;
               k += (e-n)%100;
            }
            break;

            default:
            {
               i += (l-l-l+d-k-a-g*a-a-k-b-g)%100;
               k += (a*c-k*g*a*m-f)%100;
               i += (k+c)%100;
               a -= (d-h*a-a*j-l+a+k-e+m+c-n*h)%100;
               i -= (n-a+a+a-a+h+h-i)%100;
            }
            }

            n += (k*g*b+c*f-j-a*j-g-e+i+k*f+h)%100;
            k += (f+m-d-e+e)%100;
            j += (a-b+d+l*c-k+j-a*k)%100;
            e += (f*m+h*j-n-l-c+l*e-c+k-l)%100;
         }
         break;

         case 2:
         {
            e += (e-e*m+h+b+m-f)%100;
            j -= (l-c+m*l-e+j+l+k*h*l*n+e*n)%100;
            j += (d+n-n)%100;
            n -= (h*i*i+g-k-c+h+a*c+n*i)%100;
         }
         break;

         default:
         {
            l -= (m+j-b-e-i)%100;
            m += (k-e*c+k-k*e*n-n-l)%100;
            i -= (e+f*a+g-k-a*g-f)%100;
            b -= (f*e-h-f+j+e+e)%100;
            c += (l+k*b+a-g*i*l)%100;
            c -= (h+d+g+f*l+g+c*k-a)%100;
         }
         }

         b -= (f+f-g+g+e+j+l+i-a+c+e-e+n)%100;
         a += (e-c)%100;
         l -= (i-c-l+d+k-i-h+g*e-c-l-l)%100;
      }
      e -= (d-l*l-k-a+k)%100;
      i += (d-n)%100;
      j -= (k+h-a+l-c-b)%100;
   }
   n += (k-m+e+n-l-k-h-f-f-e+g*j)%100;
   c += (a-j-f*m-k*k*m*e+m*m*g*b)%100;
   d -= (n+h-c*b-l-f+g+k+m+g+h-m+e-j)%100;
   e -= (g*b+c*e+b-a-a*g-a-h-f+g+m)%100;
   j += (a-m+k+i+i-a+i+a-b*l)%100;
   i  = (b-i+d+h)%100;
   h -= (c+j+e+h+e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F4(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[8]%5 )
   {
      do
      {
         for( ; ++FORcnt[13]%5 ; )
         {
            for( ; ++FORcnt[12]%5 ; )
            {
               if( ++IFEcnt[8]%2 )
               {
                  n += (m-f)%100;
                  l -= (g+k*j+k*a-j-g*l*g+h-h-f*g+f)%100;
                  b -= (n+f+f+i-a+m+e+e+j+m*i-c*j+c)%100;
               }
               else
               {
                  f += (f-j-k-j+b+g-b+h*i*k+a-g-j)%100;
                  k -= (h*d*j+b+e-h)%100;
                  m -= (h-j-c+d-c+l-j+d+i*i+d*l+h)%100;
                  m -= (h*d-k*j-e-d+m+h+f-g+h-c-n)%100;
                  l += (a+c*c+g-c*m+f)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  f += (n+d-f*d+k*g*l+j-i+f-l-l-b)%100;
                  f  = (c-e)%100;
                  a -= (c-m*k-i-a*d+e+f+j+l)%100;
                  j -= (m-k-d-e+n-l+m-f+d)%100;
                  m -= (k*n+n-g+m*i-m*d)%100;
               }
               do
               {
                  f -= (l-j+e+k)%100;
                  c += (l-m+c+l+c+l+g-c-b+m)%100;
                  a -= (c-i)%100;
                  e += (d+b+n+g*n-l+h*i-d-b+k-g+i)%100;
               } while( ++DOcnt[8]%5 );
               if( ++IFcnt[6]%10 )
               {
                  h -= (m-i*l+f-i*b-b+k-e*b*a-n+i)%100;
                  i += (k+a-d-a+i*a+m+h-b+d*m+l*f)%100;
                  a -= (m+e*m*b-j-l+h+m*j+b-b)%100;
                  i += (l-j*m+l-l-b*g-k+c+l-c*l+i)%100;
                  c += (l-l-k+m-j-n+j+m+n+f)%100;
                  a += (k+i+m-c-g+f-l-l+c-l-l)%100;
               }
               h -= (i-n+b*j*g+i+e+e*i+l-a)%100;
               for( ; ++FORcnt[11]%5 ; )
               {
                  c += (i+n)%100;
                  g -= (i*n-m+l-f-a+i+c+j-h)%100;
                  g -= (c-c)%100;
                  j -= (j+g+b+i*g*b*m+b*f-d-a*n+b)%100;
                  j += (l-l-d+n-b)%100;
               }
            }
            
            switch( ++SWcnt[4]%3 )
            {

            case 1:
            {
               f += (l*a+d+n+h-k+e-l-g+h-f)%100;
            }
            break;

            case 2:
            {
               l -= (k-d+b+f+a+k+h-j-g+c*j-c*n)%100;
               i  = (m*j+l-g+j+h+l+g-g-i)%100;
            }
            break;

            default:
            {
               a -= (e-g+i-f+j+i+b-k+j+n+m*c+k)%100;
               g += (e+c*m-i-h-b*j+k+b*j+i*m)%100;
               c += (i-k-f-d+a+e-d-k-g*a*l+d)%100;
               a -= (n+g+b-h-e-a-i-m+b-a-g-k+b)%100;
               g += (a-a-l*m-i-e*g+j*i+d-e-n)%100;
            }
            }

            k += (a-k-c-d+g+d)%100;
            l -= (b-b)%100;
         }
         m += (k-c*j+d)%100;
         l += (f*j+f)%100;
         b  = (m-f-h-i+k)%100;
         f += (k*k+k-e+l+e+g+a*b)%100;
      } while( ++DOcnt[7]%5 );
      n += (c+b+a-e)%100;
      a += (l*m)%100;
      i -= (m+m-d-e+h-e-h-g-l+b+g+g*n+j)%100;
      a += (c-b+j)%100;
   }
   g += (c+d)%100;
   f += (k*l-i*m+a+b-l*f*b-m)%100;
   e += (a+b+d-e+f+m-a+e)%100;
   d -= (e-f)%100;
   d  = (l-k)%100;
   m  = (a-e-h*j*k+m+j)%100;
   f += (d-h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[10]%2 )
   {
      a += (b*b*k*a-l)%100;
      c += (h+j-f+b)%100;
      h += (m-i*b-l-n-h+e-j+l+b+d+d+g-n)%100;
      k -= (m-d+e*l-k+m)%100;
      m += (j+f+g*j*b)%100;
   }
   else
   {
      while( ++WHILEcnt[10]%5 )
      {
         do
         {
            for( ; ++FORcnt[15]%5 ; )
            {
               if( ++IFcnt[7]%10 )
               {
                  m  = (d-f)%100;
                  k -= (j+e-e-m+c+f-b-l*c)%100;
                  j -= (i+k)%100;
                  h += (g+h)%100;
                  g  = (d*i-k-e)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  a -= (g-j+c)%100;
                  f += (k-c-l+g-c)%100;
                  c -= (j-k+b+k-k+f+k+m-j-g)%100;
                  n -= (a+l+a-e+d+e+j+b-b)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  n -= (m+n-h-a-i-h+f+l+l)%100;
                  d += (k-l-m)%100;
                  m -= (b+f-i+h*i+k*d*b)%100;
                  c -= (a-k)%100;
                  n -= (n-i-m-d-m-m-n+b)%100;
               }
               else
               {
                  k  = (i+m+f-b-e-d*l-e+d-m)%100;
                  k -= (f-a-k*b-f+c*h*j*n-i-m-h)%100;
                  c  = (b+j+c-d*b-j-g*l-f+g-g)%100;
                  n += (h-d+d+b-j+e-l*a-b-c*e-k)%100;
                  g += (m-b)%100;
                  e -= (n-f+c*j+h+e*e-f-c*e-d+m-k+h)%100;
               }
            }
            while( ++WHILEcnt[9]%5 )
            {
               do
               {
                  g -= (m+g+m-m-a*a+h*j+n-l-e)%100;
                  l += (h-l-i+m*e+b+f+j-a-g)%100;
                  g -= (b*a+n+k-h-f*j+k-c-c*k+j)%100;
                  a -= (e+e+n)%100;
               } while( ++DOcnt[10]%5 );
               h += (h-d-h+d+j-e-d+j+d*e+j-d-j*n)%100;
               for( ; ++FORcnt[16]%5 ; )
               {
                  i -= (f+k-f+g+m+i)%100;
                  f -= (j+g)%100;
                  h -= (g-m*g-k+c-k*b-g+l-l-e)%100;
                  c += (k-k)%100;
                  a -= (m-k)%100;
                  f -= (l-i-j*h)%100;
               }
               
               switch( ++SWcnt[5]%4 )
               {

               case 1:
               {
                  b += (i-k*d-f+b+j-j)%100;
                  h += (g+m-e*k-h+a-k-h-e-c)%100;
                  f += (l*k)%100;
                  c += (a*f+k+b-e-d+d-i*n-j+k-m*j-j)%100;
                  f  = (f-b*k*k+k-a+f-l+f-l+e+f+g-k)%100;
               }
               break;

               case 2:
               {
                  c += (e+m*c+d)%100;
                  l += (j*e*g-n)%100;
                  d -= (c-f-l-j-l*m-a-n*a-m*f+b+j-e)%100;
               }
               break;

               case 3:
               {
                  b += (h+l-b+c+j)%100;
                  l += (b+j*d+g+g+a-g-k+c-e*g*f)%100;
                  a -= (k-f*l*l+m*g+h-e)%100;
                  d += (k*n*n*e*c+h-f-h+m)%100;
                  k += (h-n+k*k-f+e-a+g+l-c-h+c-b-a)%100;
               }
               break;

               default:
               {
                  n -= (m+b-e+c-h)%100;
                  n  = (f+b-d)%100;
                  l  = (n+h*c-c-j-e-h+l+k+e*l*j+l+g)%100;
                  e += (i-a+d-g-f-n-i-j-i*k*k+c+k+g)%100;
               }
               }

               if( ++IFcnt[8]%10 )
               {
                  g += (i+d+d-g+c-m+g)%100;
                  l -= (k-a-m)%100;
                  h -= (i*f*n-n+d-l+j+e*f*b-k-f-d)%100;
                  d -= (l-b+i+h-i+l+b+i*i)%100;
                  k -= (b+l-b-d-e+f+b*d*d+a-b*e+n)%100;
                  b += (f-l*b*k-d+d+f)%100;
               }
            }
            j -= (a+i-b+d-e+d-l-k*c+n)%100;
            e += (b*b-m*m-f+b+j)%100;
            b -= (k-f-e+a+f-b+e-h*n+g)%100;
         } while( ++DOcnt[9]%5 );
         a -= (l+f-b+g-a+i-m-e+g-f*d)%100;
         m -= (i-e+d-l*m-m*a)%100;
         m += (n+g*i+b)%100;
         b  = (b-a)%100;
         a -= (f+b+g-e-c*d+g+j-g)%100;
      }
      a  = (i+g+d-f-n+d+b-f)%100;
      b -= (h+g*n)%100;
      b -= (b+g-k-i+k-c+e+k-m+f-c*e+d+e)%100;
   }
   h += (a-m-d+g-h+g+a+f+j)%100;
   e  = (g+g-e+f-b+l+l-b+i-a-j-b*l)%100;
   k -= (i*e*b*b*b)%100;
   m -= (g+g*e+n+i+h)%100;
   a -= (m*g+d-h*n*k+a+g+b+c+g)%100;
   k -= (c+e-m)%100;
   l -= (g-n*g+l*f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F6(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[13]%2 )
   {
      m += (a*e+n+g-k+i-d*c)%100;
      d += (d+l-e*k-e+e+j)%100;
      k -= (b+n+g*c-b*n-d+i)%100;
      b  = (d-d+i*j-m+h+a*f-b*f-b+d-h)%100;
      j += (i-b+a*g+c)%100;
   }
   else
   {
      while( ++WHILEcnt[12]%5 )
      {
         do
         {
            for( ; ++FORcnt[18]%5 ; )
            {
               for( ; ++FORcnt[17]%5 ; )
               {
                  g -= (j-m*j-b)%100;
                  i += (m+a*m+a*a+c+l+d-b*g+h-i)%100;
                  e += (m-j*h-i+k-i-j)%100;
                  e -= (c+l+b-f-j-m-m*m+j+i)%100;
                  g -= (f+k*i*i+h-d+b-e)%100;
                  f += (c+d+e+j)%100;
               }
               if( ++IFEcnt[11]%2 )
               {
                  c -= (b-c)%100;
                  d += (g*j+i)%100;
                  b += (i-l+k*k-d-e*j*a*l-h)%100;
               }
               else
               {
                  i += (a+h+b+b-k)%100;
                  j += (n+h+i-a-e+e-l+m-i+h+m*h-n+n)%100;
                  n += (b-k)%100;
                  h -= (f-l+n*f-j+f+g+g-l+j+k-j-h)%100;
                  j += (b-b+d-b*m-j)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  i  = (k-g-j+h+e+i*l*f-n-e*n-c-l)%100;
                  m += (j+e+l*k)%100;
                  b += (e*j-f+b+n-m-d-a)%100;
                  a  = (b-n-f*m)%100;
                  f -= (d+j-l+g*k-i+k-c)%100;
               }
               do
               {
                  k += (c+k*g*l*m*k*f)%100;
                  b -= (d-i*n+l-h+i)%100;
                  c += (n+f+d-k*h*e-k+c*f-c)%100;
                  a -= (h-l*d*a-k*n+g+f)%100;
               } while( ++DOcnt[12]%5 );
            }
            if( ++IFcnt[9]%10 )
            {
               k -= (b-k*a+a-a*k*a-a-g)%100;
               for( ; ++FORcnt[19]%5 ; )
               {
                  n -= (h*b+m-i*a)%100;
                  d += (f+d*k*m-d*a+a)%100;
                  h -= (k-i-j-d+f+d*g*f+g)%100;
                  b += (c+g)%100;
                  f -= (j+b-n-h*a+e)%100;
               }
               
               switch( ++SWcnt[6]%3 )
               {

               case 1:
               {
                  c += (l*b)%100;
                  a += (j+l+g-h+a-e-e+f+c*n)%100;
                  m += (j+l-g)%100;
                  j += (h-m)%100;
                  h += (b-a)%100;
               }
               break;

               case 2:
               {
                  m -= (g+c*b-j+m-g-i+f*m-e)%100;
                  c -= (n+f+d-j+j-j)%100;
                  j += (f+b)%100;
                  g += (a-k)%100;
               }
               break;

               default:
               {
                  i -= (i-b*b+b-f+l+h-m-g+h)%100;
                  e  = (h+c)%100;
                  n += (j-k-g+d*e*m-l+n)%100;
                  i += (e-d-c+d-c-c-e+f+a-a)%100;
                  f -= (c-j-m+g*n-n*e-h+g-f+k-k)%100;
                  j  = (i+k-h+b-c+k*g+c)%100;
               }
               }

               if( ++IFEcnt[12]%2 )
               {
                  i  = (c*k-n+c-b*k+e*i+a+g-k)%100;
                  f += (g+m)%100;
                  m -= (g+h+b*a)%100;
               }
               else
               {
                  h -= (d*e+j*e*l+a-m-b+i)%100;
                  i += (a+g*d+c+h*j-l*n)%100;
                  a += (a-n-d+l+k+b+m+i+n)%100;
                  l -= (f+f)%100;
                  n  = (h+g-e-n-m*e)%100;
               }
               d -= (a*n+g-c+g+i+k+j)%100;
               c -= (f*h)%100;
            }
            b += (g+c+c-b+a-e+d+n-a+h)%100;
            b -= (f*n+m*h*g*e)%100;
            c += (l-d)%100;
         } while( ++DOcnt[11]%5 );
         f  = (g-k*a+n-e-f+m*j-d-c-d-m-l+g)%100;
      }
   }
   e -= (c+b-e+k+b-n-j*a-k+m-e*f*k-a)%100;
   n += (d-l*j+c+n)%100;
   c -= (b+i-k+c+a-n+a+l*h+j*e+h+b-d)%100;
   h += (e-c)%100;
   f += (k*g*a+g*a+j+k-c+j)%100;
   k += (m*i*a*f)%100;
   m += (j*j-j-j-a-j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F7(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[15]%5 )
   {
      do
      {
         for( ; ++FORcnt[22]%5 ; )
         {
            if( ++IFcnt[10]%10 )
            {
               for( ; ++FORcnt[20]%5 ; )
               {
                  h += (c-g+h+b+m*d+h+g)%100;
                  k  = (h+i-f*c+f+c*n+b-d-b)%100;
               }
            }
            if( ++IFEcnt[15]%2 )
            {
               if( ++IFcnt[11]%10 )
               {
                  l += (a+b+a-a)%100;
                  l  = (f+g+a+b-m+m+n)%100;
                  f += (g+i+k+i+d-a)%100;
                  l -= (d-m*l-l-n*k-b+a-a-i+l*l)%100;
                  l += (g+b-l*j-a-l-j+i+j-c-l+i-f*e)%100;
               }
               if( ++IFEcnt[14]%2 )
               {
                  g += (n*m+k)%100;
                  h  = (b*n-l)%100;
                  n -= (n-i-e+k-n*e-l+g+m-b+n-i)%100;
                  l += (b*n-h+e*g+n)%100;
               }
               else
               {
                  k -= (e+i*n-j+j-e-l+c+e+k*h-m+h)%100;
                  l  = (k-a*g)%100;
                  j -= (n*i+a+a+m+d-m-d-g)%100;
                  k -= (m+d*b+m)%100;
                  m += (n-h-a+j)%100;
               }
               while( ++WHILEcnt[14]%5 )
               {
                  l += (j-i-m+n-l-m-i-e-j*n)%100;
                  g += (j-n-n*n-e+f*e+k-f-c*b*j-c-e)%100;
                  b += (m+g)%100;
                  a -= (m-k-l)%100;
                  k -= (h*g-i-i+h+g+e-c*l-e+k+b+e-a)%100;
                  d  = (n-n-m*f)%100;
               }
               do
               {
                  i -= (k+m)%100;
                  f -= (e+a+c-e)%100;
                  f += (m-j-m+j*m-a+d-d)%100;
                  a -= (h-m-m-n+b+c-n-e*k+i*e)%100;
                  d -= (l+c*d+b)%100;
               } while( ++DOcnt[15]%5 );
               a -= (i*h-e*l+a-h+a+a-a-i-f-b+k)%100;
               d -= (g-l-h-i-l+f+c+k-c)%100;
            }
            else
            {
               while( ++WHILEcnt[13]%5 )
               {
                  l += (g*b*k+d-d*b+a+e-g*k*m+d)%100;
                  c -= (l-i)%100;
                  a += (l+g*l*b+e+a*d-n+f-h)%100;
                  e -= (b-b-m-c+b)%100;
               }
               do
               {
                  f += (g*l)%100;
                  n += (l+j-c-c+g+c+d-d+f-h)%100;
                  c -= (d+l-b-c-i+a)%100;
                  g -= (h+i-m)%100;
                  l += (h+a+l-j+f*i-l*a-c*h)%100;
                  e += (f+m*l-i-n*i*i-b*h-j+i)%100;
               } while( ++DOcnt[14]%5 );
               k -= (h-f)%100;
               for( ; ++FORcnt[21]%5 ; )
               {
                  f += (l*c-g-i-j+c+h+l-g*l-c-e+i-i)%100;
                  i -= (k+m+b*h+b-e-h+a)%100;
                  a += (d+a-l+i*f*m-h+n-c*d-f-a+k+i)%100;
                  f -= (d-d+k)%100;
                  d -= (i-e+c)%100;
               }
               
               switch( ++SWcnt[7]%3 )
               {

               case 1:
               {
                  b -= (g+i*d*h+g+m*c-h-e-i-f+c-m)%100;
                  h -= (k-m+g+f+n)%100;
                  e -= (l+j-c*a+m-n+b+k*d-m+c)%100;
               }
               break;

               case 2:
               {
                  e -= (b+g)%100;
                  f += (d+f*e)%100;
                  l += (l-h+h)%100;
                  j -= (a-g*a+c)%100;
                  k += (j-l+i-k-f-a-l-d+c+j+h+f-e)%100;
               }
               break;

               default:
               {
                  e += (c-m)%100;
                  k += (f-e+c-n*k*b*d)%100;
                  h += (k*h*i+l+l-h-l+j-k-m*n)%100;
                  j -= (i*l*a-n*i-e-a+e*i+k-l-d-j-j)%100;
               }
               }

            }
            k -= (j+a-c-i-l-e+l+c+e+c-f+i+n)%100;
            f -= (b+h+f)%100;
            d += (e+j-g*f-m)%100;
         }
         l += (d*g+a+b+e-h*g+h+g+e-d+g)%100;
         n  = (h-f*i-m-j*g+n*j*c-j+i+m-i-n)%100;
         j += (g-i)%100;
         m += (m+e-i)%100;
         c += (e-f+a-b+k-j+i*h*a)%100;
      } while( ++DOcnt[13]%5 );
      m += (a*f*k+f-k+j*d-g)%100;
      a += (e+g+i-k+j-l*k-g*h*f-b)%100;
      n += (f+a*g*f+l-h)%100;
   }
   b += (c+j-n-d-m*i+k-m*m+j+d+l-g-d)%100;
   k -= (e-a*k+j+b+a-k*l+g-c+m-h)%100;
   f += (n*j*j+g*c+j-b)%100;
   d += (f-j-l+f-h+e-c-i+m*i+h+i-e+b)%100;
   l -= (c-j)%100;
   n += (i*n+b+a-j-g)%100;
   d -= (f*d-e+a+l-d+c+e-i+m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F8(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[27]%5 ; )
   {
      for( ; ++FORcnt[26]%5 ; )
      {
         if( ++IFEcnt[17]%2 )
         {
            f += (h-k-f*m-d-d-g*c*b)%100;
            a += (h-d-b+e*c-n-m-k-b+m-j+i)%100;
            b += (l-j-g-n+c-f*l+k-n)%100;
            n += (f+m*i-n+d*h+l-m-i+f-e)%100;
         }
         else
         {
            while( ++WHILEcnt[16]%5 )
            {
               do
               {
                  m -= (d+h)%100;
                  h += (k-h-j-c+d+h-e)%100;
                  c  = (i-d+f-g-k+f-i)%100;
                  f += (f+e-n-c-a)%100;
                  h += (g-d)%100;
               } while( ++DOcnt[16]%5 );
               if( ++IFcnt[12]%10 )
               {
                  h += (i*h*m*a*b*n-b)%100;
               }
               c -= (j-e*l*a+n-k+j-b-d)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  a -= (j+d-m)%100;
                  b -= (c+b-b+k+m+c+b)%100;
               }
               
               switch( ++SWcnt[8]%3 )
               {

               case 1:
               {
                  a  = (k+l-l*f+a+a+m*m)%100;
                  j += (n*b-b-g+f+i-l-a-m+g)%100;
                  i -= (d-h-a+l*n+g+n-h-g+d+m+a)%100;
                  k += (i+e)%100;
                  a += (j+h-l*a+e+h+m+e+c-b-i)%100;
               }
               break;

               case 2:
               {
                  e += (g-c+e-c-g-d-n+k+g+c*m+a-m)%100;
                  e -= (k*e*n-i-g*l)%100;
                  j  = (n-e+n+g*e-i*f*j+a+e-m-n-k-h)%100;
                  f += (m+m-h*m+b+h*j*d)%100;
               }
               break;

               default:
               {
                  g  = (d+g*n-i-a-h-i*m+b-f-j-h+g)%100;
                  g -= (c-n-a)%100;
                  b += (h-g+d-g+k-i+f)%100;
                  g += (g+b-d-m+f+h+h)%100;
                  m += (g+m-e*d-g+f-g+h+i)%100;
                  b  = (n-k+h+i+k-m+e+k-d)%100;
               }
               }

               if( ++IFEcnt[16]%2 )
               {
                  h -= (g+n+a-g)%100;
                  n -= (f-a-c*e-a-h+e-d)%100;
                  m += (a+d-c-c-g)%100;
               }
               else
               {
                  i -= (c-j-d)%100;
                  m += (d+d+m-n*e-d)%100;
                  c -= (e+a*g+a*j)%100;
                  m += (e+a)%100;
                  d += (l+i-e-b+j-h+l+f+k+j-e*k)%100;
               }
            }
            while( ++WHILEcnt[17]%5 )
            {
               do
               {
                  c += (l-a+l-a+i-d+l+d*h-c+c-g+l+f)%100;
                  l += (e-m-j+b+j+b-e+l+c+i-g-c)%100;
                  m += (b*f*k+h+m-g*d-l-g+g+l*k)%100;
                  j -= (l+i-d*h)%100;
               } while( ++DOcnt[17]%5 );
               for( ; ++FORcnt[24]%5 ; )
               {
                  h -= (h+k-j-h+e)%100;
                  h -= (c+h+l)%100;
                  l -= (k+h+a-f+l-f+a*e+h+h-c-d*d)%100;
                  j += (d+l-a+l-n-f-e+k*j+d*f*h+i+c)%100;
                  k -= (a+i+i*e)%100;
                  e -= (c+k*l+m*h*c)%100;
               }
               if( ++IFcnt[13]%10 )
               {
                  b -= (f-h-e)%100;
                  l += (j-k+i*m*k-i-f+e-i*k+c+d)%100;
                  m -= (g-f*b+h+f+c+j*k-c+m-c-a*e+j)%100;
                  f -= (i+a-c+c-i-f+i-c+c-l*e+c-f)%100;
                  m -= (g-l)%100;
               }
               for( ; ++FORcnt[25]%5 ; )
               {
                  b -= (g*l+h-h*h*m-d)%100;
                  m -= (g+m+m)%100;
                  b += (h-m-i+k)%100;
                  d -= (g-c*k*l-e*e-h-e+n-k+h)%100;
                  f += (i-k+i-h+h*f*h-j-j*n+b+j*d)%100;
               }
               h += (c-m+e*h*f+f+a)%100;
            }
            m -= (g-b+e+n-f+b+m+f+h)%100;
            j -= (k-c+e-m-d+k+j+a-h+a*g-n-f)%100;
         }
         m -= (c-e+b-a-b-h+b+l)%100;
         g += (e-l+b-l*k)%100;
         g += (a+b+f-k-h)%100;
         e -= (g-i-j-f*i*b-n+m)%100;
      }
      i += (c-d-l-i*m-j-f-e*d)%100;
      g += (b*m+j+g)%100;
   }
   n += (b-d+m-c-e+c+n-c-l+m*f*c+n)%100;
   d += (n+c*g*i)%100;
   e += (l*e+e+j+l*m*e+n*d-g*c+g+k+b)%100;
   e -= (b*n+m-g-k-j+c)%100;
   n += (h+n+d-b+i+b-c+a)%100;
   k += (l+l-m+j*m-b+h-g+n*a-j-b+a)%100;
   f += (l+f-c+b+d+e-j-n*c-a-g+a+f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F9(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[20]%2 )
   {
      f += (d+f-d+g*n-c+l-a+g+n*f-b*f)%100;
      h += (m*i-k-j+j-i+c-d+l*i)%100;
      c -= (e-d+n+b)%100;
      a += (c*b+n+g-i-n+k-n)%100;
      h  = (j+j)%100;
   }
   else
   {
      while( ++WHILEcnt[20]%5 )
      {
         do
         {
            b -= (e-l*b*h+j+a*h+i-h-n*k)%100;
            for( ; ++FORcnt[28]%5 ; )
            {
               
               switch( ++SWcnt[9]%3 )
               {

               case 1:
               {
                  m += (k*n-f+c-g+m+f)%100;
                  j += (h-a-b-f*h)%100;
                  c -= (j+f*n*g-l*m-e-l+g+a+d)%100;
                  k += (b+h-i+b+f+c-b-c-k-b-c-c*l-i)%100;
               }
               break;

               case 2:
               {
                  n += (g+a+g+b*i)%100;
                  c += (k-g-k-l*k+l-j-e-j*d*e*g-l*k)%100;
                  g += (e+h+j-d-j-n-f*a-e+n+i-b)%100;
                  k -= (l*g+f-j-c+g*b-m*n*n)%100;
                  a += (n+n-c-c)%100;
                  c -= (k+a-i+k)%100;
               }
               break;

               default:
               {
                  l += (n+a+l-f+h+m-m*g*c*g+c*l+g)%100;
                  b  = (f*i-h-k+a*m-c-f+f-i-m)%100;
                  k -= (m-k+h+a-i+n)%100;
                  j += (b-n+n*d*j+l+l*m-a-l-c+a-g)%100;
                  h += (i*l+g*j+h*d-f+j)%100;
               }
               }

               if( ++IFcnt[14]%10 )
               {
                  j += (l+l*g+d+a+a-a+m)%100;
               }
               if( ++IFEcnt[18]%2 )
               {
                  c += (c+f)%100;
                  h -= (a+f+k+l)%100;
                  j -= (a-m)%100;
                  m -= (l+g+e-b+e-e*m+h+j-k-l-l-k-h)%100;
                  c -= (n*n-g+m)%100;
               }
               else
               {
                  i += (h-f+h*h+d+a-c+i)%100;
                  j += (i-k+d+i+b-f-i+g*f+j)%100;
               }
               while( ++WHILEcnt[18]%5 )
               {
                  l -= (k+l*l)%100;
                  g += (c-h*f+a*l+k)%100;
                  f += (g-i*i-c+l*l+k+h-b*e-j+c+g)%100;
                  n += (m*f+n-i-n+i+c)%100;
               }
               do
               {
                  l += (e+l-f+k+f-j)%100;
                  l -= (e+m+j-k-n-e)%100;
                  j -= (e*e*a*b*a*m+c+j+j+n-f-f)%100;
                  m += (a+k-c)%100;
                  k -= (h-n-a+h+m-f-n)%100;
                  f += (a*d+g*l+n-h*l+j+b-i*j+i+e)%100;
               } while( ++DOcnt[19]%5 );
            }
            for( ; ++FORcnt[30]%5 ; )
            {
               for( ; ++FORcnt[29]%5 ; )
               {
                  e += (i*d)%100;
                  f -= (k+i+c-k-j*j-a+d+a*f*n+d*a-c)%100;
                  a -= (d-g-l-h*a+b+i-l)%100;
               }
               if( ++IFEcnt[19]%2 )
               {
                  a += (g-k-a-l-e-l-m)%100;
                  h -= (i+e-d-f*b+j+k)%100;
                  i += (k+d-b+d*h-g+d*n+d+n-a)%100;
                  g -= (e+k*j-f+b+l*c+c+c-h)%100;
               }
               else
               {
                  a += (d-i*h+a+a-c*m)%100;
                  e -= (h*b*h*j-h-m-n*j-l-f-e-c+b)%100;
                  e += (b+b-c+n+n)%100;
                  g  = (b+a-d+i*h)%100;
                  b += (j-b-j)%100;
               }
               while( ++WHILEcnt[19]%5 )
               {
                  a += (f-e-d)%100;
                  b -= (e+k+l+d-n*n-e+c+j*k+m)%100;
                  h += (n-j-d*h)%100;
                  e -= (b+m-g+n-e*d-k*h+g+a-a-k)%100;
                  c -= (f+b)%100;
                  c += (c+h+c-m-i+d)%100;
               }
               d += (k+i)%100;
               d += (l*j)%100;
            }
         } while( ++DOcnt[18]%5 );
         h -= (l*e+e-d-m+e-l-h+e+c-c+i-c*e)%100;
         h += (k+g*m+a-d)%100;
         m += (b-h+l-e+a+c*k)%100;
         e -= (e+g-d*c*h)%100;
      }
      k += (j+f-d-l-g*k-c*a-n-e+i)%100;
      b += (k-i)%100;
      c -= (h+i*a-g+m-h+l-n-g-a-b-a+j*j)%100;
      k += (d-f)%100;
      m += (l-j-h*h*k-l-d+a+c+f-k*g-g)%100;
   }
   l  = (h+e-h*a+f+m*a-j-b-e)%100;
   g -= (g-c-l+e-h)%100;
   j  = (l-a-a+g*a+m-e*j+e)%100;
   d -= (e*i+e*f-g)%100;
   g += (c*b+a-m)%100;
   m -= (j-e+g+k+a-k+h-d*g+m+g+d+e)%100;
   d += (m+l+k+j-f+n-c*j+i-b+k-c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F10(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      if( ++IFcnt[16]%10 )
      {
         f -= (l-h+e-e+f-e*g+m)%100;
         for( ; ++FORcnt[33]%5 ; )
         {
            
            switch( ++SWcnt[10]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[21]%2 )
               {
                  f += (e-f+e*n+f-l+j+f+m*n+i*f+n-e)%100;
                  d -= (c+l-b-n-h-e-h)%100;
                  k  = (g*h-m*g)%100;
                  n += (b*m-d-i+l*c*j*d)%100;
                  c += (i-j*h-h+l-b-f+n-g+e)%100;
               }
               else
               {
                  j  = (l*k*a+j-l-j-g+a-d+j-d)%100;
                  f += (a*k-i-k+f)%100;
                  h += (b+k)%100;
               }
               while( ++WHILEcnt[21]%5 )
               {
                  l += (e+c)%100;
                  e -= (g-b*i-i-c+c-f*i-a-j*k+k)%100;
                  j  = (c-g+l-j-e-h+d+g-j*a-i-m-b-e)%100;
                  g += (d+h+c+d-c-k*c+j-b+h+c-c)%100;
               }
               do
               {
                  j += (j*g-l+a-j*b+i+b*g+e)%100;
                  m  = (j-e+g-c-f+n-d+g+g-j*b*c-n-k)%100;
                  f += (m*g*i+l-c+n+e+g+a+c-l*g-n-n)%100;
                  n += (e+f+d-n*l+g-h-c)%100;
                  k -= (b+a+a+k*j+e-g-m+h+h-f-k+i-b)%100;
                  l -= (j*a+n-e+n-k-a+j+a-j)%100;
               } while( ++DOcnt[21]%5 );
               for( ; ++FORcnt[31]%5 ; )
               {
                  f -= (l+j*n*h+n+h-e+m-g+m)%100;
                  e -= (d*j+c-j-a+d*j-g+j+n+d+a-f)%100;
                  g  = (h-k-e-j-m+a*m-f)%100;
                  h += (k+c)%100;
                  j += (a+j*k-c-e+l)%100;
               }
               if( ++IFcnt[15]%10 )
               {
                  m += (k*f)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[32]%5 ; )
               {
                  e -= (n+m)%100;
                  g -= (g-b+g*b+c+n+i*h)%100;
                  b += (a*j+j-i+h)%100;
                  c += (l-l-i+c-n+n+n)%100;
                  f  = (a+h+c)%100;
               }
               if( ++IFEcnt[22]%2 )
               {
                  m -= (m*c+i+n*i*h-h+k+f-b-f)%100;
                  i -= (d+l*m-g-n)%100;
                  n -= (b+n)%100;
                  d += (n*i+c-g-c-m+h+m-i+a*m*l)%100;
                  a -= (n-n*l+e+k+l-e+m+b)%100;
                  l -= (b*i*h+f-m-n-g*i*g-d*h)%100;
               }
               else
               {
                  j += (b*h)%100;
                  h -= (h-e*i*h+c+l-c-d+k+d-g-i-b*g)%100;
                  f += (e+m*k-n*g)%100;
                  h += (n*j+i-e+h-j+k)%100;
               }
            }
            break;

            default:
            {
               while( ++WHILEcnt[22]%5 )
               {
                  d -= (c+i-j+e*c-m-d+e+m)%100;
                  a += (i*i+e*n-i-h*e+a*h)%100;
                  m  = (e-h-c-l-h)%100;
               }
               do
               {
                  i += (d+j+n-c+g)%100;
                  l += (k-j+b+e-d)%100;
                  e += (n+m+l+f-e-g-m+k+g)%100;
                  j -= (l-e*c+h+m*m*i-b-d+m+a+j-d+d)%100;
                  j -= (c*b-d-f*a-e-i+g+h+c-m)%100;
               } while( ++DOcnt[22]%5 );
               c -= (f+b+l-i-l*i-h+j)%100;
               d += (f+m+j*e)%100;
               j -= (e*a+c+c-k)%100;
            }
            }

            f += (c+j+m+g)%100;
            f -= (d*c+k-b-c+c-h+i+d+b+f-a+g-m)%100;
            j += (m-n+i+b*d-a-m-a-n+i)%100;
            j -= (j-b*l-c*k+b*l+n+l+m)%100;
            a += (b-j-e+k-a-e+g*l-h-b-f*n)%100;
         }
         g -= (i+h*a+e*j)%100;
         l += (f-l*e-n)%100;
      }
      n -= (e+n+k*j-a+m)%100;
      c -= (k-g)%100;
      j -= (c-j+f-c+l+l+f-m+n+h*n*l*e*c)%100;
      m += (e*d*h+e)%100;
   } while( ++DOcnt[20]%5 );
   l -= (b-n*n)%100;
   l += (d-l*h+g*n+b-d)%100;
   i += (g+m*i+e-b-k*c+d*m-e)%100;
   m -= (i*g-h-h*a+c+k-m+e-m-a-k*a)%100;
   a  = (b+k-n-i-n+a*e)%100;
   a += (d-k)%100;
   m += (k+l*j+h+n-l-e-d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F11(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[37]%5 ; )
   {
      
      switch( ++SWcnt[11]%3 )
      {

      case 1:
      {
         if( ++IFcnt[18]%10 )
         {
            if( ++IFEcnt[24]%2 )
            {
               while( ++WHILEcnt[24]%5 )
               {
                  b -= (c-e*a+m*m+g+c-b+e*b)%100;
                  i += (m+b*i+h-h-h-e)%100;
                  k -= (e+c+c*m-j+g-a*j)%100;
                  e -= (k-g*j-f-i*e+l*g*n+n+e+c+g)%100;
                  a += (k-i+f+a-b+j*a-j-n+l)%100;
               }
               do
               {
                  c -= (n-k-b*b-d-a-e+c-m-d)%100;
               } while( ++DOcnt[24]%5 );
               if( ++IFcnt[17]%10 )
               {
                  b += (a+k*i-j*k)%100;
                  c += (j*d+d-c-j-n-a+j-k*g)%100;
               }
               h -= (d+l*k+f)%100;
               for( ; ++FORcnt[36]%5 ; )
               {
                  k += (d-k-i)%100;
                  j -= (f*i-l+l+k*j-b-b-g*g-f-m*k)%100;
                  g += (m*b+h-l+b-k*h-a*a*j*g-m)%100;
                  i -= (f-i+b*j*i-d+c)%100;
                  a += (l-h-i-k-g+m*k-d+n*i*k+e*g)%100;
               }
               
               switch( ++SWcnt[12]%3 )
               {

               case 1:
               {
                  h += (h-e+d+b-f+g*m-m+e+a+h+m-i)%100;
                  l -= (j*n-b+k+b*m+k+e+n)%100;
                  c += (a+l+f*g-m-i-f-m*d*h+k*h)%100;
                  n -= (d-e-l+n+f+l+n+n+l*h-h-j+j)%100;
               }
               break;

               case 2:
               {
                  e += (j+b)%100;
                  b -= (i-j)%100;
                  c -= (n+b+b+m*f+g+l-l-a+i+h)%100;
                  e -= (a-n-e)%100;
                  j -= (h+g-f+d+f+a-h)%100;
                  d += (g*d)%100;
               }
               break;

               default:
               {
                  k -= (g+n*n-n+a)%100;
                  i -= (h+e+i+c-l-a-l-n)%100;
                  f += (i+f-f*a+a+l-d*a+b-g)%100;
                  b += (m-n-f-d+a+i-c-c+j)%100;
                  i += (a*k-e+n+f-c*b*n-n+h)%100;
               }
               }

            }
            else
            {
               while( ++WHILEcnt[23]%5 )
               {
                  d += (h-l-e-f-m+i+i)%100;
                  j -= (k+g-c-a*m)%100;
                  m += (g*h)%100;
                  f += (b*m-m+e-n-g-e+l)%100;
               }
               do
               {
                  a -= (j+h*g-f+k-m)%100;
                  k += (d*l+h-e-d+d*g*d-a*h-i-g)%100;
                  i -= (b-g)%100;
                  l += (c-l*l+m-h-k+c*a+k)%100;
                  j += (l+j+j+a-g*d*l*k)%100;
                  g += (k-j*i*h-d+l*i*i-m+c-c+n+l)%100;
               } while( ++DOcnt[23]%5 );
               for( ; ++FORcnt[34]%5 ; )
               {
                  j += (h+a)%100;
                  a += (e+f-e-h-l+i-g+m-g-l-n*k*n-g)%100;
                  h += (k+f-h+e+i*b)%100;
                  g -= (d+f-j-h+m-n*c+c+g-i-h)%100;
                  e += (f*d+l+j+a*d-e-l)%100;
               }
               for( ; ++FORcnt[35]%5 ; )
               {
                  g += (d+b-l+a+k+a*f-a*j+c*h-l)%100;
                  b  = (e+e*i*m-e*c+i)%100;
                  f -= (d-i+f-l-m*h+l+j+c)%100;
               }
               if( ++IFEcnt[23]%2 )
               {
                  a += (i+d-l-e+f-c)%100;
                  k += (c*e+a+i-c-c)%100;
                  c += (e+m)%100;
                  n -= (n+f+j+e*g+f-i-d+l)%100;
               }
               else
               {
                  d -= (f-n)%100;
                  g  = (h-l+h*e*f*h+g-g*c+g-h+e+c+f)%100;
                  d  = (i*l-f+b-e-h+c+m+l)%100;
                  l -= (b+n*k+j)%100;
                  e  = (i-e*c-i*d-c)%100;
               }
            }
            n += (m+e*j-m+n+d+h-e-f-n+j-i)%100;
            k += (d+l)%100;
            m += (k-k+e*c-j)%100;
            d += (c+b+c-l)%100;
         }
         e  = (n-l-d-b-m+i+j+m-g+j-b)%100;
         l -= (j+k+k-k+n+a+c+n-b-k+i-d*b+j)%100;
         l += (f+a*e+h+m*n+f+g*l-l-i)%100;
         e -= (i+k+c)%100;
         l -= (h*b+n*l)%100;
      }
      break;

      case 2:
      {
         i  = (h+n-c-n-m*i+h*k+g-e+k-e+d-h)%100;
         f += (g-h+j-e-c+a-f)%100;
         m -= (g+f-h-e-l-l+m-c+k)%100;
      }
      break;

      default:
      {
         m -= (l+k)%100;
         n  = (d-e)%100;
         k -= (h-a-k*h-j-g*b*d)%100;
         c -= (d-b)%100;
         l += (j-g-c-e*c+a*e-l+n*f*i*i)%100;
      }
      }

      g += (b+m+c+c+h+k-f-l+e+l)%100;
      f += (h-b)%100;
      m += (n-i+a-d*i*i*k-c-d*k)%100;
   }
   a  = (f-c+m*b*b-n+e+b)%100;
   g  = (n-g)%100;
   k -= (k-f-m)%100;
   k -= (i-l-g+l*k-a-i+l-c-h-g+g)%100;
   b += (e+a+e-g*h+h+i-c)%100;
   j += (k*g)%100;
   m -= (e-e+m+h*m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F12(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[27]%2 )
   {
      i += (j+c+l-c)%100;
      d -= (k+k-m*m+c+m*j-d)%100;
      g -= (g*k-i*d+m-d-c)%100;
      b += (d-i+j*k*n+m*j+e*g*m)%100;
      n -= (h-l+b)%100;
   }
   else
   {
      while( ++WHILEcnt[26]%5 )
      {
         do
         {
            for( ; ++FORcnt[39]%5 ; )
            {
               if( ++IFcnt[19]%10 )
               {
                  a  = (f+n*k-e-b-c+m-n)%100;
                  m -= (f-e+c-k-i-j+j)%100;
                  b += (c+k-l*b+l+l-m-f-c+c+c-j*d*h)%100;
                  b -= (b*j-i*c-g-n)%100;
               }
               for( ; ++FORcnt[38]%5 ; )
               {
                  j -= (f-e+g-c-a+n+g)%100;
                  e -= (j*m*l-l-j+m+a-d-j+l+n-e+e*k)%100;
                  h -= (i-j-c-e-a*d+k+c-c-d*f)%100;
                  j += (g+n-k+e+b+d*g-d-c-c-f)%100;
                  k -= (b+b+c-d+f+b+d+j+a)%100;
                  j += (g-n)%100;
               }
               if( ++IFEcnt[25]%2 )
               {
                  e -= (e*n-n+h+m+k+e*j-e+m)%100;
                  d += (n-e-l*n+a-b-b)%100;
                  b -= (b-f-c-d+f+n-g-c-d-e-h-n+f+c)%100;
               }
               else
               {
                  b += (l+m+g-c+l)%100;
                  e += (m+b+i-l*h+g-l-b+h)%100;
                  h  = (h+e*e+m-n)%100;
                  g -= (n+k+d-c+e+l-m*e+d+h+i-k)%100;
                  k += (g*g-f-k-d*g+j*a+k*f+n)%100;
               }
               while( ++WHILEcnt[25]%5 )
               {
                  g += (j-n)%100;
                  l -= (a-d*b*l-k*n+h-n+k+f)%100;
                  k += (g-l+m+k+b-l)%100;
                  j += (e+g-c-m)%100;
                  j -= (a+l+c*m+e*a+g+m-n*a-f)%100;
               }
               do
               {
                  a += (j-k-f+n-n-j)%100;
                  g -= (n+c+g-k-h-e+d-b*g-c+j*n-n)%100;
                  i -= (e*d-h*b)%100;
                  h  = (c+g+f-k+c)%100;
               } while( ++DOcnt[26]%5 );
            }
            l -= (f*h-f*n)%100;
            for( ; ++FORcnt[40]%5 ; )
            {
               
               switch( ++SWcnt[13]%3 )
               {

               case 1:
               {
                  f += (g+f-l-f+b+j+b)%100;
                  a += (e-f+l+a*d)%100;
                  k += (n+m-b-n)%100;
                  d -= (l+a+j+n-n-f-e+c+c+g-b-n-d+e)%100;
                  c -= (h*f+n-n-d)%100;
               }
               break;

               case 2:
               {
                  b += (d-c*l+g+m)%100;
               }
               break;

               default:
               {
                  c -= (m-d*g+h-n)%100;
                  e -= (g-m+c+a+e)%100;
               }
               }

               if( ++IFcnt[20]%10 )
               {
                  l  = (h*g-n+b-k+e+j)%100;
                  f -= (n+b-j*g*n-b+g*l-f-m-h)%100;
                  k += (a+a+h+c+g)%100;
                  n += (k+e-k+a*d+e+c)%100;
                  e -= (l-a*l*a+m*h-i*k)%100;
               }
               if( ++IFEcnt[26]%2 )
               {
                  j -= (n+g*a-b-f-g-e-m+e*h+n)%100;
                  d += (a*n)%100;
                  h += (g+m*j-g)%100;
                  e -= (d+j+a-c+l+d+j-k)%100;
                  j += (m+b-j+d+m+e-b)%100;
                  d += (c-g*g-h+n*b+l-d-f-c+d-c)%100;
               }
               else
               {
                  l  = (a*k*m-n+n+d+h*d+e-g+k-e)%100;
                  c -= (d-a)%100;
                  j += (l+m)%100;
                  g -= (a*i+c-f)%100;
               }
               b -= (c+b+b+m)%100;
               b -= (b-d-l+i)%100;
               m += (k*m*e*e-m-m+l-d-j)%100;
            }
            e += (b-n-h-a*l-h-k-a+c)%100;
            l  = (m-f-c+d-l-m+n+n*g-g-a*l-c)%100;
         } while( ++DOcnt[25]%5 );
         m -= (j*n)%100;
         n -= (c*c)%100;
         c += (m*e+d-n*a+d+d*d*j*e)%100;
         a -= (h-f+j*i-i-f*k+e*l+f-k)%100;
         c -= (m+f+n*n*g+b-n-h+f+j+f+b)%100;
      }
      h += (d-h*c+i-c)%100;
      e += (k+c+k-l)%100;
      n -= (f+h-a*g+e)%100;
   }
   k -= (c+l*e-a+h-k+c+j+j)%100;
   l -= (h+e)%100;
   c -= (j+k-c+b*f)%100;
   f += (l*n+h-c-h)%100;
   k -= (c+m)%100;
   m += (g-d-g-i+n+e+n)%100;
   e  = (j-d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F13(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[29]%5 )
   {
      do
      {
         for( ; ++FORcnt[43]%5 ; )
         {
            for( ; ++FORcnt[42]%5 ; )
            {
               if( ++IFEcnt[28]%2 )
               {
                  n -= (e+j)%100;
                  e -= (l-i*j-d*a*h-n+j)%100;
                  n += (d*n)%100;
                  g += (g+m*g*k-f+m+j+h-j)%100;
                  j -= (a-k*l+k+j)%100;
               }
               else
               {
                  l -= (f-f+j*b*i+e-c)%100;
                  f  = (j+g+l+n-l+g*m-f)%100;
                  m  = (m-a-i-h-j-j)%100;
                  g += (i*i+n-b+b+k+b+a-n+l)%100;
                  m += (d-h+n+f*k+j)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  d -= (n+j)%100;
                  i -= (k+h-h-a+n-a+m-e+e)%100;
                  e += (m+h*h+j-c-j-b+b)%100;
                  d += (k+a-m)%100;
               }
               do
               {
                  n += (e*l-m-n)%100;
                  e += (b-j+j+e+k-k+i+e+g-c-k*f-b-e)%100;
                  j -= (n*l)%100;
                  d  = (i-h*i)%100;
                  i -= (j+g*c-d-n+l-c-l+h*c)%100;
                  b  = (i-g-n+d*h*j+l-e-h*j+c-e+m)%100;
               } while( ++DOcnt[28]%5 );
               if( ++IFcnt[21]%10 )
               {
                  i += (f+k+b+d)%100;
                  h -= (b+e-d*k)%100;
                  b -= (f*h+f-k+a+n-b-h)%100;
                  m += (g+i-h*e-n-d-b)%100;
                  g += (d+i+k)%100;
               }
               f += (g+c)%100;
               for( ; ++FORcnt[41]%5 ; )
               {
                  j += (i+m+f*b-m+l)%100;
                  b -= (m+j*f-m*e-b)%100;
                  k -= (b-g+j-j+m+e+l+n+l+e*n)%100;
               }
            }
            
            switch( ++SWcnt[14]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[29]%2 )
               {
                  c  = (m+l+h+e+k+n*a-b)%100;
                  g -= (k-g+m*n+g-b-k*h+b+h+c-c+i-k)%100;
                  n += (g-a)%100;
                  i -= (i+l-h*d*m-a)%100;
                  b += (h+n+n)%100;
                  k += (l-h-h+i*b-a+d-i)%100;
               }
               else
               {
                  b -= (l+c-a-c-k+f+c+n-d)%100;
                  g += (m-c-l-i+g+b+f-g*k-c-c)%100;
                  n += (d+k*f+d-a+f-h+i-i-k-m)%100;
                  k -= (c*e-c-b*m-d+f+m*m+n-f+n)%100;
               }
               while( ++WHILEcnt[28]%5 )
               {
                  e -= (b+g+h-n*i+g+e-h+k*e)%100;
                  c += (e+k*g-k+m*b-f*c-k-a)%100;
                  j  = (m-c-b*a+g-g)%100;
                  b += (f*n+k-k-d-i-m-i*c*d-m-g+d)%100;
                  i  = (b-l-h)%100;
               }
               e += (d-f-m+n-m-g*h-h*j*n-a+f)%100;
               b -= (c*e-m+d)%100;
               f += (c-m-n)%100;
            }
            break;

            case 2:
            {
               i += (c-f-i+j-a+f+b-a*d+e-n-f+k-k)%100;
            }
            break;

            default:
            {
               l += (n-c-l-c+n-j+f-n)%100;
               b -= (e-j*a-j+l+h*e*l*g+g-a-h*j)%100;
            }
            }

            a -= (l-i*h-b+b*l-a+i-a)%100;
            j += (n-d+c+a-h-c-h-n-l+m-n)%100;
         }
         l -= (e-i+b*j)%100;
         l += (c-m)%100;
         m -= (h-k-j)%100;
         n += (a*k-c-a+g-g)%100;
      } while( ++DOcnt[27]%5 );
      e += (i+b-n-f+a-k)%100;
      e += (g+c*a-i*l+d*g-k)%100;
   }
   n -= (l-h+i-b-e+e+a+g+l+l)%100;
   l += (n-h+m+g*b-m+a+a*c*b*g)%100;
   n += (i+i-m-l+c-n-i*b+i)%100;
   g -= (f+b-d)%100;
   a += (c-h-h*k-a*g-k-a)%100;
   m += (d-h-e)%100;
   m -= (e-b-j*e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F14(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      for( ; ++FORcnt[47]%5 ; )
      {
         if( ++IFcnt[23]%10 )
         {
            for( ; ++FORcnt[45]%5 ; )
            {
               if( ++IFEcnt[30]%2 )
               {
                  c += (f+b*f)%100;
                  j += (f+e+b+k-e)%100;
                  j += (k-n+h-d-k-k-l-g)%100;
                  c -= (d*b)%100;
                  d  = (k+e)%100;
               }
               else
               {
                  n -= (b+k+c-l-k*e+e+f*a*i-e+f*f+m)%100;
                  j += (a-n-n+g-l+a*j-a-a+k-k)%100;
                  c += (e-a*d+g+d+e+g+e*k)%100;
               }
               while( ++WHILEcnt[30]%5 )
               {
                  h += (c*g-d+k-g+m+m-i)%100;
                  j -= (e+b-e-c-n+d*f+m+b-i+n-l)%100;
                  f -= (c-c-a+h-n+k-n-i-h-n+b+f-a)%100;
                  l -= (m+h-d+e-d+j-e*b+g-a-i)%100;
               }
               do
               {
                  n -= (k+e)%100;
                  e -= (c-n+a*h+a+n+k+e-g+n-b+c)%100;
                  b += (j+e*f*f+e-n-k+d)%100;
                  b -= (d+e-m-h+d-k+g*m+b-g-l-j+l)%100;
                  b -= (n-b+m-n+j-g-c+k-d-j)%100;
                  e -= (d+m+l-a*n-j+g-j-n-m)%100;
               } while( ++DOcnt[30]%5 );
               d -= (f+i*e-j-d)%100;
               for( ; ++FORcnt[44]%5 ; )
               {
                  m += (n+a-f*a-a+g-j*m-l-f*c+n-h)%100;
                  j += (d+c*c+h-i+j)%100;
                  f -= (h-n-l)%100;
                  a  = (j-g-h*g-k*c*d+l+n-k)%100;
                  n -= (m-g)%100;
               }
            }
            
            switch( ++SWcnt[15]%4 )
            {

            case 1:
            {
               if( ++IFcnt[22]%10 )
               {
                  j -= (j-g+m-a+n)%100;
                  m += (i+h-m-e*a*c-l-d-m-l)%100;
                  l += (j+d+c+d+f-k-d+d*a*n+m)%100;
                  b -= (k-d-f+i+m+e+c+f+j-b)%100;
               }
               if( ++IFEcnt[31]%2 )
               {
                  k -= (c*a-a*m)%100;
                  j -= (i*m-b+d-g-g+k-c-l*f+n-k+j)%100;
                  g -= (j-g-m)%100;
                  c -= (c+h-f-m-i-j+a-f*a)%100;
                  m += (d*k+b*j*h)%100;
               }
               else
               {
                  h += (d-d+b+j-i-c+a+h+n+i+k+d)%100;
                  m += (e*a+k+b-a)%100;
                  l -= (a-j)%100;
                  j += (n-c+f-a+k)%100;
                  d -= (h+l-m-m-m)%100;
                  d += (f+g+n-j)%100;
               }
               while( ++WHILEcnt[31]%5 )
               {
                  j -= (n-m-c-h+d+k)%100;
                  n += (b-e-m+k-k-c+c-g+g-h+d+e)%100;
                  e += (j+d*c)%100;
               }
               do
               {
                  k += (d+m*k-n-g-h-b+b)%100;
                  l -= (k*f*b*c+n+i-k-a)%100;
                  b += (e-n*g+k+i-c-i-b*j-h)%100;
                  g -= (n*e+f+n*i*i+h-m-e-b*k)%100;
                  n += (i+g-d-b*m-g)%100;
               } while( ++DOcnt[31]%5 );
               for( ; ++FORcnt[46]%5 ; )
               {
                  j -= (l+d-d-m-g*j*f-l*h+j*n)%100;
                  h += (f+k+e+i+b*f+i+b-n)%100;
                  k += (c-g-c+c+c)%100;
                  k  = (f-l-d-g-h-e-k+e)%100;
               }
            }
            break;

            case 2:
            {
               m += (j+g+g+m-i-f-g*d+d)%100;
               n += (m+k*j*j+d)%100;
               n  = (d+f-m*m+f)%100;
               f += (m+l*a+j+a*i)%100;
               e -= (b+c)%100;
               d += (m+l)%100;
            }
            break;

            case 3:
            {
               a  = (j+h-h-j-d*n+l+j-h*e+d*c+i)%100;
               j -= (d*n+h)%100;
               l  = (k-n+d+b)%100;
               i += (j-g+j-j-f*d+f+n*k+f*j-j)%100;
               b -= (b+d-h+n*b-f+n+k+k*g*i+i+e-a)%100;
            }
            break;

            default:
            {
               e += (j+j-j+k+k+d+n-a-g+m+l)%100;
            }
            }

            m -= (b-g+m)%100;
            d += (h-a+b-l-a)%100;
            h -= (d+m*h)%100;
            h += (k-c-e-k+k+l+l-m+f)%100;
         }
         k += (c-l*e-f-n+m-l+n+k+c+i-f-k)%100;
         d -= (m-b*n-c-n*d+b*h-i-a-h-n+j*j)%100;
         b -= (n-d-n+l-a)%100;
      }
      j += (f*j-f-e+f*l+h-m-k+j-m)%100;
      b += (b+m-g-f+e-g+l+j*d+k+f)%100;
      h += (g-g*m*b-d-k+m+i*d+l+f+d-e-b)%100;
      k -= (k+c+d-a-n+k+h-b)%100;
   } while( ++DOcnt[29]%5 );
   b -= (i-m)%100;
   h -= (h+n*l+a)%100;
   l -= (m+j)%100;
   e += (h+d-e+k-g)%100;
   d -= (b*n+f*c+h+n+a-j+g+i)%100;
   a -= (a+f+h*h+h+b)%100;
   g -= (l-g+i*g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F15(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[50]%5 ; )
   {
      if( ++IFEcnt[33]%2 )
      {
         c += (f-l)%100;
         g += (b-b-d*m-h-m-b)%100;
         l -= (c-e*a-e*e-c*d)%100;
         g += (c*h)%100;
         j += (n+e*d+k)%100;
      }
      else
      {
         while( ++WHILEcnt[33]%5 )
         {
            do
            {
               if( ++IFcnt[24]%10 )
               {
                  h -= (l-j+m+l+f)%100;
                  g += (d*b*c+b+a+m-l-l-i+m+n+b-h)%100;
                  e -= (a-d+k-f+i+d-n*n-f+k)%100;
                  b += (i-b*m*c*k+f-k*b-e*k+e+l-e-c)%100;
                  a -= (f-a+e-b+d+l-b*j-f-d)%100;
               }
               e += (c+a-m-k+e+d-h*e)%100;
               for( ; ++FORcnt[48]%5 ; )
               {
                  c  = (c-n-l-m-f+b+l*b*g)%100;
                  d -= (a+j*i-n-m+k)%100;
                  a -= (c+d-c+b*d-j+h-f)%100;
               }
               
               switch( ++SWcnt[16]%3 )
               {

               case 1:
               {
                  l += (c*f+d)%100;
                  m += (f*c+e)%100;
                  c  = (d-h-g-k+a+a+m-m-d*d)%100;
                  b += (i*k+a+l-g-g-c+h-m*m-b+n+j)%100;
                  l -= (c*c+g*c)%100;
               }
               break;

               case 2:
               {
                  l += (c-k-h+m-n)%100;
                  f += (h-g+g-l-a-f-b)%100;
                  i -= (e-a-l-d+c+g+m+d+e-c)%100;
                  f += (g+l*f-j*i)%100;
               }
               break;

               default:
               {
                  i += (l+m-d*a-e+n-f+m-d+h+m*i-n+m)%100;
                  e += (g-h-a+j-l-d)%100;
                  e -= (e+i+h*c+j-a-n+f-g)%100;
                  a += (j*e*e-j*b-k+i-c-c*h)%100;
                  a -= (e-a-c+f+g-l-e+g+i-b-f)%100;
                  d += (g*l+m+g-l+c+m+k-h+f+f+c)%100;
               }
               }

               if( ++IFEcnt[32]%2 )
               {
                  c += (b-a+c+m+e+e-i-g*a)%100;
                  a -= (f-k-e-d-e-f-k*f*g)%100;
                  n -= (j-d+d+n-e)%100;
                  c += (e+e*m-m*j)%100;
                  n -= (k-b+l-b)%100;
               }
               else
               {
                  m -= (m-c+m*a-c+a*b-l-k-n*e*d)%100;
                  g += (j+b)%100;
                  a -= (f*l-k-n+i+k)%100;
                  e += (a-e-b-h+e*i+f+g)%100;
                  b -= (n-d)%100;
               }
               while( ++WHILEcnt[32]%5 )
               {
                  c -= (k-g+f-e+j-m+g*i)%100;
                  i -= (g+n-e-h)%100;
                  k += (k*e-m-c-k-m+k-i)%100;
                  f  = (e+g+f+c-d+k)%100;
               }
            } while( ++DOcnt[32]%5 );
            do
            {
               for( ; ++FORcnt[49]%5 ; )
               {
                  m -= (n+k-h-d+l+i-k-i*i*f-a+c-g+l)%100;
                  f += (m+a+d-f-l+k*l-l-i*i)%100;
                  c  = (a+e*g)%100;
                  k  = (j-e-n)%100;
                  b -= (e*c+b*f*n*k*j+n*j-k-e+j-m+f)%100;
               }
               if( ++IFcnt[25]%10 )
               {
                  i += (d-k-i+f-e+i+j+a+d*e-l+g-b)%100;
                  k -= (l+l-e+n-b+b+j*f*d+b+i+f)%100;
                  f += (g+d*c*a*d-b*l*a+f-h)%100;
               }
               e += (e+i+f-m+a+d*l-h*l+f)%100;
               c += (j-j*n-a+d+k+i+h-j-b-g-i+j*k)%100;
               k -= (k-j+n-h-c-l-g)%100;
               f += (f-l-c-f-a+f-d+b*e+c*j)%100;
            } while( ++DOcnt[33]%5 );
            k  = (b-j*h-m+i+d+i-n*e-d-j+h+n+a)%100;
            d += (f+f+b*b*d-g+f-b+e-d-c+n+k-d)%100;
         }
         j -= (b+g+h-m+h+d*l-m-i-k-l)%100;
         d -= (i+l+c)%100;
         b -= (e-c*i+h-f+n)%100;
         b -= (a*b+g)%100;
      }
      m -= (h+f*j+i*f-d+l)%100;
   }
   k -= (b-j+h-c+l*k*e*n+l+h+m+d*k-b)%100;
   a -= (m-a+d-d*e*b+e+c+k-j)%100;
   c -= (d+f*b+f+c-d+n-g-n)%100;
   c  = (k+l-h-l)%100;
   c += (e-n+a+b-k)%100;
   e += (g-j+d+l-l-b-j-e-j-e)%100;
   i += (d+c-h-j+b*m-d+e-a+d+k-i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<38; I++) IFcnt[I]   =0;
   for(I=0; I<51; I++) IFEcnt[I]  =0;
   for(I=0; I<25; I++) SWcnt[I]   =0;
   for(I=0; I<51; I++) WHILEcnt[I]=0;
   for(I=0; I<51; I++) DOcnt[I]   =0;
   for(I=0; I<76; I++) FORcnt[I]  =0;
   long int sum=0;

   sum += F1( ) ;
   sum += F2( ) ;
   sum += F3( ) ;
   sum += F4( ) ;
   sum += F5( ) ;
   sum += F6( ) ;
   sum += F7( ) ;
   sum += F8( ) ;
   sum += F9( ) ;
   sum += F10( ) ;
   sum += F11( ) ;
   sum += F12( ) ;
   sum += F13( ) ;
   sum += F14( ) ;
   sum += F15( ) ;

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      for( ; ++FORcnt[52]%5 ; )
      {
         if( ++IFEcnt[34]%2 )
         {
            i -= (i+a+c-n+g*j-j*d*a-n+m-j)%100;
            f -= (g*c*n-a*a-m)%100;
            h -= (h-i+c+j*f+n+k)%100;
            h -= (i-f-b)%100;
            k  = (b-l+h+f+c-m+i+f-j*a)%100;
         }
         else
         {
            while( ++WHILEcnt[34]%5 )
            {
               do
               {
                  l  = (f+b-f-d+i+n*l+k)%100;
               } while( ++DOcnt[34]%5 );
               j += (b-g-m)%100;
               for( ; ++FORcnt[51]%5 ; )
               {
                  n += (k-n+g-k-a-d+a+c+e-n)%100;
                  j -= (e-g-c+j*j-j-g+k+l-j-g*f+h-l)%100;
               }
               
               switch( ++SWcnt[17]%3 )
               {

               case 1:
               {
                  i += (d-f-l)%100;
                  l  = (n-d-m+n+l)%100;
                  c -= (b*k+c+c+f+a+e*b*c-k-c+h-n)%100;
                  a += (c-k+j-l+l+c+i-c+a-a)%100;
                  f += (e+c-j+d-f+c*n+d)%100;
               }
               break;

               case 2:
               {
                  g -= (i-a+e-m-i*f-m*a-e)%100;
                  c -= (j+l)%100;
                  c -= (f*d-k*j-i)%100;
                  c -= (i+e-g-d-a*e+a)%100;
               }
               break;

               default:
               {
                  f += (g+i)%100;
                  a += (a*h+i*n*d*g-f-a-f-a+a)%100;
                  e += (j-f*h-e-l-f-d-i+g-n+g-i)%100;
                  e += (g-e+c*f-a-k-e*k*d+i-d-c+a)%100;
                  m -= (d+l*f-n-d-a-f*d-l+n+b+f*e-c)%100;
                  n -= (a-m*e-h-e+k-c-h*f-c+k*e*e)%100;
               }
               }

               h += (h-f+f*m*a-i)%100;
            }
            h -= (d*a+b-f-l-e-a-b+b+i+k*g+d-e)%100;
            c += (e+k*h+b*n-f+g*k*n+n-h-a*d-k)%100;
            l -= (j-a-c-n+h*m-j+j-k+j*a+m*k)%100;
            m += (k+n+b-j)%100;
            k += (c-g-a+d*c*h+c-m)%100;
         }
         f += (h*f+h-b+e+i-h)%100;
         d += (j*c)%100;
         n += (a+f+c-h+n)%100;
      }
      i -= (g*m-g-b-d-n)%100;
      g -= (c-l+c+i+c+k-n+d-f+d-n-d)%100;
      m += (e-m*d*i+i*n-h+m*d*l-f+e+e*f)%100;
      i -= (b*l-n-c*c-d-e-k-g+a)%100;
      a += (b+e*g-b-n*h+n+i*n*h-h)%100;
      f -= (c+f*a-j+a*g)%100;
      h  = (j-m)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<26; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 26 << "   Dynamic = " << sum ;
   for(I=sum=0; I<35; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 35 << "   Dynamic = " << sum ;
   for(I=sum=0; I<18; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 18 << "   Dynamic = " << sum ;
   for(I=sum=0; I<35; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 35 << "   Dynamic = " << sum ;
   for(I=sum=0; I<35; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 35 << "   Dynamic = " << sum ;
   for(I=sum=0; I<53; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 53 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}