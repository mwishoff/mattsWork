#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[28],IFEcnt[38],SWcnt[19],WHILEcnt[38],DOcnt[38],FORcnt[57];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         k += (k*f-c+g*h-a-n-g)%100;
         c -= (l+d-f*c+c*c-j*j+b-g+h)%100;
         n += (g+h*m-a+h-d+d-k+k-j+i-m-l)%100;
         e -= (f-m-j-h-k+k*g+l-i+a)%100;
         i += (m*k-i+b)%100;
         f -= (d-b)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  k += (m-a-e+j+f+l+n-b+n)%100;
                  h -= (g+a*j+d-i+b+d+j+c-m)%100;
                  j -= (l-c)%100;
               }
               b  = (j+b-b*g+a)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  g -= (l*h+e+b+j-k)%100;
                  c += (k+a+a-a-n-m-h-l-k-b)%100;
                  n -= (j-i)%100;
                  g += (e-b-b+i+i*d*i)%100;
                  a -= (j+a+l+j+n+g+l-l*l-n+c*a-j-f)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  c  = (e*b+a-c*k-m-h-a*i-h*j+e*a)%100;
                  k += (c+i*f+n+j+d-e*g+l+i+k-k+b)%100;
                  g -= (b*j+c-f+c-j*k*n)%100;
                  i += (h-a+i*k+m-b*i-h-e)%100;
               }
               break;

               case 2:
               {
                  n -= (e*h-j-a-j*l+e-j-j+d-j+h-m*l)%100;
                  k += (d-i+b-j)%100;
                  b -= (j-b-e-i+i+g*l*i-d+l+d+e+k+m)%100;
                  m -= (h+g*d+d+a-n)%100;
                  b -= (m-b*e-a+a+c+m+h)%100;
                  f -= (k*c*m+a-h*n-l)%100;
               }
               break;

               default:
               {
                  n -= (i*a-k+d+d)%100;
                  g -= (c-i)%100;
                  i -= (g-l+l+h-c+k*n)%100;
                  f += (j-d+b-l+g-a+e-n+j-l)%100;
                  m += (g+d+h+e*j*d+c-a-d-a*l+j)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  a += (h+g+j)%100;
                  l -= (l+f-h+h)%100;
               }
               else
               {
                  g  = (b+h-i+e-i-f+g-b)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  a += (l+b-k+d+l*i*e-e+g*g*n+e)%100;
                  e += (g-l+n+n-e*a+f*h-g)%100;
                  a -= (f+k*e*b+h+i-b+a+l+k-f*d+b)%100;
                  c -= (i+j*e*f-i+a*d-n+d*f-k)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  l -= (e+m-m+k-g-b)%100;
                  b  = (a+b)%100;
                  n -= (e+b+g-m+n-n*k+c+h)%100;
                  n -= (k*i+k)%100;
                  h -= (j-b-j+j*b*j-n+b-k-b+e*m)%100;
                  e += (e+g+c)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  i  = (i-a+i-m*e*a-j*j)%100;
                  h -= (f-b-g*n-a+e-c-b-b+n+d-k)%100;
                  g += (k+m+h+b-c+m)%100;
                  c += (k-e*j+e*g*h+h*j+g-i-j)%100;
                  g += (j-l*l-h+j-m+a)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  n -= (b+b+l+f-d-f+j-m+m+f)%100;
                  b += (c-e+n+h-l-h+l-g+e+k+i+c+j*n)%100;
                  e -= (a-f*e+l+m-d+b-k-i-e)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  d -= (l-g*b+b)%100;
                  f += (l-b+h-m-k*m*a-d-f-k+e+m-n-m)%100;
                  h += (f+k)%100;
                  j -= (c*h+l)%100;
               }
               else
               {
                  m += (f+i-b+h*l-e+k-b)%100;
                  i  = (g-g+i+l+i-h+a-g-g-e+j+a+l-j)%100;
                  d -= (c-m)%100;
                  f -= (f+g+e+n+i*b)%100;
                  b += (m*c)%100;
               }
            }
            c -= (d-l)%100;
            k -= (a+c+f+m-m)%100;
            a -= (k-h-k-c*d+b+d)%100;
            n -= (l*d)%100;
         }
         l  = (f*b)%100;
         c += (h+f+n*j+a*n+l*k+n-b*m)%100;
         c -= (c-l-g-f-a)%100;
      }
      j += (d+k+l-b)%100;
      l += (e+k-c-b*n*h+m-f+f+m+k-g+h-k)%100;
      f += (m-h*i+k-l-h-c-d)%100;
      g += (d*c-k-g-k-j+b+m-c+j-b-c)%100;
   }
   c += (g+d+a+d+f+j-f-d*k+a+k)%100;
   m += (f+j-a+i-f)%100;
   c += (m+a*m+f*f-l+b)%100;
   g += (e-h+n-c-k-n-b+h)%100;
   n += (n*h*d-b-h+g-n)%100;
   i -= (l*h+f-e-f+j+b-h*j*e)%100;
   l -= (i+j-c+g)%100;
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
         c  = (f-n*a-k+g-f-j)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%4 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  k -= (i-f-k+m-d-a*g+g-l+l-n-i-i*n)%100;
                  f -= (j+d+a+n+f)%100;
                  m -= (m+e-g-d*i+b-l+d-j+d+f-l-j+i)%100;
                  l -= (j-i*l+j)%100;
                  b += (a*b-f*i)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  i -= (f-i+k+l+e*c-j-a)%100;
                  l -= (n+g+l-g*n+h+j-j*g-c*c*l+m)%100;
                  f += (k+m-i)%100;
                  g -= (f+b-b-b*l+l-j+l-l+b+l+e)%100;
                  k += (k-g+k+m+e+c-h-l)%100;
               }
               else
               {
                  n -= (g+k-c*b+e*i*e)%100;
                  m  = (e-g-m*e+n+h*d+j)%100;
                  i -= (b*l-d+h+l-a-l-c-j-b*n+f-e)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  h -= (i+h)%100;
                  j -= (c+e+d+i-f-c+b+d-b+d)%100;
                  n += (b+e+k-e+d+n)%100;
                  g += (j*l+n-l+m-j+d*l-j+n-j)%100;
               }
               do
               {
                  k += (i-g+h+c+c*b+f+h-f+m-e+a+a-j)%100;
                  c += (n-h)%100;
                  d -= (c+c-i-g+l)%100;
                  h -= (j+n-i*i*j+d-b-l+i+a+k)%100;
                  n += (f*b+d*f*i-k+a+i*f*j-n)%100;
                  c += (h+b*j*j-h+j+e-l-n)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  l -= (b-i+b+h-f)%100;
                  i += (d+g+m-i*d)%100;
                  k -= (d-m+d+b+h+b*j-c-b+l*i-f-c)%100;
                  m += (i+h-m*l*j-k*b)%100;
                  i -= (c+j-d+c+n)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  a += (b+d+d-n+g-l+a+c+d*g-c)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  f -= (j*i-k+d+g)%100;
                  m += (g-n-l-k+k+n+d-m*i)%100;
                  l += (h-l*j*c)%100;
                  i  = (f*n+h*c+f+m+k*l-d+e+b-a*l-k)%100;
               }
               else
               {
                  f  = (b-a+j+m)%100;
                  n += (g*c-j+d+k)%100;
                  m -= (d-j)%100;
                  n -= (m-d)%100;
                  j -= (d-c+a*n+i*j-d*k+m)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  d += (l*l-e*b-f*b-g-f+n+l)%100;
                  e -= (b+i+f-h-d*k+g-b*d-d+b*j)%100;
                  a += (i+j+j+f*f+f+a)%100;
                  h += (d+h+e+h-i+m-j-a+f-l+c-b)%100;
                  j += (l*j*f-l+g+a*b-k*i*b-n-h)%100;
                  e -= (b-n+c-c-f)%100;
               }
            }
            break;

            case 3:
            {
               do
               {
                  h += (j+n-a*a+f-j+h*e*m*f-k-n-d)%100;
                  l -= (b-c-m+l+b+i-c+j-c)%100;
                  k += (d-f+j-h+h+a+c+a+j+j+j+h)%100;
               } while( ++DOcnt[4]%5 );
               e += (e+n+h-i+l+b+a)%100;
               k -= (e+m+k+b-e-e+h-g-k+c-d-e+c-i)%100;
               a -= (c+k-l-k+c*i*h+c-m+b+g+g-a)%100;
               m += (f*j+f-b*e+l-l+l+b-j)%100;
            }
            break;

            default:
            {
               j -= (n+n-a+f-j*d+i-c+f-c-l-c+i+j)%100;
               m -= (c-b-a*e+m*j*g-m-n)%100;
               g  = (c-b-h+g-b+e+c+a-g+i+n+f-f)%100;
               j += (h-g+c*l-a-h+a-k*l*a+n*j*f)%100;
               j += (n-e+h-e*f-c-j)%100;
            }
            }

            j += (j+m*f+m)%100;
            m -= (g*b+j-h-m*h+m-k-a+j*b+f+l+k)%100;
            j += (f+n*d*f)%100;
         }
         n -= (i*g*n+h+j+b*k+m+k+g*c)%100;
         d += (b*k+k+g)%100;
         l -= (m-j+j+i-e-g-g-c-i)%100;
      } while( ++DOcnt[2]%5 );
      m += (b+d-a+b)%100;
      f -= (e-c+a+c-k-b-a)%100;
      j += (d-f-m+n-l-l+j+l+d-a+a*j-e-e)%100;
      g += (a-l*n+j+l+l+m+m-n+f+n-a*l+k)%100;
   }
   f -= (k+e)%100;
   c -= (j-k)%100;
   m += (a*a-j-j+k+e*c-e)%100;
   e += (b+n*m-e+b-e+d*d*c)%100;
   h -= (d*e-d+m*h+d-k-a)%100;
   j -= (n+g+g+l-n-m*h+g+m)%100;
   e -= (j-m*m+g-a+e-m+l+i+f+n+k-k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[4]%10 )
   {
      k += (f-m-c+d-f-e-b+n+m-d+g+k+i)%100;
      for( ; ++FORcnt[10]%5 ; )
      {
         
         switch( ++SWcnt[2]%4 )
         {

         case 1:
         {
            if( ++IFEcnt[6]%2 )
            {
               if( ++IFEcnt[5]%2 )
               {
                  i += (d*k)%100;
                  f -= (n+d*g-m-f+g-c+f+d)%100;
                  e  = (a*e-a*j+n*h+h*d-e+k-i-l+d)%100;
                  m += (c*h-k+h+c*d-c-j+n+l+b)%100;
                  h += (a*b+g*d*d-b-f+j-n+d+n-n+i+k)%100;
               }
               else
               {
                  b -= (n-g*g-g*m-d+m-d*e+d)%100;
                  f += (i*l+d*a-g+c+c+l-g)%100;
                  g += (e+d)%100;
                  h -= (a-l*a-l-c*l-g+h-h+k)%100;
                  e += (n+g)%100;
                  i  = (h*h)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  c -= (a-h+m-e+d-l+k*l-f-a*m)%100;
               }
               do
               {
                  k -= (g-m*m-d+d+n)%100;
                  j += (e+b-f*j*c-n+h)%100;
               } while( ++DOcnt[6]%5 );
               i -= (g+f*d+k-c-h-c+f)%100;
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  n += (c+f-d)%100;
                  e += (k-g-e)%100;
                  k += (l+c+f-k)%100;
                  i += (k+h)%100;
               }
               do
               {
                  m -= (l-k+l*a+l+c-a+h-i*g)%100;
                  d -= (a-a+c-d-m+i+f+e+h-f-g-f)%100;
                  k += (k+a+b*h)%100;
                  m += (f-n+m-l*l*a-f*n)%100;
                  j -= (h-n*l-c*m)%100;
                  a += (h*n*f-c)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  d += (g+j+g-i+b-h-k+n*e+i-h-m+d)%100;
                  g  = (j+m*k+l-c+j-h+g+f+e)%100;
                  h  = (d-l-n+a-j+n*c-m)%100;
                  h += (m+m+a+g+a-i-b+g*j-e*l+h-e*j)%100;
                  d -= (i+m)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  g -= (b*i*m-k*e-f+d+d)%100;
                  n -= (c*f*k+f-i+d+a-j+l+g+i)%100;
                  h -= (j*d+h*l)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  e -= (m*a-n+i+c-m)%100;
                  h += (m-i+h+f-f*f)%100;
                  f -= (i+m)%100;
                  c -= (c-m-e+g-h*c)%100;
                  i -= (b-m)%100;
               }
            }
            for( ; ++FORcnt[9]%5 ; )
            {
               
               switch( ++SWcnt[3]%3 )
               {

               case 1:
               {
                  i -= (k+b*m-l+j-h-b-a-e-g+i-b+d-h)%100;
                  f -= (h+b+b*c+j*g+b+h*h)%100;
                  d += (c+e*a+g+l-n+n+k+g-n-l-g)%100;
                  c -= (d+h+e-g-i*j+f+g-k-e*j-g+i+f)%100;
               }
               break;

               case 2:
               {
                  e  = (k*l+e+g+m+k)%100;
                  m += (j-e)%100;
                  b -= (m-g+i+m*c-b+e+g)%100;
                  l += (k*k+l+c+d-a-c*f+l*f+b+b-a)%100;
                  a -= (g*h*j+b*b*l)%100;
                  j -= (c+m-d-k-l-f*k-l+n)%100;
               }
               break;

               default:
               {
                  b += (b-c-a-j+n-c*l-d+e+c+g*a-k-i)%100;
                  e += (f-b*a+n-n+k-c*k)%100;
                  b += (k*l)%100;
                  c  = (h*l)%100;
                  b += (d-c)%100;
               }
               }

               c -= (i+b*h-n)%100;
               m += (d+g+n-j)%100;
               f += (a*k*b-e*k-l+k*a+k+d+d-d)%100;
               e += (h*b+f-d+m-f+j)%100;
            }
            b -= (i*b+j-e-k-e-k+a*b*c)%100;
            d -= (h-h*n+m+l)%100;
            e  = (i+f*k-h-e-e)%100;
         }
         break;

         case 2:
         {
            b  = (i*g)%100;
            c -= (j+k*a-j+g+j+f)%100;
            f += (b+h-a+l*i+j)%100;
         }
         break;

         default:
         {
            h += (d+h)%100;
            h -= (m-e)%100;
            b -= (n+a*k-b-n-g-f+n-j)%100;
            l -= (k*i)%100;
            m -= (f+d)%100;
         }
         }

         l -= (c*k-m+e-g-a)%100;
         l  = (h+d-m*c-a-b-i-k*j+j-k-i)%100;
         g -= (a-a+b*m+l-n+c+g-d+i+l+j)%100;
         h += (a*h-i+n-i+a-k-a+n+c+d-c-m)%100;
         b += (h-n*k+d+h)%100;
      }
      m -= (f*e-h-b-e+n*g)%100;
      f -= (j*d*h*g)%100;
   }
   f += (l+n*h)%100;
   f += (d+n+d+k-i+b-m+f+e+a-h)%100;
   f += (c+m*l+j-a-i+d*c+l*n)%100;
   e -= (n-b+l+d*l-a-d+l-j+j)%100;
   g  = (l-d)%100;
   i  = (k+f*i-l)%100;
   n  = (b+n+d-d+g-k-j-n+k-i*b+k*m)%100;
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
         e -= (f*i-k-k+a-a-k+d+b)%100;
         c += (h-k-m-e*i*a*k+j+i)%100;
         h -= (i+b-l-i-j-m+a-j-a)%100;
         d += (k*k)%100;
         h += (m*c-a*h)%100;
         d += (c+b-j*d+n-g*n)%100;
      }
      else
      {
         while( ++WHILEcnt[8]%5 )
         {
            do
            {
               for( ; ++FORcnt[11]%5 ; )
               {
                  l -= (k*c+e+f-a+c+h+j)%100;
                  k += (c*e*i-a-n)%100;
                  c  = (b*i*b-b*d-b-m+i*j-j-f)%100;
                  j -= (h+j+a+j+n-f*e+c-k+c)%100;
               }
               for( ; ++FORcnt[12]%5 ; )
               {
                  j  = (j+c-h+j-f+n-e*m-j-e)%100;
                  g -= (e+i+l+g+n*b*i*c+f-a-b)%100;
                  g += (n+c-e-l+a-n*m-m*m)%100;
                  m += (c-i*k-a-a+i+l)%100;
                  e += (j-b)%100;
                  n += (c+e+b+g-j+j+i+b+b)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  c += (c+j*i*n-a+m+f+e)%100;
                  n -= (f*m)%100;
                  g -= (d+m-m+g-k-i-f+c*g-f+d-j+n)%100;
               }
               else
               {
                  a += (b*h-b-g-e+g+i+g*e+d+b)%100;
                  a -= (l-g-n-i+b+n*e-i*g+a)%100;
                  h -= (i+l-c)%100;
                  m  = (i*b+g)%100;
                  g += (b-j+e-e+k+c-j-j+d*d-f*l*e+b)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  g -= (j*n-c*k-h+k)%100;
                  a += (f*f*c*k-i)%100;
                  k -= (d-f-d-h+a-a+h*d)%100;
                  n  = (h-d+j+a)%100;
                  d += (f*d+d-d+l*j-h-g+j-n+f+n-d)%100;
               }
               do
               {
                  a -= (f+c)%100;
                  d -= (m*i+i+c+e*d+b+l*e*l-m-e*l-f)%100;
                  d -= (b-f+n*g-a)%100;
                  j -= (b+f+n+j-h)%100;
               } while( ++DOcnt[8]%5 );
            } while( ++DOcnt[7]%5 );
            if( ++IFcnt[5]%10 )
            {
               e  = (l*b-d-g*c-c+n-d)%100;
               for( ; ++FORcnt[13]%5 ; )
               {
                  n -= (h-e*e-g-i+a+h*d+h-m)%100;
                  a += (n*d*f)%100;
                  f += (h-j-k)%100;
                  f -= (i*c-j+j-m-c+b)%100;
                  k -= (c-b+c-l-e*a-g)%100;
               }
               
               switch( ++SWcnt[4]%4 )
               {

               case 1:
               {
                  b -= (k*n)%100;
               }
               break;

               case 2:
               {
                  g += (e+d+n-e-m)%100;
                  e  = (l+b+i-i+i-n-e*e-h+l)%100;
               }
               break;

               case 3:
               {
                  b -= (b+l*k-b-b-e-a*f)%100;
                  b += (a-e+k)%100;
                  l += (m-k*b+f+a+j+b-l*h)%100;
                  c -= (k-d+m*h+i-h+g*a+m+a+c+g-m+i)%100;
                  h -= (d+b*e+m+i*n)%100;
               }
               break;

               default:
               {
                  l -= (f-g+g-c+g-e)%100;
                  g += (f-e-h-m-j-d)%100;
                  c -= (i*m*i*h-k-j+g+i)%100;
                  n -= (n+b)%100;
               }
               }

               i += (n+l+d+m+g-c+e-n)%100;
               n  = (n*n*c-n+l+d+g*h-j+c*n-a)%100;
               c += (e+l+l*f-n*j+e+k+e*e+b)%100;
            }
            g += (e-j*e)%100;
            i  = (f+m+b*g*b)%100;
            k += (a+k+g+e-b+g-l+b-m-j)%100;
         }
         j += (g-f-f*j)%100;
         f -= (g-g)%100;
         j  = (a*e-g+l)%100;
         i -= (n*e-n)%100;
         n -= (e+j-e+h*l-h-l)%100;
      }
      i -= (k+f-j+b-n*e+l)%100;
      g -= (a-k*g+f+j+d-h+j+i)%100;
      d -= (d+e)%100;
   }
   h += (f-l+g+h+h-h-a+h-b-l+j-h-n-g)%100;
   m -= (i+k*b+e-c-h+l+e-l+k+i*c)%100;
   j += (f+b-c-i*l)%100;
   c += (i+h+i-a-i+j+n-g-i-l+f+b)%100;
   j -= (j+a-n+h-g+i-i-n-l-l)%100;
   i += (m+e-d+i*l-j-a+c*a+k-k)%100;
   g -= (g+h+c-b*f-c+d-g+n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[10]%2 )
   {
      h -= (f*j)%100;
      a  = (a-m+k-l+k+f*h+f-k)%100;
      d += (d+n-g-h+n-a-e*a+e-f*i*l)%100;
      e -= (i-b-f)%100;
      g -= (f*k*f+e-e*f)%100;
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
                  m  = (h*d+f-b)%100;
                  g += (h-c-i+f-f*j-n+i)%100;
                  h += (g*d*m-d-k*i+a+j)%100;
                  d  = (c-m*i-e-l-n-m*k+g+f-d)%100;
                  k  = (e-i*m-e-k-c*i+e+f+n+c-a-c)%100;
                  l -= (l+f+k+j*d)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  b += (d-j+d-g+f+l*e+d*j*e-m*m*m+m)%100;
                  n += (e+j-e+g-n-c-e-c*n+g+h+b-l)%100;
                  n += (k+l-n+h*i*g-j+i)%100;
                  h += (f-i-m-l-b-a+m)%100;
                  a -= (c-k+g)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  d += (e-c+k+c+l-k-g-a-b)%100;
                  g -= (l-l*j)%100;
                  l -= (i-m)%100;
                  f -= (l*a*e-e+l+l+l*g*l-i+b+e*k*f)%100;
               }
               else
               {
                  l += (m+n*a-n*a)%100;
                  i += (d+c+c-i*j+a+l*e-g+d)%100;
                  i -= (n*f-b-c)%100;
                  j -= (k*b-h+b+b-f*n+b-e+j)%100;
                  c += (m+b-m+c+e-l-g-a)%100;
               }
               while( ++WHILEcnt[9]%5 )
               {
                  d += (f-n-g+b-j-n*m-k+l-l+d+g-k*h)%100;
                  e -= (b-j+j+l)%100;
                  g -= (d*k-g+f*k*i)%100;
                  j += (n-b+j*h*l*j-d*k+j-l-m+j-f+b)%100;
                  j += (e-f)%100;
                  b -= (h*l-c-l-c*i-i-k-a+b*j)%100;
               }
            }
            do
            {
               c -= (d-b*n)%100;
               for( ; ++FORcnt[16]%5 ; )
               {
                  d  = (c*e+e-f-h+j-f-a-d+c+f)%100;
                  d += (n-j+g+l+g-c*f+a*m*k+h+b+l)%100;
                  h -= (l-e+j+d-n-d*g-k-i+m)%100;
               }
               
               switch( ++SWcnt[5]%3 )
               {

               case 1:
               {
                  j -= (n-d+e-j+i-f-e+f-n-n)%100;
                  j  = (e-m*d+j+j+h-k+g+k-g-e+m*m+c)%100;
                  f -= (d+g-i)%100;
                  m += (k+f*a+k-h+m+d*l)%100;
                  h -= (g+c-h)%100;
               }
               break;

               case 2:
               {
                  b -= (n*e-a+d+j+i-b*h+g+f-l+f)%100;
                  g += (h-b-i-c-e*n*n+k*d)%100;
                  k += (g+g+k+n-h-a-k+f+j-n+i+e+j+l)%100;
                  j += (k*b+i+n-k-n+d*k)%100;
               }
               break;

               default:
               {
                  n += (n*k*g)%100;
                  i -= (j*h+d)%100;
                  i += (m*m*d+h+c-d+i-h+k+j*e)%100;
                  e += (d*b*n)%100;
                  f += (j-i-n+m+g-l-b-f+k-d+d)%100;
                  i  = (i+n+a-c+k*a-i)%100;
               }
               }

               e += (m+e*l+h+k+f)%100;
               k += (n-k-a+b+h-i+k-c-g-f-k+h*n)%100;
            } while( ++DOcnt[10]%5 );
            c  = (j-l+f+c+f*m+m+l-b-j-n+d-f)%100;
            c += (d*i)%100;
            d += (d-l+h-c*j*i-d+m-d*m-g+l-d)%100;
         } while( ++DOcnt[9]%5 );
         c += (e+k)%100;
         e -= (n+c+a+c*d+h*i+a)%100;
      }
      f += (i-e-j+k+e*k+n*g-f)%100;
      m -= (n+e+e+m*a+f-f+c+d*n+h-b*l)%100;
      i += (n+j+f)%100;
      a  = (a-j-c+j-g)%100;
   }
   l  = (d*d+n-h*f-i*a)%100;
   e += (e-c+b+j-d)%100;
   k += (g-a*k+f+d-j-n*m+l+i)%100;
   f += (g+n-e-f+j+b-f-h*e-i)%100;
   b += (f+e+e-d*e+h+h+h*e*k)%100;
   f -= (l-i*f*k-n+l+j*n-g*b-l)%100;
   a -= (k+h+j-d-k-a-e*c)%100;
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
         m += (m*d+k+i+l-a-l*m+f+j-d)%100;
         n += (m*n-m-f+b*f-h+e-i+f+d+g)%100;
         m += (l*l*l-d+m+e-i+j*d-j*h+f-e)%100;
         n += (i*d-b+h-m*a)%100;
         m  = (m*m)%100;
      }
      else
      {
         while( ++WHILEcnt[12]%5 )
         {
            do
            {
               for( ; ++FORcnt[17]%5 ; )
               {
                  m -= (l+a*f-e-c-b-i*n+n*h-l*n-m+b)%100;
                  j += (i+n-i+i)%100;
                  b -= (g+c)%100;
                  j -= (a-d-m+j+d-i-c*m)%100;
                  a += (a*d-g*d)%100;
                  b -= (d-i+f-i+f-e)%100;
               }
               for( ; ++FORcnt[18]%5 ; )
               {
                  f += (l-n*h+g+c+j+e)%100;
                  c += (a+h-e*d-b+i-m-e-d-l)%100;
                  m += (c-l+i+d)%100;
                  d -= (g-e+j+k+a-f-k*k+m+m)%100;
                  k += (d*a)%100;
               }
               if( ++IFEcnt[11]%2 )
               {
                  e += (g-d*d+d-e-c-h+l-c+b-n+e-m-c)%100;
                  j -= (g+b*h+l)%100;
                  i  = (h*h-a-a*h-c)%100;
                  a -= (f+l-h+n*m-h-a-n-a)%100;
                  c += (k+f*b)%100;
               }
               else
               {
                  m += (j+a+j+b+k+c+a-h+i-k*f-j-i-j)%100;
                  b -= (f*k+b+g+i+l-f-d)%100;
                  l -= (b-g-c*h-l+l*a+m)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  j += (k+f)%100;
                  d += (f+f-d-i-j+n-m+b*c-a)%100;
                  k += (k+k-j-a-j-c)%100;
                  g += (c+c*e-d)%100;
               }
            } while( ++DOcnt[11]%5 );
            do
            {
               if( ++IFcnt[8]%10 )
               {
                  k -= (a-k+m-l+i-m-f*j+n+k-e)%100;
                  h += (i+j-h+b*e-f-j+c-f*h*l-n)%100;
                  k -= (k-j)%100;
                  h  = (n-b+h+f*n-a)%100;
                  h -= (l+a-l+j-k+a*g*j+k+m*g)%100;
               }
               e -= (l-j+k+a*k)%100;
               for( ; ++FORcnt[19]%5 ; )
               {
                  n  = (f+k+k*h-a+m-l+d)%100;
                  c += (f-e+i+j-k)%100;
                  k -= (a+e*k-k)%100;
                  l += (h+c-n-k-b+l-k-e-m)%100;
                  l -= (l*h+b)%100;
               }
               
               switch( ++SWcnt[6]%4 )
               {

               case 1:
               {
                  b += (e-i*l+l-i*g-n-a-k-g-h)%100;
                  k -= (k*f-f)%100;
                  e += (l+l*h-b-k*a+l*h+e+a+b*l+n)%100;
                  d -= (c-i+f-a-e+f+a+a-f-k)%100;
               }
               break;

               case 2:
               {
                  h += (f+m+g+h-k-a-d+m+n)%100;
                  l -= (h+n*c+h*l*n+h-c-f-a)%100;
                  h += (g+m-f+e-a+c)%100;
                  h -= (m*k+h+a-m+e*l-d*g*a-m)%100;
                  l += (i+g)%100;
                  b += (a+g+i-a-l+e)%100;
               }
               break;

               case 3:
               {
                  b += (l*c-d+f*n)%100;
                  n += (f*c+h-g+e*f-j)%100;
                  b -= (d*j*e+f-c-j-g-b-i+d-d-c-d*a)%100;
                  g  = (a+l*c-b-n+c-g+l+n+b-h)%100;
                  b += (k-m-e-j*f-d*a)%100;
               }
               break;

               default:
               {
                  n -= (g*k*c-d*a+k+f+n-h+b)%100;
                  m -= (j+k-c+g+j-m-m-f-i-e)%100;
                  j -= (m+d+e+a+k+j+m-e+l+f*k+i+b+f)%100;
               }
               }

               e -= (k+a+f+c+i)%100;
               l += (a+e+h+m+m)%100;
            } while( ++DOcnt[12]%5 );
            f -= (b*b-f-d+c*g+l+g-j-n-b)%100;
            l += (a*h-e+g*j+d)%100;
            m += (l+d-i-k)%100;
         }
         n -= (i+h+f*n+h+h+d-d+j*j-j)%100;
      }
   }
   k -= (l+l-n-n+h+d+d+d-d+j-b+k-d*e)%100;
   c -= (n-i+m-b-k-k+k-k*i+b)%100;
   h -= (e-a-d+g-d*f-d+g+f)%100;
   b += (k*j-g*c+n)%100;
   h += (f+b-c+k*i+d)%100;
   n -= (j+f*g+k-i+n+c*b-i+c+e-b-l+e)%100;
   k += (l*k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F7(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[15]%2 )
   {
      a  = (l-i-g+n+j-j*k-d-f+a-m+c)%100;
      b -= (e+g-a*b*l)%100;
      m += (m-i-a*a-b)%100;
      b += (k+j+j-b+k+g*n+d-n)%100;
      b  = (k+d+m-m*j-n*k+k-c)%100;
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
                  f += (l*e)%100;
                  l += (d+b*l+k+a*d-b+e+d*g*g)%100;
               }
            }
            for( ; ++FORcnt[22]%5 ; )
            {
               if( ++IFEcnt[13]%2 )
               {
                  g -= (g+k-j+l+l-b*e+e+j-b-m*b+b+i)%100;
                  f += (n+j*b-h-a-k+f*b-c+d-a-m)%100;
                  d -= (k-j+d+a*f-k+d+l*l)%100;
                  b -= (a*l-j+m+d-i+l)%100;
                  g -= (j-h+c-j)%100;
                  c += (n*m-k+e*k*n*c-f)%100;
               }
               else
               {
                  f += (h-h-m+a*j+b*m+b-a-j)%100;
                  c -= (f+a+g-m-g-g-m+a*c)%100;
                  i  = (l*h*a)%100;
                  e += (m-d*d)%100;
               }
               while( ++WHILEcnt[13]%5 )
               {
                  i -= (n*h*b)%100;
                  f += (g+e)%100;
                  e  = (d-j+a-i-m-a-j*h*a)%100;
                  g += (f-i+i-i-m-e-b-f*n+l)%100;
                  f += (l-g-k-d-k)%100;
               }
               do
               {
                  j -= (k-j*l+n+i-g+c-n*d+j)%100;
                  b  = (l*d+c)%100;
                  l  = (k*l+h)%100;
               } while( ++DOcnt[14]%5 );
               f -= (a-b-f+a+j+l+k+b-b-f+g*n+j)%100;
               for( ; ++FORcnt[21]%5 ; )
               {
                  c -= (m*k-e)%100;
                  n += (c+k+b-a)%100;
                  c += (n-l+j*m-l+m*e)%100;
                  b -= (e*c+d+f*f-e+n-m+m-l*h*l-h)%100;
                  d  = (k*m+g*k)%100;
               }
            }
            
            switch( ++SWcnt[7]%3 )
            {

            case 1:
            {
               if( ++IFcnt[11]%10 )
               {
                  l += (c*c-j*b+f-b+d)%100;
                  e -= (m+f)%100;
                  g -= (d+l-e+i*j+m+i+b-g+h-k-l)%100;
                  f -= (i-h+c-j-i+c+e+h+a+a)%100;
                  l -= (n-g)%100;
                  g += (h-i*g+j-f+h+m+e-f)%100;
               }
               if( ++IFEcnt[14]%2 )
               {
                  m += (c*a)%100;
                  j -= (d-f)%100;
                  a -= (m-a+m-c-h+j-l*c+a*h-h)%100;
                  b  = (h+k-n+b-d+l*c+g-h+b-n-m)%100;
                  n -= (l-i-j+k-e-d*e)%100;
               }
               else
               {
                  k -= (m+h*m+n+a)%100;
                  e += (g+h+i-b*f+a+n-a-d+k+i+h+b+h)%100;
                  e += (n+d*f-j-h-l-b*a-c-f*k-n+i+n)%100;
                  g += (b-b-g-i+m-j-l*d-c-j+l*a+d)%100;
                  a -= (j*b)%100;
               }
               while( ++WHILEcnt[14]%5 )
               {
                  e += (m+l+f*n*e-m-n-i*d-a-k*j+h-g)%100;
                  g -= (a-b)%100;
                  a -= (f-k+h+f+c)%100;
                  k -= (f+e-i+k+f-i-d+i+b+h+h+b+i)%100;
               }
               do
               {
                  l -= (d-a)%100;
                  m += (n-a-c-i+h*j+n-f-k-n+e)%100;
                  m += (h-j+g)%100;
                  c -= (c*j-b*d*b-n+c-f+b*b+j-k)%100;
                  m -= (e+f+h+c-f+n*c+a+d-m+b-f-m)%100;
                  i -= (j+d-i-n+f+g)%100;
               } while( ++DOcnt[15]%5 );
            }
            break;

            case 2:
            {
               c -= (k-l-i*m+m+a+f-f-n-h+e-d)%100;
               n  = (k*k*a-l*k)%100;
               e  = (h-e+h-j-a-e+e+a+c+g)%100;
               d -= (n*i*g-d+g+h-a)%100;
               h -= (e+b-i-n-g-e-d+f+f*a+d+e)%100;
            }
            break;

            default:
            {
               a -= (n+e)%100;
               n -= (b*i+d+e-m+i+c+a*b+i+g+j-e)%100;
               i += (f+b+e-i-a-k+l)%100;
            }
            }

            e += (k-e*j-l+n)%100;
            m += (a-j-n+n*g)%100;
         } while( ++DOcnt[13]%5 );
         k -= (f-b*f+b-a+f+j+c+e-f+c-a)%100;
         a += (n*e+g-j+i-j*l+n*g+f+e+b-g)%100;
         l += (h+d)%100;
         d += (n*i+k)%100;
         c -= (m+k*c+k+e-i*m-m-e)%100;
      }
      a += (h+i-k+a-i+c*k-k*b+f+k)%100;
      d -= (g+g-l*l+g+f*e+b*f-g)%100;
      h += (c+d+g)%100;
   }
   d += (d+i)%100;
   a += (f-a+i-f+m)%100;
   k += (j*h+k-l-e-j*i+d)%100;
   l += (f+g-l*k-e-e*b+i-n-n-f+a-b)%100;
   h += (k-a-l+e+e-h-f-m-b)%100;
   m -= (m-n*l-f-n*j+e*i-a*b*g+j*n)%100;
   b += (i+g-a-j-j-d+a-a*b-a+e-g+k*i)%100;
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
            m += (g-i+h+m-e+j-a)%100;
            h += (b+d-h*a*d-g+i*j+l*m)%100;
            i -= (f-l*m-k+g+e+h+f-g-f-i+h-h-c)%100;
            l -= (c*k*i)%100;
         }
         else
         {
            while( ++WHILEcnt[16]%5 )
            {
               do
               {
                  j += (g*f-c+j+c)%100;
                  d -= (c+j+a-e-l-i+h*n+j+a-i+l-b)%100;
               } while( ++DOcnt[16]%5 );
            }
            if( ++IFcnt[12]%10 )
            {
               m += (b-b*h-h-f+e*h*k-a-f+e+b)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  e += (d+k-c)%100;
                  e += (d-c)%100;
                  g -= (i-m*a*l-l+h-j+n*a-k)%100;
                  h  = (f+m+j*j+c+i-g-e+g-l+h-a)%100;
               }
               
               switch( ++SWcnt[8]%3 )
               {

               case 1:
               {
                  m -= (j-a-g+g+b-j-k)%100;
                  h += (m+i*k-f+c+f-c-e-l+e-d-c+m)%100;
                  n += (b-e*d-f*k-i-m-f+c-d)%100;
                  d  = (f-j*e*h*h+e+g+f)%100;
                  f -= (a-l-g-e*i-c-m-m-h-e-k-n)%100;
                  j += (l+c+h+b+c-j-l+n-a*c+g+k*k)%100;
               }
               break;

               case 2:
               {
                  d -= (e-m+k+j+b+i+e*b)%100;
                  b -= (g-f+b*f+f+l-f-d-d*c+b-h)%100;
                  c += (l+b+j*l*c*f)%100;
                  f -= (a-b)%100;
                  e += (n-k-i*n-b-n-l)%100;
               }
               break;

               default:
               {
                  d -= (a+i+f+d-n-l-e-n)%100;
                  a += (a+l-k-i*c+e-e)%100;
                  n -= (a-c-a*j-c-k+e)%100;
               }
               }

               if( ++IFEcnt[16]%2 )
               {
                  n += (a+d-h)%100;
                  b  = (g+c)%100;
                  l -= (f-d-e-e+e)%100;
                  i += (b+h-k*j)%100;
               }
               else
               {
                  i -= (c-h-l*d-j*b-c+a+c-f-k)%100;
                  i -= (n-a-m*c-b+a+g-i-l+g*k+j-l)%100;
                  a -= (m*j*e+e*g*i+k+e+n+h+c+d)%100;
                  h  = (a*g-i+e+c)%100;
                  n += (l-a-g*h*a-d-g*m-k)%100;
               }
               while( ++WHILEcnt[17]%5 )
               {
                  k -= (i+i+l-e-m-j+b+n)%100;
                  b -= (c*h-l+k*e)%100;
                  d -= (g+c*f*n+h)%100;
                  a += (h-a-d-m*d+h+h+k)%100;
                  h += (f-k+c*a-f-e+d*i+k*m*c*a)%100;
                  e -= (j*c-f+n+j*h+b+c+h+l+d)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[24]%5 ; )
               {
                  e  = (f-m)%100;
                  k += (k+c+k-i+e+h+k*e-i+m*h+c*a+e)%100;
                  h += (l-n+c-l+k*j+i-g+c*c+b-n+g)%100;
                  e += (g+e-h+b+n-g*c*e*i-g)%100;
                  d += (j-d-g+b)%100;
               }
               h += (a-h-k+f*a)%100;
               b += (b*i-d+f-g*k*g-j-m-c)%100;
               k += (d*f+g-k-h-d-d)%100;
               h -= (h*h+c-l-b-k*b-i+l-n+a*f*a+a)%100;
            } while( ++DOcnt[17]%5 );
            k += (e+k)%100;
            m -= (n-l*m-k*f-m+h+e+a)%100;
         }
         n += (k+e*c+c+h+g+d)%100;
         b  = (d+b+e+b)%100;
         n += (a-e+g+g+m+c+c)%100;
         b += (d-n-e*c-n+e+f+h*j*d-e+e-i)%100;
         m -= (m-i-g*a-f)%100;
      }
      g += (e+h+h*k-k+f*j*h+n-a*l+f)%100;
      d -= (l+n)%100;
      h += (c-a-m+m+g*c+f*i)%100;
   }
   b += (f+n)%100;
   f -= (c+h+n+c+a*k-i)%100;
   i -= (b*h-c+d*n+g-g-a-f*f-h)%100;
   f += (d+d-f-c+k)%100;
   l += (h-i-d-d-c-h+c)%100;
   g -= (l-g)%100;
   a += (b*a*d+i*j*m+i)%100;
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
            k -= (b-h-g-n-b-d+e-c-i+j)%100;
            m += (b-e-j-h-j-b*l*g+m-h+f)%100;
            h -= (c+b-i)%100;
            l  = (n*k-b+j*i+c-h-g+j)%100;
            n -= (j+a-e-m-j*f*n-c+c-l+f+n)%100;
         }
         else
         {
            while( ++WHILEcnt[18]%5 )
            {
               do
               {
                  g  = (l+n+f-a-d*g*d+f)%100;
                  g += (b-e+f+h+g-e+j-e+j+i)%100;
                  b -= (k-f-m-a-m+f-m*n*f+k)%100;
                  f -= (g-l)%100;
               } while( ++DOcnt[18]%5 );
               c -= (l*b*g+d*d*l+f-g-g-l+a)%100;
               for( ; ++FORcnt[27]%5 ; )
               {
                  a += (h-l+n*f+a+l+l-f*i-j)%100;
                  l += (l*c+a-k+i*b-e-j-m+f*c-a-e)%100;
                  b -= (d+g-n-c-j+l-k)%100;
                  j -= (d+f*l+a+c+g-e-g-e-m+g*b+m*h)%100;
                  i -= (l-f+c+c*b+c)%100;
                  l -= (d+b-c+k-n-f+l*a-d*b-n)%100;
               }
               
               switch( ++SWcnt[9]%3 )
               {

               case 1:
               {
                  d  = (i*d*e+c-b-d-h+a)%100;
                  m += (k-g+i*j-l-j*j+d*l+h)%100;
                  m += (d-d+b)%100;
                  f -= (l+k)%100;
                  m -= (f+a)%100;
               }
               break;

               case 2:
               {
                  j += (g*g*m+d+m-n+h)%100;
               }
               break;

               default:
               {
                  e += (i+f-h*m)%100;
                  h  = (k*j)%100;
               }
               }

               if( ++IFcnt[13]%10 )
               {
                  f += (e*h-j+l-g+l+b-j-e+n-m-e)%100;
                  i += (d-e-b*c+b*l-a-a-m+b)%100;
                  l  = (m+e-c-h+m-l+e-i-n-f-c)%100;
                  a -= (n+f-d*m-a+d)%100;
                  k -= (j-f-k-e+h*m+e-h+k*b+n)%100;
               }
            }
            if( ++IFEcnt[19]%2 )
            {
               if( ++IFEcnt[18]%2 )
               {
                  g -= (d+j*m-d-h-k+e*e+b+c+i)%100;
                  a += (k-l*i*h-i+l-a+h-n+n-c-c+i-k)%100;
                  m += (l+g+l+a-i-k+a-e+f*k+h-b-k-m)%100;
                  b += (b-i-d+b+c-j+l+c-k*k-h+l*g+m)%100;
                  g += (n-m-e+g-l*e+j+e*h-h-d*n-c)%100;
               }
               else
               {
                  c -= (i*j+e*m-l+b*c*j+e-l+e*i+m)%100;
                  j -= (a+b)%100;
                  n -= (d-i)%100;
                  c -= (g-c-f*i-h+e*g-e)%100;
                  j  = (a-m-d-e*i+d-h+i+j+b*f*h+h+f)%100;
                  b -= (e+i-k-k-g-l*l*d+n)%100;
               }
               n += (d+l+c-e+b+c)%100;
               n += (i*f)%100;
               g -= (e*c+c-a-b-d*k-e+k+i+a*e+n)%100;
            }
            else
            {
               while( ++WHILEcnt[19]%5 )
               {
                  m += (i-f-a+m+l+h-i+l+i)%100;
                  a += (a*i*d+b-h+f*e)%100;
                  l -= (f*g+g-b+d+m*n-j-m)%100;
                  m += (n+b*b*j+i+c)%100;
                  l -= (j+a*d*n-f-b+c-m-m*e+n*j)%100;
                  j -= (k-i)%100;
               }
               do
               {
                  n += (b-f*i*g+l-i-i*i*e)%100;
                  j  = (b-i*f)%100;
                  b -= (f+c)%100;
                  j += (l+l+d*m+c+d-c+e+j+f*a+g)%100;
                  i += (b*i-f-m+e)%100;
               } while( ++DOcnt[19]%5 );
               for( ; ++FORcnt[28]%5 ; )
               {
                  a -= (l-n)%100;
                  l -= (a+f+h-l-j*a+f-j*e*c-m+i)%100;
                  h += (a+j*i)%100;
               }
               for( ; ++FORcnt[29]%5 ; )
               {
                  c += (f-b)%100;
                  k -= (m+a+n-i+n+i-l-h*c-l-n+k)%100;
                  m += (c+e+c-n*m+h)%100;
                  e -= (b+j-g+g+l+g+f)%100;
                  m  = (g+k+d+n+g+g+i+i+b*i+h-e)%100;
               }
            }
            n -= (e*d-n+c)%100;
         }
         l += (e-j+j-j-g-a+a-n-f)%100;
         b -= (k+c+g+l+a+g*l+g-b*m+m)%100;
         e += (i+n-g-m-b-m-f+m-d+e*f-n+k)%100;
         m += (e+e-h+n-k*b+j-d+b+j-e+c-j+l)%100;
      }
      l -= (i+k*f-h)%100;
      e -= (m+e+m+l+b+b+f+j)%100;
      m += (n*d*a-k+k*c-l+l*l-d+i+n-b)%100;
      h -= (e-l+l-k-c+c+g*m-n+c)%100;
      n -= (j*f-g+j-f-f+n*i*d-g-k-c-i*l)%100;
   }
   c += (c+l-k*f*f-h-a*d-h+b*n)%100;
   h -= (e-l+k-b+i*g+a-i-i*j)%100;
   j -= (h+i-l+d-k-h)%100;
   l -= (c-b*n)%100;
   g -= (n+a)%100;
   n += (e*b+c-m-k-n*h)%100;
   a += (c+n+c-n-g-d-e-h-i-i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F10(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[21]%5 )
   {
      do
      {
         if( ++IFcnt[16]%10 )
         {
            n += (n+c-i+k-n)%100;
            for( ; ++FORcnt[31]%5 ; )
            {
               
               switch( ++SWcnt[10]%3 )
               {

               case 1:
               {
                  n -= (a+n-m*g+n+e*f*l-d+f+k-h+d)%100;
                  l -= (g+m+f+m*g*i+i-f-n+d)%100;
                  j += (b-f*g+b+a)%100;
                  m += (l-n+i)%100;
                  h += (a+b*d-d+d+d*m-i+b*n)%100;
               }
               break;

               case 2:
               {
                  e -= (n*i*d*g*l)%100;
                  k += (a+l)%100;
                  i += (m+a-d-h+m)%100;
                  h -= (d-i+e+a-j+f-c+d+b-a+a-h*a)%100;
               }
               break;

               default:
               {
                  c -= (b+f)%100;
                  m -= (h+l+i*g+c*g*d-m-m-i+e-l+i*l)%100;
                  h += (i+n+m+a+h+d*j-l-l)%100;
                  g += (f+j)%100;
                  m  = (g+h)%100;
                  n -= (l+h+m*n*k-m+c+l+k+j*b-g)%100;
               }
               }

               if( ++IFEcnt[21]%2 )
               {
                  c += (m+f+l+a-i-e*g+j+i-e)%100;
               }
               else
               {
                  g += (l-f)%100;
                  k -= (n+f+m+b-a*g-d-l+k)%100;
                  c += (e+j-i+g+e+k)%100;
                  f += (k-h-c)%100;
                  n -= (f-i+c+m*d*g-a*l+e+d*l-k*a+a)%100;
               }
               while( ++WHILEcnt[20]%5 )
               {
                  m += (m+j-a-i*d+n+b+m)%100;
                  g  = (g-a+c*b+a-e*g*i-j*i)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[32]%5 ; )
               {
                  l += (d-l+h+d*j+b)%100;
                  c += (b-h+f+k+m-b+a-i+e*h+g-l*h)%100;
                  a -= (b+b-g*a-h+l+g+k+m-f*a*a+k)%100;
                  c += (e-n+e*l-f*m*d+j-g)%100;
               }
               if( ++IFcnt[15]%10 )
               {
                  l += (d-m)%100;
                  n += (g*i+j+a+b*k)%100;
                  m += (e+c-l-b*k-i+k+h)%100;
                  n -= (c-l*m)%100;
                  n += (j-m*j)%100;
                  l += (i-a+f-m-j*f-i+d+l+b)%100;
               }
               for( ; ++FORcnt[33]%5 ; )
               {
                  i += (f+m-c-n-c-h-n+c+d+f-n*j-h)%100;
                  a -= (j+b)%100;
                  m += (e*m-f*n-g+g-b-b+h+j+m)%100;
                  m -= (f-b+d+l-n+a+j-n)%100;
                  b -= (k+n-f-c+b-d-a*h+j)%100;
               }
               if( ++IFEcnt[22]%2 )
               {
                  n -= (j+l)%100;
                  b += (d-j+d*d+e-e*a+j)%100;
                  i -= (d+m-h*k*i-a+m+m-l-k-d-b)%100;
                  a += (f*m+j-b+g-g)%100;
                  b -= (i+e-n-j-f+h+e*c-i*n-k+a+m+h)%100;
               }
               else
               {
                  n -= (e-n+a+b+m*d-f+h-k*f*k+f+m)%100;
                  e += (l+b+d-m)%100;
                  m -= (g*l-e+f-n+m*f+b+g)%100;
               }
               c += (m-h)%100;
            } while( ++DOcnt[21]%5 );
            a -= (f+b*e)%100;
            c += (k+c+g+n)%100;
         }
         h += (h+h+c-m-g-h*b-m)%100;
         k += (f-i)%100;
         i  = (h+m-n-j+n*l+f-m-f-d)%100;
         c += (h-k)%100;
         b += (k+h+l)%100;
      } while( ++DOcnt[20]%5 );
      f += (d-m-f-a+g-b-c)%100;
      e += (b+n-c+f-g-d-f*i-c-l)%100;
      g  = (g*g*b+f-g)%100;
   }
   n += (a-i+f*e-f-f-j-n*e)%100;
   g -= (e-c-h*j-c+d+j+k-l*i+i+j)%100;
   g -= (k+j-l-e*l)%100;
   n -= (a+h+n+n*i-a+c-n-n*d-k)%100;
   d += (k*c-n+j*b+i)%100;
   n  = (e+g-k*g-a-m-i)%100;
   i += (k*f+e+c+e+j-h*b+l-i+k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F11(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[24]%5 )
   {
      do
      {
         n += (g+n-e+m)%100;
         for( ; ++FORcnt[36]%5 ; )
         {
            
            switch( ++SWcnt[11]%3 )
            {

            case 1:
            {
               if( ++IFcnt[17]%10 )
               {
                  l += (d-h-m*d-b+d+a+m+d*c-a-g-m+b)%100;
                  b += (d-m-l*k-h+c-j-n*a+e+i)%100;
                  n += (h*g-e+l-l-f-f-c)%100;
                  k -= (l+m-j+j+e+i-b)%100;
               }
               if( ++IFEcnt[23]%2 )
               {
                  k += (a+j-f)%100;
                  k -= (b+m+h+e)%100;
                  b += (j+m-m+j-n+m+c+k-g+h+c)%100;
                  d -= (f+f)%100;
                  e += (b-n-c-j+g-b+k*l*b-m)%100;
               }
               else
               {
                  e -= (m+c+m+n+f+m*k+h*f+n-i*b)%100;
                  n += (b+m+f+i+h-j-g+a*i+m+l)%100;
                  j -= (h-l+g+g+i*b+l+f*f+i+b-h+g+m)%100;
                  b -= (k-i-d*j-l+l-f)%100;
                  b -= (n+f+m-h+d*n*k-m)%100;
                  e  = (e+n+l+k-k-b-h+k+n-b-g-h-n-i)%100;
               }
               while( ++WHILEcnt[22]%5 )
               {
                  i  = (n*j-g-k)%100;
                  c += (d*d)%100;
                  f += (e*m-f-e+f+i*i)%100;
               }
               do
               {
                  f  = (k*l+m)%100;
                  j -= (d+e+k+d-d+f-i)%100;
                  b -= (a-f+f-e*e*f+g+j+l+e+d-j+g-k)%100;
                  m += (h+i-h-b-b-c*j+l)%100;
                  g += (f*k+d-m+i+f+h-e-e*g+l+j)%100;
               } while( ++DOcnt[23]%5 );
               for( ; ++FORcnt[34]%5 ; )
               {
                  a += (n*g*d-n*d)%100;
                  e -= (m-e+j-l+f+i-d*f+c+m*f)%100;
                  h += (b+k-l-i*b+l+h+h-b-n)%100;
                  n  = (g-k+g*g+k-l+b*k-l-k)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[35]%5 ; )
               {
                  c += (c*m-f*f-k-h)%100;
                  h -= (a-j+l-m*d+m+b+j)%100;
                  j -= (l*h+b)%100;
                  i -= (j-c+e-f-n-j+c-d-f+i-f)%100;
                  h -= (l+b+k+m*e+a)%100;
               }
               if( ++IFEcnt[24]%2 )
               {
                  c -= (l-m)%100;
                  a -= (g+b-d+k+j)%100;
               }
               else
               {
                  a += (f*h*a+e-l-j-b-f-g)%100;
               }
               while( ++WHILEcnt[23]%5 )
               {
                  h += (b-m+f*n+d)%100;
                  l -= (a-c-m*g-e-d)%100;
                  d += (e*n-i+l-g-f*a-c-f+i)%100;
                  e  = (c-h)%100;
                  h -= (c-m+n-i-e-b+c+n)%100;
               }
               do
               {
                  f -= (e*m*k+f+a-b+f+c+k+j+h)%100;
                  n += (b-c-l+i+i+d-c+a-m+i)%100;
                  n -= (e+g+d*d+k*g-m-n-l-c-h-g+m)%100;
                  l += (l-k-f-l+c+b-i*g+m*b)%100;
               } while( ++DOcnt[24]%5 );
               if( ++IFcnt[18]%10 )
               {
                  f += (m*n+a-a-h+b+i-c)%100;
                  k -= (c+n)%100;
                  g += (h-a-a-c+i-c-b-k-j-c*j-f)%100;
                  c += (d-a+i-h*j+a+g+b-e-m+e)%100;
                  h -= (n-k+i-j-j*l*e+b-a-d+g+h+j+c)%100;
                  k += (m-c+m-c-c-d-b+i*m)%100;
               }
               l += (c-k+g-h+i-j*c-h*n)%100;
            }
            break;

            default:
            {
               d  = (j+n+n*f)%100;
               i  = (d-m*b+n*n+j-i-m-k)%100;
               c -= (k*n-n-e-k+k+j+b-j-l)%100;
               k += (b+m)%100;
               c -= (h+c+n+h-j-e-b*c+d-h)%100;
            }
            }

            j -= (k-i)%100;
            h += (c+j-e-h*h-e+m-f+d)%100;
            f += (h+n+f*f+h+k-g+g*l-n-h-j+f+a)%100;
            i -= (n*n-b-e+b+m+a+b-k-k*f+l+h)%100;
         }
         e += (j+j-e+g)%100;
         i += (b-f)%100;
         a += (i-n+k*d+m+n*h*m*h)%100;
         c -= (n-l*k*e*d+b-b*a+j+g-f-l+k)%100;
      } while( ++DOcnt[22]%5 );
      n += (g+f)%100;
      b  = (e*c-a-m+f+c)%100;
      j -= (i-m*n+f)%100;
   }
   g += (e-l+k-i-g-c-m+a-c)%100;
   e += (k*j-n-i)%100;
   n += (b-l+m-a-i-h+c-a+k*k*b-m)%100;
   n -= (i*m*n-l+e*n-n*l+j+a-m-j+a)%100;
   f -= (f+d)%100;
   f -= (m-j+l*f)%100;
   n -= (j+d*n+h-l-c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<28; I++) IFcnt[I]   =0;
   for(I=0; I<38; I++) IFEcnt[I]  =0;
   for(I=0; I<19; I++) SWcnt[I]   =0;
   for(I=0; I<38; I++) WHILEcnt[I]=0;
   for(I=0; I<38; I++) DOcnt[I]   =0;
   for(I=0; I<57; I++) FORcnt[I]  =0;
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

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      for( ; ++FORcnt[39]%5 ; )
      {
         
         switch( ++SWcnt[12]%3 )
         {

         case 1:
         {
            if( ++IFEcnt[25]%2 )
            {
               for( ; ++FORcnt[38]%5 ; )
               {
                  e -= (h*m-f)%100;
                  e -= (k*e*j-n-f+i-g-e+j)%100;
                  b -= (l+c-a-h+i+h+n-e*j+i)%100;
                  l += (i-m+e-h+g-g+b-d+i)%100;
                  i -= (l-g*a)%100;
               }
               d += (i-m-c-a+j-l+g+d)%100;
               n  = (k+a-c-h+b-j-e*b)%100;
               c -= (a*l-j*b*c+g*j*k-e+h-n*d+e)%100;
               l += (k+h+n-f+k*e*a*d-b-h-b)%100;
               n += (k+j)%100;
            }
            else
            {
               while( ++WHILEcnt[25]%5 )
               {
                  f += (a-f*m+c*h+b-j+j+e*d+m-m-e+c)%100;
                  j += (a+d)%100;
                  m += (b*m+d-c+d+f+n+c+m-b-g+k-b-a)%100;
                  d += (h-b-a*e)%100;
                  g += (n+m+l-e+k+n-j*n+g)%100;
                  g -= (b-n-j*j)%100;
               }
               do
               {
                  g -= (n+k+e*h*j+j+g-e+h+c-n-b-c)%100;
                  h += (j+k)%100;
                  i += (j*f+g+l+i*j)%100;
                  f += (k+l-b+b)%100;
                  k  = (l-b)%100;
               } while( ++DOcnt[25]%5 );
               for( ; ++FORcnt[37]%5 ; )
               {
                  d -= (l-k+f+n*b)%100;
                  g  = (j+l*f+k*j-n-e-d-l+g-k*j+h)%100;
                  b -= (m*f-k-l-a)%100;
                  e -= (n+e+j-h+h+k)%100;
                  d -= (a-a+g)%100;
               }
               if( ++IFcnt[19]%10 )
               {
                  f -= (i*c+l+d-i+m-f*g+b-k+d)%100;
                  e += (d-k+d+j-j*i*n-g*k-n-j-n)%100;
                  c += (d-a-c*l*f-l*h-n+e+b)%100;
                  l += (d+a*k+k*j-f-k+a+b-g+b*h)%100;
               }
            }
            f += (h-j-h+g-i)%100;
            n -= (a+a+i-b-j-a+e-j+f*d*a)%100;
            h += (j*d)%100;
            f  = (c-c+c-l+c+j+g*c)%100;
         }
         break;

         case 2:
         {
            l -= (h-l*g+h+f*d-e-j+n)%100;
            j -= (a-g+d-l+i*a-n+b-a+g*l-n*d+c)%100;
            n += (h+a*n+a+a-l+n-i-f-h)%100;
         }
         break;

         default:
         {
            k += (k-n+b+l-n*h+g-b+k+i*b)%100;
            h -= (i+n*e+l)%100;
            l -= (k+e-h-l-l*a*k-e-m-j)%100;
            a += (d+k+j)%100;
            b -= (n-c+f-g)%100;
         }
         }

         g += (i*c+j-f-a-k-c)%100;
         k -= (k+d+k+c+b*a+k)%100;
      }
      d -= (k+e*k-k)%100;
      c += (b*i+c+b-i-m+i)%100;
      l += (c-b+b*e+b-c+j*e)%100;
      i -= (l-b-l+k-j-n+h+m-d)%100;
      j += (n+d+c-a-a-j+l-m-f-d*e+j+i)%100;
      d += (f-d+a-j*e+i*m*l-g*n+d+a*h)%100;
      n -= (m*l+c-k+k-a+d-m*j)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<20; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 20 << "   Dynamic = " << sum ;
   for(I=sum=0; I<26; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 26 << "   Dynamic = " << sum ;
   for(I=sum=0; I<13; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 13 << "   Dynamic = " << sum ;
   for(I=sum=0; I<26; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 26 << "   Dynamic = " << sum ;
   for(I=sum=0; I<26; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 26 << "   Dynamic = " << sum ;
   for(I=sum=0; I<40; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 40 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}