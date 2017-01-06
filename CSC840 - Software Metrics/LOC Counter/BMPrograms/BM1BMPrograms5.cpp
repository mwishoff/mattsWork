#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[24],IFEcnt[32],SWcnt[16],WHILEcnt[32],DOcnt[32],FORcnt[48];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         e += (j-l+f-n-a-f)%100;
         m -= (n-c+e-c-e)%100;
         f -= (k+i+l)%100;
         c += (c+e-c+j-m+d+j+m*d-a-e+g-i)%100;
         k -= (h+d)%100;
         c -= (f+d-c-l)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  l += (g+f*b+j+f+g+i-g)%100;
                  e -= (e*d)%100;
                  b += (n-a*h-b-n+m-l-c+k-m-m+i)%100;
               }
               g -= (e-l+j-k+d+a+j-g)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  m  = (i+k+d*g-c)%100;
                  k -= (d-d+b-n-b+l+f-e+a+d-m-b-h-j)%100;
                  l += (e-a-m-n)%100;
                  c += (e*j-d+l-e+b-h)%100;
                  a -= (g+i+l+b-j)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  h -= (h+m)%100;
                  c  = (i-i+a+g+f-b+k)%100;
                  b -= (a+c-i-a-e-i+g-m+n+h-d+e-d+f)%100;
                  h -= (f+c)%100;
               }
               break;

               case 2:
               {
                  e -= (m-d)%100;
                  f += (c+n+n-d-j)%100;
                  a -= (k+d-c+a*c+n*h+j-m+g)%100;
                  c += (b-a)%100;
                  d += (e+g)%100;
                  h -= (l+f+a)%100;
               }
               break;

               default:
               {
                  a += (l-n+f-g-a+k-k+j)%100;
                  f += (l-l-k-j+a*d-c*i)%100;
                  d += (e+m-c-b+b*i-b*h)%100;
                  j += (m-d+j-f+a)%100;
                  e -= (a-j*d-g+g+i-m+e-e-e-g*c-g-m)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  j += (d+k)%100;
                  l -= (n-b*e*m-a-c-f-n*b)%100;
               }
               else
               {
                  c += (j-n-j-k+c-e)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  g += (l+g-a-j+g+n*m)%100;
                  d -= (e*a*n+i)%100;
                  i -= (k-b-l+g-f*c*i-c+j)%100;
                  n -= (l*h+e+h+l*d-l-a+k-j+b+b-m-j)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  d += (f-f-f+e*h-a+m-g+d)%100;
                  a += (f*j)%100;
                  l += (h-c-n-n-g+j*h*g+f*l+j-k-b)%100;
                  j += (g-g*l-f+m*i-c*k-k+c+a-e)%100;
                  m += (a+n+i-m*g-a-l+e-a-f)%100;
                  g -= (m+c*b-g+j*f-j+j+j-g-i-i-i-g)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  l += (i*b-e-m-g-d+m*d-c+l)%100;
                  m  = (n+a-a+g+m-l)%100;
                  k -= (e-n-n*d+f-g-d-a+f)%100;
                  c += (j+m+f*d+a-j*a*n-c+j+k)%100;
                  i += (m*h*m*n-g*f)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  l += (d-j)%100;
                  g += (l*m-f-b-d+l-m+a-l)%100;
                  b -= (f+h-m-c+g-b*g+e+c-a-d)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  h += (i-k-f+l+h-g-m+i+l+i*g)%100;
                  i -= (e+j*a*d)%100;
                  a -= (j-k+d*j-f*i*j-b-e-d)%100;
                  n += (a+c-l-n*f+c-b*j+l-i)%100;
               }
               else
               {
                  i -= (h*f)%100;
                  l -= (c-b*e+e*n+l-h+n)%100;
                  h += (e+n*b-k+d-k+d*a+h-h)%100;
                  i += (c+l*e-b*f+j+l+b-l-n)%100;
                  d -= (c-m+j+m-c+b-n)%100;
               }
            }
            e += (e*d-b*b*h-m-m+l-m+c)%100;
            h -= (n+e*b-m+h)%100;
            k += (e+b-d-k-k-h-k+i+k-b+g+f*g)%100;
            b += (l+b+c+b-e-d+m+g+g+a)%100;
         }
         k += (e+i+c-k-i-f*n*k*d)%100;
         j -= (j-e-d+n-l+m*b+i+i)%100;
         f -= (d-k-m+c*f*c-i-b-i-l-h+j+k-n)%100;
      }
      n -= (a+g)%100;
      i -= (g+l-j-m-b+n-j-l+c-b)%100;
      d += (c*e)%100;
      j += (g-l+k-n-l*h)%100;
   }
   e -= (j*g+e-c+l-c*b-f*f+g)%100;
   m += (f+i*e-e-d+f*l-g+g+b-n-b)%100;
   f  = (e-i-h+e-a*l+j+e)%100;
   b += (a+a*g*h+k-d-k*e)%100;
   i -= (c-j+j+m+l*d+a)%100;
   h += (h+m+d-c+b+c-i+f-n+f+l-k-c)%100;
   a += (i+j-h+a-a*b+n*h+i+g*b-m)%100;
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
         l -= (h-i+i+k-d)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%4 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  c -= (b-i)%100;
                  e -= (e*f-j*d-f*i*e+i+h*e-i)%100;
                  c  = (k-g+k+g+k+a-k-b-i+i-j+l+e)%100;
                  f -= (c+a)%100;
                  c += (n+l+d-j+f-m+m-b*h+g+b)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  j -= (l*k+i*c+l*m-b)%100;
                  g -= (n-b+d*l-h*l-i-a+c-n-c+b+c*n)%100;
                  k -= (n*l)%100;
                  l -= (c-d-e-d*k-m-l-d+l+k)%100;
                  d -= (e-l-b)%100;
               }
               else
               {
                  l -= (g-k-j+b-a+h+j+a+c-g)%100;
                  h -= (k+m+j-g-f+e-f*h*k+n)%100;
                  b += (g+f+e-c+l*n-m-f-a+f*a+m-f)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  m += (d+n+k*e+i+f+c*l)%100;
                  d -= (d-g)%100;
                  j += (f-d)%100;
                  h += (c-b+g+m-e-n-m-f-d)%100;
               }
               do
               {
                  e += (l*j+j+j*j-i)%100;
                  b += (d-h+i-d*l)%100;
                  m += (l-a+c+m-d+a+c*f-g+j-e-k)%100;
                  a -= (d+h)%100;
                  a += (b+f)%100;
                  c += (f+a+d+k+i)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  c -= (n+l+a*l+e+h)%100;
                  b -= (f+k+a)%100;
                  d += (m-g+j+h*e+b+d)%100;
                  k -= (n+g*a+e-f-k-g*n*l*d+e)%100;
                  f += (l+n-n+l+l-c+j*i-n-m+d+n-n)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  b -= (c-i-f*n-l+k+d+e-k+i-g)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  g -= (l-n*k+l+j*n)%100;
                  l += (h+c-c+d+e+e+h-m-k+i+k-m+g+d)%100;
                  g -= (d-c-g+m-f+f-f*k*e+a-f-a)%100;
                  i += (m*i-a+n+j+k*n-b*m+l-a+j)%100;
               }
               else
               {
                  i += (h+n-h+n+m-l-h*j+k-n+n-d*l)%100;
                  c -= (m+a)%100;
                  j += (g-k*j+a*i-j-i*n*e-j+j*a*k+h)%100;
                  b += (j-f)%100;
                  g += (n-n-a+m*k*m*m+k+e+m-g)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  b += (j+c+c-j*g-c-m-j+d-g)%100;
                  g += (l-b-i+e)%100;
                  l  = (a-h*f+i+n-b+i+g)%100;
                  m  = (e*d-a+c+i*h+k*k-b+c+m)%100;
                  n -= (d+c+m-g+m*f-i-m*d-a+m-i+b*j)%100;
                  j += (l-b+k+d*e-i-d-k-c-i)%100;
               }
            }
            break;

            case 3:
            {
               do
               {
                  k += (l+m-k-h-g+d)%100;
                  k += (c+g-g-a+l-c*c-j+j-i*a+g+a)%100;
                  i += (i-m*m+l+m-b-f)%100;
               } while( ++DOcnt[4]%5 );
               m += (g*c+l*c-c+k+b+g+a+c-a+m+h-a)%100;
               g -= (m+l+d-l)%100;
               e += (c+l*m+i-b*n-j)%100;
               g += (k-i)%100;
            }
            break;

            default:
            {
               l  = (c-n-f)%100;
               b -= (d*d)%100;
               g += (m+n+g-d+j-j+g*m*c*m)%100;
               i += (g-m-j+b+j-n)%100;
               i -= (l+n*b-h-e+f-k-a+b-l)%100;
            }
            }

            n  = (l*a-b*f+i-m+c-m)%100;
            i -= (l+h*f*f*j-i*n*g+d-c+d+n+g)%100;
            k  = (j+a-b+d+k)%100;
         }
         j += (n+e+d-g+j*d-k*d-l-b-d-h+c-a)%100;
         n += (j*h*i+k*g-i+g-d*m-k+a+m+k)%100;
         j -= (e-b-f+m+a*d-i*m+i+f*c)%100;
      } while( ++DOcnt[2]%5 );
      a -= (l+a+a-c)%100;
      j -= (b-n)%100;
      b  = (j-f-j-j+n-i-b)%100;
      k -= (e+e*e+l*m*l+f+b+i+n)%100;
   }
   i -= (d*e-e-g-f+a*e*f*a+e+l+c)%100;
   b  = (l-i-a+i)%100;
   f  = (g+e-l*c-k+d+n-h*j-i)%100;
   k -= (i*b+k-i+c-g+k-c)%100;
   d += (i+e+l*a+g-j-h-d*i-h+j+n+j-b)%100;
   l -= (l*k+e*i)%100;
   a += (e+l-a+e+h*l*n+c*g+m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[4]%10 )
   {
      b += (j+f-k+a+g-d-b-b+h+l)%100;
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
                  h += (b+i-j+k-b+m+f+f+m)%100;
                  l -= (j*b+e-i-l)%100;
                  d -= (l-l+h-g-i-i-l*l*j+j-d-m+a+f)%100;
                  m -= (k+h+f-k)%100;
                  e += (l*d-g+m-n-d-c+k-k+d+h+d*n+g)%100;
               }
               else
               {
                  i -= (f+h)%100;
                  m -= (k-k+b+k-c+h+e-k+i-l+f)%100;
                  i += (a+e-l)%100;
                  d += (h+l-l)%100;
                  i += (c+b*i+k-f-i+i+j)%100;
                  e += (e-g+f+a+i-f+i-l+k-l)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  e -= (f-b+l-h*e+h+i+b)%100;
               }
               do
               {
                  g  = (k*g+i+g+b*b+d)%100;
                  i -= (g+g)%100;
               } while( ++DOcnt[6]%5 );
               k -= (f*i*e+n-d-i+d+h)%100;
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  c += (j-j+l+b+f+a*l+g-a-m-a+j-m)%100;
                  n -= (h+a-c+b*a-h-m+h-d+j+n-c+a)%100;
                  l -= (a*g-b*k-g+j*j-f-h+h-c+m-g)%100;
                  g += (l*l-n*l+b*k*l)%100;
               }
               do
               {
                  i += (b+e*g-a+d+c-a+e*i-i-m*l-a-c)%100;
                  a += (k*d-g+g-g+e)%100;
                  j -= (h-l-e-c-l)%100;
                  i -= (l+c)%100;
                  c += (m-k+m*f)%100;
                  c -= (d+b-a)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  b -= (n+m*g)%100;
                  n += (i+a)%100;
                  m += (h+e)%100;
                  k  = (k-d-f*n+n-d-k+m+j)%100;
                  k  = (k+h-e*k)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  h += (c+n+i*b*c-n-b*h)%100;
                  l -= (j+a*m+j*e-c)%100;
                  h -= (e-g-m*e+j+l)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  c += (e*f+d*d-i-b+g)%100;
                  n += (i-g-m-l+n*f-l-c+j-k-d-e-a-d)%100;
                  f += (a-n)%100;
                  j += (j-f*h+a-k*e-h+c*k-e-e)%100;
                  m += (f+g-n)%100;
               }
            }
            for( ; ++FORcnt[9]%5 ; )
            {
               
               switch( ++SWcnt[3]%3 )
               {

               case 1:
               {
                  i -= (f+h*m*n-h+l+e+b+f)%100;
                  l -= (b+d-n+c-m-l*j*a+n-j+n+f)%100;
                  i += (a-j*c-k-l)%100;
                  j -= (d+a+j-j*l*n+d-h+d*m-k+c+k)%100;
               }
               break;

               case 2:
               {
                  c += (l*d+l*m-k-c-a+g+n*f)%100;
                  c += (m+b+j+d)%100;
                  f += (e*k*c-b*b)%100;
                  c -= (b-f*h-h+b*a*b*n-d-d+l*g*c)%100;
                  a -= (a-e+i+f+m+c)%100;
                  c += (a+g-e-g-j*a-c-n)%100;
               }
               break;

               default:
               {
                  j += (j+i*e)%100;
                  a -= (d+c+b+h-n+d*a+c*c+b+e-a-f)%100;
                  n += (c*i)%100;
                  i -= (c-k*a*c-k-m*c+h)%100;
                  e += (f-f*c-e-h-f-b*i)%100;
               }
               }

               a += (i-e)%100;
               d -= (k-g-d-i-b)%100;
               e  = (b-g+d+e*l+m-f+e-g+c*d)%100;
               g += (k+i*m+e-h+e-c-c-i)%100;
            }
            k -= (a*g-j+g+n+g-f+e+i-i+k)%100;
            a -= (j-e-m-h+g)%100;
            h -= (d+l*f-f-m*j+l-d)%100;
         }
         break;

         case 2:
         {
            m -= (e+j)%100;
            l -= (d*d+i+g-e+h+j)%100;
            j += (m-d-j*c-f+k-d)%100;
         }
         break;

         default:
         {
            h -= (a*n-m*g*a-j+e+e-b+i*g*f*h+l)%100;
            c -= (b+c+n+c+g-a)%100;
            f -= (e+c*b-l-f)%100;
            c += (m-g-e+a*h+i+c)%100;
            c -= (i-i+g+n-i+b-g*f-g)%100;
         }
         }

         c -= (h*i+d+i+j+l-e+e+k+d)%100;
         k += (n-c*j)%100;
         b -= (l-j)%100;
         j -= (d-h+e*d-e*e*l)%100;
         e += (j+f*f+b-d-f+j+a)%100;
      }
      l += (a*h-a-k-l-g-b)%100;
      l -= (e-d*m+i+l*f-e+m*j*b+a)%100;
   }
   g += (g*m-i*k+g+a+a+c+k*h-c+n*k)%100;
   d += (d-a-m*i+b+i+m+h+e+m-i)%100;
   n += (i*c-h)%100;
   f += (a-l*f+b-l+a-j)%100;
   k += (k*k+h+d*k+h+i+c*n-j+b+b)%100;
   e  = (i+a+n+k*j-i*a+d+e-e+m-l+f*m)%100;
   b -= (g+k-l+h-a*a+m+h*m-i-d-n-h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F4(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[6]%10 )
   {
      if( ++IFEcnt[8]%2 )
      {
         d -= (a-a+k)%100;
         i -= (h+d+l+b)%100;
         f += (h-m+f*j-m-h-k+g*j+a-b-a+h+g)%100;
         g += (l+l*h*f)%100;
         m += (d+b)%100;
         g += (j+m+c)%100;
      }
      else
      {
         while( ++WHILEcnt[8]%5 )
         {
            do
            {
               for( ; ++FORcnt[11]%5 ; )
               {
                  f -= (j+d)%100;
                  g -= (c-m+g+n-e+d+i*g+i)%100;
                  e += (h*f)%100;
                  n  = (a*b-a+f-l+j*g-a-l+a*h-i)%100;
               }
               for( ; ++FORcnt[12]%5 ; )
               {
                  e -= (a+g)%100;
                  i += (e-m)%100;
                  j -= (b-c-l*i+k+d-l+b+d+f-d)%100;
                  h += (j+f+e+a+a+f-l-d+e+c)%100;
                  b += (n+b+a-h)%100;
                  l += (j*j)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  g += (m-a*n-c+n*a+j*f+h+j-a)%100;
                  d  = (a*e-n*a-a+g)%100;
                  b += (l-n*l-n*m-h-a+n-i-n)%100;
               }
               else
               {
                  i -= (n+m)%100;
                  i += (c*m-c*j*b+b*n+j)%100;
                  a -= (f-f+b+k-e-j)%100;
                  h += (b+i-j-m+a+n+g-n*c)%100;
                  k -= (j-n-g-m-e+g-d-c-n)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  i += (l-d)%100;
                  h -= (l-l+m+i+k+d+l)%100;
                  b -= (b*l-f-b*j*a-d-n+l-g)%100;
                  n -= (h-e+b-e+l)%100;
                  j += (h*i-i-k-k-k+e+g+m)%100;
               }
               do
               {
                  k += (m+k+a-c-j-k-h-e-c*g*n+f)%100;
                  n -= (b+c+n+g)%100;
                  l  = (m-b-m-m-n+h+b*e*k-g+h)%100;
                  g -= (c-n-d+f+g+k-e*k-k-i+l)%100;
               } while( ++DOcnt[8]%5 );
            } while( ++DOcnt[7]%5 );
            if( ++IFcnt[5]%10 )
            {
               k += (g*n+n-e+n+a+n-d-a*c-b)%100;
               for( ; ++FORcnt[13]%5 ; )
               {
                  k += (g*f-a+b-d+c-n*m-k*b+b)%100;
                  j += (i-i+k+m+g+n-d-e-e+e-a)%100;
                  n += (n-l)%100;
                  b += (c*g-g*d+i-g+a+m-l+c+k+c)%100;
                  k -= (g-a+a*n-d-k)%100;
               }
               
               switch( ++SWcnt[4]%4 )
               {

               case 1:
               {
                  l += (j-e*n-j)%100;
               }
               break;

               case 2:
               {
                  h  = (k*e+f+b*a-g-e+h+c-m-c-m-l)%100;
                  n -= (f-a-f-l-c-d+f-e-l*b+i*i*k)%100;
               }
               break;

               case 3:
               {
                  f  = (h-m-b+l)%100;
                  g  = (c-b-l-b)%100;
                  m -= (b*j-m+i+j+d*b-l*l*i+b)%100;
                  c += (a+k+e+c*b+d+k-e+n-e+j+f)%100;
                  f  = (l-m+d-k*j)%100;
               }
               break;

               default:
               {
                  k += (g+m+c-e+c-g+j*k+i-j*m)%100;
                  i  = (c*d)%100;
                  j += (n-d+f*l+f*n+l-f+n-g)%100;
                  g -= (b+b+j*m+d+k+f+l-m-n-l-k+h)%100;
               }
               }

               h += (m+m+d*b)%100;
               m -= (k+k+h-a+j+h-b+m*h)%100;
               a += (c*c)%100;
            }
            e += (f-f*f+e*d+e+i-m+c-a+f-l*c)%100;
            g += (k+j*f+b*f+m*m-c+k+h-b)%100;
            c += (j-j*a+a-g*e-j+j+k-n+m)%100;
         }
         k += (m-d+m*c*i-c+f+i-i*b+l*d-g)%100;
         i -= (j-l*i*h-k)%100;
         b += (m-g*d+d+j-b+m+j-i)%100;
         a -= (l-m+h-j+h*h-n+b+k+g*h-j+l)%100;
         l += (f-g+a+m+j+f-f+g-h+g+n*i)%100;
      }
      a -= (n*c+b+e+a-a+e-m-d-e-n)%100;
      h += (g-l+e)%100;
      e -= (f-f+d+f-l+c-e*h*g+n+a+m)%100;
   }
   c += (a*e+k+f*b-e+c*m+h-m-m)%100;
   h -= (e-g-b)%100;
   h  = (m+a)%100;
   a  = (g-g+m*d+d+m)%100;
   f -= (e-i)%100;
   n  = (c*d-i)%100;
   k  = (n*d+j-k-d+b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[10]%2 )
   {
      a -= (c+h+h*h*b-j+h-f+j-n*g+i)%100;
      k -= (k-c+f+e+n+m-e+f+i)%100;
      c -= (e*k)%100;
      e += (b-d+f+g*c+f)%100;
      h += (k+f)%100;
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
                  g -= (l-h-n-n+j+f+n)%100;
                  h += (b*h-l-f)%100;
                  f += (a*f+h-n*f*f-l+d)%100;
                  j -= (k-d)%100;
                  g += (l-g-k-k-b*l)%100;
                  g  = (j+j+f*m+b+b*k*h+n)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  j -= (g-b+f-m)%100;
                  j -= (f+c*i*e+e-l)%100;
                  g -= (e-l*n+g*f-h+k+a*c-i+k-i+f)%100;
                  h  = (k-b-h+f*f*e+e-f*n+d+b)%100;
                  i += (e+a-j*f+f*k+c+b+g+b+i-c-d)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  c -= (e-c-e-b-e-a)%100;
                  a += (m-i)%100;
                  e += (i*k+b-d-i+f-l)%100;
                  f += (a*n+a-i+m+b+d*m*c-h+j*e)%100;
               }
               else
               {
                  d += (m+e-f+f-f+i+i+f*g)%100;
                  f  = (b*d)%100;
                  j += (c+a+j-b-b+e+e)%100;
                  a += (n-f-i*i-b+m*n+f-b-c*l)%100;
                  a += (l+n-n)%100;
               }
               while( ++WHILEcnt[9]%5 )
               {
                  g -= (d+k+k)%100;
                  l += (e*g+l-j)%100;
                  e -= (a-e*i-i-c-h+f-i-l+n*m+k)%100;
                  d += (e-d+a-k-f+e+a+f)%100;
                  n += (f+j+a)%100;
                  l += (m-h+g-h-f-m-a-d-g-j+n*j-i)%100;
               }
            }
            do
            {
               b += (l+g+l-n+d+j*n-h*e-c+f-f-e+k)%100;
               for( ; ++FORcnt[16]%5 ; )
               {
                  j += (d-e+j+k+n+k-b+e-g*d)%100;
                  c += (l-k)%100;
                  d -= (m-b*i+n-b*n*d)%100;
               }
               
               switch( ++SWcnt[5]%3 )
               {

               case 1:
               {
                  j += (j+d-a+n-c+l+h)%100;
                  h -= (b+g+c)%100;
                  m += (i+e+k+b+a-f-g-i+l-e)%100;
                  e -= (k+m-k+b*l+f+e-g-g*g+h*d-e)%100;
                  b += (b+k*e+f-b+a+k)%100;
               }
               break;

               case 2:
               {
                  d -= (k-l*b*f+n-a)%100;
                  b -= (b-a+l+l+c+a-c-l-m)%100;
                  e += (f+k+k-h+a-m-j*h+i+l-a+e-k+e)%100;
                  i -= (e+l-j+f-f-g*m-e+m)%100;
               }
               break;

               default:
               {
                  e -= (j+m+m-d*l)%100;
                  m -= (b-m+d*k-i-i-c-e)%100;
                  l -= (f-n-c-k)%100;
                  d -= (b+c-b+d-a*b-d*i-f-a-d)%100;
                  i += (j+k)%100;
                  c -= (m+c-c-c-f-b-e+e)%100;
               }
               }

               d -= (a+m*g-i+l-g+g+d+i-n+j-f-k)%100;
               j -= (h+c*k+j-h*l-j)%100;
            } while( ++DOcnt[10]%5 );
            l -= (d-e)%100;
            b += (f+c+j+n-g-f-l*h-b)%100;
            f += (l+n-a+h-n)%100;
         } while( ++DOcnt[9]%5 );
         c -= (i+d-l*g-l-i)%100;
         c -= (h*c-b)%100;
      }
      g -= (n-h*d*m*a-j+l-m+n+m+b+e-a)%100;
      b -= (j+e-l*g*e+b*n+i)%100;
      b += (m*e+i+n+l+g+b*j-m+e+k+d*c-h)%100;
      g += (c-i)%100;
   }
   h += (k+n+d)%100;
   n  = (a+g-i-g+b*b*b+l+h+n+b+f*j)%100;
   b += (h-n*i*k-h)%100;
   e -= (a-m-m*k*i+n+d-a-b+n+d+n-g)%100;
   k += (h-b*g-e+j*f+b-j+m-b*j-a-l+l)%100;
   h += (a-n*j)%100;
   k += (h-g*h-a-d+e+l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F6(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[9]%10 )
   {
      if( ++IFEcnt[12]%2 )
      {
         c  = (e-f+j+l*g-n+n+i+a*e+h*m)%100;
         m  = (e*f-a)%100;
         h -= (c+l-f-c)%100;
         m += (m*n-e-m+b-g+d+h+f-l*b)%100;
         h += (i*g-c+k+e-k-h-d-c-b-i)%100;
      }
      else
      {
         while( ++WHILEcnt[12]%5 )
         {
            do
            {
               for( ; ++FORcnt[17]%5 ; )
               {
                  j += (h+b-e+f-c-g)%100;
                  k -= (j-i*j+b+f+h)%100;
                  m  = (e-n*h-d-j-j)%100;
                  b -= (c+a+e+d-b+f-l-a)%100;
                  i -= (e-a)%100;
                  j -= (k+d-j+n-h*e+l-l+n-n+e+b-n*m)%100;
               }
               for( ; ++FORcnt[18]%5 ; )
               {
                  f  = (h+e*a-g-i-l*h+d*j-c*g+d*l-n)%100;
                  c += (j-e)%100;
                  k -= (h+g*l+m+c+c+g*f)%100;
                  n += (i-f+l*g)%100;
                  b -= (e+i-b*d+d-f*h)%100;
               }
               if( ++IFEcnt[11]%2 )
               {
                  d += (j-h*b-j+e*a-h+g+h+j+l-f+c)%100;
                  d += (c-j-l+a*d-n-m*m-k-d)%100;
                  d += (g*c+c*c*j*h+h)%100;
                  b += (j-e-m+j+e)%100;
                  i += (c+h)%100;
               }
               else
               {
                  j += (k-h-g-f*l-l+a+f+m+a+c)%100;
                  c -= (k-c)%100;
                  c += (h-e-e+m-f)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  a -= (m-c*c+k-f+n)%100;
                  d += (f+g)%100;
                  a += (i-c*m+k-m+b+m-d)%100;
                  n -= (m-n*m)%100;
               }
            } while( ++DOcnt[11]%5 );
            do
            {
               if( ++IFcnt[8]%10 )
               {
                  b -= (j-e)%100;
                  h -= (e-d+j+j-f*m*g)%100;
                  i -= (h-j+l+l-f+c)%100;
                  a  = (k+a+b)%100;
                  g -= (j*h+m-l-d+g)%100;
               }
               d  = (l*g+n-f-k+b*n-b+e-l-c)%100;
               for( ; ++FORcnt[19]%5 ; )
               {
                  a -= (j-k)%100;
                  g -= (g+b-d+c)%100;
                  a += (k+a)%100;
                  f += (k-m*d-g+m+i*d)%100;
                  e += (k-c-m*g+m+f+d)%100;
               }
               
               switch( ++SWcnt[6]%4 )
               {

               case 1:
               {
                  a -= (a+c-h*l+f-c-a-c)%100;
                  c -= (n+f*k*a+k-c)%100;
                  j -= (b+n+b*h-n*d-j-f+d-j*c-c)%100;
                  n -= (a-a-b+m-a+b+k+b+n+c*n*n*h-j)%100;
               }
               break;

               case 2:
               {
                  f -= (b-b*j-h*d-l-h)%100;
                  m += (i+i+j-d-k+h+h*c+g+c-g-b)%100;
                  g += (b*k)%100;
                  b -= (g+c+n+c+d-g+d*n-h+b*h-l)%100;
                  n += (l+c-b+e+e-c-k+n-c+b-i+i)%100;
                  j -= (k*j+c-d-e+l+i*f*j-j-c-k-e)%100;
               }
               break;

               case 3:
               {
                  j += (h+k+l+b*b)%100;
                  e += (d+e*a-a)%100;
                  k -= (j+g-j*f+b-e)%100;
                  i -= (f-e)%100;
                  j -= (e-m-l+b-m+j+b+n+d)%100;
               }
               break;

               default:
               {
                  m += (k-m*d)%100;
                  n += (m*n-l+b-f+e+c+c+l-n+n+b)%100;
                  d -= (d+f*h)%100;
               }
               }

               d += (l-h-l-j+n*g+d-i+b*k+h+n+f+j)%100;
               d += (d-n-b-k-n-d)%100;
            } while( ++DOcnt[12]%5 );
            i  = (f+g-b-d-a)%100;
            c -= (l-e-i+n*i-a)%100;
            e += (l+i)%100;
         }
         c += (a-d)%100;
      }
   }
   f += (n+i-k*e+j+j*l)%100;
   m += (a+l+c-j-l-f+n)%100;
   j += (i-c-c+a+a+b-m*j-h-a)%100;
   k -= (n-b)%100;
   n += (f*g+f+e-b+f+h)%100;
   m -= (a*h*m+k-c*h+a-m-c+h-f+g-b)%100;
   j += (h+h-g*a-b-f-b-b+d+f+l*l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F7(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[15]%2 )
   {
      d  = (i+d)%100;
      k += (f+m+k+b-a+f+i+d-m+c*k-e)%100;
      l -= (l-a-b-b)%100;
      m += (l-f-e-i*j+f+b-g)%100;
      a += (i-i)%100;
   }
   else
   {
      while( ++WHILEcnt[15]%5 )
      {
         do
         {
            for( ; ++FORcnt[20]%5 ; )
            {
               if( ++IFcnt[10]%10 )
               {
                  l += (d-k+b-e+n+j+n+i+i+l+a-n-a+i)%100;
                  n += (m+d+m-l+m*h-h-c+k-h-f+j)%100;
               }
            }
            for( ; ++FORcnt[22]%5 ; )
            {
               if( ++IFEcnt[13]%2 )
               {
                  m += (m-h+m)%100;
                  b += (m-a+m*i+f)%100;
                  c += (e-k*b+n*a+h+i+d+h-e)%100;
                  h  = (e+n)%100;
                  i += (l+m*h)%100;
                  b += (c+k+j-g+k-a-g)%100;
               }
               else
               {
                  h += (d*d+i*h-h-d*n+f-m-l*m*l)%100;
                  i -= (d+a+g-d+h-g-i*n+m+f*b+i-m)%100;
                  n -= (j+k*i+d*b-j)%100;
                  m += (j-b*j-g*j-f-f-a*j+f+h-k-m)%100;
               }
               while( ++WHILEcnt[13]%5 )
               {
                  k -= (i*f+c+b-e+i-g+b)%100;
                  j  = (e-c+n-n-h-k)%100;
                  c -= (j-m-c-h-m-g-g-g*c*j)%100;
                  i += (b+h)%100;
                  a += (b+k*d-h+d-m+f+g+j-d*n+c)%100;
               }
               do
               {
                  k -= (i-g)%100;
                  d += (l-j+e+j*g+a*f-l+g-a-e)%100;
                  k += (b-m+n)%100;
               } while( ++DOcnt[14]%5 );
               c += (d-h*k-c-f-h*b)%100;
               for( ; ++FORcnt[21]%5 ; )
               {
                  a += (i+j+l-n-m-l+a+g+j)%100;
                  b -= (n+m+m+k-j)%100;
                  l -= (d+d-f+f+k-a+l+a+f-h)%100;
                  m += (d+i+d*m-j-c-e+b-l-b*f+c-e-e)%100;
                  a -= (k-d)%100;
               }
            }
            
            switch( ++SWcnt[7]%3 )
            {

            case 1:
            {
               if( ++IFcnt[11]%10 )
               {
                  f += (b+b-g)%100;
                  f += (j+i)%100;
                  l += (a*l-i-j+f+m-g-k*k-e-b-f+h)%100;
                  b -= (m*l+c+k)%100;
                  h  = (i+c-h*f)%100;
                  h += (j*j+m*f-h)%100;
               }
               if( ++IFEcnt[14]%2 )
               {
                  g -= (b+f-d-n-j-h*a*j+a*k-b-b-g+e)%100;
                  f -= (m-l*n)%100;
                  b -= (b*j*j-i+d-d-f-j*i)%100;
                  b += (h-n*f+j+n+i*h+g*m*n-n)%100;
                  i  = (i+l*l-g+h*i-c+l+i-f-c*f-f-j)%100;
               }
               else
               {
                  i += (e+n*b+a+k+h+f-f+d-l+j)%100;
                  l -= (m*g)%100;
                  m += (k*e)%100;
                  n  = (c-m+a+h*i-a+e+g)%100;
                  f  = (j+k)%100;
               }
               while( ++WHILEcnt[14]%5 )
               {
                  i  = (m+h+f+f*a+m-f+k-m)%100;
                  e -= (f+c+b*n+k+k-g)%100;
                  g += (l*c-l*f+b-b-d-d*m-m)%100;
                  d -= (m*a+e+k*a)%100;
               }
               do
               {
                  e += (m+l+h-m)%100;
                  g  = (e*h+j-j+e*a+b+b-m*n-k-k-m+h)%100;
                  k += (d*b-i*g-d*n)%100;
                  a -= (l+b-f-a-k+m+m*g+i)%100;
                  l -= (d+l-d-n+m+g+a-d*j*m+j)%100;
                  d -= (c+h)%100;
               } while( ++DOcnt[15]%5 );
            }
            break;

            case 2:
            {
               h -= (f-h+l-m-n+d*c-j*g-f-g)%100;
               m += (d+g)%100;
               e  = (l-e+g*l)%100;
               g -= (e*j)%100;
               j += (d-m+f-c-k-d+m+h+g+h+g)%100;
            }
            break;

            default:
            {
               k += (k-j*m+h+f)%100;
               h -= (k-l+g+d-g-m*b)%100;
               j -= (a*g*k-a)%100;
            }
            }

            e -= (a+k)%100;
            d += (h-c-n+b+d-b*n-d-g-g-a+e+b)%100;
         } while( ++DOcnt[13]%5 );
         c += (e*a*i+d)%100;
         m -= (a+i-b*n-j+k)%100;
         e += (h-i+g-n+f+i*b-i-e)%100;
         i += (a*h-a+g*g)%100;
         d += (c+j+g-i+f+k*m-a-h)%100;
      }
      l += (b-j)%100;
      l -= (e+l+n-h-c+c+e-d+c-d*h*b)%100;
      h += (a+m+j-i)%100;
   }
   f += (l+g-d*l-k-n*i*n)%100;
   h += (f+d)%100;
   j -= (j-b-g-d+m*c+i*b*g-l-g-e+a)%100;
   d -= (k-k*h-j*m)%100;
   i -= (c*g+c+c*g-n)%100;
   j += (n+c-c*m+f+g)%100;
   g += (g-i-c+h+c*d-m*d+c+a+e-g+d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F8(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[26]%5 ; )
   {
      for( ; ++FORcnt[25]%5 ; )
      {
         if( ++IFEcnt[17]%2 )
         {
            j += (k+a-d+e-b-k+j+k-h+d+j)%100;
            n += (b+d+n+k)%100;
            g -= (d-f+e*k)%100;
            h += (n+f-c)%100;
         }
         else
         {
            while( ++WHILEcnt[16]%5 )
            {
               do
               {
                  b  = (h+c+c+l*d+g*m*c+c*c-i)%100;
                  i += (c+c+j-n)%100;
               } while( ++DOcnt[16]%5 );
            }
            if( ++IFcnt[12]%10 )
            {
               k += (n-e+h*a+g-f+e-a+g+i-d-h)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  h -= (d+g-f+b*d+g-c*i-h-m-k)%100;
                  a += (a+l-b*k+i-e+a+h+e-g-m)%100;
                  j += (a+j+d-i-i+m-i-l)%100;
                  f -= (g-d+g+f+f-e+d-g+m+h)%100;
               }
               
               switch( ++SWcnt[8]%3 )
               {

               case 1:
               {
                  b -= (f+a-b*a-j+b*n)%100;
                  d -= (h-c-j)%100;
                  k -= (l-j*b+e)%100;
                  l -= (i+d-n*m+m-m*c+a-i+e+i+j+e*b)%100;
                  c += (f+k)%100;
                  e  = (m-a-m+i*l)%100;
               }
               break;

               case 2:
               {
                  a += (e+n*c+m-h)%100;
                  l -= (g-j*m-m-h*c-l+m)%100;
                  h -= (g+k*h)%100;
                  n -= (l+n+j+e*g+n)%100;
                  b -= (h-l+a-g+e)%100;
               }
               break;

               default:
               {
                  a += (a*c-a+c+b-h*i+g*c-g-e+f+b)%100;
                  k += (n+j)%100;
                  a += (c-i+j+n)%100;
               }
               }

               if( ++IFEcnt[16]%2 )
               {
                  l -= (m-g+c)%100;
                  a += (a+e+a*c)%100;
                  m += (l*d+l-g-i+a-k)%100;
                  k  = (m-l+c-h)%100;
               }
               else
               {
                  e  = (d*f+g-k-i*l)%100;
                  k -= (l*h*d-e-h+c-a*l+g*n+i)%100;
                  e -= (c+h)%100;
                  i -= (b-c)%100;
                  d -= (a+l)%100;
               }
               while( ++WHILEcnt[17]%5 )
               {
                  c += (b*n*i+a+n-f*f-a)%100;
                  m += (d*l-l+h-j*l+g)%100;
                  d -= (e*j+n-e)%100;
                  h  = (l*f+h+i+g-e*k)%100;
                  a += (e*a+a-f*n+h)%100;
                  b -= (f+k+m-l+c)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[24]%5 ; )
               {
                  a += (l*f-l+e-j*d*k-h*j-m+a*c)%100;
                  g -= (n*i-m-c*e+l*j*n-k+m)%100;
                  j += (k*d*i-m*e-f*f-j+d)%100;
                  l += (i+g-e*b)%100;
                  l += (f*n+m)%100;
               }
               h -= (d-b*m-g-e*j-h+j)%100;
               k += (g-l*d-e-b+m)%100;
               a += (a+k+k+d+k*h-h-d*d-m*d)%100;
               i -= (c+d*g-g+j-c*k+j-g*f-i+k)%100;
            } while( ++DOcnt[17]%5 );
            c += (a*e*d+j-b)%100;
            f -= (m-k-i*g-f+j)%100;
         }
         c += (a+e-l*n+c-d+a*i+b+j-j-i)%100;
         f += (f+e-e)%100;
         m  = (i*d-h-e*d*j+m-j-j-e+k-g)%100;
         f -= (b+d-h+e+n+h+e+j*m-j+j+d+c)%100;
         n -= (c-n+c)%100;
      }
      e  = (l+h+j+b-j*j+i-d)%100;
      f += (b+h)%100;
      h -= (d+m-k*m+b+e-n+j)%100;
   }
   d -= (h+m*f-n*k-n+j+g*a-g-m-l+a*k)%100;
   b += (k+h)%100;
   b -= (a*i-a+h-f-f-b+l*b-b-a)%100;
   j  = (e*f*c-k*m-f+n*n*a)%100;
   n -= (g-d-a+k-m*h*g*c)%100;
   c += (j-c+m*c-k*g)%100;
   c -= (i-g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F9(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[14]%10 )
   {
      for( ; ++FORcnt[30]%5 ; )
      {
         if( ++IFEcnt[20]%2 )
         {
            d -= (c-e)%100;
            a -= (h-h-n+g+m*f)%100;
            g += (c+d*h+m*h+b-l+j-e-g+c+n)%100;
            i += (h+c+e-f+b*i-j-b*d+i-l)%100;
            b += (e-c-j+j-b*l-l*l-e)%100;
         }
         else
         {
            while( ++WHILEcnt[18]%5 )
            {
               do
               {
                  l -= (c+g*n+j-d-i)%100;
                  i -= (j*f+c*m+d+b+m-l)%100;
                  j += (n*m*a*n)%100;
                  m -= (h-j+d+m+f)%100;
               } while( ++DOcnt[18]%5 );
               g += (i+e)%100;
               for( ; ++FORcnt[27]%5 ; )
               {
                  n  = (m+b+e+c-i*a+c)%100;
                  m += (c-c-g)%100;
                  n += (g+a-j+c)%100;
                  j -= (h+n-m*g-l+n+e*h-l+m+f-j+c)%100;
                  l += (m+f)%100;
                  a += (k+d+l-n*b+m-b*e*h*n*e-i)%100;
               }
               
               switch( ++SWcnt[9]%3 )
               {

               case 1:
               {
                  c -= (i-i+n*i+m*e-a+h+i-i+d)%100;
                  g += (n+i+a+l-f-e+j+h+g-a+h+d+d*m)%100;
                  k += (h-l-h-b+j*j+e-e-h+h*e-m+n+k)%100;
                  b += (n-e)%100;
                  c += (g+b)%100;
               }
               break;

               case 2:
               {
                  h -= (f+c*g*i-l+n)%100;
               }
               break;

               default:
               {
                  g += (n*e-g)%100;
                  l -= (j-m+g+l*c+l+n*h+a-c*e*a-d-a)%100;
               }
               }

               if( ++IFcnt[13]%10 )
               {
                  h += (l-l+d-e-h+d-k-g*k-m-a)%100;
                  m -= (m-n)%100;
                  h -= (e+f-a+k+k-a-k-l+i+d-f+i+k)%100;
                  m  = (j-c+e-l*j)%100;
                  n -= (i+m-n+g*c+n+d+l+f)%100;
               }
            }
            if( ++IFEcnt[19]%2 )
            {
               if( ++IFEcnt[18]%2 )
               {
                  j -= (m-n+b*k-d+g)%100;
                  c -= (e*b)%100;
                  i  = (h*h+c-d*g+n-e-b*k+d-n)%100;
                  b += (j*a+l+m+n-j)%100;
                  h -= (n+f+i)%100;
               }
               else
               {
                  d += (d-j+k-f+g*l+b+h-a-f-h+c*i)%100;
                  c -= (n*i+k-f+l-j-m)%100;
                  b -= (d*c)%100;
                  j += (m+d-k*i+n+d+n-l)%100;
                  k += (c*h)%100;
                  b -= (a*a+h+h-g+l+n+k+k)%100;
               }
               m -= (d*f+c-h+j+i-i-c+c*e*e+i)%100;
               e -= (l+a+a-c-d+j-k+e+l-g-j*j+k)%100;
               i -= (f+i-d*c+c+b*b+m*e)%100;
            }
            else
            {
               while( ++WHILEcnt[19]%5 )
               {
                  d -= (h+k-n)%100;
                  h -= (g-m-j)%100;
                  i -= (h-m-h-c+d+k*c+a+a+b+j+l+f)%100;
                  i += (n+g*l-a-m-n-b)%100;
                  m += (d*d-n-e-j)%100;
                  k -= (g-i-f)%100;
               }
               do
               {
                  g += (l+n-b*i-c-b+h)%100;
                  j -= (f-i+g*l*k-l+a-d-m*e-l)%100;
                  b += (b+d-c-d-c+n+a-n+e*d+a)%100;
                  e  = (c+b)%100;
                  h -= (e-i)%100;
               } while( ++DOcnt[19]%5 );
               for( ; ++FORcnt[28]%5 ; )
               {
                  b -= (c-e+c+j+d+d-m-h-m*h+j-a)%100;
                  h += (m+e-a-k-a+a*i*b)%100;
                  f -= (d+i+d)%100;
               }
               for( ; ++FORcnt[29]%5 ; )
               {
                  c += (g-k-g-d)%100;
                  c += (b+n)%100;
                  d -= (j+j-a-c)%100;
                  d += (d-k-c+e+a*i-e-i+a)%100;
                  h -= (l+i)%100;
               }
            }
            d  = (a+k-g-i+j*k-d-m+d*j)%100;
         }
         c -= (e-l-d*j+f-d-f*j*d)%100;
         i += (d+b*h)%100;
         c += (b+a-k+d*i)%100;
         n += (k+m-l-f+i+e*b+j*f)%100;
      }
      n -= (j*l+b-a+m-k+a+m)%100;
      a += (g+m-f*j-c)%100;
      d -= (k*e*c+i*m)%100;
      k -= (c-n-n-c*e+l-f-g-l-d)%100;
      c -= (k+k-f)%100;
   }
   l += (d+e-g-h-f-g*c-e+f+d+c+j+a+d)%100;
   k -= (h-l)%100;
   d += (i-j-k*a-k-j-m-m)%100;
   k += (l*h*k-c*g+b+l-j-j*i*a-a+k)%100;
   j += (a-e*c+a+n+h+h-f*l)%100;
   c += (e-i-c+d+f-d+b*n+d+c-c*a-l-j)%100;
   i -= (n+e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<24; I++) IFcnt[I]   =0;
   for(I=0; I<32; I++) IFEcnt[I]  =0;
   for(I=0; I<16; I++) SWcnt[I]   =0;
   for(I=0; I<32; I++) WHILEcnt[I]=0;
   for(I=0; I<32; I++) DOcnt[I]   =0;
   for(I=0; I<48; I++) FORcnt[I]  =0;
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

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      while( ++WHILEcnt[20]%5 )
      {
         do
         {
            if( ++IFcnt[15]%10 )
            {
               i -= (l-g)%100;
               for( ; ++FORcnt[31]%5 ; )
               {
                  c -= (n+a)%100;
                  c -= (i+j+j+m-a+n-f-f*g+d-e+b+k)%100;
                  c -= (k+a-e+i-j-a+i+n-c*c+f*j+e)%100;
               }
               
               switch( ++SWcnt[10]%3 )
               {

               case 1:
               {
                  g -= (e+k+i+a*e-e+d-k+i+l+j*m-b)%100;
                  d += (h-n+i+a*b)%100;
                  f -= (c+l+h+e+n*c-e+l*g)%100;
                  i += (d+k*c*b+f+a+n-f-i+c-n-d)%100;
                  f -= (l*d*a-g-e*b+n)%100;
               }
               break;

               case 2:
               {
                  l -= (g-j+g+a+n-g*m)%100;
                  d -= (h+g-c-k-c-h)%100;
                  m -= (i-m-m-m+f-n+n-j)%100;
                  g -= (b+h)%100;
               }
               break;

               default:
               {
                  f += (c-j+d-d-b+e-j+e)%100;
                  a  = (a-h)%100;
                  d -= (k-d-j*m-j+d-k+d+i-d-e)%100;
                  a  = (n-m+n*m+h+c*l-d+b*l+j-g-i)%100;
                  l  = (n-k)%100;
                  l += (h-n+l*d+i-g-m-h*f+j-i)%100;
               }
               }

               m += (h+b-e-d*g*c+a+j-b*e*f)%100;
               i -= (c+m*g)%100;
            }
            l -= (d-m*i*i*n-n*h+n+f-d-f-h*b-a)%100;
            f -= (m+m+f*m-h*h-m*l-n+j+n+b-l)%100;
            c += (k-e-n+f)%100;
            e -= (g-b)%100;
            h -= (h*k*k+e+j-b*e-c+d+d-g+m-k)%100;
         } while( ++DOcnt[20]%5 );
         g  = (d+d-m*b+i+g)%100;
         b -= (k*n+a+h-a-a+g)%100;
         j -= (a*h+l+h)%100;
      }
      k -= (m-d+n-g-i*k*g+m*h+b)%100;
      c -= (i*g-a+b+d+f)%100;
      c -= (b-l*l)%100;
      f += (a+b+k+c-c+d+d-c+f*l-i)%100;
      c -= (j-n+a*f)%100;
      k -= (i+n*i+n-l-b+b*h+c*d+k+k*e)%100;
      c  = (e+d-b-f*k)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<16; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 16 << "   Dynamic = " << sum ;
   for(I=sum=0; I<21; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 21 << "   Dynamic = " << sum ;
   for(I=sum=0; I<11; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 11 << "   Dynamic = " << sum ;
   for(I=sum=0; I<21; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 21 << "   Dynamic = " << sum ;
   for(I=sum=0; I<21; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 21 << "   Dynamic = " << sum ;
   for(I=sum=0; I<32; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 32 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}