#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[67],IFEcnt[89],SWcnt[44],WHILEcnt[89],DOcnt[89],FORcnt[134];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         k -= (f*g)%100;
         e += (k+i*g-h-g-n+d*n)%100;
         m -= (b-h*g+c+e)%100;
         n -= (g-f+l+l*f-f+f*g-l+m+n-n-d)%100;
         n += (b+b-g+m+g-k)%100;
         j += (m-i+h)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  e -= (c+g-i+k)%100;
                  i  = (j*g-h+k)%100;
                  m += (j-k+k*n-j+b-j+h-a+c)%100;
               }
               h -= (l-a-e-a+d)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  d  = (i-m+a+d)%100;
                  c -= (e*i+g+g-b-f-k)%100;
                  k -= (k+i+f+c*b+f*b*m+a-k*h+d*j-b)%100;
                  m += (l+c+i-i-i)%100;
                  j += (l-g*c-j+a+f)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  k += (m*h+j*d+j+l+l+m+k-b)%100;
                  n += (a*l-c*g*j)%100;
                  h  = (k-d-j-b*e+d+b+b+e-k+d)%100;
                  f -= (h+a+j-n-f)%100;
               }
               break;

               case 2:
               {
                  d -= (a*k*n+d+d*n*i-c+k)%100;
                  n -= (c+m+e*n+f-l)%100;
                  i += (c-f-e+d)%100;
                  h -= (c-f)%100;
                  m -= (i-l-k-i*a-c)%100;
                  e -= (c*b*l-c)%100;
               }
               break;

               default:
               {
                  n -= (g*d*d+k+j-l-n+c+m+a-i)%100;
                  n -= (j+m+n-g+f+l-k+b-f+m)%100;
                  n += (h-c+h+m-h-j*g)%100;
                  i += (b+h+n-c+c+e-l-m*f+a+a)%100;
                  k -= (e-j)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  l -= (d+n+c+k+m+c+m)%100;
                  g += (m+h-b+m*j-m-m*k-l-m-n-f-e+j)%100;
               }
               else
               {
                  j -= (d-l+f-g-c+g+f-a-b*l-c+j-c+g)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  l += (b+g+f*f*k+i)%100;
                  k -= (i+m)%100;
                  c  = (f+j*g*n+i-k*h+l+l-g-l)%100;
                  f += (m*i-m-j+j)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  a -= (k+g+k-e+k-g-f-d*l)%100;
                  j -= (f*k-g*f-m*k-i*k-i*h*h)%100;
                  j -= (i-c-f+l-h*e+e-h)%100;
                  n += (d+g-c+a+i+e*b+j*c+j)%100;
                  g += (g+e*b+d-b-m+m-n-n+d)%100;
                  a -= (g+e*a*f-c*k+j+i+n-d+c-k-k-k)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  b += (f+e*j*n-f-d*l-b*m+c-m+f-j-k)%100;
                  i += (f-c+h+n+n+n*h-l*g)%100;
                  b -= (f+a-i-h*h+c+n-e)%100;
                  m  = (j-i)%100;
                  m += (f*f+e+l*n+j+d+h-k-k)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  g -= (b+m)%100;
                  f += (n+k*n-a+k+e)%100;
                  l += (k+b*k*e*c*k+b+l-j*e*h-l+b)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  e += (k*b+n+g+l+b-j*a-l+a+c+d)%100;
                  k -= (j-a-i+l+n*i)%100;
                  k -= (k-b+c*f*b+k-k+e-n)%100;
                  j -= (c-a+m-d*c+a+l-e+f+m-f-b)%100;
               }
               else
               {
                  m += (h+h*c-g)%100;
                  h -= (k+n+b-k-i*i)%100;
                  f += (a*f*i+k-k)%100;
                  f -= (l-d)%100;
                  c += (k+i+d-g*h*n+b-h+b)%100;
               }
            }
            n -= (f+i-k+k+a+d+d*n+b+a)%100;
            g -= (b-i+g)%100;
            a += (k*b-l*m+b-f+n+b+c-c-j+e+g)%100;
            d -= (c*d-i+g+l-a)%100;
         }
         a += (m*g+g+g-n)%100;
         f += (h+n-e+l+d-i+i+b*n+a*g-b)%100;
         m += (k-k)%100;
      }
      a  = (c-i+l-l+c)%100;
      e  = (h-g-m-a*e)%100;
      l += (a+b+f-k+h*h*e)%100;
      a -= (c-l-j)%100;
   }
   m += (l*i-e+f-b+n+f-i-l+g+i-j+i)%100;
   l -= (e-a-m+m)%100;
   n -= (n+l)%100;
   j -= (i-i+n-i+h-n+h)%100;
   n -= (a-j)%100;
   h -= (n+k+m*l+m)%100;
   d += (b*i-e)%100;
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
         m -= (m+d-c+b+m+e*b-l)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%4 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  k -= (c*b-g+a-k*g+b*a+n+j-g+k+g*f)%100;
                  f -= (f+j-f*b+c*j-g)%100;
                  i -= (j+f*g+l*n*a-f-h*n+n-h-n)%100;
                  k -= (j-c*m*d)%100;
                  l += (l+f*a-b+h+h+c-m*c+d*l+c-c)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  a -= (g*a+e*g-c*f-a+n-n+g*f+d)%100;
                  n  = (f+b-e+b-f*h*h)%100;
                  a += (l-a-a+e*a-n+m-m-n)%100;
                  d += (j+j*h+j+j+g*g)%100;
                  f  = (a-h+d-a-m+b-k-j+b-a)%100;
               }
               else
               {
                  d += (g-g+h+i-i)%100;
                  f += (m+e+g*a+k-g)%100;
                  a += (n+b+m-e+k-g*b*a)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  c -= (c*m-g+j*m+e-a-d-a+h+j)%100;
                  k -= (m+k)%100;
                  m -= (c-e-f-m*b+m-g)%100;
                  i += (k-c*l*h-f-f-j-c-c+d)%100;
               }
               do
               {
                  d -= (a+j*n+k)%100;
                  f -= (a-m-l+n*i+i-i+j+a+n-c+h+b+g)%100;
                  e -= (a-h+b*e-l-f*l-k-f)%100;
                  g += (m*c+l-h+i-n-c+l-i*n-c-c+g+a)%100;
                  f -= (j+k-l+d-c*b-b*g*n+f+m+m)%100;
                  c += (d-b-f-a+i-j)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  l -= (i+i+b-e*m-d-l*f)%100;
                  i += (i+e-j-g+g-m-g)%100;
                  b += (i*a+j-k-m+k+n*j+f)%100;
                  g -= (f-b*n+c-f-e-e+n*g)%100;
                  k += (m-g-b)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  l -= (h+m-d+m-l+l*h-a-a+e-d+i-m+b)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  n += (c-g-e)%100;
                  d -= (n-m-i-f-e+d+g*c-c+i)%100;
                  l += (c*i-d+l+k+b*j*i+f+j)%100;
                  d -= (k+e-c)%100;
               }
               else
               {
                  k += (m-h-e+g+n-h-l-f-j-n*c*d+i+h)%100;
                  h += (l-i-g*j-k*k*a)%100;
                  i += (l-d-m-m-m+b-d*i-l-j+l-a)%100;
                  c -= (m+d)%100;
                  e -= (j+i-e-i*c*l*d+g+i-e)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  h -= (k-n+f+n-i-l+e-m)%100;
                  g -= (i-c-f+a-m*d-a*j)%100;
                  h += (f+m)%100;
                  d -= (k+g)%100;
                  m -= (a*j*a-j+e+m*k-k-g-b+h)%100;
                  b -= (j-j-a+c*e-c-j*g*l*m*c)%100;
               }
            }
            break;

            case 3:
            {
               do
               {
                  b += (f*b-d-h*k-e-f+n*m)%100;
                  h += (f-m-l+d-i)%100;
                  i += (e+m-i-b-c-d+e+a-k*b)%100;
               } while( ++DOcnt[4]%5 );
               d  = (n*n-g-m-k)%100;
               f -= (l+f+l)%100;
               e -= (c*f-h+k-i-c+n+d*h-e)%100;
               e += (l-m+b-l+a-b+i)%100;
            }
            break;

            default:
            {
               h += (k+c)%100;
               j += (h-i-c)%100;
               j += (e+n+j+l*i)%100;
               g -= (d+c+a-e+i+b-j+a+h-a-n+n-n+a)%100;
               b -= (i*b+f+g*l)%100;
            }
            }

            e += (b+b-a-h-m*a-g-l*l*n-j-b-g-j)%100;
            d += (j+e+d)%100;
            c  = (i-c*g-m-l-b)%100;
         }
         l -= (a-i+d*j-a-b-b-h)%100;
         c  = (j-d)%100;
         b += (d-d+l+l-c)%100;
      } while( ++DOcnt[2]%5 );
      m -= (f-l-g*b+d*h+m-i+f-c-e)%100;
      b -= (a+f+b+a+c-c*l+e-e+i-h-c*a)%100;
      a  = (i+n+f-f+j-l+n*a+m+d+k)%100;
      l -= (i+m+c-i)%100;
   }
   f -= (k+d+m-l+j+m+h-l*j-m*a*e+l+m)%100;
   g -= (h-a-c-l+h*c*a+h*k*m+d)%100;
   m += (m-n)%100;
   k -= (j+m+k-l+f*b+a+b+f-c)%100;
   c  = (f*k-n-l+b-j-a-j-a-k)%100;
   d -= (e-c*g-m-b-i*m*g-c-a-k*l)%100;
   f += (a+b-k*h+i+j-f-f*k-n+b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[4]%10 )
   {
      g -= (l-f-f+e+n*a+b)%100;
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
                  e += (l-m)%100;
                  c += (c+m-h)%100;
                  k += (n+c-l*b-e+e-m*d+b+n-a*f*i)%100;
                  i -= (g-n-f*l-a)%100;
                  j += (m-k+d-n*d*c-m-g+e-k)%100;
               }
               else
               {
                  l -= (f*g-a-k*a+f)%100;
                  e += (a+b)%100;
                  f += (d*d*a)%100;
                  m -= (l*d*l+g-h)%100;
                  e += (i+d*k+m+k)%100;
                  d += (c-l*a+d)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  j += (k-e+l+g)%100;
               }
               do
               {
                  l -= (m+h-j+m-g)%100;
                  d -= (j-j-c+n+f+j+b-c)%100;
               } while( ++DOcnt[6]%5 );
               a += (m-d+m+m+k-a-c+d-f+n-k)%100;
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  k -= (j*f)%100;
                  a += (c-n+a-k+b-i+l*l)%100;
                  c -= (j+d-h+b*k*g)%100;
                  i += (k*e+a-m-h)%100;
               }
               do
               {
                  g += (j+a-l+a*g-c-l-j*l+h)%100;
                  a -= (f+c*k+l-c-d-a-e-g*c)%100;
                  m -= (l+m-l-d-h-h-j)%100;
                  m += (d-k)%100;
                  d -= (k*c+j-c-f+f-i-d-k+a)%100;
                  k -= (h+k*g+i-m)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  l -= (b-j+j*e)%100;
                  h -= (h+b-e+a+n-h*n+j+f+l-j+h)%100;
                  j += (h+j+j-g-a+n+i)%100;
                  c -= (n*a)%100;
                  h -= (a*i*l+n*i-h)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  j += (m-b)%100;
                  m += (i-j)%100;
                  h -= (i+k*f-k+k*l-j*j-k+g*g-f)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  h += (k*f*i*f-k)%100;
                  j -= (i*l)%100;
                  a += (e-g+l+n-k*e*i-i)%100;
                  n += (e-c-k+b-e*d*a+l+c+j+f-d-n)%100;
                  g += (k*m+c+f+i-e*c-h)%100;
               }
            }
            for( ; ++FORcnt[9]%5 ; )
            {
               
               switch( ++SWcnt[3]%3 )
               {

               case 1:
               {
                  m += (j-c-n-f*n-k+l)%100;
                  d += (e-f-e-j-h-g-m-k-c-b*m)%100;
                  c -= (d+e+l+k*f-h-d*l-l-k-j+h-k-d)%100;
                  k += (j*f*b*n+n+d+d+j-g+g)%100;
               }
               break;

               case 2:
               {
                  j += (n+b-a-m+e*i*h)%100;
                  m -= (h+l*c)%100;
                  m  = (j-b*i+n*e-k-j+h+i+k*e-h+b)%100;
                  k += (g+j+d-d+n+m-a)%100;
                  l += (m+a+e-k*m+b-i-m+a)%100;
                  g += (i+f-j-j)%100;
               }
               break;

               default:
               {
                  m += (a+h+e)%100;
                  n  = (l+l+g+e+n-i+c)%100;
                  j -= (l+g)%100;
                  h -= (j-n)%100;
                  h += (d-b-d-l+m-d-g-m+h-g-j*e+n)%100;
               }
               }

               d -= (b*b+d+c-j-m*i+b*g*g*j-m-d+n)%100;
               m -= (d*l-d+g+e+f+b+a-n+h-m)%100;
               c += (a*l-m-n)%100;
               j -= (n+e)%100;
            }
            b += (d-c+i-l-k-d+g-a*j-i+a)%100;
            m -= (b*i*e*d)%100;
            d += (h-d)%100;
         }
         break;

         case 2:
         {
            g -= (a*i)%100;
            d += (e*f-l+e-c+j+j+d-b-f+n+i+n)%100;
            g += (m+m+i-j-j+i+c+f)%100;
         }
         break;

         default:
         {
            f -= (n+c+j-l)%100;
            c -= (b*j+i-i)%100;
            c -= (f*n-g*e-f)%100;
            i += (k*j*m*i-n+e*h+b*a+d)%100;
            h -= (a+j-e-i*f-k-l+l-e*e*d+k-e)%100;
         }
         }

         b += (m+a*i+k-c-a+c-g-d)%100;
         a -= (c-h+g)%100;
         a  = (l-d+l+h-b+a-j+f-d*g+l+f+i)%100;
         f -= (k-b+c+k*i*h-e+a*l+d*d*l)%100;
         i -= (j-j+i-b*b)%100;
      }
      l -= (g-d)%100;
      a -= (b+e-h-b-e-l+c+m+i)%100;
   }
   h -= (a-c-g+f-b-m+l-h-h-c+a+f+j)%100;
   i  = (f+g)%100;
   e  = (b+j-g*g+j-c-l-a+c*c*e+n)%100;
   b += (j*e+c-j*g-f)%100;
   a -= (l+g-d+g-l+b-j)%100;
   d -= (c-m*i-a-n*l)%100;
   l  = (d+a)%100;
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
         a -= (h-n)%100;
         d -= (e+e+i+a)%100;
         c += (f+h-m+l-b+l-j+a+h)%100;
         a += (l+f*m-j-f*b+e)%100;
         a -= (n-g*c+e)%100;
         l -= (a+e-l-e)%100;
      }
      else
      {
         while( ++WHILEcnt[8]%5 )
         {
            do
            {
               for( ; ++FORcnt[11]%5 ; )
               {
                  i += (b+l-j+c+i+c+a-f)%100;
                  f += (i+b*n*m-b+h+j-f-l+m+i*a*a)%100;
                  l  = (d-b*j+g+k*e*i*n-k)%100;
                  i -= (i+a)%100;
               }
               for( ; ++FORcnt[12]%5 ; )
               {
                  e += (g-k+n)%100;
                  m -= (h-m)%100;
                  a -= (n-d*d-h*m+m+a)%100;
                  i += (e+n*i+b-m-c-m+e-l)%100;
                  g += (h-l-a+e*k+h*h+h-m*e*e)%100;
                  b -= (f-j)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  j  = (a*d+a+l+c-e-c+a)%100;
                  c += (h-n-n+h)%100;
                  j += (d+m+f-g)%100;
               }
               else
               {
                  m -= (f-k-h*l-e+b)%100;
                  f -= (d-i)%100;
                  j += (g-g-m+i+d*f*f-i)%100;
                  f += (b*b*m*i+a+b*m)%100;
                  g += (e-j+j*i*j*j-i*e-a+j)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  j  = (f+k-l-j+f+f-h+f-a)%100;
                  l += (k+b)%100;
                  b -= (h-l-i-k-g+k)%100;
                  i -= (e-g-j-m+c-f-i-n+l-a)%100;
                  a -= (b-h+a*f-a+a-m)%100;
               }
               do
               {
                  c += (b+j*i-c-m-k-k-l+h-k*l+l+f)%100;
                  l  = (f+d)%100;
                  c += (b-d-k-f*h*i-e*f-j-l+f+g+b)%100;
                  i -= (i+a-c*h-k*f+a-a-b+d*b-c)%100;
               } while( ++DOcnt[8]%5 );
            } while( ++DOcnt[7]%5 );
            if( ++IFcnt[5]%10 )
            {
               f -= (b-g-b+m-i-m)%100;
               for( ; ++FORcnt[13]%5 ; )
               {
                  a -= (k-n+c-l+i-g+m+k-e+d+k-m*b-b)%100;
                  a -= (a*b+c-g*n-i-j)%100;
                  a -= (m-c+j-c+a*b-f+j)%100;
                  l -= (e-e)%100;
                  m -= (d*b-m-i+e+m-a+h+a*c+g*l-k-f)%100;
               }
               
               switch( ++SWcnt[4]%4 )
               {

               case 1:
               {
                  n  = (g+l-h+l-m+b-g+b+m)%100;
               }
               break;

               case 2:
               {
                  e += (g+f*k+d+c+k+n)%100;
                  g  = (j-b)%100;
               }
               break;

               case 3:
               {
                  m += (i-g-k+f-h-i-j)%100;
                  e -= (b-b+k-f*j-j+j-j+m-l+b+a)%100;
                  e += (j-b+l+g+f-d+c+g*l+j+d+f+b)%100;
                  f -= (c*h-n*m+n)%100;
                  f -= (b+a*c-f+m*h+j+h*j*g+j-a*b)%100;
               }
               break;

               default:
               {
                  c -= (g+c-a*g-k*e-g-j*c)%100;
                  g += (g+c-e-b-g+e+e-d+g*m-b-i*f)%100;
                  l += (g*a+m+h+n-n+g+j-b+m+m*f)%100;
                  b += (g+a+i-d-h-h-j)%100;
               }
               }

               j -= (h-i+j+l-k+g-m*m-a-c*a*g-i)%100;
               d  = (k-k-l-e+m+h+l*a-a*n*h+d-f)%100;
               m -= (g-m-m-h-n-c+i-d-f+c*k)%100;
            }
            b += (l-d-a*g*e+h-j*j-l)%100;
            a -= (c*k+a)%100;
            f += (h+f*a+a-h+j-n*c*c-k+c+k-h)%100;
         }
         b -= (d+i*a*e)%100;
         b -= (i-l*n*b*e+a+n-e+e-h)%100;
         d -= (m*i-a-m*h)%100;
         d -= (c*a)%100;
         f -= (n-f-a-l)%100;
      }
      e += (c-g-k+b+b+l-n*a+j+d*c)%100;
      c -= (f+a+f-k-a*h-i-n)%100;
      m -= (n+l+l-a-m+j*c*g)%100;
   }
   l += (j+f+k+h-f+g+g-g)%100;
   h -= (c-n)%100;
   g -= (k-n*h*e*j-e-c+n+n+c*l-j)%100;
   i -= (n-m-b*n-e-n-i+k)%100;
   m += (e*e-d+h-n-a+j+d-n-j+m)%100;
   k += (g+b+i+i-i-n*h)%100;
   a  = (i+g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[10]%2 )
   {
      f += (k+m+h-k+l*f*e*e-g-g-l-b-e+e)%100;
      m -= (c-h+d-j-e+d-b)%100;
      d += (g*d*a-l)%100;
      l += (k-h+l-i+d+a+d-d+e+b+g*l)%100;
      k  = (b-f-i-n+l-d)%100;
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
                  n += (f-k-g-g)%100;
                  f -= (m+f+k+n+g-c-i+i-k*k-i+g)%100;
                  n += (c-h+n-e*f+a)%100;
                  l -= (i-n*c)%100;
                  l += (f+f+n-m-j-m)%100;
                  f  = (g+b)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  m -= (d*b*k*a-b-d+b+b+d*j+m)%100;
                  d -= (c*b+j*i)%100;
                  h -= (d+i*c-n-j*h+a+d+e*k*e)%100;
                  e += (m+i*d*i-f-h*b+n*n+h-j*e)%100;
                  i -= (c-b+j+g-k-b-e+f-k+e)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  e += (h*a-m+e+i*m-l+n-c-n+k*c+g)%100;
                  h += (m-e-e-d-a*c)%100;
                  n -= (m-a+j*l-n+m-n*k-k*c-e-d)%100;
                  j -= (j*g+g+d-l-i-g+n-b+e)%100;
               }
               else
               {
                  l += (e+l-l-k+l-c)%100;
                  l += (m*a+l+e-g-m-b*h-l+m+l+f+l)%100;
                  a += (m-g+d+b*m-c-c-m*k*l-c-b+j)%100;
                  h -= (h+i-b*m)%100;
                  n += (e-b)%100;
               }
               while( ++WHILEcnt[9]%5 )
               {
                  g += (b-j*d*n+d+c*c)%100;
                  c -= (b+a+k)%100;
                  a += (f-k+j)%100;
                  k -= (j+n*k+a-f-m+i+c)%100;
                  d -= (g+g*g*j-c*d-m+e*e*d*f+h)%100;
                  c += (c+b-h+a+i+j-m-m*e*l-i-j)%100;
               }
            }
            do
            {
               e -= (n+k-k+d+j+k-c-k+a+j-n+h)%100;
               for( ; ++FORcnt[16]%5 ; )
               {
                  a += (d-e+g-f-a+j+g-i*n+c)%100;
                  g += (i+k)%100;
                  g += (h+g*d-b+g-f*i-a+m)%100;
               }
               
               switch( ++SWcnt[5]%3 )
               {

               case 1:
               {
                  l -= (n*k+g)%100;
                  a -= (m+i)%100;
                  j += (k*f+g-i+c-d)%100;
                  a += (e+l*f)%100;
                  c -= (e+n-h-c+d-i+i-g)%100;
               }
               break;

               case 2:
               {
                  d -= (f+c*l-d*m+h-i-m*a*l)%100;
                  k += (e*l-a+k*d*f-k-m+e)%100;
                  a += (m-a+e-k-i+h-h*g-l+m-m*e*e)%100;
                  a += (g-c)%100;
               }
               break;

               default:
               {
                  b -= (j*g)%100;
                  e -= (i-a+m*d-n+k-j-i-n*k+n+m-i+a)%100;
                  i -= (e+m)%100;
                  c += (i*e+c+d+i+b-c-c)%100;
                  e -= (e-e-d+k-m)%100;
                  b -= (g+b+a)%100;
               }
               }

               m += (l*n+c+c-b+n+j*l+m*b-i-m+e*g)%100;
               i -= (h+h+a-m+c)%100;
            } while( ++DOcnt[10]%5 );
            b -= (g*a+k)%100;
            l -= (n-i*n*l-c*c*f-i-a-b-a)%100;
            h -= (a-g*h+c+n-b+b+c+k+c)%100;
         } while( ++DOcnt[9]%5 );
         c -= (e-m)%100;
         h += (c*b+n*n+d)%100;
      }
      a  = (g-j+l-g-a)%100;
      l += (m-b+b-c+e)%100;
      b -= (k+f)%100;
      a += (d+g-j+d-n-e)%100;
   }
   a += (j*e*f-i+k)%100;
   d -= (n*k)%100;
   j -= (n+j-j-m-e+l+a-f*d)%100;
   l -= (f-b)%100;
   l += (f*m*d+a+j)%100;
   b += (b-m-c+m-d*e*a-c+i)%100;
   d += (b-n+j+g-h)%100;
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
         m -= (c-i+k)%100;
         h += (m*c-k+l+h+c-g-e+g-k+n+i-e)%100;
         l  = (n-g-i+a-c+m-g*d-e-d+g+b+h)%100;
      }
      else
      {
         while( ++WHILEcnt[12]%5 )
         {
            do
            {
               for( ; ++FORcnt[17]%5 ; )
               {
                  i += (f-e+a+k+m)%100;
                  e += (h+n+c)%100;
                  k -= (b-j-e-f+i+j-g+f-e*n-d)%100;
                  c -= (n*g+c-i+j-f-e)%100;
                  h -= (b+d-i-b*n+j*l-e*j+f-k-n+n*e)%100;
                  l += (e-k)%100;
               }
               for( ; ++FORcnt[18]%5 ; )
               {
                  h += (b-e+l-g*j+d*g+a+c+a-g-e*e)%100;
                  k += (h+f)%100;
                  a -= (l+g-a+i+d-b-d-a*l-k)%100;
                  h += (d-k+h-d*l+i+d*j-f+c+l+j*n)%100;
                  l += (m+c+d+m*h-h+h)%100;
               }
               if( ++IFEcnt[11]%2 )
               {
                  h += (g+k+e+m*h+m)%100;
                  n  = (i*l-d+m+f+n)%100;
                  e -= (b-f+j+e*e-h-h*e+j-g*i+b-d)%100;
                  d  = (g*i-f)%100;
                  n += (f*d+j-h*g+f+c+e*n*h-i-f-n+n)%100;
               }
               else
               {
                  k += (i*l*k-m*d-k-c-h-b-i-b-k+m-m)%100;
                  h += (e*i+h-m+m+k-e+f+e+f+m+h-a+d)%100;
                  i  = (g-i-m*k-d+a+b)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  g += (j+g*h+k-i+b-e+d+j)%100;
                  h += (n-j-c+b*c-j*g*m+h*k)%100;
                  e += (d*j)%100;
                  i += (j-m+k+m)%100;
               }
            } while( ++DOcnt[11]%5 );
            do
            {
               if( ++IFcnt[8]%10 )
               {
                  b += (b*l-l*b+f*b+f+e-m-b+i-g)%100;
                  b  = (n+f+n+c*l-b-k-g-b+j)%100;
                  j  = (j-b)%100;
                  b -= (c-m+c-a*l*k+j-k+k+l+c+e)%100;
                  a += (e*k+n-a*k*e+e*f+m-j+f)%100;
               }
               k += (f*n*k-g*d+a*j+m)%100;
               for( ; ++FORcnt[19]%5 ; )
               {
                  e += (k*f+f)%100;
                  m -= (c+h+l+n*i+j+j+d+c+i)%100;
                  n  = (c+i-n+g-n-g-h+h+m*m+m*d+n)%100;
                  a += (n-k+k-c-i*n+h-d)%100;
                  k -= (c-b+i*h+e+i*b*m*a*h)%100;
               }
               
               switch( ++SWcnt[6]%3 )
               {

               case 1:
               {
                  g += (k-f+l*c-i*g-l+d*j+m-b-l-c-n)%100;
                  f -= (l-h-i)%100;
                  g -= (j*k)%100;
                  k -= (j-g-i+n*e-a-f+k-g+j-f)%100;
               }
               break;

               case 2:
               {
                  h += (g+c-d*h-e+a-c*j+e-c+i)%100;
                  g -= (a+n-j-d)%100;
                  e -= (b-i*k+g+b*m+f-h-m)%100;
                  j -= (k+d-g*k+a-l)%100;
                  a  = (i+a+n*j*d-b+a-d-a*f*h+m-f+i)%100;
                  d += (g+h-c*n-j+a-n-l)%100;
               }
               break;

               default:
               {
                  b += (l+f-g-c+k-b+i+c+d*j)%100;
                  a += (e-l*a-a-j+e*d)%100;
                  l += (n-k-c-j-d)%100;
                  k -= (c*i+b-b-d-k+m+d*l-h+n)%100;
                  h -= (d-m*m+n*i+i-i-d+f)%100;
               }
               }

               d  = (c+g-j+h*h+d-d*j-a+d)%100;
               i += (h+l+j-d-i+g+j)%100;
            } while( ++DOcnt[12]%5 );
            d += (l*l*b*e-k-b+c*j-e+n-l-d+c)%100;
            k -= (j+n)%100;
            i += (i*j+l+d+i)%100;
         }
         k += (l+c-g+m*d*f*j*m)%100;
      }
   }
   f -= (l*n+b)%100;
   j += (k-l*h+j-k+a+b-a+b-e-n*l)%100;
   k  = (h-c-f+i+f+k+m*k)%100;
   g += (n-b-f-n+e*m*b*c-a+c-j+h)%100;
   m -= (j-c)%100;
   c -= (d-f+d)%100;
   b -= (i+h-n*h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F7(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[15]%2 )
   {
      f += (g+h)%100;
      j += (g*h)%100;
      g -= (m+f-i-b+d*l+l*e-d)%100;
   }
   else
   {
      while( ++WHILEcnt[15]%5 )
      {
         do
         {
            for( ; ++FORcnt[21]%5 ; )
            {
               if( ++IFcnt[10]%10 )
               {
                  j -= (l+d-g+b-c-c-h+k-l)%100;
               }
               for( ; ++FORcnt[20]%5 ; )
               {
                  e -= (d-k+g-c-f*j+b)%100;
                  i += (k-h+e-n-m+n*e-e-b*d-n*f-a)%100;
               }
               if( ++IFEcnt[13]%2 )
               {
                  i += (b+l-a*n+e-i+m+n-c+m*g-l)%100;
                  m += (i+h)%100;
                  j -= (h-j+h*g*b-k+l-k-j-f+k)%100;
                  d += (m+c-i)%100;
               }
               else
               {
                  n -= (c-i-f+m+d+a+j*f*e)%100;
                  f -= (k-a+j*k*h-e+c-b+h-j+b-d*k)%100;
                  n += (g+n*n+c-f+k*c+h*h*e-b-k)%100;
                  j += (e*f*h*d)%100;
                  a -= (m+k+a-e+d)%100;
               }
               while( ++WHILEcnt[13]%5 )
               {
                  e += (l-a+a-k-d-f+c*i-c)%100;
                  n += (n*c-d-k-a*b+i-k*c*k+n-c)%100;
                  k += (h+i+h-f-e+c+j+c-d-b*k-m)%100;
                  l -= (d+m+a-n*i*b+h-i+n-m-k*m+f+e)%100;
                  j += (n*k*m*g+a-e*a*b+h)%100;
                  g += (m+a)%100;
               }
               do
               {
                  c += (j-i-c+m-h+n+c*d-g+f+d)%100;
                  c -= (e+l+c-c+l*m-l-f+l-c+c-c-m-k)%100;
                  i += (b-l-j*h-h-h)%100;
                  f -= (d+g*h+d+l*j+m+e-i+l)%100;
                  a += (j*a-h-a*k+j+c-m-l)%100;
               } while( ++DOcnt[14]%5 );
            }
            b += (b*n-l+i+a-i-e+b*e+j-a+l+m)%100;
            for( ; ++FORcnt[22]%5 ; )
            {
               
               switch( ++SWcnt[7]%3 )
               {

               case 1:
               {
                  c -= (d-e)%100;
                  k += (b+h-l+f+e*k-e-d+a*c-i-f*n)%100;
                  e -= (j+l-f-g-b+n-h+l-b+h+g+k)%100;
                  f -= (m*b+l+l-j-d-n*j)%100;
                  l -= (m+c+k*n*n*b+e)%100;
               }
               break;

               case 2:
               {
                  a -= (b-i-e*c)%100;
                  k -= (m-h-a+a-d-l*i-k)%100;
                  i -= (l*b-g*j-f-c-a-d+g-n-m*l-n)%100;
                  h += (n-e+i+k+d*n-k+d-j)%100;
               }
               break;

               default:
               {
                  f += (g-d-b-g+m)%100;
                  b += (l+g-j*e*h-c-h-g-b)%100;
                  k += (i+d-k*c+a)%100;
                  e -= (k-n-b*a*j+d+f+g+m*k*i+d)%100;
                  b -= (l+j+k-g-h-f+m-f*e-i*f)%100;
                  i += (d+d-m+n)%100;
               }
               }

               if( ++IFcnt[11]%10 )
               {
                  a += (k*c+k-m+l*c*h+e-c)%100;
                  i += (f+l)%100;
                  a += (h-f-b+n-n+m+a-f*n-f+g)%100;
                  k += (n-e-n*f)%100;
                  f += (i+e+e-l*c+b-a-m+f-l-h+a+a)%100;
               }
               if( ++IFEcnt[14]%2 )
               {
                  i -= (c-k*c-n-l-j+c-l-f-d+l)%100;
                  h  = (b-j*j*n*f*d*n-a+m-c)%100;
                  n += (h+h+f*m-e-g-e-m+a-d+m)%100;
                  a -= (n+n)%100;
               }
               else
               {
                  f -= (a+c+c*n+d)%100;
                  b += (k-l*k-c*j-l+e+e-n-g)%100;
                  n -= (l-b-i)%100;
                  e  = (l+c-c-j-h-b)%100;
                  i -= (f-h+n-g+k*n+k-j*n+m*n+b-e-k)%100;
               }
            }
            while( ++WHILEcnt[14]%5 )
            {
               do
               {
                  j  = (a-c-n-f)%100;
                  d += (c-a+h-j+f+e+g-d)%100;
                  a += (d-d*c-m+n-c*m-b+d*h+d-c)%100;
                  g -= (j+m-n-n+d+n)%100;
                  m += (m+l+j*e+i-a-i+l)%100;
               } while( ++DOcnt[15]%5 );
               e += (l+g*e-g*n-j-l-k*m+l+l+h-g)%100;
               m += (l-n+b-n+f+i+g*e*k*e-l)%100;
               g -= (l*f*d-h*f*f+h+d+l+i+i)%100;
               a -= (i*e+n-l+l+l*c*c*k*b+d+i-f+g)%100;
               d  = (b+d+c-a+k+m)%100;
            }
            k  = (b-j*a+c)%100;
            h  = (c+d-m+j+c+m-c+d+d+c)%100;
         } while( ++DOcnt[13]%5 );
         k -= (e-d+n+c-j+e*f-c-d-j*a+e+l)%100;
         d  = (n*h*j)%100;
         c += (k+i+i+k*e+k+a-i)%100;
      }
      d -= (d-l-c-a-b*m*m+d-k+k-i)%100;
      h += (b+f+e)%100;
      j += (n-g*d+d-k)%100;
      m -= (c-h+k*h+e*d+c*n+l*d*c+k)%100;
   }
   l += (b*g+g+e*h-b)%100;
   k -= (j-d-l-b+e)%100;
   l += (n*c-i+l-a-i*m+g-i)%100;
   b -= (g+m-i+m+i-h+k-a+m*i+k-f-e)%100;
   b += (g-m+g-h*c)%100;
   j += (a-n)%100;
   k -= (j+g-n+g)%100;
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
            h -= (m-g+n-b-i+n*n+g-b+g)%100;
            i -= (j-b+i*b-g*h+h*n+a*c)%100;
            c -= (h-a*m*g+m+c*j)%100;
            d += (f-m+c-k-l-g)%100;
            k += (j*b-e-n+i-j*c+g*g-a-g+a)%100;
            d -= (k-h*h-h-e+h*d+j+b+k)%100;
         }
         else
         {
            while( ++WHILEcnt[16]%5 )
            {
               do
               {
                  k += (b*n+n)%100;
               } while( ++DOcnt[16]%5 );
               if( ++IFcnt[12]%10 )
               {
                  j += (h+j+g)%100;
                  c += (c-h*g-h+k-e+h+m)%100;
               }
               g -= (n+a-d-m-d-n-h-e+h)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  c += (k+h*c-h+c)%100;
                  e -= (m-k)%100;
                  i += (k-m-c*g-c)%100;
                  m += (m+i-b-j-c*n+d*n+c+e)%100;
                  l -= (h*b)%100;
               }
               
               switch( ++SWcnt[8]%3 )
               {

               case 1:
               {
                  c -= (h+a*g*h-i+k+c-l+f+m)%100;
                  c += (f+m*j*d+m-j+k+d*a-n+m-a-h)%100;
                  i += (l-c-m*c+l+c+a+k+b+n+f)%100;
                  g -= (c+d+e+j)%100;
               }
               break;

               case 2:
               {
                  g += (f-k-l-h-m+g*b-h+j+e-e+k)%100;
                  n -= (k*c-j)%100;
                  l -= (j+f*n*d)%100;
                  k -= (e+i*i-b*k+n-g+a-h*k+g+l)%100;
                  f += (f+n+i-c+h*m+g+d)%100;
                  j  = (a*f-b*d-b-g+c-g-n+e*g-c)%100;
               }
               break;

               default:
               {
                  b -= (e+g-a*d*l*h-j+b-a-h-l-a)%100;
                  k += (f*f)%100;
                  j += (a+f-k+l-e-h-c-l-j-d+k+f-l)%100;
                  i -= (h-d-n+g-j+n-h+j-f+b+i*k*l-h)%100;
                  e -= (l*g-j*a-f+d-h*n-f-d-l+h)%100;
               }
               }

            }
            if( ++IFEcnt[16]%2 )
            {
               if( ++IFcnt[13]%10 )
               {
                  c -= (f-d*f-b-a-f-i+a+i)%100;
                  e += (c+h+l+j-f+b-n*l-j-a*f)%100;
                  n -= (b-m*j+k+j+h+h)%100;
                  n -= (e+i+g+a*n*k)%100;
                  m -= (e-k-n+a*i-b+g-d-e-d)%100;
               }
               for( ; ++FORcnt[25]%5 ; )
               {
                  g -= (g+a-k+i*e-a-b)%100;
                  h += (i+n+h*j*j*c-m-j-b+m-d-e-k+m)%100;
                  j -= (e-e-n+g*n+e+g)%100;
                  g += (m+g-h+l)%100;
               }
               h -= (c+m-h+l-d*a+e)%100;
               i -= (a*f+a-l)%100;
               n -= (h+c+c-a)%100;
            }
            else
            {
               while( ++WHILEcnt[17]%5 )
               {
                  n  = (n*l+c-c-f+g+b-m)%100;
                  c  = (e+a+i-a+l-a-g-a+f+k*k+e-j)%100;
                  e -= (b+b)%100;
                  m += (g+l*n-b-b-j-h)%100;
                  k -= (f-g)%100;
               }
               do
               {
                  f += (c+g+n*m-n)%100;
                  j  = (e-i)%100;
                  b += (l-e-h+a+d+f)%100;
                  m += (i-l-l-f)%100;
               } while( ++DOcnt[17]%5 );
               for( ; ++FORcnt[24]%5 ; )
               {
                  i -= (n-a+j)%100;
                  n -= (h-h)%100;
                  i += (c-e)%100;
                  i += (c-c+m+k+l+h*i*a)%100;
                  d += (l-b*m-e-d-f-l*n+b*c-f*d+c)%100;
                  g += (m+m-k*b+b+i+g+i+h-n+c-b-d)%100;
               }
            }
            c += (n*c-m)%100;
            c += (d*l-e+e+d-g*h+n-h-l)%100;
            i += (b-f-m*c-h-n+l-e*h*m-m)%100;
            f -= (e+h+h*m-c*c+n+k*l-k-l+g+l)%100;
         }
         j -= (e*l-k*g+h-m-l-e)%100;
         e += (j+l)%100;
         d += (l-l-i+c-c-e+h-n-l-l-b*g-i+b)%100;
      }
      e -= (f*h-h+c-m+i)%100;
      l -= (g*g*m-k+l)%100;
      i += (m+g+g+m-b)%100;
      m += (g+g-n+c-j+a-h-i-c-l+j)%100;
   }
   g -= (m+f*h-j+k)%100;
   j += (f+b-i+e+c-n+e-d-k*m+b)%100;
   j += (l+l-n+h*f+h-j+i*i)%100;
   h += (e-b-c-d+l)%100;
   b += (g+i*g*a-i)%100;
   i += (e+k-i-e+f+a+a+m*n+f+d)%100;
   d -= (e+d-f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F9(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[20]%2 )
   {
      j -= (e*a*i+f*n)%100;
      k += (i*j)%100;
      e  = (f-k-k-j-d-c*n+l+i-f*f)%100;
      g -= (k+a+e*j)%100;
      l += (m+h)%100;
   }
   else
   {
      while( ++WHILEcnt[19]%5 )
      {
         do
         {
            n -= (h+i)%100;
            for( ; ++FORcnt[28]%5 ; )
            {
               
               switch( ++SWcnt[9]%3 )
               {

               case 1:
               {
                  d += (i*c-h+k)%100;
                  l += (e-g*l*g+n)%100;
                  l += (f*a-e)%100;
                  k += (j-a-g+b*j+c+d-m)%100;
                  a -= (f-b)%100;
                  l += (n-c-j+i*n*e)%100;
               }
               break;

               case 2:
               {
                  d += (j+d*k+b-g*h+e-h-h-k*h+e*e)%100;
                  i -= (n-d-h)%100;
                  f += (h-a-k-i+e-n-b+c*i-b)%100;
                  d += (e+n-b+j)%100;
                  c -= (k-j*l+n+h-k+d-h*j-j)%100;
               }
               break;

               default:
               {
                  f += (j-n-i*k)%100;
               }
               }

               if( ++IFcnt[14]%10 )
               {
                  a  = (l-a-a*g-d*l*d+h-d+a-i*a*i-h)%100;
                  m += (f+n-l+k+a*n+f+h-a*j*j*m+d)%100;
               }
               if( ++IFEcnt[18]%2 )
               {
                  i -= (b*k-l-d-m+a+k+e)%100;
                  g += (l*m+k+a-e)%100;
                  l += (a*m-m+k+j+d-f-j)%100;
                  j += (i-a)%100;
               }
               else
               {
                  f -= (l-k-g+l+c*b-k)%100;
                  l += (a-l)%100;
                  j -= (j-m)%100;
                  i -= (b-b-c)%100;
                  h += (m*j-k+m-a-k+h)%100;
               }
               while( ++WHILEcnt[18]%5 )
               {
                  k += (i*h+i+j*k+c+l)%100;
                  h -= (d-f*k-n-e-m)%100;
                  e -= (h-e+n*l-a-f*n)%100;
                  j -= (i+e*k-m-l-h-d*k+l-f+b-h)%100;
                  j += (k+i+i*d+m+h+e)%100;
                  a -= (f*b-l+l-i+a-d*i+a+h)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[29]%5 ; )
               {
                  m += (g*e-e*i+k)%100;
                  a += (n-c-b+h-c-b)%100;
                  n += (f+l-f-f-m-l-d*l-d)%100;
               }
               for( ; ++FORcnt[30]%5 ; )
               {
                  f += (d-h+n)%100;
                  e -= (i-l-b-i+e-n-n*m+h-j+f)%100;
                  h += (c+k+f)%100;
                  k -= (e+g-d+e*g-a-e*d-i-g*g*i)%100;
                  j += (i-c-a*j+n+a-e)%100;
               }
               if( ++IFEcnt[19]%2 )
               {
                  l += (k-l+m-h+h+l*n*j*k+f-h)%100;
                  f  = (m*e-n+a-l-n-g-e+d-n)%100;
                  g += (g+m*a-g+n-h-h)%100;
                  c += (c-l)%100;
                  k  = (n*g*c-b+l+h*g+n-h)%100;
                  g += (g-e-d+g*a+j+i+d+l*l-b*m+n)%100;
               }
               else
               {
                  l += (h+a)%100;
                  h -= (f+c+e+j*b-f+d-a+b-l+c-d)%100;
                  b += (h-c)%100;
                  h += (h+c-j-f*l-i-k-l+b-i*b-i-d-g)%100;
               }
               h -= (k+m+b+m)%100;
               c += (a+i+c-h-d+c-c)%100;
            } while( ++DOcnt[19]%5 );
            j += (i+k+d)%100;
            e += (n+g-g*l+k-h-b-d-g)%100;
         } while( ++DOcnt[18]%5 );
         f += (a-h-j-f+f-f+n+l)%100;
         c -= (c+d-m*h+h+k+m-b)%100;
      }
      d += (d*d+d+l*a*i-h+b+f+b+c-m-h-m)%100;
      j += (n*e)%100;
      j -= (b-b)%100;
      a -= (i+n-e+f-n-l+l+e*b)%100;
   }
   k += (g*e*j-n+j-f+m-l*d+m+l)%100;
   j += (h-c-c+d-d+e+h+a*d-j-k*e+k)%100;
   k -= (k-g)%100;
   j += (n*j-a+d)%100;
   j += (n-j*g+b+a)%100;
   f -= (i+n)%100;
   n += (g*c+n*l-f-f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F10(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[22]%5 )
   {
      do
      {
         if( ++IFcnt[16]%10 )
         {
            b += (j+l)%100;
            for( ; ++FORcnt[32]%5 ; )
            {
               
               switch( ++SWcnt[10]%3 )
               {

               case 1:
               {
                  k -= (j+h+l-g-d)%100;
                  n += (d-i*m-j+c-b+d*a+c+a*m*f+k)%100;
                  b += (c+i+n+a+h-m*n+i-a-m)%100;
               }
               break;

               case 2:
               {
                  l += (a+a-j+d-f)%100;
                  n -= (g+e-k-j*m*a+b*l+g-i+b+b+j*n)%100;
                  b += (k+b*d+e-c-d+l+n)%100;
                  c  = (a+h-m-f+l+g+c+f-d+n+c*a)%100;
                  m -= (f+g*b-k+j)%100;
               }
               break;

               default:
               {
                  l  = (j+m-n*m-l*j-m+k)%100;
                  e -= (j*h)%100;
                  a -= (j-g+n+m-g)%100;
                  f += (h+a-m+n)%100;
               }
               }

               if( ++IFEcnt[21]%2 )
               {
                  e -= (k+i)%100;
                  a += (j+i-e-l+b+m+m+k+e*i+d+k-b-d)%100;
                  d += (k*c*g)%100;
                  d += (g+a+g*n*l*b+j*k-k-n-m)%100;
                  i -= (g+h-l-g*a)%100;
               }
               else
               {
                  i += (i-d-f*g-k+e-g+e+g+m-n*a-k+l)%100;
                  a  = (m-j+b-e*e*c+i)%100;
                  d  = (h-e+j+g)%100;
                  c += (l+k+i)%100;
                  d += (k-c*k*d+g+a+d-k)%100;
                  g += (n+l+h-n+f*g+d)%100;
               }
               while( ++WHILEcnt[20]%5 )
               {
                  n -= (f*e*i*k-l+h+l-h+h*e)%100;
               }
               do
               {
                  d -= (e*n-m*h*j*g*g)%100;
                  i -= (b*f+i+h*n+l-f*c-h-h*c-c)%100;
               } while( ++DOcnt[21]%5 );
               for( ; ++FORcnt[31]%5 ; )
               {
                  f -= (m+a-i)%100;
                  i  = (m*e)%100;
                  g += (c*n+i-i-c*i+b+c-a*f-l*k)%100;
                  b -= (h-f+n+m*m-h+l-l-f+h*l-j)%100;
                  i -= (j-k-i-f*m*m*h)%100;
               }
            }
            if( ++IFcnt[15]%10 )
            {
               for( ; ++FORcnt[33]%5 ; )
               {
                  j += (h+m+j+f)%100;
                  k += (d+b+f-f+m*d+l*a+i*b)%100;
                  e -= (k-b+d-i*i-d*m)%100;
                  e -= (j-h+g+i-b+n-e+a)%100;
                  k += (k+m)%100;
                  l += (k-m+a)%100;
               }
               if( ++IFEcnt[22]%2 )
               {
                  b -= (f-e+c*h-g-j*e-m-e+i-k+d)%100;
                  j += (i+b-n+g*l*n+a+g-l*n-n)%100;
                  m -= (d+a-e-l+c-e-d-f-l-d-b)%100;
               }
               else
               {
                  h += (i+h+k-k-l-c-m*c*h*e+c-g)%100;
                  f += (k+l*d+e*f*g-c-h)%100;
                  a -= (c-j-k+j+m-j+a+c+i)%100;
                  b -= (c-l*l*d-g+l-a*c+g*j+c-b+h)%100;
                  l -= (b-k-j-b-l+d+d+d-h-n+h)%100;
               }
               while( ++WHILEcnt[21]%5 )
               {
                  i -= (m+l-j+j-b*k-k+k*a+c-e)%100;
                  l -= (i+b-i+a-a+j+f+c-i)%100;
                  a += (k-d-e-j*l+i+e-b)%100;
                  n  = (a+k+n+d-i-k+e-e-f+e-f+l-i)%100;
                  c += (b*g+c-a-c*e*g)%100;
               }
               n += (g*m)%100;
            }
            c += (j*g+j-a+e)%100;
            i += (n-c+a+g-a+h*c)%100;
            c -= (l-h)%100;
         }
         b += (n+j-f)%100;
         k  = (l+d-l-l-n+k*i-g-d+g)%100;
         c += (j*m-j+h*a+a+d+m+d-h*k)%100;
      } while( ++DOcnt[20]%5 );
      b += (e-d-b-m+m-i*b-i-f-i+l*g)%100;
      b -= (f-c)%100;
      f -= (j+i+i+a+d-b+h+h+j)%100;
      j += (m+g-d*m+f+l-e)%100;
   }
   c -= (k+n)%100;
   f += (f*n*a*k+l-d*i-k+d*f-f-a)%100;
   k += (i-i*i-b-f+k+i)%100;
   m  = (c-g+l-f-k*a-l-e+n-l-j-e+h+a)%100;
   e += (h*h-k+n-b)%100;
   k -= (e+l-h*b)%100;
   m -= (l-n+a+d*j-m-c+b*k+c-c+l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F11(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      b  = (n+d)%100;
      for( ; ++FORcnt[37]%5 ; )
      {
         
         switch( ++SWcnt[11]%3 )
         {

         case 1:
         {
            if( ++IFcnt[17]%10 )
            {
               if( ++IFEcnt[23]%2 )
               {
                  j += (d*j-j-b)%100;
                  c -= (f-n-b+k*j-c-m+j-m)%100;
                  l += (f+n+c*h+k-a+i*e)%100;
                  l -= (a+c-i+e+d+l*d)%100;
                  c += (n-k+j+h+n*i+g+c+b*b+i+d-d-f)%100;
                  g -= (i+d*g+m-d+c*h*i+a*a*j-d-m-e)%100;
               }
               else
               {
                  e -= (g+e-k)%100;
                  f -= (d+a-l)%100;
                  g -= (b-e-i+a-l-a)%100;
                  k += (m*k+e*l)%100;
               }
               while( ++WHILEcnt[23]%5 )
               {
                  d -= (f-f*e+m-i)%100;
                  d -= (f*l+l+k-f*l+f)%100;
                  a += (d-f-c+e+c+f+n-b-g)%100;
                  a += (l-b+b-e+m)%100;
                  i += (m-i-f-a*a+e*c)%100;
               }
               do
               {
                  l  = (d-i+c+k+e-i+k*g-c+m-b-f-l)%100;
                  a -= (c+i+h+f-e-d+g+m-n*m-a+h)%100;
                  l += (a-k)%100;
               } while( ++DOcnt[23]%5 );
               for( ; ++FORcnt[34]%5 ; )
               {
                  k  = (i+k-k-e+i+i+a*b)%100;
                  l -= (c*a+f-i+m*n-h+g)%100;
                  d  = (a-e-j+m-n+m+f-n+e-d+g)%100;
                  m += (j-c-i-j-g*b+l)%100;
                  k += (b*i)%100;
               }
               for( ; ++FORcnt[35]%5 ; )
               {
                  c  = (i+c)%100;
                  n -= (f-e)%100;
                  a += (e-j+h+l+j+f*m-m+b-a)%100;
                  n -= (c-c*n+m+h+f*d+c-l+h*g*i)%100;
               }
            }
            if( ++IFEcnt[24]%2 )
            {
               d  = (m-n+m+l)%100;
               j += (b+a+d*n)%100;
               k += (k*h-h+i+h*i*h-i)%100;
               l += (g+m-l+e-c)%100;
               n += (k*k+j+b+l-j*f)%100;
            }
            else
            {
               while( ++WHILEcnt[24]%5 )
               {
                  g -= (g-a+m-d+j-i+k+n+k*b-j-e-m)%100;
                  k -= (k*m*k)%100;
                  c += (l-c+d+n+f+j+d+a)%100;
                  l -= (g+l)%100;
                  c -= (b+f*b-e+l*f-g)%100;
               }
               do
               {
                  e -= (f*l-m+j+m-m-a-l)%100;
               } while( ++DOcnt[24]%5 );
               if( ++IFcnt[18]%10 )
               {
                  a -= (a-h+i+c*h-n*k-c-h+b-j-e)%100;
                  f += (e+n*e-n*d+b-c-m+l*m*a)%100;
               }
               k -= (d+b+n-b+n-l)%100;
               for( ; ++FORcnt[36]%5 ; )
               {
                  l  = (k+i-l-n-h-f*h-c+n+n)%100;
                  h += (f*m*k*c*d-l*f*e+g-c-d+h)%100;
                  c  = (g+j*n*l+n-l+i-n*i*l-k-g-b+n)%100;
                  l += (m+m+e+n+h+j-g-b+m-g*d-a+i)%100;
                  h -= (a-h*k-a+k+c+d)%100;
               }
               
               switch( ++SWcnt[12]%4 )
               {

               case 1:
               {
                  j += (m+i+i*g-k*m+n)%100;
                  n += (b-d-i-m-i*k-g+e-k*f+c)%100;
                  d -= (e+h)%100;
                  j -= (f*i-i-e*c-f*e-b)%100;
               }
               break;

               case 2:
               {
                  h += (n-h-c+a-k-l+g)%100;
                  d -= (n+e-i+d+c-b-i+d+k+c*h-h+k+j)%100;
                  f += (f+m+b)%100;
                  a += (l+d-d-e-i-g-e*c+l*h-j)%100;
                  i -= (h+c-c+f-k-f+m-n+h+b)%100;
                  g -= (c*j)%100;
               }
               break;

               case 3:
               {
                  d += (j-f+c)%100;
                  l += (b+j+m+d+n-j*m-k-h+k)%100;
                  l += (j-c-i-e+a-n-b+b-b*e+m)%100;
                  f += (l*n+k-b-a*m+c-b-e)%100;
                  g -= (d+f+n-l-m+c-m+c+i+j+a-a)%100;
               }
               break;

               default:
               {
                  l -= (h*j+d-b-m+l*b+g)%100;
                  b += (c*f*l*b-e+b)%100;
                  e += (m-b-l+b+e-f-m+a+j+g+e-m-l-n)%100;
               }
               }

            }
            m -= (m-k+a)%100;
            f += (a-d+k-j-e*k-h+i+a*j*i+e+j-d)%100;
            d -= (i-n)%100;
         }
         break;

         case 2:
         {
            e -= (i-b-a-j+g-i+m+m+d-c*j+c-g)%100;
            c += (g+b)%100;
            h -= (b*a+m)%100;
            g -= (m*i+e)%100;
         }
         break;

         case 3:
         {
            j -= (f+g+m+a+k)%100;
            k += (d-n)%100;
            j += (k+j-h-j-c+h)%100;
            k -= (f+d-b+k+l+i*e)%100;
            b += (k+d-h*h-c*g+j-h-d-d+a+e-k)%100;
            m += (c-n+n-a-a+c+a+j-l+a+n-a*b+a)%100;
         }
         break;

         default:
         {
            e -= (i*j+b)%100;
            b -= (f*k+c)%100;
            n += (j+a)%100;
            b -= (l-g+a-h-i+h+f+h-d-b)%100;
            d -= (a+j-b*e-e+c+d+i-h)%100;
         }
         }

         b += (d+a-d+n+m+e+c-k-a-h)%100;
         k += (i-n+k+k*g)%100;
         j -= (h+n-k-d-b-f+b)%100;
         j += (m*n*i*k-c*c+b+k*e-h)%100;
         e += (a+m*f*i*j-a+c+c)%100;
      }
      d -= (n+b+b-j+h+m+g+a+a)%100;
      m += (a-i-m-g+i+h-c*i*c-h)%100;
   } while( ++DOcnt[22]%5 );
   c -= (i+j*g-d*n-d-d+k+g+h*n+m+h*a)%100;
   g  = (b-m-f+g*b)%100;
   b -= (i+f*n)%100;
   k += (e+c+l-a+a+j+h*h+c-e*k)%100;
   n -= (f+j)%100;
   j -= (i-f-i-i+h-a-b+i-b+i-n-b+b-c)%100;
   k -= (j+c-b-n-j-h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F12(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[26]%2 )
   {
      a += (g*m-e+g-j)%100;
      b += (g+g-k*c-j+j+b-j+j+g-b)%100;
      a += (b+e-i+c-f-i-a-a+c)%100;
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
                  g += (b+a)%100;
                  c -= (f-d+c+m-k*d*n+l+j)%100;
                  c  = (n-n-n-a+e-f+g-h-f+f)%100;
               }
               for( ; ++FORcnt[38]%5 ; )
               {
                  d += (e+c-g-e+h-k-h+a-c+m*k)%100;
                  e -= (k+l-f+g*g+k+l+j)%100;
                  e += (i*k)%100;
                  f += (a+c)%100;
                  i -= (l+c+g-i+a)%100;
               }
               if( ++IFEcnt[25]%2 )
               {
                  c += (f*n+c-h-a+f+l+n+m+h+m)%100;
                  n  = (f-k-k+n)%100;
                  l += (j*m-j)%100;
                  k += (e+j+k-d+a-h+n-h*g*e+l)%100;
                  i += (m+d+h-j*b-c+k+j*e+l+n-d+f)%100;
                  m -= (f*m)%100;
               }
               else
               {
                  n  = (n*l-c-k-a-f+e)%100;
                  g += (m*e-d-d)%100;
                  l -= (d-b+l)%100;
                  h -= (e*d*f+j-m+a+e*a+h+j)%100;
               }
               while( ++WHILEcnt[25]%5 )
               {
                  g -= (j+j+f+f+d*a-c+a*c*g+f-e*d)%100;
                  l += (j+i-m+c*h-l+e+g)%100;
                  j += (a*m)%100;
                  a -= (k-m+g-c+i+c-m)%100;
                  j += (k*h-d+c*h*d-h-c*e)%100;
               }
               do
               {
                  m += (i+a-k-b+h-b*i+f*f)%100;
               } while( ++DOcnt[26]%5 );
            }
            j += (a+c-n+j+g+a+i+g+c+c-j)%100;
            for( ; ++FORcnt[40]%5 ; )
            {
               
               switch( ++SWcnt[13]%4 )
               {

               case 1:
               {
                  m -= (d+a+a-f+h+j-l*j-k)%100;
                  g += (l*h+m+e+e-l-m+m-c+n*e)%100;
                  c -= (k*m+b+c+d-f)%100;
                  j -= (j+j-b-i-l*d-e-n+c+g+g-k)%100;
                  b += (d-g+l-g-b*k*c+i-j-g-b+l-m+k)%100;
               }
               break;

               case 2:
               {
                  g  = (f+i*h*g*j-a-i+n)%100;
                  m -= (j*b+j*i+a-l*j*b)%100;
                  c += (k-g-k-h-b-b*a+h)%100;
                  i -= (j*k+e+e*c-i-c)%100;
               }
               break;

               case 3:
               {
                  a -= (h-g+k+e*d)%100;
                  g += (c+f*m+f*h+i-i-d-g+l-e-i+d)%100;
                  h  = (d+k-m*c-i+g+h-i-i)%100;
                  f += (n+b)%100;
                  c += (h+f)%100;
                  k -= (i*i*b*n-m-a*m)%100;
               }
               break;

               default:
               {
                  n -= (e-d-a-a*m+b*k+g*n+f-f-g)%100;
                  c += (k-a-l*n*l)%100;
                  e += (e+e)%100;
                  d -= (m*h-g+c-m*l+l+k-b+b-i+n+k+n)%100;
                  g += (k-m+l+h+c*k-j+n+e*e)%100;
               }
               }

               f += (l-k)%100;
            }
            l += (h+c+f-b+l+n-h-f+m*l+j+n*n-e)%100;
            b  = (i*d+j*i+g-n+b+d)%100;
            d += (b+d+m+j+a*h*a+c+i-n+i-e-b)%100;
         } while( ++DOcnt[25]%5 );
         e -= (h*c)%100;
         i -= (j-d-c-d-d-d-g*h)%100;
         g += (h-a)%100;
      }
      d  = (i*b*d-a-m-g-d+g-j*m*l-e-b)%100;
      b += (l+n+d-e)%100;
      l -= (a-b-d*h-m*m-j-e-e+l+g)%100;
      e -= (h-m-g-l-f-k)%100;
   }
   b += (i+k+e-b+m*a-j-m+k-f)%100;
   k -= (g+c)%100;
   g -= (m+a*j*m*i+a-m)%100;
   m -= (h-h+g*f+b+a)%100;
   m -= (b-n-a-i*h+b*c-a)%100;
   e += (d+n)%100;
   i += (n+g*l+j*a+k+g*l-j+d-l+m*e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F13(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[21]%10 )
   {
      if( ++IFEcnt[28]%2 )
      {
         g  = (m+a+b*m-d)%100;
         l -= (f-c-g-e*c)%100;
         m -= (l+k-k-h-k+d+b+j+m*a+c-n)%100;
         j += (i-n*h)%100;
      }
      else
      {
         while( ++WHILEcnt[28]%5 )
         {
            do
            {
               for( ; ++FORcnt[41]%5 ; )
               {
                  c -= (i*k)%100;
                  j += (k*e-m+b-c-e)%100;
                  h -= (k*j)%100;
                  g -= (j*i-m+k-a-d-m+e+n-a-j+n-k)%100;
                  f += (l+g+m+b)%100;
               }
               for( ; ++FORcnt[42]%5 ; )
               {
                  g += (e+f-h-e)%100;
                  j -= (h+j-j-h*h+e*k+l-i-n+d-a*b)%100;
                  d += (i-c-g)%100;
                  h  = (a-d+g-m*m-j+k-c*c+h-n)%100;
               }
               if( ++IFEcnt[27]%2 )
               {
                  l -= (n+n-i+j-j-a+g-d-a*a-l*d-a-f)%100;
                  c += (i-l-a*d-d+l+e+b+c-k-e+n*l+l)%100;
                  h -= (b-j)%100;
                  d -= (f*g*l+i+k-d-d*n)%100;
                  n += (e-m)%100;
               }
               else
               {
                  e -= (f-d-n+h-f+m)%100;
                  i += (j*e-a+f*m+k-l-h)%100;
                  k += (b*m)%100;
                  h -= (j+a-j+a*f)%100;
                  i -= (e+j-e*f*b+c*d*e)%100;
                  l += (b+h+f-d+f*m-b-h+j+d+a)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  l -= (j-d+i+b)%100;
                  f -= (f-e+j*c-d-g-d-h-j*l-i*a)%100;
                  g  = (f*l-h+e+b+m+n*i-h-b-e)%100;
               }
               do
               {
                  k += (a-k-d+m-n*g-h*i-e+a-c+m+j)%100;
                  g -= (n+f-j-m-a+a+k+c-j+n)%100;
                  g -= (m-k+e-k+b+h+k*i-n+b-a*l)%100;
                  a -= (e-a+c-e+i-h)%100;
                  b  = (e+m)%100;
               } while( ++DOcnt[28]%5 );
            } while( ++DOcnt[27]%5 );
            if( ++IFcnt[20]%10 )
            {
               l += (c-i+n-c-j*c-i+j+g-h*k)%100;
               for( ; ++FORcnt[43]%5 ; )
               {
                  b -= (i-i*g+g+h+l-f-g*i)%100;
                  e -= (g+b*b+b+m*a*i-j+n-n*a)%100;
                  d += (f*n-n+l-e*h+j+g-f+k+h-j)%100;
                  c += (a+i)%100;
                  j -= (l-c)%100;
                  m += (j-f+g*g*b+l-f)%100;
               }
               
               switch( ++SWcnt[14]%4 )
               {

               case 1:
               {
                  f  = (j*i+g+h-d)%100;
                  i -= (j-b)%100;
                  g += (m*e*d-n*h-j+a+h)%100;
                  b += (c-n-l+d*k+c+i+k+e+i-a*c)%100;
                  b -= (j+j-b+j+c+g+f-i+b+i+h)%100;
               }
               break;

               case 2:
               {
                  n -= (j+d*d+m)%100;
               }
               break;

               case 3:
               {
                  j -= (j*b)%100;
                  g -= (a-m-f-h-n*b*a*f)%100;
               }
               break;

               default:
               {
                  f -= (h-i*g-d*k*b-n+b-f+b)%100;
                  g += (l-m+j+c-a+a-a-j*e)%100;
                  g += (g+m-c*d)%100;
                  h -= (l-j-h*i-k*a+e-n*l+i)%100;
                  k  = (m+m+g)%100;
               }
               }

               l -= (e-i)%100;
            }
            i  = (f-d*l*e*m)%100;
            a += (n-g+n)%100;
            d  = (a+h-c+g+i-e*b-i)%100;
            d -= (a+m+a+j-j+i-l-n+e+f+m)%100;
         }
         f += (c-d-j-c+m-g-i+b-d-a)%100;
         e += (a+a*b-a-d-f+m*e+i+b-h-h)%100;
         m -= (a-a)%100;
      }
      k += (g-f+c-g+l+l-a*n*l-m)%100;
      c -= (b*c)%100;
      b += (d-d-d+k-h*n*c+h-l+h*l*e)%100;
      f += (e-j+d*d+j+l*n+e+k+d+l-f+c+h)%100;
   }
   f -= (f+i+e)%100;
   k -= (g-n*m-f+g+g-m+g*d-e+d-i-f-d)%100;
   m  = (c+b+c+n+m)%100;
   k -= (c+m+e-n)%100;
   m += (e+j+m+l+e)%100;
   d += (f-j+f-c-j*c+j-g)%100;
   h += (m-j-h-k+i+m+i-k-i+m+k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F14(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[30]%2 )
   {
      h -= (h+f*g*b+i-k-c*f-d+d+a-i)%100;
      i -= (i-j+i+c+d-d*h+l-l+i*b+j)%100;
      m += (m+d+d)%100;
      g += (k*d+a-e-m-h+j-b)%100;
      a += (j-l*m)%100;
      e += (g*f-a*g+j*e-h-d+b*n+j*e*j)%100;
   }
   else
   {
      while( ++WHILEcnt[30]%5 )
      {
         do
         {
            for( ; ++FORcnt[45]%5 ; )
            {
               if( ++IFcnt[22]%10 )
               {
                  h -= (b*b-i+h+i-j)%100;
                  k -= (n-f)%100;
                  c += (d+m)%100;
                  n -= (b+a-k*j*c-c+k-b*b-n-g-m)%100;
               }
               for( ; ++FORcnt[44]%5 ; )
               {
                  l -= (n-j-a*i+l+h*l-h+i-m+b+a+h)%100;
                  d += (f+n-k-b)%100;
                  b -= (b+h+n)%100;
                  g += (k-c)%100;
                  g += (m+n*f+j*i-n-e-n+a-m+f-n*f)%100;
                  j -= (b*c*e-h+k*k-b+g+l)%100;
               }
               if( ++IFEcnt[29]%2 )
               {
                  b -= (m*m)%100;
                  n += (i*m*h-e+c*g-f-a-b)%100;
                  l += (e-b-c-m*m+a-h+h+i-k*m-a-j+c)%100;
                  j  = (m*a-m+c*c+b-l)%100;
                  i -= (d+f)%100;
               }
               else
               {
                  n += (e+h-c+c-j+i-k+f-j+g+i)%100;
                  k -= (e-e+g+g+n-l+l-a-e+i+e-m+n-d)%100;
                  k -= (a+i)%100;
                  n  = (m-e-n-b+i)%100;
                  h -= (n-j-l-e+l*k)%100;
               }
               while( ++WHILEcnt[29]%5 )
               {
                  m -= (h*h+f+a-d*l*l*f-c*f+d+l-k)%100;
                  i += (g*g)%100;
                  m += (l-d+i-c+f)%100;
                  k -= (m+d+f+e-e+a*m-c+f)%100;
               }
               do
               {
                  i -= (m+a*n+k)%100;
                  h += (d+d+j-k-n+f-g*e)%100;
                  b  = (m*d*a-b+e+g-e)%100;
                  k += (l*f-j*c+j)%100;
                  j  = (d-b+j-i*j+i-l+k-l*h)%100;
                  g -= (h-a+c*n*i-c+g-i-g*j+m)%100;
               } while( ++DOcnt[30]%5 );
            }
            d -= (h+j*d*g*e-n*l+k+c+l-k+i)%100;
            for( ; ++FORcnt[46]%5 ; )
            {
               
               switch( ++SWcnt[15]%3 )
               {

               case 1:
               {
                  h -= (l*c-i+m+a-l*a*k+i)%100;
                  a -= (m+g+h-j-f*d+m+n)%100;
                  k += (e-f-i-c+e*m+i*d+b+f*e-i+b)%100;
               }
               break;

               case 2:
               {
                  k += (c+j+h+e-k+l+m+l+a-h*f-k)%100;
                  n += (n*j+c-k+k-b+m-a+c+k-j-c+a-g)%100;
                  c += (j-n)%100;
                  b += (a-h)%100;
                  l -= (b+a-e*d-i*c+l*e-l)%100;
               }
               break;

               default:
               {
                  d += (m+k+g-m+a)%100;
                  l -= (k+l+j+h+n-m+a*h)%100;
                  c += (j+j*h-k-h)%100;
                  k -= (h-e*a+j*g-b*e-b+l+m)%100;
               }
               }

               e += (l+m-d-b)%100;
               e += (i*b+h+k-j-l)%100;
               b -= (l+i*e*b+h-i+b+i+e+f-g+j)%100;
               h += (j+h+l+k*b-k)%100;
            }
         } while( ++DOcnt[29]%5 );
         h += (k-f)%100;
         k += (g-i-d+c+b+c-h-a*m+f-h+b)%100;
         m += (c*a*b-a+n-c)%100;
         b -= (m-j-h+g-k*l+k*i*n)%100;
      }
      k += (f-d-k*a*n)%100;
      g -= (f-k*j*l-m*h+j+j+e-c-f+a-b)%100;
      e += (g*i)%100;
      b += (h-i+l-e-d+c-i+l+d-d-m*e)%100;
      f -= (i-i-a-f-f+e-j-j+e+d+i)%100;
   }
   d += (h-b-d)%100;
   l -= (l+f)%100;
   f += (d*b-c+k*h+f-m-c-j+m-d-f*d+m)%100;
   f -= (f-h-g-l+e-k*h+n-d*k)%100;
   n -= (a-k+n-c+e+k-f)%100;
   g -= (a*h)%100;
   d += (m-j-a+m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F15(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[24]%10 )
   {
      if( ++IFEcnt[32]%2 )
      {
         m -= (k+l+c-k-i+e+m-l-k*a*e)%100;
         l += (i-a*i+b-a-f)%100;
         d += (m-d-f+e-m+a*h)%100;
      }
      else
      {
         while( ++WHILEcnt[32]%5 )
         {
            do
            {
               for( ; ++FORcnt[47]%5 ; )
               {
                  j += (a-n*a-j-m+l+b*a+b-h*g+a)%100;
                  k += (e+n-c-m-e+e+l-e+m)%100;
                  b -= (h-m-d+a-c+c-c*j+d-i+e*h)%100;
                  b += (d-f)%100;
               }
               for( ; ++FORcnt[48]%5 ; )
               {
                  j += (i-b-h-i-m-b+j)%100;
                  k -= (g+m-c*b-j-n+f+d-c-l-l)%100;
                  h += (i*n+d*k+b+m*f+c-a-k-m-i)%100;
                  a -= (f+a-n-g-j+k+l)%100;
                  m -= (c+g-h-g)%100;
                  i -= (j-d)%100;
               }
               if( ++IFEcnt[31]%2 )
               {
                  j -= (f+h)%100;
                  m -= (n-d-f-h+n-i+j-j)%100;
                  c -= (g-j-j+g+b+b-b-a+a+c+n)%100;
               }
               else
               {
                  m -= (e+d-c-j+g*n-k-g-h+l*n)%100;
                  a += (n-a*l*j)%100;
                  l  = (i+b*c*d+e*c+k-i+m+a+k-j-a-e)%100;
                  b -= (f-h+n+g-n-k-h+m-i*l-n-f)%100;
                  f -= (h-f+j+k*g-i-c*k*f-e+l)%100;
               }
               while( ++WHILEcnt[31]%5 )
               {
                  d += (g+m-m+n-a+m+g)%100;
                  d -= (e-h-a+h+k+e)%100;
                  i -= (d-d-n+n-f*j*j-f+n+h)%100;
                  e += (c+k+h+a-d-c-l)%100;
                  g -= (n+n+h-h-m-j-g-d+c)%100;
               }
               do
               {
                  i -= (d*e-b-k*e*d+j-h*k)%100;
                  d += (k+k-e*k)%100;
                  b += (m-k+n*k+j-a+e)%100;
                  m += (j+f+c-n*j*f*e*h+b-a+i*c-d)%100;
               } while( ++DOcnt[32]%5 );
            } while( ++DOcnt[31]%5 );
            if( ++IFcnt[23]%10 )
            {
               b += (e+n-g+j+i*n+f+m-i+n-a)%100;
               for( ; ++FORcnt[49]%5 ; )
               {
                  b += (g+c*f+n-i+f+c-a+h+l-c+l+g)%100;
                  l += (h-m+f-n-a+i+m*j+a)%100;
                  h += (h-h+f+d*m*i)%100;
                  e += (d+m+c-d-a-g-e-h-c*d)%100;
                  n -= (j+b-b)%100;
               }
               
               switch( ++SWcnt[16]%4 )
               {

               case 1:
               {
                  k  = (h-m)%100;
                  g += (h*d+n+k-d*i-h*e*f-d-k*c)%100;
                  l -= (h-f+l-n-f+h-n+m*n*j*a-g-l)%100;
                  f  = (a-d+j+h-b+e*l-m-n-b-d+j*c)%100;
                  a += (g+g)%100;
               }
               break;

               case 2:
               {
                  h += (j-k-f-c-i+m*h-i)%100;
                  d -= (e-e-j-i+j-i-g-j)%100;
                  e  = (f-n-m+g+c*a+a-n+b*b-l)%100;
                  e -= (j-m+g-a-c+i-c*j*i+l-f+j)%100;
               }
               break;

               case 3:
               {
                  l += (b*d+g*l-c+i)%100;
                  j -= (a-b+k+f*g+h)%100;
                  g += (l*j+f-f)%100;
                  j -= (l*h)%100;
                  b += (l*e-e-h)%100;
                  l -= (h-j-g-c-h+l)%100;
               }
               break;

               default:
               {
                  g += (e-l)%100;
                  m += (c+d*j+j+h+b+k-m+i+k+h-h+m-n)%100;
                  b += (m+d-h+a+a-g-j+n+n+g-j)%100;
                  k  = (h-j-i+f+c-j-d+e+d)%100;
                  i += (a-d-c+e*h*k+e-n-j)%100;
               }
               }

               a  = (l+k-b*g-g-f+m-m-a+m+i)%100;
               c += (m-g+a+m-e+k+j*h+j-k)%100;
               k += (l-k-j-k-h+j*d*e+f-l)%100;
            }
         }
      }
      m -= (b+d-i)%100;
      l -= (g-e+g-b*c-d-e+g+a-e)%100;
      e  = (g*f*g-e+b*j-l-k)%100;
      g -= (e+m+e-i+e-i-i+a-h+k+k)%100;
   }
   c -= (g+j-b-c-n-i+l+i*g)%100;
   d -= (c+l-n-d-j-k+e-l)%100;
   k += (g-j+b)%100;
   i  = (g+a*c)%100;
   d += (e+g+m+k+b+b-g-j-l-g+i)%100;
   g  = (n+b-e-e+c+j-e-g-l-b-g)%100;
   i -= (c-n+g-h+m*n-b+h+m+k-k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F16(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[35]%2 )
   {
      l  = (b+d+h-f-i*a+n-c)%100;
      j -= (j+c-e-b-n-n+m*e+d-h)%100;
      l -= (a*e*i*h+g+e*b+h-g-b-c-g*d)%100;
      j -= (i-j+j-f-e+n-h-i*a+k-m)%100;
      j -= (e*n*k+m-d-a)%100;
   }
   else
   {
      while( ++WHILEcnt[34]%5 )
      {
         do
         {
            for( ; ++FORcnt[51]%5 ; )
            {
               if( ++IFcnt[25]%10 )
               {
                  h  = (g*d)%100;
               }
               for( ; ++FORcnt[50]%5 ; )
               {
                  d  = (a-d-c)%100;
                  a += (h+i)%100;
               }
               if( ++IFEcnt[33]%2 )
               {
                  n += (m+h)%100;
                  n  = (a+i-n+e)%100;
                  b -= (e-l-d-j+e-l+b-n-l+h+g-d+a-j)%100;
                  j -= (a-j*d-k-l+f-i)%100;
               }
               else
               {
                  b += (d*g+b+n*e)%100;
                  c -= (h-l-k*m+k-n-k-i-e-d)%100;
                  m -= (i-k+e+e)%100;
                  e += (i-k-g+d+f+f-f)%100;
                  a -= (c*i+j+i+e)%100;
               }
               while( ++WHILEcnt[33]%5 )
               {
                  a += (l+m+n-f+m+f+g)%100;
                  j -= (d-k)%100;
                  d -= (g+f+d-h-l-a+h+h-l-a+f)%100;
                  k += (i+d)%100;
                  l -= (e-m*b+c*e-c*j)%100;
                  g += (g-b-l)%100;
               }
               do
               {
                  a += (g+l+f*m-j+n*n-g*a+m+d-l+m)%100;
                  k -= (d+b+i)%100;
                  e -= (m-m-k)%100;
                  d -= (n-l)%100;
                  c  = (e+d*g*m-h-g+c+b-d)%100;
               } while( ++DOcnt[34]%5 );
            }
            e += (k+f)%100;
            for( ; ++FORcnt[52]%5 ; )
            {
               
               switch( ++SWcnt[17]%4 )
               {

               case 1:
               {
                  f -= (f+f-h+h-a+b+m+c-b+l*h*b)%100;
                  e  = (i-k+k*e+h-k-n-j)%100;
                  g += (k-l+e-j-c-k+b-f-j-a)%100;
                  h -= (k*m+j-i+m+k*k+n-h*h)%100;
                  l  = (j-m+i-m-m-d*b+l-e-d)%100;
               }
               break;

               case 2:
               {
                  n += (l+c+k+c)%100;
                  i -= (j-k+g-k-j-c+m+l-e*c+f*j-k)%100;
                  m  = (e*k-h)%100;
                  i += (h*n+f-c+l+i*k*d-j)%100;
               }
               break;

               case 3:
               {
                  k += (c*a+f+j-b-d-h-g+d+b-f-g+e+c)%100;
                  c -= (c-n)%100;
                  l += (c-l-j+c-i)%100;
                  i -= (f-l-a)%100;
                  g -= (d+i-a+g-d*n+c-a*m*e)%100;
                  i -= (e-l+n-e-n+h-e*a+i-k+b*g+f+d)%100;
               }
               break;

               default:
               {
                  k += (j-k+l*f+m+d+n+h-i+f+b)%100;
                  a += (f+m*h*n-i*n-b+m)%100;
                  h += (m-g+m-d-m-l-c+c+e-n*j)%100;
                  b -= (d+c-d-e+i-d-k)%100;
                  b -= (j+e)%100;
               }
               }

               if( ++IFcnt[26]%10 )
               {
                  b -= (n+m-n)%100;
                  j += (c-j+k+h+h*l-m*d-f-e)%100;
                  g += (m*f-b+n-n*b-f+m+i-j)%100;
                  b  = (l-g)%100;
                  d  = (h+e*l-e+l+f+b+i*g*l-c-n+b)%100;
               }
               if( ++IFEcnt[34]%2 )
               {
                  d  = (e-a-j+f+i-h*l+e+n)%100;
                  j -= (k-a-b+d*c*b)%100;
                  d += (m*h)%100;
                  b -= (b+a)%100;
                  m  = (e+m+i-g-l-c*d+d-i-a+j)%100;
                  l  = (n-a-e*i+k+b+i-g-g-k+c+n+l)%100;
               }
               else
               {
                  l -= (c+b-f-f+a*k-i+f)%100;
                  i -= (n+i+e-j+c*h*m+j+d+k-e-c+g)%100;
                  b += (n*a-h*n+c)%100;
                  m  = (i+b-l-b+h-b)%100;
               }
            }
            d -= (e-c+n*e+f+j-b*b-c-e+a)%100;
            j += (e-l)%100;
            b += (d*d+i+e-j*b+j*h+c-l)%100;
         } while( ++DOcnt[33]%5 );
         j -= (c+g-j-k+a-h-b+l+i*n*f)%100;
         j -= (k-e+f-g+d+m-j-f*c-e*f)%100;
         e += (e*l-d*m*m)%100;
      }
      k += (l+n)%100;
      b += (n-a+b-b+l)%100;
      m += (j*j*l+h-l+f-b+m+k-m)%100;
      m  = (c+a-j*h)%100;
   }
   l -= (d+c)%100;
   d  = (d+j+b-c-m*m-g*n)%100;
   e -= (a+j-g*a*h)%100;
   g  = (n+a+k)%100;
   a += (c*b+a+b+f)%100;
   b += (a*e+c+k+f-h-n-g-i+c*j)%100;
   f -= (g+k-j*f-j-a*e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F17(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[37]%5 )
   {
      do
      {
         for( ; ++FORcnt[56]%5 ; )
         {
            for( ; ++FORcnt[54]%5 ; )
            {
               if( ++IFEcnt[36]%2 )
               {
                  i -= (g+l+m-e*m+l+n+e-e-g*e*g+h+h)%100;
               }
               else
               {
                  a -= (i-n-b*e-m)%100;
                  m += (m+d*c-f-n-e)%100;
                  i += (l-n+b*k*k+e+i+l+n+c-n+g+h+c)%100;
                  k -= (g-d+h*b*d-a+h)%100;
                  l += (l+d-j+a)%100;
               }
               while( ++WHILEcnt[35]%5 )
               {
                  d -= (i-i-a-g-j+g*n)%100;
                  e += (j+b*j-e+n-f)%100;
               }
               do
               {
                  c -= (n*j-h-b*l+i+k)%100;
                  n -= (h+g-n+i-k*h)%100;
                  j  = (m-a+e-d+h-h-c*m)%100;
                  k -= (g*m-c+k-j-c-f-c*i-g)%100;
                  h -= (g+h+b-a-j*d-a*k-e+g+c)%100;
               } while( ++DOcnt[36]%5 );
               if( ++IFcnt[27]%10 )
               {
                  d += (d*i+h-i+m*b-k-a-d-l*f-l*j+f)%100;
                  h += (n+n)%100;
                  h += (e*a*f-h-a+m+k+l+i*n+h-g-d)%100;
                  n += (m+n-h-l+g+a-n-h*c-g-f+l*i-c)%100;
               }
               f += (g-n-k-a*l)%100;
               for( ; ++FORcnt[53]%5 ; )
               {
                  d += (h-d*n+h)%100;
                  a -= (c+f+j-e)%100;
                  g  = (c-i-a+f+c-c-g-g-k*h*j*l)%100;
                  a += (l-g-d+b+a+f*c-e+i*f*b)%100;
                  m -= (i-j*i-h+d+j+l)%100;
                  a -= (e-i+m+f*c*d-a+g+k*g-d)%100;
               }
            }
            
            switch( ++SWcnt[18]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[37]%2 )
               {
                  c -= (a-j-k*a+a-k)%100;
                  k  = (n+b+h-l-d*d-m-m*f-l+f)%100;
                  c -= (d+f+c+l*g*d+i*f-m*h*c)%100;
                  i  = (i+g+m*e+e+e)%100;
                  d += (c+b-d-l)%100;
               }
               else
               {
                  m += (h-i+h+k+a+e*b+h*e-d)%100;
                  k -= (e-i)%100;
                  e += (m+a+m-n+e-n)%100;
               }
               while( ++WHILEcnt[36]%5 )
               {
                  h += (m+f-i-c+d+f-d-l+g)%100;
                  g += (a+m+l+b)%100;
                  b -= (n+n*n-d+n+a)%100;
                  k -= (k+d+n-m)%100;
               }
               do
               {
                  g += (i+n-f-h-g-b-k+m)%100;
                  b += (j*k-m-k+a-n-j-a-d+i-f+d-c)%100;
                  b += (l*k-i+c-l*b+g)%100;
                  g += (g-l+a-n-m*g*g-c-f*d-h*i+a)%100;
                  b -= (e*e-k+h-l-h-e-k-l+l+a)%100;
                  k += (a*j-i+l+j)%100;
               } while( ++DOcnt[37]%5 );
               for( ; ++FORcnt[55]%5 ; )
               {
                  j += (e+n)%100;
                  g += (d+b-e)%100;
                  c -= (g+k+n-j-e+l+e+l+i)%100;
                  b -= (i-h)%100;
                  l -= (j+h-k-n)%100;
               }
               l += (l*n+b*n+g-h*g+e-a+f)%100;
            }
            break;

            case 2:
            {
               e += (e*d*g*m+a-l+n-b-k)%100;
               b -= (e-j)%100;
               k -= (j-e-c+l+g-j+b+d-k)%100;
               k += (j*l+k-b+f+b-f+e+g)%100;
               c += (a+a)%100;
            }
            break;

            default:
            {
               l  = (d+b-e-j-f-i*i+g)%100;
               c -= (e-m-g*d*b-l+h-h+d-m+n-i-b)%100;
               f -= (d+e-l-m+i-i-m+e*f)%100;
               h += (h+b)%100;
            }
            }

            n += (b-g+j+n-l*d+e*j-b+n-i+c+m-l)%100;
            g -= (j-m+e+b-h*a+c-k-c+m-h*m-f-e)%100;
         }
         n  = (e*b+f-i-h-k+m)%100;
         m -= (d-h-m*n+h+f)%100;
         b -= (a+m*f+k+b)%100;
         j += (e+e-e+b+a*b+e*i-i*e+m+a)%100;
      } while( ++DOcnt[35]%5 );
      b += (m*b-e+k-b+n-e-i+l-l+a+b+n-i)%100;
      c += (m+g)%100;
   }
   b -= (j*h)%100;
   m  = (l-c+b-k-d+b-k)%100;
   g += (m-n-a-m*g*d)%100;
   c += (j-m-f+f+j+b-l*f+m)%100;
   m += (h-d-h-e)%100;
   d += (m*c)%100;
   k += (l+c*g*c+f*g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F18(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[29]%10 )
   {
      for( ; ++FORcnt[60]%5 ; )
      {
         if( ++IFEcnt[39]%2 )
         {
            b += (e-h+j-g-m-g*c+j+i)%100;
            d += (g*c*b*g)%100;
            h += (l-f)%100;
            e -= (k+n*l)%100;
            l  = (n-g+i)%100;
            c -= (d-e+e+n-d-m-h-g+c+e-k)%100;
         }
         else
         {
            while( ++WHILEcnt[38]%5 )
            {
               do
               {
                  k -= (g+i-b-f-c-h+h)%100;
                  i += (d+l*i-h-e)%100;
                  d -= (n-h*i-n-n*j)%100;
                  d += (i-n+l-m-c*a+a*k-d-a*h)%100;
               } while( ++DOcnt[38]%5 );
               e -= (f+e+m-i+n+i+i-l+a)%100;
               for( ; ++FORcnt[57]%5 ; )
               {
                  c -= (j+c-a)%100;
                  m += (d-j-d-m)%100;
                  k += (d-g-j+b+k-a*m*b)%100;
                  d -= (g*n-k-k-m-j+i-a+c+e)%100;
                  e  = (a+j+i-d-k+f)%100;
                  f -= (i*n-b-f*j+d+j-n*j)%100;
               }
               
               switch( ++SWcnt[19]%3 )
               {

               case 1:
               {
                  a += (l+h-j-g)%100;
                  f += (i+g-m+j*l+j-c+c)%100;
                  e  = (i+c)%100;
                  g -= (l+f-i)%100;
                  n  = (e-b)%100;
               }
               break;

               case 2:
               {
                  j -= (f+i)%100;
               }
               break;

               default:
               {
                  l += (n+k-n-c+c-a-i+e)%100;
                  i -= (e+m-m*a+i-e+g-m-k+c-m-b-l)%100;
               }
               }

               if( ++IFcnt[28]%10 )
               {
                  f -= (g+g-e)%100;
                  g -= (j+k+g+i-i)%100;
                  j += (l+l*i+j+k-m-d+b-g-h+j+a-f-a)%100;
                  c -= (i*d+i*f-m-l-c*l*b-n)%100;
                  n += (l-h-c+g*i-b-a+f)%100;
               }
            }
            if( ++IFEcnt[38]%2 )
            {
               i -= (m-i+i*m-n*n-e+e-m)%100;
               h -= (i-n+e-k-i-i+i+k*b-j*g-f)%100;
               f += (m-h)%100;
               h -= (i+a+h-n)%100;
            }
            else
            {
               while( ++WHILEcnt[39]%5 )
               {
                  i -= (j*k-j-a+d-l*h-c*b*b-l)%100;
                  m  = (n*k)%100;
                  k -= (e+j+m-d+l+e+f-f*b+b+h+j*j-b)%100;
                  a -= (m+g*a+c)%100;
                  j  = (d*d)%100;
                  j += (e+c*k+h*k)%100;
               }
               do
               {
                  d += (j+e*m*f+j+g)%100;
                  b += (b+m*i-f*b+n-b-h-i+b+k+i+h-c)%100;
                  i -= (m+i-e+f+j+c+a+b*n+e)%100;
                  g -= (a+b-l-n-l-m*e-k+g-d+i+g*i)%100;
                  n -= (b+c-j*m+l-m*l+c+l+g+e+h-g-f)%100;
               } while( ++DOcnt[39]%5 );
               for( ; ++FORcnt[58]%5 ; )
               {
                  g += (k-g)%100;
                  i += (b+d-f*a)%100;
                  b += (b-b-h+a+d+n-c-g+j+e+a-j)%100;
               }
               for( ; ++FORcnt[59]%5 ; )
               {
                  g -= (k-k-d-d*e*b+d*m-l+n-d)%100;
                  l -= (k+d)%100;
                  d += (h+l-h+a+a-e*e+j-b-k-e-e*m)%100;
                  f -= (c-m+m-a-b-h+k+d+m-g+d+f)%100;
                  j += (k-k+g-m-d-a+c-n+g+b+n*d)%100;
               }
            }
            n += (l-d)%100;
         }
         n -= (g*m+b+k-e*l+g+e+e)%100;
         g += (l-b*g-d+a+k+d-d+n-j+m+k-e)%100;
         l += (g-k-i*l+n*c-k+i+k+j)%100;
         m -= (a+m-c)%100;
      }
      g  = (j+c+m-m-h*l)%100;
      d += (b-f-i-d-b+b-d-m-m*n+a+j*a)%100;
      a -= (l-k+g-k-g*c+b-d-e-f-j+a-n+h)%100;
      n -= (n*f*c)%100;
      l -= (a+h-g*k-k+i+m-i+c-i)%100;
   }
   n  = (k+h*k-a+b-g)%100;
   h -= (n+f-d+b)%100;
   f += (e-n)%100;
   c += (k+d+n-b-d-k+m+k-h-h+d+n-n*j)%100;
   i += (i*i*a*f-h+d+f-f-m*k+h-b-f-m)%100;
   g += (a*n+m+f-n+m-f-a+h+c)%100;
   h += (j+g-d*i*j+l+c+l+k+j-j-e-k+e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F19(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[42]%2 )
   {
      a  = (l+l-b+m*n)%100;
      f -= (j-m+m+l+j+a+h-k*j+f-k-n+i-l)%100;
      d  = (b+a+m+j*m+h+j-j*i-l-m+e)%100;
      b += (m-b)%100;
      h += (e+h)%100;
   }
   else
   {
      while( ++WHILEcnt[41]%5 )
      {
         do
         {
            if( ++IFcnt[30]%10 )
            {
               m -= (g+a)%100;
               for( ; ++FORcnt[61]%5 ; )
               {
                  l -= (h*l+b-c-i+a)%100;
                  j += (j+d+a)%100;
                  i -= (n*a+b-c+a+b)%100;
                  f += (m+m-a-f+i+i+a+b-l*g+f)%100;
                  h -= (g-b-k-j+g+i*j-l-b-m+i-k)%100;
               }
               
               switch( ++SWcnt[20]%3 )
               {

               case 1:
               {
                  c += (m*a-g)%100;
                  l  = (b+k-g-k-b*c-g-k-i-a)%100;
                  n += (m-d+j-j-l+i-e)%100;
               }
               break;

               case 2:
               {
                  j += (k-g+d-k+i-e-b)%100;
                  a += (a+d*g+e+l-g-n*d+k+e*l+n-l)%100;
                  j += (j+c-g-j-l*n-c-k+j)%100;
                  f += (j+e+g+c-l-d-b+f*a-d+e+j+i*e)%100;
                  n += (a-l+e+i+h+f+j-k*c*g-h*n)%100;
               }
               break;

               default:
               {
                  e += (j-l)%100;
                  g -= (c+e-j*h-g+i)%100;
                  a += (m+m*b*g-k-a-d+l-d-c-k+h)%100;
                  h -= (c*a+k-h*k-e+b-l+i+b+g-a)%100;
               }
               }

               if( ++IFEcnt[40]%2 )
               {
                  n -= (m-m-a-i+b-f+l-n-h+d)%100;
                  n += (a-k-l+d-m)%100;
                  a += (m+l-c+c+l+a-d-i+j+i+l)%100;
                  j -= (c-m)%100;
                  h += (e+e)%100;
               }
               else
               {
                  f -= (f-a-e)%100;
                  c  = (h+b)%100;
                  e  = (h+j*c-f)%100;
                  b += (a-l-i+a*e)%100;
                  h -= (n-e)%100;
                  a -= (g-h*m*l+a-l*l+h*l+i*n-f-f-m)%100;
               }
               while( ++WHILEcnt[40]%5 )
               {
                  l += (i+i+m*j+h-k)%100;
               }
               do
               {
                  c += (j-m*c+e-e-m+f*d+k-c+e-b)%100;
                  f  = (m+g*b-c-n-f+h)%100;
               } while( ++DOcnt[41]%5 );
            }
            for( ; ++FORcnt[63]%5 ; )
            {
               if( ++IFcnt[31]%10 )
               {
                  i -= (a*k-m-d-a-c+f+g)%100;
                  k -= (n+d)%100;
                  l += (h*h-g)%100;
                  i -= (b+c-a-a+b-d-j)%100;
               }
               for( ; ++FORcnt[62]%5 ; )
               {
                  l += (f+l-g-d-c*j+m-e+a*c+g+h+h)%100;
                  j -= (g-n+h-d-n)%100;
                  j -= (d+i*d-m-c*a-k-a*j-h)%100;
                  f += (b+d+e+n+f+f+a-a*a-h-j+f-b-m)%100;
                  m -= (e-a)%100;
                  n += (h*l-b-i-g-e+d-k)%100;
               }
               if( ++IFEcnt[41]%2 )
               {
                  i += (g-k*a-b-l+j+n)%100;
                  k -= (b-h+a-i+n+c+h-l+j+l+j*h-a)%100;
                  j -= (m+b+n-j-i-i-d-f-k+e+b-n)%100;
               }
               else
               {
                  m -= (m-g+d+a)%100;
                  n += (i+j-d+d-e+l+i)%100;
                  l -= (l*e+h)%100;
                  c -= (b*h-m-g)%100;
                  e -= (c*n+f-g-g+l+j*m-d)%100;
               }
               j -= (d-k-a)%100;
               f += (g-d)%100;
            }
            b -= (m-h)%100;
            h += (c+n+b-b+g*f)%100;
         } while( ++DOcnt[40]%5 );
         j += (h+n*b)%100;
         l -= (n*l*h+i-c-m)%100;
         m -= (h+g-d-b-k)%100;
         k += (m+j-h*j+l+h-n-l-l-l+n+k-i+l)%100;
      }
      g -= (l+j+f-l-e+a-e-g+h-h*c+l)%100;
      f -= (d+f-e-l-j-b*k-m-c*h-d)%100;
      d += (c+a-k+h-f*n*e)%100;
      n  = (e-f+n+i*i+n-b)%100;
   }
   f -= (c+m-a*m+d+n-a+h-f-e-b+n-d)%100;
   m -= (c*h+i-k-g-c+l*e-f)%100;
   h += (c-g-m-h+d+i+d+j*j-i-b-g-c*m)%100;
   f -= (d+j+d-g-j*g)%100;
   i += (n-f)%100;
   k += (c-n-m+a)%100;
   j += (k-c-i*k*h+a*a*j-n*m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F20(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[44]%5 )
   {
      do
      {
         d  = (h*d*h-f*n-i)%100;
         for( ; ++FORcnt[66]%5 ; )
         {
            
            switch( ++SWcnt[21]%3 )
            {

            case 1:
            {
               if( ++IFcnt[32]%10 )
               {
                  h += (d+a-b)%100;
                  i += (e*d+e+m-m+g-k-n*i+e-e*j*g-g)%100;
                  j  = (m*l+m-b*h+k*m-i)%100;
                  d += (f*i+j-g+d-h-l-l*e+f+d*k*i*h)%100;
               }
               if( ++IFEcnt[43]%2 )
               {
                  f -= (j+k*d)%100;
                  h += (g+d-l-i*f)%100;
                  k += (l-f-k*f+a*f-i-a)%100;
                  h += (d-a+b+l*d+f)%100;
                  i -= (f+f-n+g-b+n+f-e*d+m+f-j)%100;
               }
               else
               {
                  g  = (h-h-e+c+i+d-h+h-h+a*f-h+g+l)%100;
                  m += (c+j+e*d)%100;
                  k += (k+k*f+i+j+b-a*m-h+k+i-n+n)%100;
                  b += (f-k+l)%100;
                  d += (m-e-n+n+n-b-b)%100;
                  f -= (c*b+a-j+a-k-d)%100;
               }
               while( ++WHILEcnt[42]%5 )
               {
                  j += (e*d-h-h-e+d+k-k*k-a-e-h*b)%100;
                  k  = (b+k-e-j+f*h*j-e-h+e)%100;
                  b += (b+d+j+h-g)%100;
               }
               do
               {
                  e += (m+a+j+c)%100;
                  i += (a-d+g-l+e+f*e+g+f+f-j-a-j*j)%100;
                  b -= (c-l-l-d+f-k-d+i-l+f-n+e)%100;
                  i -= (d-j-m-h-k*l)%100;
                  k -= (e*b)%100;
               } while( ++DOcnt[43]%5 );
               for( ; ++FORcnt[64]%5 ; )
               {
                  c -= (b-c-e+b-g+e-f+e-f*n-e-k-l)%100;
                  b -= (g-l*i-n+g*k)%100;
                  l += (g*i+a*b)%100;
                  e -= (g-c+g-b-d+f+a-n*b-e-j)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[65]%5 ; )
               {
                  b += (f*h-l-g-a-e-f)%100;
                  g -= (l+n+f-m*e-e*e*d)%100;
                  e += (h*k*l-m)%100;
                  k -= (e+k+n+d-b-j*a+n*f*i*d*j-f)%100;
                  j += (n+b*e-g-g)%100;
               }
               if( ++IFEcnt[44]%2 )
               {
                  c -= (i*i+i*m*g-a-i-c+a-n+h-m)%100;
                  l -= (c-e+a+m)%100;
               }
               else
               {
                  k  = (i+f-f-a-n*b+j-d*f-c+b-k)%100;
               }
               while( ++WHILEcnt[43]%5 )
               {
                  h  = (b-e-a+m+g-f-k-i-h)%100;
                  d += (c+l-f-i*c*n+f-k+n+b-n-h)%100;
                  l -= (l+g)%100;
                  f += (f-d)%100;
                  d -= (e*a*e-b)%100;
               }
               do
               {
                  l  = (g-k*n-c-d-n)%100;
                  i += (m+g-j-f)%100;
                  l  = (a+d+i*g-c+k+k-h-a+e+d-e+f*c)%100;
                  k += (n-k+j*m-g)%100;
               } while( ++DOcnt[44]%5 );
               if( ++IFcnt[33]%10 )
               {
                  m -= (j-a+h+e+i-i-n-c+d)%100;
                  j -= (l+e*f*b-k+n)%100;
                  i -= (g-e+g+j-n+d-k-k+c)%100;
                  k -= (j*a+e)%100;
                  h += (e-m+k+d-k+i+i-f-f-n+j+h+n+d)%100;
                  n -= (h+n-i+f-g-k*d*m-m-d-j+h-k)%100;
               }
               j -= (g+m-c-m-d*f*a+f-l)%100;
            }
            break;

            default:
            {
               c -= (j+d+m*c+b-b-e*e*k+c)%100;
               c += (e+g*m*h-j*a-a)%100;
               g += (j+a*l*b-j*c-n-b+f)%100;
               i += (j-c+d-d+i+m-d+f+a-k*d)%100;
               l += (h+h*n*b-n*h-l-b+g+l)%100;
            }
            }

            l += (n-l+g)%100;
            g += (l*h*i*a-g+i+a)%100;
            h -= (k+g+m-b+n-j-n-i+a-j+e*h-e)%100;
            n -= (a-i-l-f+d-f+j+e+f*b+d*i+k)%100;
         }
         b += (g-g*g)%100;
         d -= (g+i*g+l)%100;
         g += (f-b+h+e*i*l+b+e+c+n-k*f-i+d)%100;
         i -= (i-m)%100;
      } while( ++DOcnt[42]%5 );
      d -= (b-a*d+m)%100;
      n += (e+m+j)%100;
      f += (h-l)%100;
   }
   f -= (e*k)%100;
   g -= (i+m*m-j-f*a*e-l-h*b-n-l+k)%100;
   n -= (g-i-j+h+m+h+n)%100;
   n -= (l-j+n+c-m+d+j+g)%100;
   n -= (g-b-d)%100;
   l += (b-d-g+e+l+f)%100;
   d -= (k*i+c-b-d*g-m+h*j*b-i-d+f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F21(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[22]%3 )
   {

   case 1:
   {
      for( ; ++FORcnt[70]%5 ; )
      {
         f += (i-f)%100;
         if( ++IFEcnt[46]%2 )
         {
            d += (f+h-f-b*m-h)%100;
            e += (f+e*n+n-f-h*f*a*h+e+k+n)%100;
            d += (l*l+f+m*i-d+l-k-f-e*g-l-b-g)%100;
            l -= (m-a+c-a-k-c+e)%100;
         }
         else
         {
            while( ++WHILEcnt[46]%5 )
            {
               do
               {
                  h -= (e*l-l-j*m+m+d+h-e-l)%100;
                  d += (d-a+f-i*g+d-f+f+m-g+l-l)%100;
                  i += (j+h)%100;
                  a += (g+k-h*e*a-g*l-c+d-k)%100;
                  n += (j+f-k+i+e+g+f-c+n+f)%100;
               } while( ++DOcnt[45]%5 );
               for( ; ++FORcnt[67]%5 ; )
               {
                  f -= (f*n*g+c-l+i-k-b+e)%100;
                  g += (d+f-i-f+c+d-f+a-j-i)%100;
                  m -= (g*b)%100;
                  k -= (m*n+d)%100;
                  f += (m-i-d+n-c*k-i-f-d-i)%100;
               }
               if( ++IFcnt[34]%10 )
               {
                  l -= (g-m-m)%100;
                  m -= (h+j*j-n-l+a+e+k-m*n*g-n*b)%100;
                  e += (k+g*d+f+e+m+k*n+i+e-l-e-h+g)%100;
                  m  = (n+f-l+f)%100;
               }
               for( ; ++FORcnt[68]%5 ; )
               {
                  c += (j-d)%100;
                  a += (d-g-c+m+h+b)%100;
                  b -= (b-d+a*g+l-i-n+i-k*i-c-b)%100;
                  d -= (a+a)%100;
                  l -= (d*c+n+h+j-c)%100;
                  h += (f-g-k*g*m*d+m-d-b-k)%100;
               }
               if( ++IFEcnt[45]%2 )
               {
                  k  = (m-h-c+a+e-k-l*j)%100;
                  g += (b-k)%100;
                  b += (e-a-a+m-j*a-k-h+l+e*k-b)%100;
               }
               else
               {
                  l += (c-k+j-h-a-l+e-m+a+g)%100;
                  f -= (e-a-b+i+b)%100;
                  f -= (j*c-l+h-d*e-h+g-l+g*n)%100;
                  k  = (d+b-f)%100;
                  n  = (i+a+l+g+b-l)%100;
               }
               while( ++WHILEcnt[45]%5 )
               {
                  h -= (l*n+l-g+b-j*f-f*f+i)%100;
                  d -= (c-g*f+j-a+e+m-l-n+m*h-g*l+f)%100;
                  l  = (j-k+l+m+g*k+e+k*i)%100;
                  d += (m+c)%100;
                  e += (c+k)%100;
               }
            }
            do
            {
               c  = (j-m-k-n*i*i-e)%100;
               for( ; ++FORcnt[69]%5 ; )
               {
                  e += (m-e-n)%100;
                  n += (l-g+g-l-h*i-e-i+b-d)%100;
                  k += (j+i*a+f+f+a-c+e-i)%100;
                  k -= (n-f)%100;
                  i -= (b+h+c+m+g-d+c+m-h*c-f*j)%100;
                  i += (d+g*i-d-e+b*a)%100;
               }
               
               switch( ++SWcnt[23]%4 )
               {

               case 1:
               {
                  j -= (b*h-f+c+n+n+i*a+e-h+h+j*n)%100;
                  e -= (h-g+f-m*n-i-k-e-k-n-d+f-a+j)%100;
                  h += (f+h*g+j)%100;
                  f -= (a+g-k+g-j*l+b*m+n+i*m)%100;
                  a -= (l+n+j+l*i*m-m-l*j+l+i-j)%100;
               }
               break;

               case 2:
               {
                  b += (d*m-h+n*c+e+l-f-j)%100;
               }
               break;

               case 3:
               {
                  m += (b-c+h-i+a)%100;
                  j += (b-c-c-c-m+f+i+d+f*h*g-d+l)%100;
               }
               break;

               default:
               {
                  l -= (j+j+h+n+a-i-n*m-h-g+j-f)%100;
                  n -= (l-h*f-i-e*d)%100;
                  g += (l-k*h+j+f-i-c)%100;
                  c  = (m+m-f+j)%100;
                  h -= (c-k*g-g+e+j+i*f+k-l+m)%100;
               }
               }

               m += (m-n-i*c+n-b+l+m+l+a-l-h*f)%100;
            } while( ++DOcnt[46]%5 );
            i += (i+c+h-n+d*l+a+l+m+j)%100;
            n -= (m*m*e*l+d-j+d+b+c*e-k)%100;
         }
         f += (i*e+k-n+d-b+i)%100;
         k += (h+j+e-f+j-i+e)%100;
         c -= (k*h+c-j+h*e+k*f+i+k+d*j)%100;
      }
      h += (i+e-i-a-h-a-j-n-l+n+l+c-n-d)%100;
      i -= (b*c)%100;
   }
   break;

   case 2:
   {
      m += (l*f)%100;
      j += (e*i*b-h-m+c-h)%100;
      a  = (f+l+d*g+h-i)%100;
      b -= (h-h+j+e-a-e-a)%100;
      j -= (i-g)%100;
      k += (i+n*l+a*k-i-c+e-b+d)%100;
   }
   break;

   case 3:
   {
      k -= (a-i-f*j-c-n-d-n+h*h+e*f*l+k)%100;
      d -= (h+m-i-a+b*g)%100;
      d += (d+f*h*j)%100;
      j += (d+n)%100;
      l  = (h-e+d*j)%100;
   }
   break;

   default:
   {
      b -= (n-h*d+h*f*e-j*a+a-b-g)%100;
      e -= (g-g*g+a-h*h*f)%100;
      m -= (a+f-h-b-h*f-a*d*m)%100;
   }
   }

   e += (j-h+d+l*f-a*h-c+d+a*m)%100;
   e -= (h*a+m-m+e+f)%100;
   l += (c+d)%100;
   k += (d-g)%100;
   c  = (m+f-a+c*f+c-a*j+m*b)%100;
   k -= (a*l*a*i-i+e)%100;
   c += (i-j-n*n+e*g*l+n-a-j-i-f+g*c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F22(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[36]%10 )
   {
      if( ++IFEcnt[48]%2 )
      {
         k -= (a-n-e*e-e)%100;
         c += (h-g+a+l*c*n*j*a+l+j)%100;
         l += (i-i*j-g-k*m*n-b+g*f)%100;
         g += (d*l)%100;
         b += (f-m-i-f*k-d-n-g-c*j-a+g+m*a)%100;
      }
      else
      {
         while( ++WHILEcnt[48]%5 )
         {
            do
            {
               for( ; ++FORcnt[71]%5 ; )
               {
                  e += (n+j-l*e*n*b*d-m*b+m-j-d-d*k)%100;
                  j += (h+b)%100;
                  l += (h-i+e*k-m+l-f-k*g*f+m*c-l-b)%100;
                  l += (k+e+c-d*a+g-c-l+g)%100;
                  k += (m*d*l*l+n-k*n-k+d+d)%100;
               }
               for( ; ++FORcnt[72]%5 ; )
               {
                  e += (l-j-m+a+j+g-m-d*e*a-b-d)%100;
                  m += (n-l-a+g+j)%100;
                  b += (c*c+f+k*a)%100;
                  l += (a-k)%100;
               }
               if( ++IFEcnt[47]%2 )
               {
                  e += (l+h-d-d+l*f+h-a*b)%100;
                  c -= (k+i-d+i-g+l-k+m*b)%100;
                  j += (f-e*g)%100;
                  m += (k+n-e+c+k-j+e+e-a)%100;
                  d -= (i-g-d+d-a+l+a+h)%100;
               }
               else
               {
                  m -= (l+e*l*k-j+g+m+e-f+j+d)%100;
                  b -= (i+c*i-l-m*l-g+a-m+f-j-a+b)%100;
                  c += (m-d-g*f+i-i-m+h+b-e-a)%100;
                  l -= (h+b*k*c-d+n)%100;
                  j += (c+n-a+i-c*e-g-b+a)%100;
                  c += (h+b+i-g*b*c*a-l)%100;
               }
               while( ++WHILEcnt[47]%5 )
               {
                  i += (b-h-d-c-g*c+f+g+g-h)%100;
                  m  = (i+g*j-n*b+k+m*n-i-g)%100;
                  c -= (e*l-f-c+m+d-g)%100;
               }
               do
               {
                  l -= (g*f+d-h+j-e*e-l-m*h+g)%100;
                  g  = (k-d+l-g+k-a*n)%100;
                  g -= (f-b+m*m-a-k+c-j-h*a+f-a+a)%100;
                  h += (n-a+n*f-d+h-c+f+a)%100;
                  a += (e+k+l-j-f+j*e)%100;
               } while( ++DOcnt[48]%5 );
            } while( ++DOcnt[47]%5 );
            if( ++IFcnt[35]%10 )
            {
               i += (e*h+m+j-f+f-a+b*b+g+i-a+g*j)%100;
               for( ; ++FORcnt[73]%5 ; )
               {
                  g += (m+l-d*c-l*e*m*k+c-k-a-h)%100;
                  m  = (d+k)%100;
                  b -= (e-b+g*n-a+g-n+k+i-g-n*g)%100;
                  l -= (d*d)%100;
                  n -= (i-j)%100;
                  e += (g-l-c+e-d-k*j-g+n+j)%100;
               }
               l -= (e-f-a-a-g*g-d)%100;
               m -= (g+n*b+f-n-c-h-i+g*c-k-l)%100;
            }
            i += (j*k+l+j+n*c+h+l*b-e)%100;
            c -= (i+m-a-n+b+n*f-b)%100;
            a += (a*g*m+h*d-j*h)%100;
            l += (j-k*a-c-h-c-n-m-j-a+g*e-g)%100;
         }
         d -= (b-d-a+b*f*e-n+d-d*g-e+g+e-j)%100;
         b -= (f+k+a-f+h-g)%100;
         a -= (d-a+l*l+c+g-g+d-f-b-i+n-i*b)%100;
      }
      g -= (m-f+h*e-h-e*e+i*g-d+d+i)%100;
      h += (b*e-m*n+j+n*g+l+a+a-m)%100;
      f -= (j+a+j+c+a)%100;
      l += (h-g)%100;
   }
   c -= (e*g-d-m*a-n+j)%100;
   h += (a+c)%100;
   c += (h-j-f+j+l+g+n+j+j-h-h)%100;
   g -= (j*c-i+a+n+c*i-b*n+e)%100;
   j += (f+b-m*e-j+n-c+i*f-n*h*d-n)%100;
   e += (g-f)%100;
   i += (l-c-n+i*m+a*g*l+l-m-h*c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F23(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[24]%3 )
   {

   case 1:
   {
      if( ++IFEcnt[50]%2 )
      {
         g += (h-c-h+c-n-c+a-k*d-n-g*f)%100;
         h += (m+i-g*g*l-k+g)%100;
         k -= (a-h+i+h+e+b*k+c-a+f-j+h)%100;
      }
      else
      {
         while( ++WHILEcnt[50]%5 )
         {
            do
            {
               for( ; ++FORcnt[74]%5 ; )
               {
                  i += (k-g)%100;
                  n  = (l+i-n-e*h-h-e-a+d+c)%100;
                  c -= (k+j-e-l)%100;
                  c += (i-f*a+j+g*i+h-k)%100;
                  n -= (b*m-a+a-b*l-k+j)%100;
                  n += (m+l*m-f)%100;
               }
               if( ++IFcnt[37]%10 )
               {
                  f -= (c-b*h)%100;
                  f -= (b*i-a+k-a-j+h-i*n-a-j-k-d)%100;
                  e -= (h*n+l*h*d+f-d)%100;
                  n -= (d+h+i+b+f+i-m)%100;
                  b += (h-l+f-e-h)%100;
               }
               for( ; ++FORcnt[75]%5 ; )
               {
                  g  = (e-g-e*d+b+e+g+k+m-b+m)%100;
                  d -= (j-d+c-k*g-b+g+b+a-g)%100;
                  j += (b+n*l*k-b-a+d+k)%100;
               }
               if( ++IFEcnt[49]%2 )
               {
                  e  = (b-e+e*j-k*g+m-i)%100;
                  k += (c+l-f*e)%100;
                  l  = (e-i-l*h*b+j*i*l+h*h+m-l-f)%100;
                  b -= (c*i-f+n)%100;
               }
               else
               {
                  m += (k*a-j+d+b+d-m*b*j-g-m)%100;
                  d += (j-a-n+m*n-d+g*a-f-a-h)%100;
                  i += (d-l+b+d+b*a-k+c-e+m)%100;
                  n -= (b-a+f-m+b+j-h)%100;
                  l -= (m+m+d-n*m-e+b+i*h+e*e)%100;
               }
            } while( ++DOcnt[49]%5 );
            while( ++WHILEcnt[49]%5 )
            {
               do
               {
                  a -= (j*b-e-l*i-g*i+l)%100;
                  c -= (c*a+j)%100;
                  m  = (b-h+k-b+e+f-g-m-f*b+g)%100;
                  m += (d+c-l-d-h+i)%100;
                  j -= (m+a-j+j-m-n-l)%100;
               } while( ++DOcnt[50]%5 );
               m -= (h+c-k*g+j+b)%100;
               for( ; ++FORcnt[76]%5 ; )
               {
                  l += (l-d-g-l+h*k*h+b-a-f-n)%100;
                  f -= (h-l-f)%100;
                  k -= (h-k)%100;
                  h -= (d*n)%100;
                  k += (b+f)%100;
               }
               
               switch( ++SWcnt[25]%3 )
               {

               case 1:
               {
                  j += (b-f-h-a*i*i-b+g+c+b)%100;
                  l  = (e-m-b-d+m)%100;
                  b += (h-l-c-e+f*b+l)%100;
                  c += (b-b+d+e+n*b*a-l+m)%100;
               }
               break;

               case 2:
               {
                  g -= (e+e+h+g+c+j+b+l)%100;
                  d += (j-k-f-a-f)%100;
                  l -= (l-l*j-i-f-k+g-l+j-c+e+a-b+b)%100;
                  e += (l*l+c)%100;
                  n  = (n+c+c-n+d+d)%100;
                  n -= (g*a-f-i+c*c-j-a+a+h)%100;
               }
               break;

               default:
               {
                  e  = (n-j+h-d*f+k*e+k-c+c-j*n-b)%100;
                  n += (c+i-f*n+c-h*j)%100;
                  i -= (b*n*j-j-h+j*m+d)%100;
                  g -= (m-k-b*c)%100;
                  d += (l-c-i+b-a*j-b-c)%100;
               }
               }

               m += (m*m+j-m-a)%100;
               g -= (c-n+n-f+f-g+k+c+a*h*m-h-f*m)%100;
            }
            a += (k-d+e)%100;
            e -= (j*m)%100;
            a -= (i-i-e+h+k*g-j-d-g-c-m+c+a-g)%100;
         }
         l -= (f+l-b-j+n+g*d-e-n+j)%100;
      }
   }
   break;

   case 2:
   {
      c  = (e+e+l-h*f+b-j+l+i+n+a+h)%100;
      k -= (e-d)%100;
      l += (e*f+e-i+n*m-b+b)%100;
      i += (i-g-e+k+g+b-a+i*f+d+k+n-l+d)%100;
      c += (a-i+d-j*f+i-i-j-j-d-i-g)%100;
   }
   break;

   default:
   {
      b -= (g-n-f+n-h-d-m*g-i)%100;
      c += (f+m+f+c-f-i*e-g*m+c-g-b)%100;
      n += (l*k)%100;
      d += (n-i-h*a-d+n-m-i*g*a*n*b)%100;
   }
   }

   i -= (h-f-a-l-k)%100;
   k -= (m*a-j-k-n-b-i-i)%100;
   b += (d+j+a+j)%100;
   j += (a+j*h+j*a+n-i)%100;
   n += (b-g-n)%100;
   b += (i-j-l*j-a-k-f+c*n)%100;
   m += (c-a-b+c+n-c+f-m+d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F24(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[39]%10 )
   {
      if( ++IFEcnt[53]%2 )
      {
         c -= (j-k*f+b+h+h+b)%100;
         c -= (b+l+k-k+l+d*n*d*a*j)%100;
         c += (d-k-g+n+e+c+d*h+c-g+i)%100;
         g += (j*b-d*d-m-a)%100;
      }
      else
      {
         while( ++WHILEcnt[51]%5 )
         {
            do
            {
               for( ; ++FORcnt[77]%5 ; )
               {
                  j -= (j+l)%100;
                  j -= (d+a-f-b*l-k-g-c*m-k*c)%100;
                  l -= (f+g+k)%100;
                  c -= (k-l+f)%100;
                  d += (a-j)%100;
               }
               for( ; ++FORcnt[78]%5 ; )
               {
                  k -= (j+j+l-l-j-k+c+e-l+h)%100;
                  l  = (k*n-e*i+m+k-j*m-k+i)%100;
                  c -= (l+j-i*b+c+c*j-e*j+n)%100;
                  a += (h-n-j)%100;
               }
            } while( ++DOcnt[51]%5 );
         }
         if( ++IFEcnt[52]%2 )
         {
            c -= (d-d+e+f)%100;
            l -= (h-g+m+j-i+e-m+h+m*h+m)%100;
            m -= (j-a+n)%100;
            f -= (g-h+h*b+d+f+f-c)%100;
            g += (a-b*c)%100;
         }
         else
         {
            while( ++WHILEcnt[52]%5 )
            {
               do
               {
                  h += (h+n*l-g)%100;
                  h += (j-e*e+a-d-g)%100;
                  n -= (e+g*a+b+i+b+m)%100;
               } while( ++DOcnt[52]%5 );
               if( ++IFcnt[38]%10 )
               {
                  e += (l+i*i+a-j+d-i+c)%100;
                  i += (f-m+m*h+f-j)%100;
                  d -= (a-n+h+a+j*i*g*g+n-j+a*n+h)%100;
                  c += (h-m+h+k+d-g-a*e-i+b+k-m+i)%100;
                  g -= (n+n-f+a*k+l*a*b+h-m-g+n*a-k)%100;
               }
               e -= (h+k+a+n-j)%100;
               for( ; ++FORcnt[79]%5 ; )
               {
                  a += (l+g*d-k-k*m+h-e+n+l-n*c)%100;
                  i -= (e-a-n+a-l-a+m+m+a+e-e-f+g)%100;
                  k += (f+g-j+k-i-h*f+l+e+g+i)%100;
                  b += (h+n*a-h-m-a+e+n+j*e-m-f+f*d)%100;
               }
               
               switch( ++SWcnt[26]%4 )
               {

               case 1:
               {
                  k -= (m-n)%100;
                  h  = (g*b-c+j+h)%100;
                  m  = (i*i+f*g-n+f-m-m*k*c-f-b)%100;
                  m -= (n+m-g+a+g-k-c-i-e-h-m)%100;
                  b -= (l*i)%100;
                  d -= (g-b-g+a*l-c-f*a+d-f-c+c-i-c)%100;
               }
               break;

               case 2:
               {
                  g -= (a+d-n*k-m-m*g-i-f)%100;
                  f += (g-m-i-l-f-d+c*a+l-h*g)%100;
                  m += (a+g+h-a-m-j*d+j+e*c+i+g)%100;
                  i += (b-f+j+k-g+c-c*i-g-m-n)%100;
                  n += (f*c-k*b)%100;
               }
               break;

               case 3:
               {
                  n += (h-g-e+i)%100;
                  c -= (a+c-n+m*f-e)%100;
                  g += (f-b)%100;
                  n -= (l+g)%100;
                  a += (g+c*l+c-g-b+c+f*h)%100;
               }
               break;

               default:
               {
                  d += (m-j)%100;
                  j -= (c-e-c+i-f+f-g-i-g-n)%100;
                  i += (d+n*f+h)%100;
                  d += (a+m+b-d-c*g+l*c-a*f-a-n+n)%100;
               }
               }

            }
            if( ++IFEcnt[51]%2 )
            {
               m += (k+d-d-a+j-j+a-e-c-g-n-b)%100;
               l  = (l+e*e+i*d+f-k-j-e-d)%100;
               k += (c-m-e+m*n)%100;
            }
            else
            {
               while( ++WHILEcnt[53]%5 )
               {
                  b  = (c+i)%100;
                  d += (l-e)%100;
                  l  = (e+l+e-j+g*h+k-k+m)%100;
                  e += (e-b)%100;
                  n += (k-e+f+c+g)%100;
               }
               f -= (k+n-b+i+n-n-h+a+k-b*n+e+g*a)%100;
               b -= (n-n+m)%100;
               d += (m*c)%100;
               c  = (c-k*e*k-j)%100;
               n += (c+f-l+a+j+i+e*a*m)%100;
            }
            g -= (g*e-i-a*f+e+f*k)%100;
            k -= (d+l-j-g-e-a-g*i+k+d+a-b+e*d)%100;
            a += (c*f+c-c+j-l-h+g-f-c)%100;
            g -= (g-i+b-n+k-j+d-b-a+a-l+h+b-n)%100;
         }
         b -= (h-j-m*i+i)%100;
         e -= (l*i-c+h)%100;
         g += (a+m-j-k-k+c-b-n-i+n+l-e)%100;
      }
      c -= (b-h+a+m*f)%100;
      k += (m+h+l-h+i-j)%100;
      l  = (g+d+i*b+h+i-m-j+j)%100;
      f += (e*i-d+j+e-e*d-b-h-k+i*h)%100;
      n -= (j+n+f+d-b-e*k-d*l*i+m+b)%100;
   }
   m += (f*k*f-f-f+k*b-g*n*a-b-n-l*k)%100;
   i -= (h-g-n-m-d+f-k*d*n-c+c-a-c-k)%100;
   g  = (n+h*d-c*d*d-m+m+b+a+b+d)%100;
   n -= (n*l-j-n+h-e-e*f)%100;
   b += (a+c+j+j*h)%100;
   e  = (e+h*k+g-l)%100;
   i -= (j+c+j-j+e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F25(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      for( ; ++FORcnt[82]%5 ; )
      {
         if( ++IFcnt[40]%10 )
         {
            for( ; ++FORcnt[80]%5 ; )
            {
               if( ++IFEcnt[54]%2 )
               {
                  g -= (h+e-b-m-e-c*c+k+b-l-l-c*i)%100;
                  m += (h*k-m+c)%100;
                  b  = (i-g-e-j)%100;
                  i -= (f*g*e*c+g-c*l+i+f*e-l)%100;
               }
               else
               {
                  d += (d+b+n+a-m+d+h-m-j+g*n+d+i)%100;
                  b  = (b+e+i-l+f-j+c*n-k)%100;
                  b -= (b-j)%100;
                  d -= (g*h-h*d+f*k-n-e)%100;
                  f += (j+h-f-b+f+a+b+n+i-n+e-l+i)%100;
               }
               while( ++WHILEcnt[54]%5 )
               {
                  h -= (h*a-l+h+j-b)%100;
                  i += (c+d)%100;
                  c  = (i*l)%100;
                  l += (l-b+n*d-k)%100;
                  g += (m+i-m-e-l+i-i+d+k-f-j+j+g)%100;
                  b += (h+b+e-d*c+n+m+k+e)%100;
               }
            }
         }
         do
         {
            m -= (m*g)%100;
            for( ; ++FORcnt[81]%5 ; )
            {
               
               switch( ++SWcnt[27]%3 )
               {

               case 1:
               {
                  d -= (b+k-f-l-h*b-n*l-j+l+e+f)%100;
                  c -= (k-n*b+g+n+i+h)%100;
                  g += (f-k+l-n*e*k+k+d*i+f-d)%100;
                  b  = (f-h*e*h-f)%100;
                  d -= (g+m*g-i*h+m-a+g+c+e+k)%100;
               }
               break;

               case 2:
               {
                  j += (j+a*d*h-b-n+n+h-e-f-g-h+b)%100;
                  e += (i*k+l-n-f*h+k-j+i)%100;
                  m += (a+m)%100;
                  f -= (n-f+g+k-c+k+d+n-h-n)%100;
               }
               break;

               default:
               {
                  h += (e*c-d-l*m+e)%100;
                  a += (m+m)%100;
                  l += (a+b-d+c-a+c*b-a+h+l+j+e+e)%100;
                  k += (c+a-j-j+j-g*a-e-k+c*c-a)%100;
                  k += (d-k)%100;
                  l += (l-n-n-h+f)%100;
               }
               }

               if( ++IFcnt[41]%10 )
               {
                  i -= (m-m*k*b)%100;
                  g  = (n*n*m+e-f*h*b)%100;
                  l += (e-j*e+k-j-a-m-g+n+k+j+d-b+g)%100;
                  m  = (k-e+b+n-k-f)%100;
                  d += (g-b-h+m-j-h+m-h-b+j+n-b)%100;
               }
               if( ++IFEcnt[55]%2 )
               {
                  h -= (d*g)%100;
                  g += (c-c-h+g+g)%100;
                  n += (e*m+f-m-h+a+m)%100;
                  e -= (f*e-i-j-i+b-d)%100;
               }
               else
               {
                  f -= (g-k+n*f-b-i+e+n-b-e-j-d)%100;
                  l += (e-n)%100;
                  d -= (j+f-h-e-k+b-n+c)%100;
                  f += (n-b-a+g*f*i+n*e-g-i+d*c)%100;
                  h  = (l+l)%100;
               }
            }
            e -= (l-n+e)%100;
            g  = (e+n-n-d+a+i+f+h+c+m+h-j)%100;
            d += (e-b+f+k+e)%100;
         } while( ++DOcnt[54]%5 );
         j += (k-d+c-n+m+n+d+c-f-m-d+g-h*a)%100;
         e += (h-k*b+c+l+l)%100;
         l -= (d+i)%100;
      }
      j -= (k-g-c*l-a)%100;
      b -= (j+g+k-n-h-b-b)%100;
      e -= (j-f+g+h)%100;
      m  = (j-e-j-n-j+k+j-h+i+l+m)%100;
      c -= (j+d-k)%100;
   } while( ++DOcnt[53]%5 );
   m += (g+d+i-i+e+f+l-d+h-b)%100;
   b -= (i*j+h+n-n-j*i+l-n)%100;
   a += (n-n-a+f*f*b*i-j+f+d)%100;
   j  = (j-l+e-i+n-k+b-a*l)%100;
   b -= (m+j+d+m+d-h+b+n+g)%100;
   b -= (d-f+d-f*f-d*e-l-b+e-d+m)%100;
   a += (j*n-a+l+l+k-m-a+m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F26(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[57]%5 )
   {
      do
      {
         for( ; ++FORcnt[85]%5 ; )
         {
            for( ; ++FORcnt[83]%5 ; )
            {
               if( ++IFEcnt[56]%2 )
               {
                  n += (h-h+d-k)%100;
                  e -= (d*a)%100;
                  e -= (j-k-c*d+h-b-i+i)%100;
                  a += (f-c-a*i-f-b+k*n+n+b+j)%100;
                  n -= (n+b*l-g-i-h+k+b-c+i*k+h)%100;
                  e += (d-k-f+j-l+d+c-d+k+g-a+c-j)%100;
               }
               else
               {
                  g += (i*n+d+i-l+d-m*f)%100;
                  b -= (j+i-j-f*i)%100;
                  i -= (l-e)%100;
                  d += (i+a-a*n+e+j-g-f+b+c-e)%100;
               }
               while( ++WHILEcnt[55]%5 )
               {
                  j += (h+c-h+f*a-a)%100;
                  i  = (n+n+n*g*g-n)%100;
                  i += (h+d+m*j)%100;
                  g += (m+k+b-d*h)%100;
                  l -= (g+d)%100;
               }
               do
               {
                  b += (m-n*h+g-j*k-d-e*f+m+l)%100;
               } while( ++DOcnt[56]%5 );
               if( ++IFcnt[42]%10 )
               {
                  n += (j+m)%100;
                  d  = (a+d-k-h+j-k)%100;
               }
               g  = (c*a*c)%100;
            }
            for( ; ++FORcnt[84]%5 ; )
            {
               
               switch( ++SWcnt[28]%3 )
               {

               case 1:
               {
                  l += (g+k+a*k-a+j+e+f-l)%100;
                  a -= (a+m+k+e*l-h-i+l-c-n-g+k+b-b)%100;
                  c += (e*n)%100;
                  c += (m-e)%100;
               }
               break;

               case 2:
               {
                  e += (f*h+d*g+a+d+g+i+a-f+g+j+i)%100;
                  j  = (a-h-b-m-i+f)%100;
                  c -= (h-i-n+i+d*e+j+d*g-i+m+m+k)%100;
                  m -= (g+m*c+d+c+b-i-e-j+h+d+g)%100;
                  a -= (b-i-f-i-m+n-f)%100;
                  h += (l+g*g*a*f-l-j-a-f)%100;
               }
               break;

               default:
               {
                  l += (b+m-e*e+g*c-g-j*n*a-i+f+k-h)%100;
                  i -= (b*e)%100;
                  g += (e*g+d-h+b-b+h-b+f-a+k-l-e-g)%100;
                  f += (g-h*k-e+n-b*n+i+d+d)%100;
                  e -= (f-a-f-f-a*i*c)%100;
               }
               }

               if( ++IFEcnt[57]%2 )
               {
                  k -= (d*f+g-h-d*l-f-g+h-h+i)%100;
                  g += (a+l-f-j+b+b+j+e-j)%100;
                  f += (d-c-e+b-l-j-g+n*g+f+c+h)%100;
                  b -= (n-n)%100;
                  l += (j*h-l*l)%100;
               }
               else
               {
                  n += (i*j+a+c*j+d-j*e+e-j)%100;
                  i -= (b+g+j+f-e+j-a+j-g-d)%100;
                  e  = (m-n+e*i-k-f-m*i+d+k)%100;
               }
               while( ++WHILEcnt[56]%5 )
               {
                  e -= (i-h-a-m+n-l-j*e-e+g)%100;
                  g -= (f+c+f+i-d-k-k*i+h+e*n+k-e)%100;
                  i -= (e+f)%100;
                  l -= (i*f+l-a+h*n*c*h+n)%100;
               }
               do
               {
                  j += (j-l+e+i*k-l-n+d)%100;
                  l -= (j-g+l)%100;
                  i += (l-h*f+i-f-m+f-n+g-k-f+a+d+e)%100;
                  i -= (i+b+c-n-h-m+c+m*a-m-n)%100;
                  e += (f+l*e+g)%100;
                  a -= (c-h-e*h+j-m-k*d*j*l)%100;
               } while( ++DOcnt[57]%5 );
               a -= (e*j-k-j+e+k-b+m+a+c*a)%100;
            }
            a -= (l-h+m+h*k*e-e*c*h)%100;
         }
         l += (i-g+k+g-f+i*h*i)%100;
         i += (k*e+d+i+m*g+f+l-i)%100;
         e -= (b+b*m-e*h+f+l+d)%100;
         n += (e-k-d+j-k-g+a-d-j-i+b)%100;
      } while( ++DOcnt[55]%5 );
      n -= (m-g*b+a)%100;
      d -= (c-f+j*c-h+e-b+a+a*b-g+i-k)%100;
      n += (n+g*c+d-n-m+n+a)%100;
      b += (n*n-g-g-i+e+j*g*h-f*i)%100;
      b -= (c+k*i-g+m-l*n*h-e+a)%100;
   }
   a += (d+b+l+c-c-d+l+h)%100;
   k += (n+g+k-j+m-c-f-f-h)%100;
   m -= (a+d-c+d+l-h+f-e+k)%100;
   h -= (d+a-g+a)%100;
   d -= (m-g+j-h-n-f)%100;
   m += (g+k*j+a-k)%100;
   j  = (l-i+e-i+a+a+c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F27(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[90]%5 ; )
   {
      if( ++IFcnt[44]%10 )
      {
         for( ; ++FORcnt[89]%5 ; )
         {
            if( ++IFEcnt[59]%2 )
            {
               if( ++IFEcnt[58]%2 )
               {
                  c += (n+i+l-m*e-a+i-b-c-j+i*f)%100;
                  n += (a-f-a-j-b-h+e+n+n+g-b)%100;
                  e += (d*d+e+d)%100;
                  i += (k-a+k-b)%100;
               }
               else
               {
                  b += (e-a+k-m+m+e-k-f*m)%100;
                  m -= (b*i+a*b+j-g+m+m)%100;
                  j += (d-d+j-j+i+m-g-f+c*j-j-b+e-h)%100;
                  c -= (j-g-i+c+j-i-e+n-c-m)%100;
                  d -= (h+k-c*a)%100;
               }
               while( ++WHILEcnt[59]%5 )
               {
                  f -= (g*m+c)%100;
                  a += (g+l-l+l+c+f+d+j-a*d-k+i)%100;
                  c += (g+f-e*k-i-f*a+n-m-e+f+l)%100;
                  l -= (c-l-b-i-d-n)%100;
                  a -= (k+c)%100;
                  c += (m+g+j-c+n)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[58]%5 )
               {
                  a -= (c*i-f+c+e-e-g+c+g+j+a+d-a*j)%100;
                  c += (h*n+i+c-b+e+h+i+e+j*m-f-h-n)%100;
                  b -= (b+b-c)%100;
                  i -= (n+i-f*i-j+m*k+l-m)%100;
                  f += (k-n-g-l-j-j)%100;
               }
               do
               {
                  g += (k+h)%100;
                  d += (c-i*e-n+c-k+a-j+i-n+e-m-n)%100;
                  k -= (b+i-c+f*h)%100;
               } while( ++DOcnt[58]%5 );
               a -= (a-c+e+k+e+n)%100;
               for( ; ++FORcnt[86]%5 ; )
               {
                  b += (d-c+i+a+c+h-h)%100;
                  f -= (a-h-b-k+i-g)%100;
                  g -= (h-m+n-h)%100;
                  b += (n+j*a-d-n-i+d+n*d*f)%100;
                  d  = (h-b-j*g*b)%100;
               }
               
               switch( ++SWcnt[29]%3 )
               {

               case 1:
               {
                  b -= (a-l-b+f-b)%100;
                  e  = (l+d+d*c+m)%100;
                  n  = (f-k+k-n-g+f*b-j*d)%100;
                  k += (e*c)%100;
               }
               break;

               case 2:
               {
                  j -= (b-e-e+m)%100;
                  c -= (d+g-b-j+h+k)%100;
                  m -= (b+j*h+g-n-e+d-e-d*g-m)%100;
                  g  = (a+k-b)%100;
                  d -= (j-a-c-h-n-d*n-j+i)%100;
                  h += (f-j*m-g-a)%100;
               }
               break;

               default:
               {
                  i -= (h-m+d-g+n-m+n-g-l+d-g*a)%100;
                  n += (g-k-g)%100;
                  e += (i*k-d+b+h*l+f+k+a+d+n)%100;
                  f  = (n-d)%100;
                  e += (k*d)%100;
               }
               }

               if( ++IFcnt[43]%10 )
               {
                  d += (h*a)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[87]%5 ; )
               {
                  i += (a-f)%100;
                  l += (e+m-g-e+b-j+b+c+j+k)%100;
                  j -= (a+l+a+j-c+c-a-a)%100;
               }
               for( ; ++FORcnt[88]%5 ; )
               {
                  m -= (n-g-d)%100;
                  k  = (n*c+a+d-g+g-h)%100;
                  d -= (k-l)%100;
                  a += (j*b*g+n+h-k-m*c-b-n-h-f-b+f)%100;
                  a -= (l*m*e-c*l-d-j*g*n+n+i)%100;
               }
               k += (k+a+f+m+h+f*i-i-l+h+a)%100;
               l -= (g-h-l+e+h*i+j)%100;
               i -= (n*h-n+e-i+a-g*i-k*l*f*m*d)%100;
            } while( ++DOcnt[59]%5 );
            h -= (f*c-d-i-m+d*n-l+e-b-m*b)%100;
            c += (h-c*k+a-f*k+d+h-j*g-f*g)%100;
         }
         e -= (k-k*j*j+b-e+h+g*n*d+i*g+d)%100;
         k += (k+g)%100;
         m -= (e+c*g*c)%100;
         h -= (k-d+b-f+m+c)%100;
      }
      j += (m-c*j+g-m+h+d*f-a)%100;
      b += (c*n-i*h+h*c+f*f-f*i+h-l-c+k)%100;
      l -= (i-j)%100;
      h += (d-i)%100;
   }
   k += (j+n+g-g-e-j-e)%100;
   j -= (m+m*g-b)%100;
   n -= (d+n-h-j+j-n)%100;
   j  = (h+l-c+f-j+b+g-e-h-n+i+j)%100;
   i += (a-k*k*g+k-d-g+k-m)%100;
   h += (d*k+h+e+f-n*f)%100;
   b -= (k+d*f*k-j-d-a*b*g+h+l*n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<67; I++) IFcnt[I]   =0;
   for(I=0; I<89; I++) IFEcnt[I]  =0;
   for(I=0; I<44; I++) SWcnt[I]   =0;
   for(I=0; I<89; I++) WHILEcnt[I]=0;
   for(I=0; I<89; I++) DOcnt[I]   =0;
   for(I=0; I<134; I++) FORcnt[I]  =0;
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
   sum += F16( ) ;
   sum += F17( ) ;
   sum += F18( ) ;
   sum += F19( ) ;
   sum += F20( ) ;
   sum += F21( ) ;
   sum += F22( ) ;
   sum += F23( ) ;
   sum += F24( ) ;
   sum += F25( ) ;
   sum += F26( ) ;
   sum += F27( ) ;

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      if( ++IFEcnt[60]%2 )
      {
         c += (f-e+c*f+l-a+k-j-b-h+b)%100;
         h  = (c+h+g)%100;
         f += (d-m-k+g*m-f+n+n+b-b-c*f)%100;
         g -= (g+g-c*m-n-n)%100;
         l -= (n-h+a-c-a*h*m*f*h+a*a+h-h)%100;
      }
      else
      {
         while( ++WHILEcnt[60]%5 )
         {
            do
            {
               if( ++IFcnt[45]%10 )
               {
                  h -= (b+i-j-g-k+f+k-g-d-g)%100;
                  c  = (k+n)%100;
                  k += (h+j)%100;
                  h += (k+b+j*j)%100;
                  c -= (l-l-e-g+f-n*a+b+n-f+i*g-a*b)%100;
               }
               n -= (k-c+l*m+f-i*a+a-j*d*e)%100;
               for( ; ++FORcnt[91]%5 ; )
               {
                  e -= (d-g-e-n+h-c*n+l*m-f-g)%100;
                  l -= (c*k*k-b+b+a)%100;
                  d += (a+f+e*h-e*n+b-i)%100;
                  n -= (d+l-l-l)%100;
               }
               
               switch( ++SWcnt[30]%3 )
               {

               case 1:
               {
                  l -= (d+g+d+b+k+l-g-n)%100;
                  j -= (j*n*i*b-c-n*d*l)%100;
                  g -= (l+n)%100;
                  c += (f*b-j-l+e*c-a-f*c-i+j*b+b)%100;
                  d -= (f-f*d+l+m+h-f)%100;
                  b += (g+h-l+i+m+g+g-j-l+c)%100;
               }
               break;

               case 2:
               {
                  c -= (i-j-n-c+d+i+g-c-j)%100;
                  j += (h*m*n+g-b-h)%100;
                  k -= (g+h*m)%100;
                  l -= (b-e*j*h*n)%100;
                  m -= (n*f*e-l)%100;
               }
               break;

               default:
               {
                  k += (a*l+m+d)%100;
                  e += (b+h-f-a+e*n+e+m-f*m+n+a-m-a)%100;
                  n += (h*b+l+g+k*d-i-k-g+k-l)%100;
               }
               }

               i += (i+n-g-g+i-g+c*i-d)%100;
            } while( ++DOcnt[60]%5 );
            j += (i+d*b*a+l-j-k-i)%100;
            j  = (h-a*f+h-h-b-n)%100;
            k -= (e+f-i-k-a+g*a+e+h*n+c+i-l)%100;
            i  = (a-j*a+i-n-g*k-n)%100;
            b += (i-g-m*e+b)%100;
         }
         c -= (j+k)%100;
         h -= (b+n+j-n+m+l*g-g-i+f)%100;
         d  = (c-e-k-h+d+l-c*k-a+g-g*i*d-e)%100;
      }
      k += (g+h-c+n+n-n-g+e+g+m+k*b)%100;
      f -= (l-h-c+a+g-f*l*b)%100;
      e += (k+b-a+k-a-g-j+c+n*i)%100;
      j  = (g-j)%100;
      f -= (c-h)%100;
      g -= (f+d+j+d)%100;
      n  = (k*a+e+g-d+h+k*c-m+h*k)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<46; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 46 << "   Dynamic = " << sum ;
   for(I=sum=0; I<61; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 61 << "   Dynamic = " << sum ;
   for(I=sum=0; I<31; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 31 << "   Dynamic = " << sum ;
   for(I=sum=0; I<61; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 61 << "   Dynamic = " << sum ;
   for(I=sum=0; I<61; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 61 << "   Dynamic = " << sum ;
   for(I=sum=0; I<92; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 92 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}