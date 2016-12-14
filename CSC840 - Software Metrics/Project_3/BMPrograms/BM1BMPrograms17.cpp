#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[81],IFEcnt[108],SWcnt[54],WHILEcnt[108],DOcnt[108],FORcnt[163];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         h += (h-i-m+e-n-h)%100;
         a -= (a*e-h-l*g*c+e)%100;
         l += (m+k-l+n-f+h+e*c+f*g)%100;
         a += (f+n*f*e+b+g)%100;
         j -= (i-e*l+l)%100;
         m -= (h+m-a-j+c-f)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  n += (l+a*b+e+e-j+l+j-a-f+n*n-g+d)%100;
                  i -= (g-g)%100;
                  c -= (k+c+l-k)%100;
               }
               e -= (c*m)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  e -= (l+f)%100;
                  j += (m*h-b-d*m+f+j*c+d+i-c-g-c*j)%100;
                  b += (m+f-n*n*l+k+l+f*j-j+a)%100;
                  n += (c+h)%100;
                  n -= (k*k)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  d -= (j+h-i-c-j-n+l-a-m*i-f*h)%100;
                  n += (m+d-l-d-i*l+a)%100;
                  b  = (n*m-k+n+j-g*l*b+j*a+l+d)%100;
                  j -= (b*h*k-g*e+a*j+m*f-d)%100;
               }
               break;

               case 2:
               {
                  c -= (b-d)%100;
                  i -= (k*c)%100;
                  a += (b-c*i-j+b-h-n-h)%100;
                  j -= (g-g)%100;
                  a  = (l-l*j+d)%100;
                  k += (e-g-h-f*d-i*g-d*b-j+f)%100;
               }
               break;

               default:
               {
                  d -= (e+h-c*h)%100;
                  m += (g*n-b+m+g)%100;
                  g  = (c*e*b-m-i*a*k+h+f+n-h)%100;
                  i -= (n*j+j)%100;
                  c -= (j-k+g+f+e+c+n-j-l*c-a-b-k)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  g += (e-j+d-d)%100;
                  n -= (j-n-c+n*i+e+j+b-d)%100;
               }
               else
               {
                  d -= (k-k+a*e-b*l+h*d-i-l+g+a+f)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  h  = (m+d+m-d+j+i-c*h*d*d+j+l*c*i)%100;
                  c += (a*m*c-m-m+j*f+c*k*k)%100;
                  m -= (m+m+e*d-h-g*k+h-d-k+k-h-a-h)%100;
                  a -= (m*c+c)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  l -= (b-c*k*d-n-g*d+l-k)%100;
                  a += (j+b*e-h)%100;
                  d += (g-a-e+a*l*l*h+n*h*h*b+n-b)%100;
                  h += (c-h*d+b+j-b+f*g-b)%100;
                  i  = (j*a-l-h+a-e-n+h+m+n-e)%100;
                  i -= (i+e)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  i  = (f-n*d*d-c+j+i+l)%100;
                  f  = (b-c)%100;
                  a  = (l+i-k-k*m+n-k*k-f-l+l+b+l)%100;
                  h  = (a-g)%100;
                  d -= (n+g-d+b-j-i-c*h-c)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  n += (g-m+m+a+f*n-n+i+j-e-g*h+l)%100;
                  m -= (c-c+e*f+i-g+g)%100;
                  n += (b+f*h-j-a+c-b+c+i*g)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  b += (n-b*d+k-n+i*n+k-b+c)%100;
                  a -= (c+j*n-h+b)%100;
                  k += (f+k-i-a)%100;
                  n -= (a-f-e*m-g-c-l-c+g+l*b-l)%100;
               }
               else
               {
                  i += (e+m*f+g-c-k*e-g+l*i+d)%100;
                  n -= (e+k+h)%100;
                  k -= (m-k-i+h-i+m-n+n+l+d)%100;
                  m -= (d+i-j+a+i+h-f+c*e+c*b-j-i-n)%100;
                  e  = (m-c-b+n*a-n*m-e+c)%100;
               }
            }
            e -= (h-i+i+l-m-b-d-l+c*h)%100;
            b -= (e-h-h+f*j-k*j*g+g+c+g)%100;
            e += (c-k-n-n-b*f-a*c+n+j+n-m-k-n)%100;
            l -= (e-d*f*g+d+m-n*k+k+l*m+a+d+f)%100;
         }
         b += (e-j)%100;
         f  = (a*c*d+d+h-n*e*d)%100;
         d -= (l*n*c+l*d-h-e*b*a*d)%100;
      }
      j += (c-b-h-e-l*n+a+c-e)%100;
      j -= (b+j-h-e+j-g)%100;
      e -= (f+d-d+c+m*b+d)%100;
      i -= (n+e-e-b+a+j-f-g*g*l)%100;
   }
   k += (n+n+f)%100;
   k += (l+m+k-l-f-j+h*f*k+f-k*c*k*j)%100;
   e += (i*m+i-g+f)%100;
   c -= (f+k-l*a)%100;
   l  = (i-n+e+f+c-d+g*a+n)%100;
   g -= (d+a*a-l-c*i-l-l-f+j-a)%100;
   g += (h+i)%100;
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
         l -= (b+c+g+n-m+e+j)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%4 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  a -= (a+e+b-f*l+i+k)%100;
                  k -= (d+c*j+l-g-k+a-h+k+d-h)%100;
                  d += (k+c+h+h-d-a+h-c+d-d+f+c)%100;
                  m -= (n+c*h+i-i+h-l)%100;
                  d -= (a-j-e-j-k-a-f)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  m += (l+j-n*d+g*j-m-i-i+m*d+f)%100;
                  d += (k-h-f+f+a+j+c+h*b*n+l*k)%100;
                  i -= (f*l*k-f-a+b*j*e*d-f-e*f-k)%100;
                  k -= (e+k-l*m-g*h+n-h+a+n-m)%100;
                  m += (e-h-g+f-b-e-c)%100;
               }
               else
               {
                  n -= (b-b*d-b+e)%100;
                  m -= (i+f+b-j)%100;
                  g  = (l-n-n-c*a+g)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  l += (e*k+g+d*a-h+n+l-d-n+g-n)%100;
                  l -= (n*b*k-a-k-h-j+a-h-m)%100;
                  j -= (n+a+k*i+i-k)%100;
                  h += (g*f+m*f+l-d-g+a*b+c-c*g-m*g)%100;
               }
               do
               {
                  l -= (l+c+e)%100;
                  g += (h+j-a*b)%100;
                  m += (g-b+h+i+i*h+j+i+e)%100;
                  d  = (b-h+a+i-f*a-h+k-f-e-b+e+l-m)%100;
                  e -= (d+e*g+b)%100;
                  b += (g-h)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  h += (l-n*l+b+f*a-f*m+d*m+c)%100;
                  f += (f*k+n-f+b-l-f*c+d-n-f)%100;
                  b += (a+b*n-j*i*d*f+a-a-c+f*j)%100;
                  i += (i+d*b+i+j)%100;
                  b -= (k-j-d+e-k-n*b*f-j-f*d-g-m-d)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  e += (j*h-j-g-j+k+n-c*m*k*m-e)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  f += (g-l*e*k-g+j+g+c-e-n+b+l-m-n)%100;
                  h -= (m+l-e+g+c+h+e-l+k)%100;
                  l += (b-l+c*g)%100;
                  a  = (g+l-i)%100;
               }
               else
               {
                  i -= (g-d)%100;
                  n += (l-c*j-a*j-k-f-d+k+b)%100;
                  b -= (i-e-e-c+g-m+c+k)%100;
                  k -= (e+c)%100;
                  d -= (b*e-m*b)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  m -= (b*a+e*a+d-f-a-j-h-g)%100;
                  l  = (i+i*l*a-i*h+i-e)%100;
                  n -= (k*e+e-g-b*g+j-c-g-l+i-l)%100;
                  k -= (c-l+e+f*n)%100;
                  h -= (b*n+j)%100;
                  k -= (j-m-c-e+n+i+l)%100;
               }
            }
            break;

            case 3:
            {
               do
               {
                  d -= (j+e-a*j+j+i+n-a-h)%100;
                  a += (a-c-n*b-j+h+g)%100;
                  c -= (c-a)%100;
               } while( ++DOcnt[4]%5 );
               k -= (l-j)%100;
               g  = (j*d-b-m-m+c-l*k-n)%100;
               n -= (n+i+f+c-f-l-e+k)%100;
               a -= (h-d)%100;
            }
            break;

            default:
            {
               k += (g+b)%100;
               b += (i-h)%100;
               j += (n-l-f-m+c*d-g+j-d*d+a*g-k+c)%100;
               n += (i*j+h+n+d)%100;
               n -= (g+d+e-f+c-k+e-k+f+e-f+n)%100;
            }
            }

            f -= (a*k-g-l+c+f+h+g+h)%100;
            j -= (b-a+k+d*l-f+a*k)%100;
            g -= (a+d*d+c+i-d-a*k+i-b)%100;
         }
         b += (f*l-j+a)%100;
         j += (e+f-m-h-b)%100;
         h += (l*n+d+e+i-g+d-b-n)%100;
      } while( ++DOcnt[2]%5 );
      i -= (g*h*g*f-f*m-i*c-e+a)%100;
      c -= (c+a-f+j*f-g-k-j-c-e*b+n)%100;
      e += (e-l+m*j+f+f+i*d-c+l)%100;
      c += (g-e-a*i-b-i*e-n*i)%100;
   }
   a += (k+m)%100;
   f += (h*i*e-m-l*g*c+e-m+b+g-b)%100;
   n += (l-h+m-n-c)%100;
   e += (a-a-m+l-m+e-j+h-b+k)%100;
   j -= (a-k)%100;
   i += (h*c*l+b-b+e-a)%100;
   m -= (k-c-i*j+i-g+k*g+m-n+n*b-k-g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[4]%10 )
   {
      g  = (m+h-c-b-e)%100;
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
                  b -= (c+b)%100;
                  k -= (m*d+f-d+b)%100;
                  i += (a-m*g+b+a)%100;
                  d -= (c-n-c-m-e+f*j-k-n+a)%100;
                  j  = (i+e+i*h*i)%100;
               }
               else
               {
                  i += (h+e+l-m-a+f+f-k+a+f+b+g-n)%100;
                  e += (j-l-k)%100;
                  j += (h*i+a-k*n-l-d-j)%100;
                  k -= (j+m+f)%100;
                  i -= (i+g*i-n)%100;
                  k += (n-n+b+e-i-m+d*i-m-d*d+b)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  i -= (h-l+d+j-j+k-f)%100;
               }
               do
               {
                  f -= (a+l+b-k)%100;
                  c -= (k+m+d+f*n)%100;
               } while( ++DOcnt[6]%5 );
               b -= (e-h*h+a*j*l-d+j-j+k*i*f+j)%100;
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  n -= (a-f-k*m-a+d-i-j+c+l+a+j+g)%100;
                  f -= (h-l*m+a*j*j-e+j-n-m+j*e+j)%100;
                  n += (j*g*l+d-k+b*f+b-d)%100;
                  b += (f-a*j*f+i*c-h*n)%100;
               }
               do
               {
                  b -= (l-c*l)%100;
                  e -= (g*d-c+d)%100;
                  c -= (m+d+j+d)%100;
                  m -= (l+j+f+l)%100;
                  k  = (a+d)%100;
                  e += (h+n)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  l -= (h+h-f+m-d*f-g+l)%100;
                  l -= (m-d-d-i*i)%100;
                  k += (f-j-h*e*c)%100;
                  d  = (j+f-j*f+e)%100;
                  e += (f-k)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  a -= (e+f-m*e-e-g+m+k+c+i)%100;
                  b += (c-n)%100;
                  a += (g-h)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  i -= (b-l-b*g*b*n+j*i)%100;
                  n  = (d-d-j+b+b+d-l-b+l*g+e+c-n-h)%100;
                  a -= (i*d)%100;
                  k += (h-g+m-f+a)%100;
                  c -= (g+g-l+i-m-i-n+g-g+k-h)%100;
               }
            }
            for( ; ++FORcnt[9]%5 ; )
            {
               
               switch( ++SWcnt[3]%3 )
               {

               case 1:
               {
                  h += (j+m-c+d+a+j-i)%100;
                  j -= (l+e+a*b+l-e+j+j-e-d*i)%100;
                  l += (j*c-l)%100;
                  c -= (h+c*d)%100;
               }
               break;

               case 2:
               {
                  j -= (c+l*i+m-n-b+c+h)%100;
                  e -= (h-b+h+g-i+n-j)%100;
                  a += (h-n-n*i+b-a-a+g*n+j+j*m)%100;
                  m += (n+i+d-f+i-h-l*l+m-j*k+k-e)%100;
                  n += (h*d-h*d+m-h-n+j*m*e+l)%100;
                  i += (f-b+h-k-c-h+b)%100;
               }
               break;

               default:
               {
                  l  = (a-a)%100;
                  j += (h-j)%100;
                  n -= (i*h-b+d*e+n+i+k+c+l+c*l)%100;
                  f  = (f-a*c)%100;
                  c += (c*m+d-e+l-c-i)%100;
               }
               }

               n -= (l+f-c-k-l-b+l*k-a+n-j-c+m-m)%100;
               c -= (k-k+m*n)%100;
               m += (d-b+m+g*i+m-j*n-i+c-k)%100;
               a += (a-i+b-g+k-l*k+b+a)%100;
            }
            g += (b+l-l+h+j+g+j+m-k-e-i-m*m+n)%100;
            e -= (n-g+b-f+a+g*i+h-b-e*c*l+n+f)%100;
            j -= (f*a-e*b-n-b-c-b+i+l-n-h*g)%100;
         }
         break;

         case 2:
         {
            g -= (e-j-l-d-f*d+h*h+j*n*b)%100;
            l += (m-b+a)%100;
            j  = (k-k)%100;
         }
         break;

         default:
         {
            i += (j*c+m-k-m+h+g-d+a*b+c*g*g)%100;
            n -= (c+a+k+a+l+j-b+m)%100;
            i -= (m*d+d-d+c-m-l*m-k+j)%100;
            c += (n+i-e+a)%100;
            l += (k+f-g+l-h+c+e+k+f+i+g)%100;
         }
         }

         a -= (b-j*a*f+i)%100;
         e  = (a+e+n-g-g*l)%100;
         j  = (e*c+c-m-b+f+l-e)%100;
         l -= (j+d+e+n+e-f-g+f+m)%100;
         j -= (g-i+n-j*c*h-a+h-f*l)%100;
      }
      a -= (i+m)%100;
      f += (f+j+m-d-j*l-b-e-n+j+e)%100;
   }
   f -= (c-a-c+e*i+d*k+j)%100;
   g += (a-l-d*d-n-f*k)%100;
   h -= (a*k*n-j+j-k-a+g*e)%100;
   n -= (d-a+d+l+d-l-a*l*a-h)%100;
   d += (k+a-g-k-h-c-j-l-c*n+j+j+j*k)%100;
   k -= (j+g+d+n+e-g-c+d+a+i-e)%100;
   b += (l+a-d+n+i+g-c-g-d-c-h*l)%100;
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
         g -= (l+f)%100;
         e += (a*c-b*f-m*c*l-d+b*e)%100;
         a -= (d-h+h+g+i+a+a+h+h)%100;
         i += (i+f-d-n+l-c+b+b)%100;
      }
      else
      {
         while( ++WHILEcnt[8]%5 )
         {
            do
            {
               for( ; ++FORcnt[11]%5 ; )
               {
                  b += (e-f-c+a-e+e*b+n)%100;
                  a += (h-i-i*m-m+m-i*e-b-f*k)%100;
                  l += (c+i)%100;
                  a += (c-h+b-a-d-m*l)%100;
               }
               for( ; ++FORcnt[12]%5 ; )
               {
                  l -= (h-k+h-e+k*c*l*d*c+f)%100;
                  c += (m-d+l+a+c*e)%100;
                  a += (d-j)%100;
                  i  = (j+b+a-a-k*l+c-c-j+m+c-i+m-l)%100;
                  k += (h+a-c)%100;
                  n -= (h+j+h)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  m += (i*n+n-j+l)%100;
                  b  = (c-i-e-a+h-a-i-i)%100;
                  a -= (k+e*a)%100;
               }
               else
               {
                  d -= (j+f-c+g)%100;
                  i += (l*b+m+l+h-e+l-h+k*k-c+b)%100;
                  g += (f-c-b-a)%100;
                  e -= (a*k*e+j+f-e+i+d+a)%100;
                  e -= (b-e-c)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  e  = (m-n*a+d-d-m*h)%100;
                  d -= (d*h-f-g-k*n)%100;
                  i -= (i-j)%100;
                  n += (c-f+c+a+i-h+g-e-d-a-k+c*b-b)%100;
                  i += (j+b+e-k+e+g-c+h*j-a*b)%100;
               }
               do
               {
                  c -= (j-j*j*f+g+f+g-i)%100;
                  i += (l-h-k)%100;
                  e += (i-h+g+n*h+j+i-d+j)%100;
                  e  = (j+c*h-h+c-f*a-h+l-m+e*l)%100;
               } while( ++DOcnt[8]%5 );
            } while( ++DOcnt[7]%5 );
            if( ++IFcnt[5]%10 )
            {
               e += (e-k-k-h+l-l-h+b-a)%100;
               for( ; ++FORcnt[13]%5 ; )
               {
                  j += (n+j+d-g+a+d*k+a)%100;
                  e += (b+c+c-h-e-n*l+c+l-d+i+e)%100;
                  j -= (f+l+m+g-k*i*i)%100;
                  c -= (a-k-j*n+l*g*l-d*m+c)%100;
                  k += (d*g)%100;
               }
               
               switch( ++SWcnt[4]%3 )
               {

               case 1:
               {
                  f += (j+m+c*i*f+b+a-b)%100;
               }
               break;

               case 2:
               {
                  d += (f-k+e-h*l*a*g-n-d-a+d-c*a)%100;
                  n -= (l+m-f+h+c-i*n+l-b+g-h*g-a-m)%100;
               }
               break;

               default:
               {
                  c -= (g+j*j+d-m-l+m-h-n*l+a)%100;
                  l -= (g+j-k-h+d-k-i+f*h+j*l+c+h+f)%100;
                  i -= (j+g*g+b+c-j+k+f-l+e)%100;
                  j -= (a+l-h*n-e*d)%100;
                  e += (i-n*b*h-l-c-c-e+i+d+n-a+b-j)%100;
               }
               }

               f += (j-b-j+n-m)%100;
               i += (c-k-c+e*j+g+b*l-i+f+d+e-e)%100;
               i += (f+k*c+h*g)%100;
            }
            c -= (d-n-c*g+k-h-f+e-j)%100;
            l -= (j-g+g+c-m*l-i-e)%100;
            m += (e-n-e*m+e*h+b+g+k)%100;
         }
         i += (h*g*l+n-l+c+n-f-e+b)%100;
         f  = (a*j+j*a*d+l*d-c+c+b-m*i*n)%100;
         d -= (n+f-g-i-l-f+c+m+j)%100;
         d  = (b*c-n+k+d-e+b*m+c-h+c+g-e)%100;
         b += (j-e)%100;
      }
      h += (a-j+g+k-c+j-b+f+m)%100;
      b += (i+i-g+g)%100;
      c += (a*i)%100;
   }
   n += (k-k+m+e-l*b)%100;
   h -= (m-f-b+h-j+k+c-g*i+b+j)%100;
   d += (h+a)%100;
   h += (d-h-a-d)%100;
   h -= (j+m+c-k*l+d+d*k-h+l-c)%100;
   b += (h+i)%100;
   h += (g-l-d-j+g+c+a*m+c-e-c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[10]%2 )
   {
      d += (a+g+e-d*a+i-j-a+g+g*d*h+d-i)%100;
      f -= (b+f-e*c-a-i+e-g)%100;
      e  = (n+j+b+h*l+a+k-g+m*e)%100;
      h += (f-m-l+j+l*b+l-a+e+m-m+h-e)%100;
      d -= (f+h*l)%100;
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
                  n -= (m+i+d*m-j+i)%100;
                  j -= (l*b-k+c-l)%100;
                  d += (l-i+n+e+b*g)%100;
                  c += (j-j-n)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  i -= (b+k+e*e*d+h-g-n-g)%100;
                  i -= (a-c*f*a)%100;
                  l  = (c-m)%100;
                  l  = (j+e*n-f)%100;
                  c += (b+a-h)%100;
                  k += (m+d*a-j-i+k-k-m-k+m+h-e)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  m -= (k+e)%100;
                  d += (c*e*e*n*j+m-a-f-e+i)%100;
                  k  = (b-f*n-j+n+m)%100;
                  j += (g-e*f-i-h)%100;
                  b += (h-i+h+l)%100;
               }
               else
               {
                  h -= (n-m-f-n-l*g+l-m+c-b*n-e)%100;
                  g -= (c-l-a+k-l+l-n*i*k-l+n*g)%100;
                  f += (h+n+l+g-c-b+g)%100;
                  m -= (c*f+g+d-m+j+c-a-c+n*a-n-b)%100;
                  d  = (e-c*n+e+l+h+j)%100;
               }
               while( ++WHILEcnt[9]%5 )
               {
                  n -= (b*a-n-f-l-i+f)%100;
                  n -= (f+c+m+k+h-a-h*f)%100;
                  a += (a-i-c)%100;
                  e += (n+m-n+c+l-k)%100;
               }
               do
               {
                  h += (f-i-c-i)%100;
                  h += (f-l-h-l-l+e)%100;
                  j -= (j-l+a*a+k-a)%100;
                  l += (n-a)%100;
                  i += (h-h+f*l+j+n-f+g+k)%100;
                  i += (k+d*i-g-b+g+l+h-n)%100;
               } while( ++DOcnt[10]%5 );
            }
            b -= (a-m)%100;
            for( ; ++FORcnt[16]%5 ; )
            {
               
               switch( ++SWcnt[5]%4 )
               {

               case 1:
               {
                  j -= (g+i-n)%100;
                  a += (m-k*b-e*f-m-c+j-k-g+f-e)%100;
                  j += (k-c-c-m+m+h+m+c-m+b+g-b)%100;
               }
               break;

               case 2:
               {
                  g += (c+c)%100;
                  j -= (n-g-f-j)%100;
                  h += (e+b-a-d+e*b-n+e)%100;
                  a -= (k-a-c+n-l-c+a+i*n-i+l*a+j*g)%100;
                  e -= (m+g*l)%100;
               }
               break;

               case 3:
               {
                  c -= (m*a+h+l)%100;
                  g += (n*h*a+m*c)%100;
                  i -= (i-f+g+h-l*c-c+h-a+b)%100;
                  i -= (h-d+e+h+k+m)%100;
               }
               break;

               default:
               {
                  d -= (f+k-f+i-f+k-c+j*d-h-n*d*d-n)%100;
                  g -= (e-f*k+a+f-k*d-k-h-f-j*h)%100;
                  n -= (l-l+k-j+j)%100;
                  h += (l-i+i-m-n)%100;
                  h += (l-l+e*f-f-b+l+k)%100;
                  e -= (b*l+c+c-m-h+g+m*n-j-a-d)%100;
               }
               }

               i += (h-h-f)%100;
               l += (e+l+m+h+i-n+e)%100;
               k += (n-m-j-m-f-k-f+k+j-g+b-j+i-b)%100;
               h  = (i-a*k+k+m-d*j)%100;
            }
         } while( ++DOcnt[9]%5 );
         f += (k-k+l)%100;
         f -= (l-b*m-n-h-j-d)%100;
         d -= (g+c*k)%100;
         h -= (a+d*j*n-e-m-m+n)%100;
      }
      h += (k-c)%100;
      j += (e*f+a*h+l+m-a+g-m*k*e-m-f*h)%100;
      a += (l+d)%100;
      c += (n*c-f)%100;
      k -= (b-f+f-k+a*e*a-g-g-n)%100;
   }
   a += (l+i-l)%100;
   l += (h-j)%100;
   m += (j-a+j-k+j+j-f+i+b)%100;
   c += (b+k-e+c+e)%100;
   a  = (e-l*l+m+n*h+n*n-d+l+i+f)%100;
   j -= (e-l-g+j+c)%100;
   m -= (f+e+h-g+k-h-e-h)%100;
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
         e -= (a-a+g+l-g+n-h*d-j)%100;
         g -= (h-b+a+d+a*m*k+c-e+f-d+b)%100;
         a -= (i-i-h)%100;
         d += (m*j-a+h-c+l)%100;
         d -= (f+b-g-i*f-i+j-g+c-h+n)%100;
      }
      else
      {
         while( ++WHILEcnt[12]%5 )
         {
            do
            {
               for( ; ++FORcnt[17]%5 ; )
               {
                  h -= (c+h-k+d-j*h*b+e+i-c)%100;
                  f -= (m-d*i+i+f-k-c+d-g*m)%100;
                  m -= (b*f-m+b+e*m+h*i+i-n+d)%100;
                  b += (h*i*i)%100;
                  n += (a*j-g-c-j+d+h-n+e)%100;
                  n += (l*a-c-k-l-d-m*l+a*b-g-a-c)%100;
               }
               for( ; ++FORcnt[18]%5 ; )
               {
                  h += (m-d+e-d-d+n+f*j*e)%100;
                  l -= (e-j*a-j+n-i+d*k+g)%100;
                  c -= (l-d+g+k+c)%100;
                  j -= (c+d-i)%100;
                  g -= (e+b+c-l-f+h-b*i*a+j+h*d)%100;
               }
               if( ++IFEcnt[11]%2 )
               {
                  l += (e*j+m-e)%100;
                  f += (g-a*a-j+g+j*h-a)%100;
                  c -= (e+a+k)%100;
                  g += (l-f+j-j)%100;
                  h += (h+h*n)%100;
               }
               else
               {
                  f -= (f*d-e+c-f)%100;
                  b -= (b+a)%100;
                  k += (e*k+h+c-d-e+l*h-b-h+h+e-h)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  c += (b-c+j)%100;
                  j -= (g*f+d-m+n*a-n-n*k+g-d)%100;
                  g += (b+e*i-h-n+h+k+b)%100;
                  a += (d*f-n*a*k-h)%100;
               }
            } while( ++DOcnt[11]%5 );
            do
            {
               if( ++IFcnt[8]%10 )
               {
                  j -= (l+i-b-i*a-i*g-j-e-n-c-n)%100;
                  j += (b-b*k+a+d*g*n)%100;
                  e += (j-a-j+d+g+e+g-k+l)%100;
                  i += (m*g-b-l+l-d*f+h)%100;
                  n += (j*m)%100;
               }
               n -= (n-a-e+l+d+e-j*c+n*n-a)%100;
               for( ; ++FORcnt[19]%5 ; )
               {
                  j -= (g-h+a-g*j*k+c*a+m*h)%100;
                  i -= (k-n-l+d+n+l*g-l-d-h-j+a-n)%100;
                  l  = (e-b)%100;
                  m += (i-n*e-k+f-g)%100;
                  e += (k*l-e-f-c)%100;
               }
               
               switch( ++SWcnt[6]%4 )
               {

               case 1:
               {
                  n += (a+e+i+d-j+b*b+l*b-d+d)%100;
                  l -= (e*g-n+g*b*i)%100;
                  h += (k-a-m+i-f*k*m-k-f*b)%100;
                  h += (m+n+b+i*e*c)%100;
               }
               break;

               case 2:
               {
                  e += (h*a*g*m*b+m+m-h-g)%100;
                  i += (n-a-g+e-m-m*b+a-g+a-m)%100;
                  m -= (h+l)%100;
                  m += (n+n-g-a*j+f-f+l-j*e+d-h)%100;
                  a += (d+n-a-d+n)%100;
                  e += (i*j*a)%100;
               }
               break;

               case 3:
               {
                  f -= (d*l-c+g)%100;
                  d -= (l-g*b+a-b-e+n*h-k)%100;
                  a -= (j+n)%100;
                  e -= (f-g*g+l)%100;
                  d += (m+l-l-a+l*b+d-e-j*a-a-f*a)%100;
               }
               break;

               default:
               {
                  b += (f+j*l-m+c*m+b-d+i*h+e)%100;
                  m += (m+k)%100;
                  a -= (f-j+h)%100;
               }
               }

               h  = (b+b-f*b*j+e+c-i*m)%100;
               n += (l-l-m+h)%100;
            } while( ++DOcnt[12]%5 );
            b += (l+e-j*l-i*e*h+d-b)%100;
            f -= (i+h*i)%100;
            h -= (l+g)%100;
         }
         c  = (n-g-g-b-j+g*h+d-f-i+i-h*c-n)%100;
      }
   }
   g -= (h+g*m-n)%100;
   e -= (f+j-n*j+i-i)%100;
   m += (d*c+i)%100;
   i += (b*k-i-a+n-b-f-m+k-g+l+m-b)%100;
   c -= (g-n)%100;
   b -= (c+l*j)%100;
   n += (g+j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F7(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[15]%2 )
   {
      j -= (b-d+c-l+g-f-j*b-f-h-b+l)%100;
      a += (d+b*m+a*n*j*e+a-a)%100;
      m -= (i+c*b+d+b-m*l-j*g+l)%100;
      b -= (f-c*c-m-j-n)%100;
      c += (f+d*g+c+f*n-i-k*e+m+m+e-f-i)%100;
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
                  g += (i-j-b-j+l+a+b+a*h-b+g*g+h)%100;
                  l -= (n+h-f-g+l+b)%100;
               }
            }
            for( ; ++FORcnt[22]%5 ; )
            {
               if( ++IFEcnt[13]%2 )
               {
                  g += (i*e)%100;
                  j += (h-c)%100;
                  n -= (m*k+f*c*m-j*c-i+n*d+i)%100;
                  j += (m-j+c+k+n)%100;
                  d += (n+e+g*a+j-d*e)%100;
                  k -= (g+d+l+a-g+d+g-i+m-j*k-m-m)%100;
               }
               else
               {
                  a += (n-l+e*k-c+c+g-j+n*l+c*d-i-g)%100;
                  m -= (c-m+j-a+l)%100;
                  i -= (n+b+b*n-m)%100;
                  c -= (c-f*d-m*d+b+b+e-d-f-n-a)%100;
               }
               while( ++WHILEcnt[13]%5 )
               {
                  j += (g-d)%100;
                  n -= (n-f+i-d+g-m+j*e+b-b-i+l-k-k)%100;
                  c += (f*k*k-d)%100;
                  e += (l+g+l-i)%100;
                  c += (l*e)%100;
               }
               do
               {
                  i -= (a-b+g+k+g+h+k*j-n)%100;
                  h += (f+g)%100;
                  j += (i*c)%100;
               } while( ++DOcnt[14]%5 );
               h += (h-n-b-i*f*a-l*b)%100;
               for( ; ++FORcnt[21]%5 ; )
               {
                  m -= (g+e-g*n)%100;
                  a -= (l+h-h-g+e)%100;
                  f += (d+b+e+f+c)%100;
                  c  = (e-f-g-e-i-f-f)%100;
                  e += (g-m+g+f+c+d*a-d+d*c-n+l+j)%100;
               }
            }
            
            switch( ++SWcnt[7]%3 )
            {

            case 1:
            {
               if( ++IFcnt[11]%10 )
               {
                  f -= (j-f+m-f+g+h+g+n-h-b)%100;
                  e -= (m-e+h-e+d+e*j-i+k*l*j+d)%100;
                  k -= (g+m+j*f*h+i*i*f+j+a-b+e)%100;
                  e -= (f-i+b+k-i-f+m+b-n+g+i)%100;
                  n += (l+a-g-j+e+b)%100;
                  c += (h-d*d-f-m*j+c+f-f)%100;
               }
               if( ++IFEcnt[14]%2 )
               {
                  n += (d*g+j*l-a-c+d-e-j*j+n-h*j+e)%100;
                  n -= (c-l+c*l*k-d+n+j*a)%100;
                  e  = (n+l-g)%100;
                  e -= (g+i*k-d*j-e+k*c*j-k*f+h+l+m)%100;
                  a += (e*h-g-b-b-h+g+e-d+b-j)%100;
               }
               else
               {
                  j  = (g+e+k-b*k*g)%100;
                  c += (l+b+e+d-j+j+b-c-d*e-f)%100;
                  c  = (k-e+b*e+b-k+k-g-i-m-e+n+a*d)%100;
                  m -= (l+g-e-b*k)%100;
                  b -= (j-k-e+f-k-i-e+b*a)%100;
               }
               while( ++WHILEcnt[14]%5 )
               {
                  d += (e*j+j-i+l-k+k+i+i+i-c)%100;
                  n  = (g*c+m-d*d-h-l*k+k+i-f)%100;
                  b += (f+c+a*h+l*j+i+i)%100;
                  k  = (b+l+c+e)%100;
               }
               do
               {
                  l -= (g-i+j)%100;
                  e -= (a+g-j-d)%100;
                  g -= (j+m*k+c-g-a-a+b)%100;
                  n += (l+i-n*k-f+c+j-j*i*j)%100;
                  d += (g*e)%100;
                  m -= (m*f-n-a*e)%100;
               } while( ++DOcnt[15]%5 );
            }
            break;

            case 2:
            {
               m += (a+j-n-g-k)%100;
               g -= (n-k-h*d+n-i+e+d-g)%100;
               l -= (l-j+h-k+f+a)%100;
               l += (c+c-b+j+a+n*e-a+f+b-a)%100;
               m -= (a+j)%100;
            }
            break;

            default:
            {
               d += (a+c+d+d-b+c*f*a+k-e*b+a)%100;
               m  = (h+b+k+h*i+g+e)%100;
               d += (e-n-a*i+f+e)%100;
            }
            }

            e += (m-m+k+n-d)%100;
            d  = (d-m+j-f-k+l+f-c+n+b)%100;
         } while( ++DOcnt[13]%5 );
         m -= (j-c-d-j-l+d*e-m-m)%100;
         h -= (m-a-d*e-h+d+h+l+h)%100;
         d += (a+i-m-h)%100;
         h += (a+i+e-j+h-n+g+b-k)%100;
         h -= (l+f-a-j+e+m+e+c-k-k)%100;
      }
      d -= (j-l-g+i)%100;
      l -= (j-c*b*d-f-i-k-c-e+j)%100;
      e += (j-h+m-f-d-b-g*n+b*g-f)%100;
   }
   h -= (j+d+a+f)%100;
   e -= (j+h)%100;
   j += (g*g*k)%100;
   i -= (g-j+i-c)%100;
   k -= (l+n+g*h-m-f+e)%100;
   l -= (h-f-g-i-i*i)%100;
   h -= (b*l-n-f-m+k*j-i*g-a*c+e-j*d)%100;
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
            h += (e-j+h-d+j)%100;
            f += (j+k+n-n)%100;
            g -= (h*j-k-e)%100;
            b += (d-n-f*d*c*h+k-i)%100;
            a -= (b*i*m)%100;
            g  = (f-k+a-b+l-e+l-a)%100;
         }
         else
         {
            while( ++WHILEcnt[16]%5 )
            {
               do
               {
                  h += (l+n+l-n+d-k*a)%100;
                  h  = (c+g-n+e-j+h*e*n*g*n+e-e-g-l)%100;
               } while( ++DOcnt[16]%5 );
            }
            if( ++IFcnt[12]%10 )
            {
               h += (h+g+g+e+c-l-j-h+c)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  m -= (a-n+b+i+j+g-h*l-e)%100;
                  l -= (f*h+c)%100;
                  i -= (a-l-b-l-h-f+c+f-g-i*m-d)%100;
                  a += (f-d)%100;
               }
               
               switch( ++SWcnt[8]%4 )
               {

               case 1:
               {
                  e -= (d-l-m-c+n-m-j+n-c-d+d*g+l+n)%100;
                  f += (j*k-k-b+g-n*m-n+f+d*j-k*a)%100;
                  n += (j+m-e)%100;
                  l -= (h+a*a+b-d-h-n+a-m+l-b+i+l)%100;
                  n -= (a+i+g+e-j-g+n+h-e*i)%100;
                  j -= (n*k-k-g-n-f-f+h+e+m-i*e*e)%100;
               }
               break;

               case 2:
               {
                  e  = (g*m+l-b-f-h*e+a*g-e*j+j)%100;
                  c -= (i+n+a*f-b*g*l+n-m+g+j-m)%100;
                  c -= (c+j-h-m-g*f*h+l*l-m)%100;
                  j  = (h-i+m-e)%100;
                  j -= (k*l)%100;
               }
               break;

               case 3:
               {
                  n -= (l+a+m-l+g-g-g+c*f+j-c+i*b+e)%100;
                  f += (i-d+j*j+j-k)%100;
                  b += (d-a-d)%100;
               }
               break;

               default:
               {
                  h -= (c*j+i-e-j+i*h*g*e+m+b-g-a)%100;
                  g += (i+e)%100;
                  m += (l+d-l-k*m-h+i-l-f-i-d+m*g*l)%100;
                  e += (e-m-j-l+g-n*j-c-m+h+a*l)%100;
                  c += (j-n-j+m+i*m-k-d+f+e-e)%100;
               }
               }

               if( ++IFEcnt[16]%2 )
               {
                  h -= (n-f-n+n+g+i-c)%100;
                  a -= (a+j+i*l*j+a+i+h-j+k+n-l-l+g)%100;
                  a += (d+e-d+c)%100;
                  k -= (d+m+i-i-i+j+m-e-l+g+n-m)%100;
                  k += (n-j*n+e-h+j*g*m+k-b)%100;
                  m -= (f-h*j+n-a+f*f-l)%100;
               }
               else
               {
                  c -= (l*g-k-j+j+h)%100;
                  m -= (g-l)%100;
                  b -= (j+h+h-c+l*b-j*g*i-d-j+j+j+f)%100;
                  l += (l-b+k+h*g+c+i*i)%100;
               }
               while( ++WHILEcnt[17]%5 )
               {
                  l -= (f+l+n-d-c-a+f-h+i-e-l)%100;
                  n += (b+l+d-h+i-b+l-a+l+d+c*d-i+b)%100;
                  f -= (d+h+c)%100;
                  f -= (j-i+a-d-l+e*d)%100;
                  f -= (e-f-j*n-h*f-i+e*b)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[24]%5 ; )
               {
                  g -= (n*f-a+l+m+l-i+j+m+e-h*h+c+f)%100;
                  a += (l-b-l+h)%100;
                  h += (c+d-m+g)%100;
                  b += (a-a-n-g+d-l+f+h+i+m+a+k+e)%100;
               }
               i += (g-k-g+i-b*e*e+l-c-d)%100;
               l -= (k-b+b+f*c-a+n-n-j)%100;
               g += (b-b-k*b)%100;
               b  = (d-d-l+l*f)%100;
            } while( ++DOcnt[17]%5 );
            l += (l-k-c+g*n-g-c+i-n-m+e)%100;
            c -= (m*d-d*k+n+h-m+i-n+l+c-i-g)%100;
         }
         j -= (i-l*l+e-c+g+a*f-e+l*h-l)%100;
         b -= (m-a*b-f+a+j+a+l+l-h-i+a)%100;
         b -= (m*l-j+h*j*n*i+f-f+b)%100;
         i -= (m-n+a+j+f+l-c-c-a+b)%100;
         g -= (k+e+b+l+b)%100;
      }
      m  = (b-l+i-i*e*g)%100;
      k += (c+f-a*d-d)%100;
      g += (f-h-e-c-m+b)%100;
   }
   i -= (n-h+f-k+n-h+b-c-m)%100;
   l += (c-b)%100;
   d += (h+e+b+n+f+g+m+f+k-c)%100;
   f -= (j-b)%100;
   j += (e-h*f*m+b+b+e*m+k)%100;
   d += (b*j*j-h+j+j+l-k+l)%100;
   f += (g-d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F9(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[14]%10 )
   {
      for( ; ++FORcnt[29]%5 ; )
      {
         if( ++IFEcnt[19]%2 )
         {
            l += (e-k+n-a+e+i+j-f)%100;
            l += (k-h)%100;
            g -= (n-n*g*c+k)%100;
            l += (j*h)%100;
            c -= (b-c*h*c+d*c+m+c+k+a*i*i-h*f)%100;
         }
         else
         {
            while( ++WHILEcnt[18]%5 )
            {
               do
               {
                  c -= (f+c-f+h*g)%100;
                  a += (a+e+f-h-n*l-m+b+n-f)%100;
                  f += (m-d*a)%100;
                  j  = (l+l-n+c*i+i*d)%100;
                  a += (j+i-i-i-e*j-n-b)%100;
                  e += (n*d+j-h-h*e-f-l-b-f+k*m)%100;
               } while( ++DOcnt[18]%5 );
               k += (b-m-g)%100;
               for( ; ++FORcnt[27]%5 ; )
               {
                  f += (h-b-h-c+k-n*e-f-l*i*f-d)%100;
                  h += (h-d*b-l-g-l+e+i+d)%100;
                  f -= (m-l-n-h+j-i+a-j)%100;
                  i += (h+b-i+m+m-d+c-i+f*n+g+n)%100;
                  l += (k-j+d)%100;
               }
               
               switch( ++SWcnt[9]%4 )
               {

               case 1:
               {
                  m += (n-j*d-n+d-m-k-j+k-n)%100;
               }
               break;

               case 2:
               {
                  b -= (i+a+d*j-e+g-c-a-l-e)%100;
                  d -= (i+c+b-d+m+h+b*d+l-j-l+e*m)%100;
               }
               break;

               case 3:
               {
                  m -= (c-m)%100;
                  k += (k+k+m+g+m*b-i-m-k-e-d-m+l)%100;
                  l -= (j*c+h+n-h+n-a+n+e+f-m-d-c)%100;
                  n += (d+f)%100;
                  g -= (e+n+k)%100;
               }
               break;

               default:
               {
                  d -= (l-b+k+a)%100;
                  c += (j-g-f*l*n*m+n)%100;
                  c  = (k*m-b+m-f+e+f-l*n+g+c)%100;
                  d += (d+c*l-k*k+g+d+f*n-a-m)%100;
               }
               }

            }
            if( ++IFcnt[13]%10 )
            {
               if( ++IFEcnt[18]%2 )
               {
                  f -= (m-d+d+d+a-c)%100;
                  a += (j+d-i+n+d-a*h-e)%100;
                  e -= (i-k)%100;
               }
               else
               {
                  a += (i+f-m-b-e+m)%100;
                  e -= (h-m*b+a+c-l+m-c*j*m+k+e)%100;
                  n -= (n*m*m+k)%100;
                  i -= (g-m+h)%100;
                  d += (c-k-a*j-a-m+d*i+g*n)%100;
               }
               while( ++WHILEcnt[19]%5 )
               {
                  n += (f-m+k*d*n+j+j-i)%100;
                  h  = (c+a*k-i-f-g+j*k+l-a+a-i-m)%100;
                  l -= (i-h-d+l-c)%100;
                  j -= (f+d)%100;
                  h += (h+i+e-l)%100;
               }
               do
               {
                  f += (a-g)%100;
                  n -= (c*l-b*c+g-i+d-e+i+n*g-k+d)%100;
                  h -= (c-b*j+h*d*a-l+d+f+l+b-e+l*a)%100;
                  b -= (b+i)%100;
               } while( ++DOcnt[19]%5 );
               for( ; ++FORcnt[28]%5 ; )
               {
                  m += (e+l+h)%100;
                  c += (m-k-l+k*i+m+e+h+f+j+f+g+b*m)%100;
                  b += (e+c*h-n+k+k-h+b-b+b-c-f*c)%100;
                  i  = (d+f-h+b-k+b+l-a+d+l)%100;
                  h += (b-m-h-h+l*c-e-k+c)%100;
                  a += (i-c)%100;
               }
               l -= (e+l+e-k+f-f*i-c-m+l)%100;
               d += (n*c)%100;
            }
            n -= (k-a-b-f*g-g-c)%100;
            e += (d+j)%100;
            b += (j+l+e)%100;
         }
         m += (j+n+e+c+i*a+n*j+k)%100;
         g  = (a+h-i+d-h+i+b+c-i-g)%100;
      }
      e += (e-f-f-g-a-k+a)%100;
      k -= (i+g*g+h-d-j+c-k+n+j)%100;
      f -= (l*h-g+k+g-e+k+k)%100;
      a += (e-n+e)%100;
   }
   n -= (n+d+a-f-m)%100;
   c -= (d-d-j)%100;
   f += (b+b-n-a*d-j*l-i-n*j+a+d-h)%100;
   d  = (m*a+n+b-b+h-i+g+b)%100;
   i -= (d*f-a+b*c*d+g*k+l+i+l-i*e+b)%100;
   n -= (i-i-h+f-m)%100;
   d -= (a-h-h*g+d-h-l*l+k-e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F10(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[33]%5 ; )
   {
      if( ++IFEcnt[21]%2 )
      {
         k -= (m+d*l-b-j)%100;
         m += (n+j*l-b-d+m-m+e-n+j*j)%100;
         f -= (a-k+f+i+b-h*b-i)%100;
         e += (l-m-n+f+b-m+d+e+b+b+l-m*l)%100;
         m  = (c-m)%100;
      }
      else
      {
         while( ++WHILEcnt[21]%5 )
         {
            do
            {
               if( ++IFcnt[15]%10 )
               {
                  l += (h-m+d*l*c*j*i*i*m-i)%100;
                  b -= (h-n+m)%100;
                  b += (e*c)%100;
               }
               j += (e*k-m+j-n-e)%100;
               for( ; ++FORcnt[30]%5 ; )
               {
                  e += (c-j+n-m-h)%100;
                  m += (k+f+h+a+i-h+b*g+j+g+a)%100;
                  j  = (f-b-j*a-j-f)%100;
                  d += (d+b-n-i*d-i+j-m*b*i)%100;
                  b -= (e-a+b+k*a*n+h-a*f)%100;
               }
               
               switch( ++SWcnt[10]%3 )
               {

               case 1:
               {
                  a += (n+b+d-c+f+b-c+a-l+h-j+g-d)%100;
                  b  = (b*i-n-i-g)%100;
                  g += (d-h+h+b)%100;
                  k  = (m-k)%100;
               }
               break;

               case 2:
               {
                  n += (i-f+j*c*k+f+a+a-g+b+c)%100;
                  f -= (k+l)%100;
                  e += (g-c-n-h*h+c+g)%100;
                  g -= (n-a-e+k-h+c+b*m*n+f+j*c)%100;
                  j -= (m+m)%100;
                  d -= (n-h-i+i+g-a+m*n+n)%100;
               }
               break;

               default:
               {
                  c += (h-e-d-d+d-c-f+f-b+e-j*h-b)%100;
                  g -= (c-c+l-k-d-a*l+f+n+e+m*f)%100;
                  c -= (j-c-f+k-d)%100;
                  d -= (k+b+i+g-d-c+l-i+n)%100;
                  d -= (a-h-h*d+a-n+h-f+l+l)%100;
               }
               }

               if( ++IFEcnt[20]%2 )
               {
                  b += (l+d*a+m)%100;
                  j += (j*a+a+a+k)%100;
               }
               else
               {
                  m += (l+c-j*f*n*b*d*i*l+l*g+l)%100;
               }
            } while( ++DOcnt[20]%5 );
            while( ++WHILEcnt[20]%5 )
            {
               do
               {
                  c += (f+i-g-n-k-i-g+l+b*j-n*j-k-e)%100;
                  n -= (e*f+i-l-b+n+a+m+d-c+h-e)%100;
                  f -= (e-m+c*j+h+g+i-b+h-a+a-n)%100;
                  j  = (c-n+i*h*d*m+k*g+d+c-i-d)%100;
               } while( ++DOcnt[21]%5 );
               for( ; ++FORcnt[31]%5 ; )
               {
                  j += (c+e-n+j*l)%100;
                  a -= (j-l)%100;
                  b -= (h+k+e-h*d+j+c-g+j-j*h+i+b)%100;
                  m -= (i-i)%100;
                  j += (c-l+h*h-h*j-e-i-b*k+f)%100;
                  c -= (d*m+d+d-f+h)%100;
               }
               if( ++IFcnt[16]%10 )
               {
                  f -= (c-j-e-m-c)%100;
                  d += (n-f+b-g+l+k*b+n+k-n*m-b+k)%100;
                  d += (l*m+h*l)%100;
                  d -= (j+d+b-f+m+k-a)%100;
                  i += (b-f-c-e*j-j-c-j*j-c-f*i+f)%100;
               }
               for( ; ++FORcnt[32]%5 ; )
               {
                  h -= (d-d+l*d*e-n)%100;
                  c -= (n-h+c+h+g+d)%100;
                  g  = (e*n-m+c-m*h)%100;
               }
               f -= (e-n+i+b+m+b-b+n-d-c+g+k)%100;
            }
            i += (i*i-b)%100;
            f += (c+f+l-m+i+g-j)%100;
            m += (j-l*m+g)%100;
            g -= (b-i*j*h-e+j*m+n-d*a-c*d+b)%100;
         }
         f += (n*l+h+k+l*l+g+m*i+h-e+j-e)%100;
         b -= (i*h-m-c-e-a-f*n+e-d-c+c*c-l)%100;
         f  = (n-a+h-h+c-a+g-j+d)%100;
      }
      g -= (b+f)%100;
      n  = (k-m-b+e-a+n)%100;
      j += (k-f-n-n-g+l+b)%100;
      e += (l+b-c-d+m*m-b*j)%100;
   }
   h  = (m+c+b+h+i-f*k*e)%100;
   e += (g-f)%100;
   b += (k+g*k+l-c-d+f+n+b-l+h+l-d+n)%100;
   a -= (g*c+j-b+f+d*m-h)%100;
   i -= (h+j)%100;
   m += (e-l-l+j*b-a-h+g+a+b+m+i+m+h)%100;
   h += (m*j-e-b*e-a+d+d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F11(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[24]%2 )
   {
      f += (j+a+e*k-l-i+n+d-d+j+m)%100;
      g -= (l-f)%100;
      b  = (b-i+a-k*h-e+b-d+d*d)%100;
   }
   else
   {
      while( ++WHILEcnt[24]%5 )
      {
         do
         {
            c -= (n*c)%100;
            for( ; ++FORcnt[34]%5 ; )
            {
               
               switch( ++SWcnt[11]%3 )
               {

               case 1:
               {
                  g -= (b*a+a)%100;
                  b -= (a*m-k+l+f-f)%100;
                  b += (j+d-l-j*f+k+m-a+h+b+g)%100;
                  j -= (g+i)%100;
               }
               break;

               case 2:
               {
                  a += (h+l+i-g-c+a+d*a-k+i+c)%100;
                  c -= (f*c-g-d+d)%100;
                  e += (k-d*k+l*c-g-a+h+m+a*j)%100;
                  m  = (n-e)%100;
                  l -= (j*m*j*m-g+l+l-d-n+j)%100;
                  e += (b*l-m+a+i+j-g-b+j-f+h*g*d+c)%100;
               }
               break;

               default:
               {
                  l -= (h-k+k*a-f+n-b*j)%100;
                  h += (i-b+n-m-i-c-n-n*h*n)%100;
                  m  = (n-l)%100;
                  c -= (m-b)%100;
                  a -= (c-m-l-h-c*a)%100;
               }
               }

               if( ++IFcnt[17]%10 )
               {
                  b += (e+d-i-i*j*c+l+h+l*j+a)%100;
                  c += (c+i-e-h+e-m-l-m+i-f+k)%100;
                  l -= (e+d+i-e*f+f+d-d+l+f-h)%100;
               }
               if( ++IFEcnt[22]%2 )
               {
                  k  = (h*m-b-h-d-g+b-f+n)%100;
                  c  = (e*n)%100;
                  g += (c+g+k)%100;
                  b += (n-e)%100;
               }
               else
               {
                  a -= (f-n-a+f-e*g-d)%100;
                  i += (c+d+f-h-h-h*d-l-c*f-m)%100;
                  e -= (j-c-m-l*i*k*m-g*b+c+a+g*n+m)%100;
                  h += (i+d-m-a*b-a*b)%100;
                  a -= (l+g+c+c+b-j*l+c+h)%100;
               }
               while( ++WHILEcnt[22]%5 )
               {
                  i += (f-i+f-n*f-k-m+g-b+e+f)%100;
                  d -= (j-g-m*k+h+a+a+b+a*d*b*f)%100;
                  h  = (m*e+b-d*f-b+d+l*m-j-n-i+e)%100;
                  a -= (c+h)%100;
                  h  = (m-n+a-h)%100;
                  d -= (j+j-i+k+c-b+k)%100;
               }
               do
               {
                  m -= (e*g-e)%100;
                  b -= (f-n+k)%100;
                  i -= (d-m-j+k+c-h)%100;
                  f -= (h+k+i+l+b-l-h-e-h*g+h+c)%100;
                  m -= (a-n-j*f+d-m+i*h-m+c)%100;
               } while( ++DOcnt[23]%5 );
            }
            for( ; ++FORcnt[36]%5 ; )
            {
               for( ; ++FORcnt[35]%5 ; )
               {
                  l  = (n+f)%100;
                  h -= (a*m+h+h+l)%100;
               }
            }
            if( ++IFEcnt[23]%2 )
            {
               j += (i*k+k-n+n+f-e-i)%100;
               h -= (j+e)%100;
               m -= (g*k)%100;
               n -= (f+a-c+j+g+i-i*n-e+b-l-n+i)%100;
               j += (m-l-l-f-f*e*n-k-f+k-h+k+n+g)%100;
            }
            else
            {
               while( ++WHILEcnt[23]%5 )
               {
                  k += (n-g+b-h+k+i+n*a-n+c*h-d-b)%100;
                  n -= (e*i*j-f-k-k-j+i-h)%100;
                  n  = (n+a+m-b-k+g-i-j+m+n)%100;
                  g -= (b*d+c)%100;
               }
               do
               {
                  n += (a+j+g+c+l-l-a)%100;
                  j += (g-i+n-m*h+b*c+g+b-a)%100;
                  c -= (k+l+l+k)%100;
                  g -= (l+a*b)%100;
                  n -= (i+c-k)%100;
                  l += (c-i*d-e+n+g-h)%100;
               } while( ++DOcnt[24]%5 );
               h += (m+k)%100;
               f -= (a+g+a+l*k)%100;
               e += (j-f-l+n)%100;
            }
            m += (i+k-d)%100;
         } while( ++DOcnt[22]%5 );
         a -= (i-h-k+h+g-g*j+d-a+i-j)%100;
         a -= (e*m-d*n-k*h+b-h+n-n)%100;
         i -= (n-l*e+f+g-c+b+h-d*e)%100;
         b += (n+f*a-i+k+k)%100;
         i += (f+j+l-e*g+b-h-g+h-b+l-e*e)%100;
      }
      a -= (c-d-e-j+m-k-n+b-h+k-c)%100;
      l -= (c*n)%100;
      c += (c*b-k+n+k+l-n+h)%100;
   }
   n -= (m-k)%100;
   b += (i+m-l*e-l+g-j-b-b*m-m+b-g)%100;
   f += (f-e*b-b-i)%100;
   j -= (a-h+h-c-f+d*b)%100;
   l += (g+b+i)%100;
   b  = (n+n)%100;
   i -= (j+i-d-d+c+h*h-f-i+l*d-j-c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F12(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[20]%10 )
   {
      c  = (f+l*f)%100;
      for( ; ++FORcnt[40]%5 ; )
      {
         
         switch( ++SWcnt[12]%4 )
         {

         case 1:
         {
            if( ++IFEcnt[26]%2 )
            {
               if( ++IFEcnt[25]%2 )
               {
                  n += (e+h*l)%100;
                  i += (h*m+e+m+m*m+d+j+d-n-n-n+e*m)%100;
                  m -= (j-l+m-j)%100;
                  d -= (f-m-h-i-c-e-j+c+k+k+d+a-i*a)%100;
                  b += (j-j+l-l-n+a+b+k+j)%100;
                  a -= (g+i-k)%100;
               }
               else
               {
                  b += (e+l+e-f*d-n+l-m)%100;
                  n -= (d-e+e+h*f-e+n+l)%100;
                  d += (k-g-k)%100;
                  d += (d+k*m+h+h*k-m+c*m*c+c*i+j*n)%100;
               }
               while( ++WHILEcnt[26]%5 )
               {
                  m -= (f+m+e+m-e+i-g+i+j+h)%100;
                  d -= (n-n)%100;
                  b -= (f*g*m-a+b-g)%100;
                  c += (m+n+j-c+a-j-n-l+a+j)%100;
                  a -= (e+b*l-a*m-f)%100;
               }
               do
               {
                  j -= (f*b+l*i-k-i-c-n-c+m+n)%100;
               } while( ++DOcnt[26]%5 );
               h -= (b-f-a+n+m+l-i+i*b+d-f*i-f)%100;
               for( ; ++FORcnt[39]%5 ; )
               {
                  f -= (d-l+e*b-b-i-k*n)%100;
                  e += (g+h+a+g+b+f*l)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[25]%5 )
               {
                  h += (f-a)%100;
                  n -= (n-i-e-l-k+e+m-n-l*n)%100;
                  n += (g*b+k+d+e-g+f-j+g+e-e)%100;
                  n += (f+e+i*k)%100;
                  e -= (i+e*h*c*e)%100;
               }
               do
               {
                  e -= (b-l+a+d-d)%100;
                  i += (g+n-n*n)%100;
                  j -= (n-l-f-f-l-e*l-h-k-d-c)%100;
                  d  = (h-i*c*g+b+e-d)%100;
               } while( ++DOcnt[25]%5 );
               for( ; ++FORcnt[37]%5 ; )
               {
                  j -= (h+f*h*n-b-g-n+m*l-k)%100;
                  c += (g*j+j+d-b-j+c)%100;
                  g -= (n-h+a-l*m-a-d+h+k)%100;
                  l -= (c-c*d+g+b-j+m+d+l-a*k-d+l-h)%100;
                  g -= (l+e+f+l-k+j+f*h*c*h-k-e)%100;
                  i += (g+i)%100;
               }
               if( ++IFcnt[18]%10 )
               {
                  k -= (l-f*c-k+n)%100;
                  l -= (i*j-i-e-i+e-b+d-b-i+l+b+f-l)%100;
                  h += (j-b+e-b+k-e+g-m+b-m)%100;
                  f += (n*l-l-c)%100;
                  i -= (e+j+a-c*h+m-j*l)%100;
               }
               for( ; ++FORcnt[38]%5 ; )
               {
                  b -= (n-i*j+f)%100;
                  j -= (g-l+a)%100;
                  g  = (f-i-a)%100;
               }
            }
            
            switch( ++SWcnt[13]%3 )
            {

            case 1:
            {
               if( ++IFcnt[19]%10 )
               {
                  c -= (g-c*e-l)%100;
                  m -= (e-e+e+m)%100;
                  k -= (f*a+a+f+a+n*h*c)%100;
                  j += (f-c+d*e)%100;
               }
               b += (c+d*d-n*k+i-k+c+d-l-e-b-m-h)%100;
               n -= (h*c-g+g)%100;
               e += (n+c+l+j-j+e-e+a-j-f-m)%100;
               g -= (a*b-b*l+c*b-h-f+d+l*i*b)%100;
            }
            break;

            case 2:
            {
               k += (g-n-h-e*g)%100;
               j += (l-k-c*i+k+f+l-e)%100;
               e -= (f-m+k+l-d-b-f-c-h+i+g+l*m-j)%100;
               k += (j-m-g*h+f-d*j-b-n-b-l)%100;
               f += (n*b-d+k-h+h-g)%100;
               h += (g+b+k*d*d-m+k+h*b+g+j-a)%100;
            }
            break;

            default:
            {
               b -= (l-g)%100;
               e += (i+e+e+f+n-m-f*k)%100;
               n -= (d+g*j+m+k-n-d+e-f-i+b-j*i)%100;
               d -= (j+f-f+l*c*g-d+h-e)%100;
               b -= (a+a*f-i*m)%100;
            }
            }

            i -= (f-e-g+b+g*h*l+g+e-g-k)%100;
            h += (b+n+k*a+i+d-e-l+i+m*m)%100;
            a += (c-k+c+j+c)%100;
            k -= (k*d*m*h+h-f-b*k)%100;
         }
         break;

         case 2:
         {
            c -= (l+f+b+i-h-b-l+f-c+k-b-b)%100;
            g += (k+f+i)%100;
            l -= (a+l*f*m*e)%100;
         }
         break;

         default:
         {
            c += (j+h+b*f-i-l-n-j+h*f+f)%100;
            a += (m+m-c-a+k*m-e)%100;
            d += (k+k-f-n-m+k+h-e-j-m-c-j-h)%100;
            a  = (l-i-c+k+i-i+k+f-g*i-f*m+b-e)%100;
            n += (a+b-j-d-n-a)%100;
         }
         }

         k += (k+m*c-c-g+n+d+g-a)%100;
         c -= (k+j+d)%100;
         k += (n+c+j*g*g-a*k+d+a+n*i)%100;
      }
      e -= (g+a*l+g-j-m*d*g-c*n-b)%100;
      f += (m*n-f+b-i-d-h+a-e+c+b+k+c)%100;
      e += (j*h-b+a+l-b+f*c+d+d-a-h*d+e)%100;
   }
   a += (h-a*j+b-j)%100;
   f -= (n-k*b-b+h+l)%100;
   j += (a-a)%100;
   l -= (k+a+n*m-k-k+d*b+g-b+i)%100;
   n -= (d+a+c-a+n+h-f+a+g-a)%100;
   h += (i*b+m-n-m-i+a+i-h-d+a-h)%100;
   k -= (i-e+c+n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F13(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[28]%2 )
   {
      i += (k-i-c-n+d+g-g+c+e)%100;
      i -= (e+a-e+f-b+b-m)%100;
      n  = (i+g*m-l*c+e-n-g+j+l-n-c+d+n)%100;
      i -= (g-h-h-j-c-f)%100;
      m += (i*i)%100;
   }
   else
   {
      while( ++WHILEcnt[28]%5 )
      {
         do
         {
            for( ; ++FORcnt[42]%5 ; )
            {
               for( ; ++FORcnt[41]%5 ; )
               {
                  i += (m-l+h-j*g+l-b)%100;
                  a -= (g+n*d)%100;
                  c += (f*e-k*c+a-m-n+l*h)%100;
                  h += (m-d+f-e*d-k*k+d+f)%100;
               }
               if( ++IFEcnt[27]%2 )
               {
                  l -= (n*i+n*i-b+m+h+k)%100;
                  a -= (h+e-b)%100;
                  d += (h-e+f+i+n-f*a*c)%100;
                  c -= (b-m+a-l+n)%100;
                  c -= (k*b-i+b-j)%100;
               }
               else
               {
                  n += (j+e+a-l+k+a+n)%100;
                  e += (e-e+b-l*n-d*n*a-f+l-e+b)%100;
                  h += (c-m+a+l-j-k-g+d+c+j*l-j+h)%100;
                  a -= (m-i-k)%100;
                  a -= (e+l+c*a*i-a-f+d-n*e+a)%100;
                  n -= (j+b+n-f+h+d-k)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  m -= (c-k*g+l+e+j-e-d+c*n-m+c+e)%100;
                  l += (i+l-m+h-m+f-c-j)%100;
                  g += (m-j)%100;
               }
               do
               {
                  b -= (a+c-e)%100;
                  h += (e-i+i-h+e-f)%100;
                  c += (i-f-g-j-d)%100;
                  j += (e+a-j-c*m-n-b-j*f)%100;
                  n += (e*d+g*l-f*h+i+l+i+l+h*h+i)%100;
               } while( ++DOcnt[28]%5 );
               if( ++IFcnt[21]%10 )
               {
                  c -= (m+f-i-b)%100;
                  k += (a-a-c*m*m+i+j*c)%100;
                  h += (g-a)%100;
                  m -= (b+l-d-k-j*e*k)%100;
               }
            }
            f -= (c+b)%100;
            for( ; ++FORcnt[43]%5 ; )
            {
               
               switch( ++SWcnt[14]%3 )
               {

               case 1:
               {
                  n += (j+k)%100;
                  a += (a*g)%100;
                  k  = (b+i*a-j-m+g*n-j)%100;
                  k  = (j+c-g+m+a+d+n-l*i+f*d-g)%100;
                  f += (l*m+e-g-m+f+k)%100;
               }
               break;

               case 2:
               {
                  n += (h-n-d-f+e+l)%100;
               }
               break;

               default:
               {
                  h += (b*b)%100;
                  d -= (c*m*m+m+j*l+j+i*j-i)%100;
               }
               }

               f += (a+j*g-i-n*h+c+b+h-k+b*j+l-a)%100;
               d -= (k+g-d+d-c+i+k+m-h+g-d+j-g)%100;
               a -= (i-e+h+k-a+l-f*g+d+a+c-d*j*m)%100;
               d -= (c-f+j+k+f+a-c-n+g)%100;
               c += (h+k)%100;
            }
            l  = (g+d+g)%100;
            a -= (f-c+g-m-g*a)%100;
         } while( ++DOcnt[27]%5 );
         j += (i-i)%100;
         k += (l+k-a+i-l+b*c-d-m*f+f-d-i)%100;
         j -= (j-n*i*i+n)%100;
         i -= (b+k*d+m-g*e)%100;
         d  = (c+k+j-d+j)%100;
      }
      i += (f*b*e+l+n-b+a-l)%100;
      b -= (j-k+e)%100;
      j -= (i+g+n+b*n-l)%100;
   }
   h -= (j-g+h+i+n+n*m)%100;
   d += (b+k*m*b-i-d)%100;
   n += (g+l-k)%100;
   e += (e+b*g*c+n+j+f*j)%100;
   c -= (f+b)%100;
   g -= (a-e+l+k*c)%100;
   e -= (d+n*n-f*c+i-n-c-f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F14(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[30]%2 )
   {
      j  = (h*a-c-j+e+l-e+h+b)%100;
      d += (m*n+c-j+a)%100;
      e -= (g*l-l-j*n+g*m)%100;
      m += (l+j+l-f+f*g+e*i+g+k-m)%100;
      c -= (g+g)%100;
      k += (i+i)%100;
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
                  i -= (h-b+j-l+m-n+f+i*n*k-f-m)%100;
                  j -= (i-a-j-e*j)%100;
                  e -= (b*m-h+g+d-g+e-n)%100;
                  g -= (l-e+n+e)%100;
                  m -= (n+k+m-m*j+b+l-i)%100;
               }
               for( ; ++FORcnt[44]%5 ; )
               {
                  k -= (i*m+d*b-k+c-b*i*k+b-c+a-h)%100;
                  j -= (i-e+i+j*b*l+d)%100;
                  n += (a+b-a+c-b+i)%100;
                  d -= (h+e+b-m+l+k+n*b+c*g-h+k*e)%100;
               }
               if( ++IFEcnt[29]%2 )
               {
                  j -= (k-l*d)%100;
                  h += (k+k+f*n-b-a+k-e+h)%100;
                  d -= (n*j-k+a+e)%100;
                  m += (c+d-e-g+d+h)%100;
                  h += (k*e-d+d)%100;
               }
               else
               {
                  c += (i*l*e*b+i-d+d+l*n+k)%100;
                  f += (m-j+d+n-f*f+a-i-d+n+e-a+m*d)%100;
                  m -= (m-l)%100;
                  n += (f-a-k+f-l-c+i-j-f*h)%100;
                  k -= (g+n+c*k-m+e+f-h+n)%100;
                  c += (m+m-g+m+c*e*g*l*f+c*i-n)%100;
               }
            }
            while( ++WHILEcnt[29]%5 )
            {
               do
               {
                  f += (b-n-d-c*g+g+d+m)%100;
                  c += (k+m)%100;
                  f -= (b*b+c+l-e-b-a+i+b+i)%100;
                  k += (b-d*j-f+h+g)%100;
               } while( ++DOcnt[30]%5 );
               f += (h+e*j-m-f*m*e+m-f-n)%100;
               for( ; ++FORcnt[46]%5 ; )
               {
                  l -= (i-c)%100;
                  e -= (e-d)%100;
                  h -= (c*l)%100;
                  g  = (j-a+g+m)%100;
                  n -= (a-n+j-n+g+j)%100;
                  j  = (h*f+m+l+f+c+g+g*j-e+j+g*e)%100;
               }
               
               switch( ++SWcnt[15]%3 )
               {

               case 1:
               {
                  m += (h+b-i+c)%100;
                  k  = (m*a-d+n-g*g+j-e+m+h-k+e+e)%100;
                  b -= (d-k-a-e)%100;
                  d  = (b*n+n-h+c)%100;
                  a += (f*m*k+g-n*a-b-j-b*l+f)%100;
               }
               break;

               case 2:
               {
                  e += (n+l*h*m*f)%100;
                  l -= (l*c-k-b+c+h)%100;
                  h += (h*i+d-d-c+e*g)%100;
               }
               break;

               default:
               {
                  h += (b+l+d+g*f*c+j*c+b*c)%100;
                  a += (a+d-m+d*b)%100;
                  i -= (n+c-j+j-g-d-j)%100;
                  f += (b-f*i+l+j)%100;
                  a -= (f-k*l+c)%100;
               }
               }

               if( ++IFcnt[23]%10 )
               {
                  m -= (l-h+g*a-h-f+a+f-g-d+d-e-e+k)%100;
                  h  = (b*b*a+n-i+g-g+j)%100;
                  c  = (l*b-b)%100;
                  f += (b+c*k-e-h-i)%100;
               }
            }
            e += (e+h-j)%100;
            j += (i*d-a+n*a-a*a+e+f-d*a)%100;
            f  = (h*l*a+n+n-e)%100;
         } while( ++DOcnt[29]%5 );
         m += (m*c-m-k+m-a)%100;
         h += (g+m-c-a*f-g+h-g+f+d+h*e+c*j)%100;
         d += (h+a+b)%100;
         j += (h-k+g+g+c+j-b+f-l-b+c+a)%100;
         e -= (n+j-e+n-l*c-j*l-l-k*i+m*c-h)%100;
      }
      i += (f-j*h*f+k-d-a*c-h*c-m)%100;
      h -= (g+e*e*b+h*l*m+k+i+n-n-i-m)%100;
      l += (f+j)%100;
   }
   f += (l-n)%100;
   b -= (m-c-f-d+g*c-j-n-m-k*b-c+k+f)%100;
   c -= (c*l*k)%100;
   l -= (a-a-n+a*l-d-i+a+j)%100;
   j  = (f+g+c+i-m-e*b+e+l+i)%100;
   g -= (k-c+j+f-j+j-e*d-j-j*k-k-i-c)%100;
   l += (f+l-e+d*b*i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F15(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[33]%2 )
   {
      k -= (c+l-c)%100;
      c -= (b*a-e)%100;
      l -= (d*n+c-f*a+k+i)%100;
      a += (m-d+d-e+g*i-i+m-c*d-b*k-i)%100;
      l += (g+m)%100;
   }
   else
   {
      while( ++WHILEcnt[32]%5 )
      {
         do
         {
            for( ; ++FORcnt[48]%5 ; )
            {
               for( ; ++FORcnt[47]%5 ; )
               {
                  c -= (f*b+i+h-c+b)%100;
                  b += (m+j+g+m)%100;
                  j  = (i+k-a*i+m*l*m-n+f-m-j+e+b)%100;
                  a -= (e*j-j+g+a+l-m+l-k+g+b+e-l-b)%100;
               }
               if( ++IFEcnt[31]%2 )
               {
                  l += (l*n-b)%100;
                  l -= (a+c+m+k+f)%100;
                  j  = (e+j-f-g)%100;
                  f -= (i+f)%100;
                  j  = (b+i*e+i)%100;
               }
               else
               {
                  m += (h+l+b)%100;
                  i -= (m*g+h+c+c+i+l)%100;
                  j += (b-f*k+a*f-f+a+i)%100;
                  b -= (g+i*j-g-i)%100;
                  e -= (c+b+j+i-i+a-f+b)%100;
                  k -= (h+b+g)%100;
               }
               while( ++WHILEcnt[31]%5 )
               {
                  a += (l-e-j*j-n+m*h+d-n*d*j)%100;
                  i  = (n+m-h-l)%100;
                  e += (i-g+c+h+n*d-j-h-d-j+h-b)%100;
               }
               do
               {
                  d += (d+b)%100;
                  l += (c-f-n-l+e+n-d-j*a*e+j+d)%100;
                  c -= (g-d+h*d+d-k)%100;
                  c -= (c+l-h-b*n)%100;
                  c -= (i+m)%100;
               } while( ++DOcnt[32]%5 );
               if( ++IFcnt[24]%10 )
               {
                  j += (d-e+g-a*l+f)%100;
                  h -= (f*b+b-n+n)%100;
                  m += (b+e-c+k+g)%100;
                  c  = (n*a)%100;
               }
            }
            c += (n-h-m-n-e*j*b*h+k+d-b-h-g+i)%100;
         } while( ++DOcnt[31]%5 );
      }
      for( ; ++FORcnt[50]%5 ; )
      {
         
         switch( ++SWcnt[16]%3 )
         {

         case 1:
         {
            if( ++IFEcnt[32]%2 )
            {
               e += (a+m*e*c+i-l+e*a-m+k+g)%100;
               n -= (m-d+g*d-e+h-a-d-d*b)%100;
               i += (k+m-l)%100;
               g += (f+e)%100;
               a  = (k+b-k-l+m)%100;
            }
            else
            {
               while( ++WHILEcnt[33]%5 )
               {
                  f += (j*m-a-a*m-c*k-j+b+n-l+b-m+m)%100;
                  f -= (e-m+b*i*l+c-m*d*b+a)%100;
                  f += (a-h+f)%100;
                  j -= (m-n+a*d-i*n+c)%100;
               }
               do
               {
                  m -= (e*n-d+d)%100;
                  h += (n-j-k*c*k-e+d-f*d*h+h)%100;
                  d -= (k-k)%100;
                  l += (h+d+g+g*k+e+k+n)%100;
                  k += (n-c+b+g-j+d+k)%100;
                  f += (k*a+k-e-n+a-l+k)%100;
               } while( ++DOcnt[33]%5 );
               for( ; ++FORcnt[49]%5 ; )
               {
                  m -= (a+m-n*b-c-c+e)%100;
                  m += (b-h+d*m+c-e*g-j-k-h)%100;
                  k -= (h*j*m)%100;
                  j += (h+j+j-k-c-i+j)%100;
                  a -= (k-c)%100;
               }
               if( ++IFcnt[25]%10 )
               {
                  b -= (j-e*d-j+f-n+n-j+b-e-m*c+l)%100;
                  b += (c+k)%100;
                  n += (c-f+k+l-i-i+g-f+m-j)%100;
               }
               e -= (h+f+l+i+d+b+f-d*e*j-g-j+k)%100;
            }
            g -= (g-h-l-n-h+n+n)%100;
            h -= (k+j-b+i+h+e+c+b*f-n)%100;
            f -= (g-a-i+a*b+b)%100;
            m += (l-m-m-m*a+d+g-i*i-j-j+i+j+c)%100;
         }
         break;

         case 2:
         {
            j += (g+c+g)%100;
            h += (l-g)%100;
            l += (k-c)%100;
            k += (e+l-f-e+f+j)%100;
         }
         break;

         default:
         {
            e += (a*f)%100;
            l += (g-b+h+g*e+b*m-f+a+m)%100;
            g += (h*k)%100;
            j  = (h+j+k*h)%100;
            m -= (e+f+a-k+c+k-n*c-d+h*i+g*m)%100;
            j -= (h-f-c-f+g-h+j-c-i+b+g+d+h)%100;
         }
         }

         k += (b-i-c-i*d-i-l-k-n+c-d-b)%100;
         a -= (l-c*f+n+c+a*c-l+d*m*i)%100;
         c += (g+h)%100;
         j -= (f+n-e+g-f-e+c-k+g*l-l-f+l)%100;
         l -= (k*l-b+d-k-d-a+d+a-g)%100;
      }
      m += (m-k+m+d-j+e*n-h-g+m+a-b+k)%100;
      f += (j+c-n-l+h+c-j-h+h-a)%100;
      g += (i-k*c-i+l+n+n*f)%100;
   }
   n += (f-a+b-e+d-b)%100;
   j -= (k-n-g-f+n+b+h*l+g+g*a)%100;
   k -= (l*h+n-j+k)%100;
   l -= (e+c-g*m-k-g+f)%100;
   c += (n-l-b-h-h*k)%100;
   i -= (a*f-n-j-n-l-k*i-f+f+k+k+n)%100;
   a += (m-g-k+b+n+l*k-j-m*h-j+j-g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F16(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[52]%5 ; )
   {
      if( ++IFEcnt[35]%2 )
      {
         i += (j*a-c+e*d)%100;
         b += (l-m-k-f*e*e-m)%100;
         a += (k+h*l-n)%100;
         d -= (n-h*l-m)%100;
         h -= (l+b+g+b)%100;
      }
      else
      {
         while( ++WHILEcnt[35]%5 )
         {
            do
            {
               e -= (m*j-i-j+n*m-k*d-e-a+g-e+e)%100;
               for( ; ++FORcnt[51]%5 ; )
               {
                  e -= (a+c-k*j+m+d-j+c-k-b-c+h+l*h)%100;
                  j -= (m+c-c+b*h*i-f-m)%100;
                  a -= (i+l+l+n-l+b+j+d-l-h-n+d)%100;
                  j += (d+a+l-b+e-m-l*b-d+j+n+m)%100;
                  l -= (d+k*d-d+d-j+g-m)%100;
                  k  = (d*n+d+a-j-h*e-i+b+c-n)%100;
               }
               
               switch( ++SWcnt[17]%4 )
               {

               case 1:
               {
                  h -= (i+e*j-h+j+g)%100;
                  k += (c*l-a*g-l+i+h*a*b-i)%100;
                  i -= (e+m-m+m+k+d*i)%100;
                  n += (a+g+h+a+k+a+j+i+e-g)%100;
                  k -= (j*h-d)%100;
               }
               break;

               case 2:
               {
                  l += (d+l-k-d*e-d*a+i+e+c-m)%100;
                  f += (j+e-d+n+c-m+m+k)%100;
                  c += (c*l-h*f+e-c-f-a-m-d)%100;
               }
               break;

               case 3:
               {
                  h -= (j-a-e+n+n*k+i-a)%100;
                  a += (d-a*h)%100;
                  a += (k*m-a+e+e-g-i*m+c+c-c-c-c)%100;
                  k -= (e+c+c*m)%100;
                  f -= (b-e-n+l-a-a+e+b*e*f)%100;
               }
               break;

               default:
               {
                  d += (h-d-n-j)%100;
                  l  = (i+f+b-g-h-g+l)%100;
                  d -= (c+b)%100;
                  m -= (d-c-m+i*i-f+l+d*g)%100;
               }
               }

               if( ++IFcnt[26]%10 )
               {
                  h -= (e-k-c*b+b+c+d+k+g)%100;
                  i  = (d*a+m-k-b-a-h+n+k*f-m*g)%100;
                  a -= (h-d+b-f+k-m-c)%100;
                  k  = (k+n*i+g+c)%100;
                  h += (k-e)%100;
                  d -= (j*j+f+e+j*a)%100;
               }
            } while( ++DOcnt[34]%5 );
            if( ++IFEcnt[34]%2 )
            {
               c += (m+a+g-a*i-j-b)%100;
               g -= (f-i+b+f+k+f*e-c*j-g)%100;
               g += (g-h-i-a+a*d+c+k-m-h+c+k+n+a)%100;
               c += (c+j-l+m*j-g-b*n-n+j-c+c)%100;
               m += (b+e*c-a+j-h-i)%100;
               n -= (c+h+a+f-b)%100;
            }
            else
            {
               while( ++WHILEcnt[34]%5 )
               {
                  h += (f+c)%100;
                  l += (d+h-n+h)%100;
                  d -= (e+l+m+b-h+j-d*j*h)%100;
                  l += (i-n-a-e-d+f+i)%100;
                  l -= (n+g-k*b*a-b+l-e-f-b*m-e-g)%100;
               }
               do
               {
                  i -= (k-b+i-b-b)%100;
                  d += (c+b+l-i-l)%100;
                  g  = (j+e-n+j-b-j-n+n)%100;
                  e += (j-c-l+n+d*e*e)%100;
               } while( ++DOcnt[35]%5 );
               d += (l*b)%100;
               b -= (m*l+i-g-k*f)%100;
               i += (k-m)%100;
            }
            c += (l+j-c-f-m*d-n-e-c-c+l-h*b*g)%100;
            a += (l-c-b-h+k+c)%100;
            m -= (n-d*e*k+f*n-j+l-h-j+f)%100;
         }
         j  = (n-j*b*n)%100;
      }
   }
   l += (g-i*k-c*j+e-a-d*i+l-j)%100;
   c -= (n*j+m+f+h*n-e-k-d+n+d-j)%100;
   a += (h-l-b-a+l-g+n-h-b-b*n-i+g)%100;
   g -= (g*f-h+l-i*k-e-c+m)%100;
   g -= (n-a*j-h)%100;
   n -= (h-g*h-a+j-d+i+a*f*i+m-l*j-j)%100;
   c += (a-l-i-m-d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F17(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[56]%5 ; )
   {
      for( ; ++FORcnt[55]%5 ; )
      {
         if( ++IFEcnt[37]%2 )
         {
            g -= (g+f-k*a-k+c-m+k+b-b-f)%100;
            a += (b+d-m+n+c*k*k+k-i-e-k*m*b)%100;
            n -= (g-h+a-e-i-b+g-l-j-c)%100;
            m  = (d*a-i-i-m+k-b+d-a+k-e-e)%100;
            e += (a+i-f+b*i*a-h*a+l-l)%100;
         }
         else
         {
            while( ++WHILEcnt[36]%5 )
            {
               do
               {
                  d += (i-n-d+d+m*k)%100;
                  i -= (g-l+m+f-m+i-c+k+n+a)%100;
                  c -= (h+n+f-d+b-n)%100;
                  k -= (j+l-n*m-f-f*n+m)%100;
                  l += (i-j-i*j-j-e-a*l*i)%100;
               } while( ++DOcnt[36]%5 );
               if( ++IFcnt[27]%10 )
               {
                  f += (m+b-j)%100;
               }
               m += (l*j)%100;
               for( ; ++FORcnt[53]%5 ; )
               {
                  n += (i+a-h+c-n+c+h*i-c-c)%100;
                  c -= (l-m-a*l*c-e*m-h)%100;
               }
               
               switch( ++SWcnt[18]%3 )
               {

               case 1:
               {
                  m -= (l+m*d-m)%100;
                  g -= (a+l+a+a*l-h+d-n+j+l+c-i)%100;
                  n -= (b*n*c-a-c-b-l*f+i+d)%100;
                  e += (e-g-l-a-m+l*a+l)%100;
                  g += (d+g-n+g+m*d-a)%100;
               }
               break;

               case 2:
               {
                  a -= (e-b*d*l*e+d*g-k+f+h+g)%100;
                  f += (n-k-e-l+i+g+i+c)%100;
                  f += (k*b+n-d-a-c+g*n-a+k+a+h-i-f)%100;
                  c -= (d+d*i-d*h-c-d+k)%100;
               }
               break;

               default:
               {
                  h -= (f+j-e+c-c+h+i-l-e)%100;
                  f += (g-e+d-e*e+i+g*i+h*a-d-n+c)%100;
                  g -= (f+e*m-d-i-g-a+l)%100;
                  g -= (j+f+k+a*f+k)%100;
                  f -= (c*i-e-c-m+c-c+c*l)%100;
                  g -= (c+d+i+g*i-k+n)%100;
               }
               }

               if( ++IFEcnt[36]%2 )
               {
                  g  = (h+d+g+m)%100;
                  e += (h+k+b-a-c+i+g*l-d-a-n*c*e)%100;
                  l -= (e+k-l-i+c-f*h+d+l+h)%100;
               }
               else
               {
                  b += (m-g+f-f+n-l+f*a+m+n)%100;
                  l += (g+m-i-b-g-e-f)%100;
                  h -= (c+e+n*d+h-l-g-f-l)%100;
                  g  = (j+g+d)%100;
                  i += (i+g-i+n+c+k+b-j+d)%100;
               }
            }
            while( ++WHILEcnt[37]%5 )
            {
               do
               {
                  e -= (e-b)%100;
                  j += (d-h-g-h-m*n-b-g*e-l)%100;
                  i += (f*e+m+i)%100;
                  h -= (e+k+m-l)%100;
               } while( ++DOcnt[37]%5 );
               for( ; ++FORcnt[54]%5 ; )
               {
                  c -= (b-c-k)%100;
                  l -= (e-h-e*f-h-l*h+i+k+k-k+e*l)%100;
                  l += (l*m+i+c+n-m-f*c-b+k+j-i-m)%100;
                  f -= (e+g)%100;
                  l -= (c-f+c+c-f-d+b*l*f*m-i-a+j)%100;
                  n += (m-m+i+i*f*e*j)%100;
               }
               if( ++IFcnt[28]%10 )
               {
                  n -= (j*h-f)%100;
                  l -= (i+j)%100;
                  j += (b+c-a*c*e-m+n*j-j*g*n*m-j)%100;
                  k += (a-k+e-m*l+h-m*l+e-m+n+g-a)%100;
                  m += (c+h-e+d*a-i+c*m*e)%100;
               }
               d -= (n-m+h-m*f-a+a+h*c+j)%100;
               e -= (c+f+g*g*b*i-i+d-f+i-n+f-n)%100;
            }
            f += (a-m)%100;
            n += (f-a+d+f+h+m+a-b+e)%100;
         }
         i  = (b-g-c*a+c+h-m+i-m-l+d+j-g+g)%100;
         i -= (n+d+l*l-c*h+k-e*l-a-n+i)%100;
         f += (g+m+n+k+l+b+l+n-n+l)%100;
         n -= (f-n-m+a+h+a+g+f*e+e+f*b-a+e)%100;
      }
      d += (k-l-g-b+g*a+a+i*e*c-c+e)%100;
      h -= (b-e-l+n)%100;
   }
   d -= (e+j-f-d+f+d+a+j-k+a-g-j)%100;
   e += (l-h+n+m+g*c)%100;
   j -= (h-i+i*i)%100;
   a += (b*m+c+h-m+j-n)%100;
   k += (m-m)%100;
   b  = (c+e-k+c+l-d+k+k-b*h+i+b+f)%100;
   l  = (b-j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F18(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[60]%5 ; )
   {
      if( ++IFEcnt[40]%2 )
      {
         k -= (a-e*l+j-j+c*h-a+n*m*l-j-d)%100;
         m += (k*c-c+l+i-d*k-i)%100;
         j  = (m-e+a-b-e)%100;
         a -= (i-f*m*f*i)%100;
         i += (f+l+k+h+d-d+j)%100;
         n += (m-n+j)%100;
      }
      else
      {
         while( ++WHILEcnt[39]%5 )
         {
            do
            {
               d -= (f-l+j)%100;
               for( ; ++FORcnt[57]%5 ; )
               {
                  n -= (a-f+e-c*j+n-f-a-m+g)%100;
                  n += (m-f-n)%100;
                  h -= (l*k)%100;
                  a -= (i-c+b+g+j+d-n+g-l+n+m*h+i+c)%100;
                  k += (g-c-c+n*l-e+b)%100;
               }
               
               switch( ++SWcnt[19]%3 )
               {

               case 1:
               {
                  n  = (f*n)%100;
                  i -= (h+e-g+j*b+g-c)%100;
                  c -= (l*g*g*f+f+l*m-j-k-m)%100;
                  m -= (g+m+f-c-f-h+a*b*j-f-n)%100;
               }
               break;

               case 2:
               {
                  d += (l*j*l+f+b-c+d)%100;
                  m -= (l+j)%100;
                  d -= (c+m+j*g*c-m-i*f+l-j-a)%100;
                  b -= (h+b+f*h-c-i)%100;
                  g += (j*e)%100;
                  e -= (m+c-k+e-d-i*h+j-g+l-f-n-n)%100;
               }
               break;

               default:
               {
                  j += (d+g+h+b-m*k-n+k*a+e+c-b)%100;
                  d += (k*f)%100;
                  h -= (m+a-f+j-g+m+n-n)%100;
                  g -= (a+a+j*c*e+k+c-n-a+h-h+l-b)%100;
                  i -= (k*f)%100;
               }
               }

            } while( ++DOcnt[38]%5 );
            if( ++IFcnt[29]%10 )
            {
               if( ++IFEcnt[38]%2 )
               {
                  h  = (f+j+b-h+c-h+n-n)%100;
                  j  = (j+m+e-l+e+f-m+j+b+e+b-k)%100;
                  a -= (b+l+a-c+j-j+j-n+i+g-m-a)%100;
                  d += (a+f+d)%100;
                  j -= (l-j+j-e)%100;
               }
               else
               {
                  l += (d+g*m-h-h)%100;
                  j -= (l-a-h*l-i-b+d)%100;
               }
            }
            while( ++WHILEcnt[38]%5 )
            {
               do
               {
                  c += (g+l*m-d-m+e)%100;
                  h  = (c+l+c*e+i-i*f+j+k-k-l)%100;
                  n += (m-n-a*a-c-j+h-f*m)%100;
                  h -= (c*n-c+a)%100;
                  j += (i+j-j)%100;
                  n -= (i-m-f*d-j-m-n*e-b*m+g*l-m*b)%100;
               } while( ++DOcnt[39]%5 );
               for( ; ++FORcnt[58]%5 ; )
               {
                  g -= (f*g+h+e-b*d+b+e*b*h-i*e)%100;
                  b -= (f+c-a)%100;
                  h -= (c-n)%100;
                  b -= (h-e-i+f-e-l+e+i*n+k-c)%100;
                  n += (b-d*j-k)%100;
               }
               for( ; ++FORcnt[59]%5 ; )
               {
                  c -= (f+n)%100;
                  f -= (m-j-m)%100;
                  m -= (k+b)%100;
               }
               if( ++IFEcnt[39]%2 )
               {
                  f += (j+e+f)%100;
                  j -= (g*a)%100;
                  k += (f*h-j+j+k+k)%100;
                  k -= (a*l+k)%100;
               }
               else
               {
                  j -= (a*l+i-f-m-g)%100;
                  n -= (j+f)%100;
                  l -= (a-a*i+b-n*n-f+m-f-n+m)%100;
                  m  = (g-d-k-b-j)%100;
                  a -= (h+f+h-i*b*l+h)%100;
               }
            }
            h -= (d+k)%100;
            d += (n-k)%100;
         }
         h -= (c+g-g+e+c+i-d-j-a-i*f-m)%100;
         b -= (c+d)%100;
         c += (l-a*e+h+a+f*f+l*i+h-f-j)%100;
         e -= (c-h)%100;
         l  = (e*i-c+m+g+m+k+g+b)%100;
      }
      c  = (j*l)%100;
      h += (n+d-i+f)%100;
      e  = (j+m-f)%100;
   }
   g -= (d+f+h+j+g)%100;
   j -= (h+b-b+i-g)%100;
   a += (d*j)%100;
   c -= (i+g+m+j-c+e*b+j*a+i*a-k*l+c)%100;
   a -= (f*c-m-j-j+j-l)%100;
   a -= (a-a-k)%100;
   c += (i-b*a*m+g+d+a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F19(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[42]%5 )
   {
      do
      {
         if( ++IFcnt[31]%10 )
         {
            i -= (n+n)%100;
            for( ; ++FORcnt[62]%5 ; )
            {
               
               switch( ++SWcnt[20]%3 )
               {

               case 1:
               {
                  h -= (k-m*d*l+d-j+n+g-k-m+d-l-l)%100;
                  g  = (g+l-j+e*n-n+g-k+b+g*n+i-l)%100;
                  j += (a+d)%100;
                  c += (m-j*i*d+k-j)%100;
                  h -= (m+k+c-m-b*l+n-b-i+c+c+f)%100;
               }
               break;

               case 2:
               {
                  l += (i-f)%100;
                  e += (l+m+a+e+c+j+m-m*l)%100;
                  n += (f-c*g)%100;
               }
               break;

               default:
               {
                  c += (e+c*b*n-e+g*n+i)%100;
                  l += (c-l*c-i)%100;
                  c  = (f*c-n*j*l-c-n*h-k+f+l*j)%100;
                  m  = (m+k)%100;
                  i -= (k-l+h-j-i*g*c)%100;
               }
               }

               if( ++IFEcnt[41]%2 )
               {
                  e -= (k*g+f-b+i*l+d-g)%100;
                  h -= (h-n+k+m-m-a)%100;
                  g += (h*a*f*l*k-c-a-c+j)%100;
                  m -= (c-d+e-m+g*l+k-l)%100;
                  f += (n*f-j+l*j-k+k-n+n-e+h+g)%100;
                  i -= (i+l+a+j+e-m*c-h+c)%100;
               }
               else
               {
                  b += (b+g+i*i+e)%100;
                  h -= (g*c*f*d)%100;
                  k += (i-h+m-j-j+l+g*l+k*m-g-m)%100;
                  l  = (i-m+a+d-c+f*a-a-j-g+j+c-h-i)%100;
               }
               while( ++WHILEcnt[40]%5 )
               {
                  a += (a+k+d*i*e-k*f-h+k)%100;
                  k  = (h-b)%100;
                  a -= (e-a-a+g+n*i+g+i)%100;
                  d -= (d+b*a)%100;
                  b -= (f+k+g-b+c+j-h-b*l-l-b-n+c-e)%100;
               }
               do
               {
                  n += (c-m+g+i)%100;
               } while( ++DOcnt[41]%5 );
               for( ; ++FORcnt[61]%5 ; )
               {
                  k -= (c-k+n+n-n-k*l-g+h+g+f*e)%100;
                  k  = (b*b+j*n+j+n-h*m+l-d-a+b)%100;
               }
               if( ++IFcnt[30]%10 )
               {
                  l -= (n+f-b*l-h*l-n+m+d-d-j)%100;
                  d += (a+h*g+i-l)%100;
                  e -= (h-e-l*e*i+e)%100;
                  c  = (a+d)%100;
                  b += (j-i+d-b-l+c+h*h+a-l-d+k)%100;
               }
            }
            for( ; ++FORcnt[63]%5 ; )
            {
               if( ++IFEcnt[42]%2 )
               {
                  e += (k-n-i+n+b*a*m-b+l+f*f-j+k+b)%100;
                  h -= (k-g*a-d-b)%100;
                  k -= (c+l*g+a*n-h-j*b*d*c)%100;
                  f  = (f+h-n-j-k*c*m-a)%100;
                  l -= (g*g-d*n*d+l-h+f+i+j-m)%100;
               }
               else
               {
                  j += (m+b)%100;
                  f -= (m-k*g+h-a+f)%100;
                  g -= (h-e+k-i+e+i-h+b-l*j-j)%100;
                  i -= (d*a-b-a+a+b-f*j-l*l+g)%100;
                  n += (d+n*i-l*k-h+e+d*i+h-e+m+e)%100;
                  f  = (e-f)%100;
               }
               while( ++WHILEcnt[41]%5 )
               {
                  j += (d+e+m*k-k-d+k-d+f-a)%100;
                  f -= (l-i)%100;
                  f -= (k-k)%100;
               }
               n -= (a-n+c+b+i*l*k-j)%100;
               d += (h-a+l+c+k-m+g+j)%100;
            }
            g -= (g+h*e-m-g+f+i-b)%100;
         }
         e -= (c+g*l+f*j-l)%100;
         j  = (f*h-f-n)%100;
         a += (h-j*e-f-c)%100;
         e += (a-i+f)%100;
      } while( ++DOcnt[40]%5 );
      d += (f+j*b+f+b+d-a)%100;
      n  = (e-m+c-c+d+n+k-f+d)%100;
      j += (e*c)%100;
      i  = (g+h-k-a-m-j-n+l-m*e+i+e)%100;
   }
   b += (c+a-f*m+f+h+j+c+c+i*l*j)%100;
   j += (l+b)%100;
   d += (f-f+k*c)%100;
   e += (f-j+d-c-c+a*n*h)%100;
   f += (n-m+g+n-c+b-l)%100;
   m  = (i*k+m)%100;
   n -= (n*e-c+j+b-i-e+a-j*d+f+b*n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F20(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      k -= (n-j+k*i-f+f+c-l)%100;
      for( ; ++FORcnt[67]%5 ; )
      {
         
         switch( ++SWcnt[21]%3 )
         {

         case 1:
         {
            if( ++IFcnt[32]%10 )
            {
               if( ++IFEcnt[43]%2 )
               {
                  k += (i+b+j-a*k*k+k+j-f+j)%100;
                  g += (c-c-i-a-b-k*k-j*j*m)%100;
                  n -= (e+m*d)%100;
                  n += (f-l+f-i*c*e-a+l+c)%100;
               }
               else
               {
                  c += (b+a-e-g+c+f-a-d-g+m*l)%100;
                  n -= (d-h-h+b+c-g-b-h)%100;
                  e += (b*l*j-i+m)%100;
                  k += (b*k+f-c*c-k-k-j-d*m-m+d-m)%100;
                  j -= (h+b+c*a*f-l-j-f-i*g*f)%100;
               }
               while( ++WHILEcnt[43]%5 )
               {
                  n += (j*l+j-l+n)%100;
                  c += (c-g+l-f)%100;
                  f -= (a-l+m-i-k*h+a-l+m+k*n-n+j+m)%100;
                  d  = (c-m-a+k+i-m+m+m-f+b-j)%100;
                  j -= (k-j*g-n*f-d*l+d*e-l-m+n+m+l)%100;
                  h -= (f-g)%100;
               }
               do
               {
                  c += (g-j-l-d+n*g+j-c+e*b)%100;
                  i  = (k+n*n+m+k-d-m)%100;
                  c  = (i+g-d-g-a)%100;
                  a += (a-h*l)%100;
                  e -= (j*l+g*b+e-d-k*a+h+f-n)%100;
               } while( ++DOcnt[43]%5 );
               for( ; ++FORcnt[64]%5 ; )
               {
                  k  = (b+g+a+l-b+a*g-k+a-l*n+e)%100;
                  b += (e+h)%100;
                  c -= (e*j+d-c+e)%100;
               }
               for( ; ++FORcnt[65]%5 ; )
               {
                  k += (g+f-l+h)%100;
                  n += (c*j+m-b*j-j+e-j-i-k-g-l-c)%100;
                  n -= (n+i)%100;
                  g -= (g-b+j+c+d+l+g-b*j-k-i+b-l+g)%100;
                  m += (f-i-e*j+c)%100;
               }
            }
            if( ++IFEcnt[44]%2 )
            {
               for( ; ++FORcnt[66]%5 ; )
               {
                  a  = (h*i*h+n-k+a*n+a-h)%100;
                  l -= (a*c-f-h+h+e-k*h)%100;
                  f += (n-l+c-d-k*n*l+k-h)%100;
                  b += (h-n)%100;
                  d -= (h+c-n*d)%100;
               }
               
               switch( ++SWcnt[22]%4 )
               {

               case 1:
               {
                  i -= (a-m-k*j)%100;
                  h += (h+g+g-k+e+b-n)%100;
                  f  = (a+l+l+g-m-m-k)%100;
                  l -= (c*d-h+d-l+a+b)%100;
               }
               break;

               case 2:
               {
                  e -= (m-l+f*k)%100;
                  d += (n+n-h-b-n+h+j*n+m-b+h-n-m+c)%100;
                  j -= (e-d-j+b-b+e-j)%100;
                  f -= (g*h+e*c+j+g+k-h+k+c+a*h*a)%100;
                  k += (d+l+k+c+n*b+d+e-j)%100;
                  m -= (f-f-g*c*h-l-k-h+i+k+j)%100;
               }
               break;

               case 3:
               {
                  n += (c+k+m+d)%100;
                  h  = (n-e+f-i-g-k+i)%100;
                  c -= (m+e+n)%100;
                  g += (h+a+c+b+e-n-a-i)%100;
                  n -= (n-d+a-h-c*c+i*c-l+f*h*g)%100;
               }
               break;

               default:
               {
                  e += (m-j+g)%100;
                  n -= (h-f)%100;
                  g += (b+f*f-a-c+i-b)%100;
               }
               }

            }
            else
            {
               while( ++WHILEcnt[44]%5 )
               {
                  n += (d-h+l-j-l+n)%100;
                  f -= (k+b-l-b)%100;
                  d -= (d+h+i*g-b-i+f-j+m-n+e)%100;
                  f -= (d-l*k-j-i*l+j-l-k+a+l)%100;
                  b += (i+f+e-i+l-h-k*h+c+b+l-f-n-l)%100;
                  m  = (h+i)%100;
               }
               do
               {
                  d -= (b+i-a+h+k+d*m-i*d*k)%100;
                  k -= (m+a)%100;
                  d += (f-b-h*c+n-d+k-l)%100;
                  n -= (c*l-b*h+g*g*c*a+l+b-a)%100;
                  n += (b+m)%100;
               } while( ++DOcnt[44]%5 );
               if( ++IFcnt[33]%10 )
               {
                  d += (c-a-c-a*l)%100;
               }
               b += (g+i-a+c-n-b)%100;
            }
            k += (e-b*h-f-n+a+c-j-m+l-h+c+k-f)%100;
            i -= (g+g-d-l*l*g)%100;
            e -= (n-e-h*d-i-l+a+m)%100;
            a -= (m*a-a+m*i+a+d-n+d)%100;
         }
         break;

         case 2:
         {
            m += (h-k)%100;
            l += (g*c*g-c-b-b+i+i+m-h*j*m+h)%100;
            a  = (a+e-h+a)%100;
            j  = (n*a-f+j)%100;
            h += (a+f)%100;
         }
         break;

         case 3:
         {
            f  = (d+e*a-l-d-b*i+j*j+k)%100;
            m -= (h-b)%100;
            i += (e+i*c-m)%100;
            d -= (l+n+j+i-n-b-f+a-h*f*c*b)%100;
         }
         break;

         default:
         {
            b += (f*n+n-a+f*b+b+g+k-m*l)%100;
            j -= (a+b-b*a*c-b*g)%100;
            e -= (j+c*e+n*h+n)%100;
            c -= (l*k+c)%100;
            j -= (d-f*k-e+b)%100;
            c -= (g-b+g+l-a-f+a-c-e+k)%100;
         }
         }

         a += (a*n*f-m-h*n*l*b-i-f-k)%100;
         k += (n*d-h-e-j+i*b-h+k+f-j)%100;
         c += (l+h-f+c-c*e-g-i*d+f+e+e-k)%100;
      }
      g -= (b+n-g+g+b+b-d-a-n+b+k)%100;
      e -= (h+c-a+j+d+j-l+b*c-d)%100;
      h -= (m*c-b-d*a+g+i)%100;
   } while( ++DOcnt[42]%5 );
   l += (j+j)%100;
   g -= (l-d-n-a)%100;
   d += (l*g*d+g-a)%100;
   b += (m-f-h-b+e*g-l*l-j)%100;
   l -= (l+l)%100;
   e -= (h+g*a*k+n+j*f-h+i+f*k)%100;
   h += (m-m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F21(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[46]%2 )
   {
      m += (l+f-k-k+e+e+e*d-d+f-b-g+k)%100;
      a -= (d-b-g+c+i-j*a)%100;
      k -= (g-g-l-c+m*g+n)%100;
      e += (a+j+f-m*n+e+f-a-b-n-m+i)%100;
      g -= (g-g-c+m+n+k+i-f*e*e*d*b*l)%100;
      m  = (d+c+b-j-a+h+b+b+i-h)%100;
   }
   else
   {
      while( ++WHILEcnt[46]%5 )
      {
         do
         {
            for( ; ++FORcnt[69]%5 ; )
            {
               if( ++IFcnt[34]%10 )
               {
                  l += (c+g-m*f-f+e-g*m*c-c)%100;
                  m += (h*j)%100;
                  b -= (m+n+d*n)%100;
                  a -= (j-l+i-d+l+b+n+h+j+l+c+k+a+c)%100;
                  l -= (c*a-f-d+f+m-g+f+n-k-i)%100;
               }
               for( ; ++FORcnt[68]%5 ; )
               {
                  g += (i+i+c+e+d+m)%100;
                  h -= (b+e*g-f+m+n)%100;
                  c -= (g+f+i-c*b+d+e)%100;
               }
               if( ++IFEcnt[45]%2 )
               {
                  c -= (h+a-c-f+c+m-c)%100;
                  d -= (a-e-d+k+e+d+e+i*m+a+g*l-e)%100;
                  l += (k+j-e+j*d-i-m+f-i-b-n+n)%100;
                  b -= (c-f)%100;
               }
               else
               {
                  h -= (k-n)%100;
                  e += (i+m-e*b+l+i-b-l+b-d-i-j)%100;
                  a -= (b-a-h-f-j-d-a+n+d*h+n*d-a+e)%100;
                  b -= (m-l+k-c-f-i)%100;
                  d -= (d*a-m-h+f+c-i+m-d*n+k*j)%100;
               }
               while( ++WHILEcnt[45]%5 )
               {
                  l += (f*a*d-g+l+a+l+c*h+j+c+k-d-h)%100;
                  e -= (f+n+h+g-f+e*h+j)%100;
                  g -= (f-h*j+g-e+m-l)%100;
                  h -= (n+d)%100;
                  b += (m+m+e-b+k)%100;
                  g -= (c*l-i-j-i+i-j-f*l*f+l+h*a)%100;
               }
               do
               {
                  e -= (d-b-m*n-j*e+d-a)%100;
                  a -= (e+g)%100;
                  g -= (k-k-e+j-j)%100;
                  c += (i-n-k+f-m-j+j*n-d)%100;
                  h  = (j-c+b-e+e-d-g+j*m*b+c)%100;
               } while( ++DOcnt[46]%5 );
               l += (j-e*d*k-b*f+g-e+k)%100;
            }
            for( ; ++FORcnt[70]%5 ; )
            {
               
               switch( ++SWcnt[23]%3 )
               {

               case 1:
               {
                  l  = (h+b+c*b+c*b+d)%100;
                  m += (m-h-l*b+d+c-l*b-m)%100;
               }
               break;

               case 2:
               {
                  h += (h+i+f-b-l-i*g*a-k*d)%100;
                  d  = (d-m+k*g+b*l*c+m)%100;
                  i -= (j+m-h+h-g+l-d*j-e*h)%100;
                  n += (h*g+j-k+h-l-j+b)%100;
                  l -= (m+a*g+g)%100;
               }
               break;

               default:
               {
                  g -= (b-n)%100;
                  e -= (d+h-b+j-j)%100;
                  b -= (m+b*d-e*b-d+b)%100;
                  e -= (m-m+e-a+a+d*h+i+n*k*f*h+h*i)%100;
               }
               }

            }
            k  = (g+n-k*l)%100;
            l -= (h-f)%100;
         } while( ++DOcnt[45]%5 );
         b  = (a-h*k-g-c-f-k+a*i)%100;
         m += (d+h)%100;
         k += (b-b+b+a*d-k+k+f)%100;
         h -= (m*h-k+j+g-m*b*l+b-i)%100;
      }
      h -= (a-k*d-h+i+g*k+h*e-n+e-j-d+i)%100;
      e += (j-i*d-i+l+j)%100;
      a += (i+k+i+c*l*h+m+a*h-i*i-n)%100;
      h -= (f-a+f)%100;
   }
   d -= (f*e-i*n+i*g*k*j*l+n*g+b-c)%100;
   g  = (a+h+n+j*l+j-m+n+k*f+l-m)%100;
   l -= (n+d)%100;
   f -= (b-c*a+n-j+b+h+l+n+j+j-n*f-k)%100;
   h += (e+k+k+i-i+f-f)%100;
   g += (e+f)%100;
   g -= (g+j+j-b*l-b*g)%100;
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
         h -= (i-k)%100;
      }
      else
      {
         while( ++WHILEcnt[48]%5 )
         {
            do
            {
               for( ; ++FORcnt[71]%5 ; )
               {
                  b += (c+j+h-a+i+h-c)%100;
                  k -= (k-d+f+n-i*e-n-l-g+f)%100;
                  j += (i+f)%100;
                  l -= (b*a+c-f+j-k*e-e-k+i-k-k-j-b)%100;
                  k += (l-l+b-b*f+c)%100;
                  m += (d*m)%100;
               }
               for( ; ++FORcnt[72]%5 ; )
               {
                  m += (m+g*g+h*e+l+m+f)%100;
                  k -= (l-c)%100;
                  d -= (e-f*h+n+f)%100;
                  f += (i*a*f-c*h+i*d+d+e+i)%100;
                  d += (c-g-n+j-n+e+i-c*m*b-n)%100;
               }
               if( ++IFEcnt[47]%2 )
               {
                  h -= (f-b)%100;
                  h -= (e*j)%100;
                  f += (n*h)%100;
                  e -= (f-g*a-m*b)%100;
               }
               else
               {
                  f += (g+l-c+g)%100;
                  m += (b*c+d)%100;
                  b -= (k+j)%100;
                  c += (f*m+h*n-c+d-e+k)%100;
                  g += (i*h-a)%100;
               }
               while( ++WHILEcnt[47]%5 )
               {
                  d -= (d+m-e*i+i)%100;
                  k += (m+b+l-g*h-n-c+g*d-l)%100;
                  g -= (f*m-n+i+k*g*g+n)%100;
                  f += (j-m)%100;
                  b += (l-h*l+c)%100;
                  k += (n-c+h+f-d*m*l-c-i-d-n)%100;
               }
            } while( ++DOcnt[47]%5 );
            do
            {
               if( ++IFcnt[35]%10 )
               {
                  m += (e-b)%100;
                  a -= (e*b+g-n+a+h+g)%100;
                  c += (b*h*d)%100;
               }
               k += (d*a+d-i-k+m-a*l+m)%100;
               for( ; ++FORcnt[73]%5 ; )
               {
                  m -= (n*g)%100;
                  k += (m-e-f+l-d)%100;
                  l -= (h+h+h*f)%100;
                  n -= (e+m-c-c-n)%100;
                  c += (e-c-l-m+j+c-b*a-g*c-l+i+c)%100;
               }
               
               switch( ++SWcnt[24]%3 )
               {

               case 1:
               {
                  i -= (f-i+a+f*h+e)%100;
                  b -= (m+e*d+a)%100;
                  k += (j+d*i+m*n-h-j+i-m+g)%100;
                  e += (g-a-k)%100;
               }
               break;

               case 2:
               {
                  i += (e+a)%100;
                  f += (c-d*n+a*m-c-l+a+i-a-j+f-d)%100;
                  l -= (a-e+l+k+f-a)%100;
                  d -= (c-n*n*c+l*b*f-h+h-j+b+d)%100;
                  d -= (f-h-f+h+j-b-i-l-i+d-e)%100;
                  f -= (d*c*h+l+a+g*b-n)%100;
               }
               break;

               default:
               {
                  c -= (c-d+c*i+k-j+h)%100;
                  h += (h-l+l+c-m+n-g+b-g+h-n+h-a-h)%100;
                  n += (c-l+g-j*n-m*h-g*f-i)%100;
                  d -= (c-j*b+j*c*l+h*d-a-n+c+n*h)%100;
                  g  = (m*i+d*m+n+d+g-j)%100;
               }
               }

               b  = (g+d-n+a+i*l+a-j+d-m)%100;
            } while( ++DOcnt[48]%5 );
            c += (l+l*g+c*k+l)%100;
            b -= (k+b+i)%100;
            g -= (a-g*f+k*a+b-m*a)%100;
         }
         j -= (g+f+j+n+b)%100;
         i += (n-i+n+i+f-k+j*h+j-g+h+m+h)%100;
      }
      j -= (a*m)%100;
      a -= (h-k+l*a)%100;
      n  = (g+n)%100;
      m += (k+n)%100;
   }
   i -= (m*m-k+f+k-m*i)%100;
   a += (l+f)%100;
   f += (k+m+c+n)%100;
   a += (m+g)%100;
   k -= (b+f)%100;
   m += (i*e*l+m-e*n*i-m*b+f*m*d)%100;
   k  = (k-j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F23(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[51]%2 )
   {
      l -= (d+c-m-e-d+g+i)%100;
      f -= (l-a+e-a+j-m)%100;
      f -= (d+i)%100;
      l -= (e+f*k)%100;
      a -= (n+j)%100;
      c += (i-l+h-j+l*g-a+h-f*j+g-n)%100;
   }
   else
   {
      while( ++WHILEcnt[50]%5 )
      {
         do
         {
            for( ; ++FORcnt[75]%5 ; )
            {
               if( ++IFcnt[37]%10 )
               {
                  k += (l-e*a-a+e*m-j+l+e+b-f*c+m)%100;
                  n += (m-l-h*i)%100;
                  h += (j+n-k+h-m+h*f+d)%100;
                  n += (j+j-d*l+c+a+m+l-b*a-j+l)%100;
                  m -= (i+n)%100;
               }
               for( ; ++FORcnt[74]%5 ; )
               {
                  c += (j-g-a*d*m*b+k+b-f-a+k+g-f)%100;
                  k -= (d*k+f-e*e-n)%100;
                  e -= (m*n)%100;
               }
               if( ++IFEcnt[49]%2 )
               {
                  k  = (n+j-h+d+j+a-i-h)%100;
                  n -= (g-b+n-n-k-i-i)%100;
                  m += (b+l-l+h-l-d+n-d*d-m*f)%100;
                  d -= (j-h+m-m)%100;
               }
               else
               {
                  g += (d*e-a+m+h-d+d+b+g)%100;
                  k -= (m+i+e)%100;
                  k -= (f*l*i+a+e)%100;
                  e += (d*c+a-b*k-b+e*l-h*j)%100;
                  c += (a-h-l-b+m+e-m*m+f-j)%100;
               }
               while( ++WHILEcnt[49]%5 )
               {
                  f += (h-d-e+i+l-f+n+d+k)%100;
                  n -= (c+a+l-h-d-c*j+e+d)%100;
                  i += (m-c-k+j-f-d)%100;
                  k += (n-d+a+l-c-h-k+e*f+h)%100;
                  b += (c*i)%100;
                  g += (m*d-d*n+k-g-n-m*n+i)%100;
               }
               do
               {
                  c -= (m*n-a+l*g*n-a)%100;
                  g += (a+n-f-d+m)%100;
                  j += (k-g+d-b*m-f)%100;
                  g -= (d-m+j*l)%100;
                  f += (l+a*f+l+h*n)%100;
               } while( ++DOcnt[50]%5 );
               e -= (f-j+l+c*j+g)%100;
            }
            for( ; ++FORcnt[76]%5 ; )
            {
               
               switch( ++SWcnt[25]%3 )
               {

               case 1:
               {
                  c -= (m+m+f+i-j+n+h)%100;
                  l -= (l+h)%100;
                  f -= (b+c)%100;
                  h += (e+e)%100;
               }
               break;

               case 2:
               {
                  i += (b-c-a*f-f)%100;
                  n -= (m*h+e-l+n+e*c+j)%100;
                  j -= (a*f-i-n-i-c-l)%100;
                  i += (a+h*f+c-i)%100;
                  g += (k-d-l+m+b+n-h+d+f)%100;
                  m += (g+i+f-l+g+l+c-e*n*l+c-c-i-b)%100;
               }
               break;

               default:
               {
                  i -= (h-l+i+e*g-g-b-i+c+j*l*n)%100;
                  a -= (f-d+m-e-b+j-n*m-j-a-h+g+n)%100;
                  h -= (j-k*h+g*m-n+b-a-a*b*a)%100;
                  b  = (f*m-g-j-j+g+h*f*a)%100;
                  c += (i-j)%100;
               }
               }

               if( ++IFcnt[38]%10 )
               {
                  l -= (k+d-k-k-i-g-c-a+b)%100;
                  n -= (n*j)%100;
                  l += (b-j)%100;
               }
               if( ++IFEcnt[50]%2 )
               {
                  k += (m-k)%100;
                  a -= (e-d)%100;
                  n += (k*m-l-g+i)%100;
                  i  = (i+l)%100;
               }
               else
               {
                  g -= (i-j-h-g-j*a-e+b*h-i)%100;
                  d -= (i+a*j+k*f+i-b-k+m+l+f-g)%100;
                  f += (i-m)%100;
                  c -= (b+e*g+f-g-g*b+m+h)%100;
                  l -= (m-b-e*g)%100;
               }
               l += (j*h-h+k-d-k+b+i-n*c+b)%100;
               j += (k+d)%100;
            }
            c += (k-n)%100;
            m -= (c-h-l-j+c+l-f+e*k-f-g)%100;
         } while( ++DOcnt[49]%5 );
         e += (m+a+k+i+b*m-m-e*h-f-l*j-i+a)%100;
         f += (b+n-i)%100;
         i -= (h-e)%100;
         l += (e+e-d*d*n-j+m+l+g+g+a+e)%100;
      }
      h += (e-k*f-g+k+b+e+a+l-d+d)%100;
   }
   n -= (c-i+n-d+m+m-l-i-i-b-k-n+g-e)%100;
   i += (i*h)%100;
   l -= (c-e+h+j-f+b+e)%100;
   i += (k-j)%100;
   e -= (f+n*i-a*b+a+l)%100;
   l -= (c+a+e-n*j+c+k-m+h-l+h+i-n)%100;
   c -= (l-g+e-g-e-j-a+d-l+i-k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F24(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[52]%5 )
   {
      do
      {
         for( ; ++FORcnt[79]%5 ; )
         {
            for( ; ++FORcnt[77]%5 ; )
            {
               if( ++IFEcnt[52]%2 )
               {
                  i += (k+b+m*g-g-h*d*m*d-d+g+l)%100;
                  l -= (i+c)%100;
                  g -= (h-d-c*e-j-c+l*m+d+a)%100;
                  a += (m+n)%100;
                  m -= (e*d+n-g-i-j-b)%100;
                  m += (c*n+d-f*h+g+l)%100;
               }
               else
               {
                  c  = (h-g-i+l*j)%100;
                  h += (m+g+d+l+i-m-h-a*b+j+i-f-j)%100;
                  e += (b+m)%100;
                  j -= (h-i+m-d*d+e-h+a*g-k-h-n-f)%100;
               }
               while( ++WHILEcnt[51]%5 )
               {
                  h += (j-f-j*m+g+k-f)%100;
                  n -= (b+l-f*g+m+h+n+j+d+n*n*b+h)%100;
                  i  = (f*n+h+i*a+b*k+e)%100;
                  j += (d-a-g+i)%100;
                  c -= (f-g)%100;
               }
               do
               {
                  j -= (j-b+c*f+g+j-a)%100;
                  c -= (e*a+a+d-h-k)%100;
                  l -= (e*c-g)%100;
               } while( ++DOcnt[52]%5 );
               if( ++IFcnt[39]%10 )
               {
                  a += (l+i-f+k*l-l)%100;
                  k -= (m*b)%100;
                  b -= (d+c-j+g*c*f-d-d-g-n+h+a)%100;
                  f += (e-m*d+e+a-e-n-c+d+e)%100;
                  d  = (l-i+n*l+a*g*l-e)%100;
               }
               a -= (c+g+e-e-a-b*l-l*n+k-g)%100;
            }
            for( ; ++FORcnt[78]%5 ; )
            {
               
               switch( ++SWcnt[26]%4 )
               {

               case 1:
               {
                  a += (d*l)%100;
                  e -= (a-e+n+b)%100;
                  h += (a+f*k-i*e-e+h*g*c-e*h*h)%100;
                  g  = (j*b-k-g)%100;
                  f -= (f+k)%100;
                  l -= (a-g-i*m+c-g+n)%100;
               }
               break;

               case 2:
               {
                  a += (n-h+e+d)%100;
                  d  = (c-f)%100;
                  j += (c-f*d+e+d-n*m-l+e)%100;
                  c += (c-i*b-b+l-c-j-k*g-n+l*m-m)%100;
                  b -= (m*h-j+l+f-i-d-f*j+i+n-g+d)%100;
               }
               break;

               case 3:
               {
                  c -= (e+c-f*f-c+n-k)%100;
                  j -= (k-m+i*f+i-c-a*e+j-j-d+k+f*a)%100;
                  j -= (j+c-a-h+i+g-k*g+i)%100;
                  h  = (d+m-e*i-f+b-l)%100;
                  b += (j*g-c+h)%100;
               }
               break;

               default:
               {
                  d += (m+f+l+k*i+l*l+h-e-h*i+l-g+i)%100;
                  c -= (m+c)%100;
                  g += (a+n-k*j-d+d-d*m-e)%100;
                  h -= (c*n+e)%100;
               }
               }

               if( ++IFEcnt[53]%2 )
               {
                  d -= (j*c-k-g+j+n)%100;
                  k -= (b+i*n-c-m)%100;
                  k -= (e+f+l+f+j*f-d-n-l*c+h+f)%100;
                  h -= (f-h*l*d-l-g-c)%100;
                  e -= (i+m)%100;
               }
               else
               {
                  n -= (i-g*h*m-b+i-b-i*a-n+i)%100;
                  m += (g-m-i*k*c+l+h-m-n+i-f)%100;
                  e += (c*h*g-d+f-m+k)%100;
                  h -= (b+c+m*b*i-d*j+i-b+k+d+d-d*h)%100;
                  a -= (a-c+n+e-g+n*k+f*n-d-l*c)%100;
                  j += (i*l-j*d*n*l-b-e-i*j)%100;
               }
               b += (g*m+i-j-f+c+d+m+j)%100;
               c += (f-h)%100;
            }
         }
      } while( ++DOcnt[51]%5 );
      n += (g-n)%100;
      a += (f-g*f-j-i+m+h*l)%100;
      a += (k-i-d+j-k+f+d-b*a*b+d-j)%100;
      e -= (d-m-a+f)%100;
   }
   l -= (n*n+f*k+h-a*c+a+g-m-h+l)%100;
   i += (a*f)%100;
   l += (k+k)%100;
   e -= (g+k*j*f-l-n-k-b-m*b+a)%100;
   g -= (l+a+d-f-m-m-m+j-e+k*l-j)%100;
   l -= (h*j-l)%100;
   n -= (j-i+f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F25(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[55]%5 )
   {
      do
      {
         for( ; ++FORcnt[83]%5 ; )
         {
            if( ++IFcnt[40]%10 )
            {
               for( ; ++FORcnt[80]%5 ; )
               {
                  e -= (a+g*g+g-n)%100;
                  h += (d*n-m-l-j-n*j*e+f-m+g-n+d)%100;
                  d += (f+k)%100;
                  l -= (k+n+i-g*i+c-j-k+b)%100;
                  b -= (h-j+h-m-g*g+i*j-h-n+j-m-e)%100;
               }
               if( ++IFEcnt[54]%2 )
               {
                  k -= (m*k+d-j+l+d-e+g*n+g-h-a*n+c)%100;
                  f -= (e-i)%100;
               }
               else
               {
                  k += (e*f+e+i+l*g*n+n*d-j+b)%100;
               }
               while( ++WHILEcnt[53]%5 )
               {
                  e += (a+h-f*e+f+n+m-h+g-d-n)%100;
                  j += (b-j-b+l+m+n+h+k+b+k-d+j*d)%100;
                  d += (f+m*j)%100;
                  k += (a-k*i-k*i*k-d+l-n+b+n)%100;
                  a += (h*h+d+n+h+n-f*n*h-l+c*n-a-e)%100;
               }
               do
               {
                  l += (b-d*f*i+m-f+a)%100;
                  e  = (m-k+k*m+h)%100;
                  k  = (g-e+b-g+j*l-h-m-e-n+h)%100;
                  c -= (n-d)%100;
               } while( ++DOcnt[54]%5 );
               a += (d*a-a-e-k*k)%100;
               for( ; ++FORcnt[81]%5 ; )
               {
                  a += (h-n-g-e+a-j-m-d)%100;
                  j -= (f+g-d*h-k*j*l+g+g*c-f)%100;
                  k -= (k-j-h-j)%100;
                  i -= (k-f+m*m-i+c*l+b+e+d*h*a)%100;
                  i -= (a-m-c-i+b+e-a-i*d*m+d*n+m*i)%100;
                  i += (j+a*g+n+i-n-h*h-e+d-n*e+i)%100;
               }
            }
            
            switch( ++SWcnt[27]%3 )
            {

            case 1:
            {
               if( ++IFcnt[41]%10 )
               {
                  f += (d+f-l+j+d)%100;
                  l  = (e-m)%100;
                  a  = (l*a*i*g+f+c*e-k-l)%100;
               }
               if( ++IFEcnt[55]%2 )
               {
                  d -= (f+k+l-h+j+i+b-f+c)%100;
                  i -= (k-g+k+i+n*d-g*j)%100;
                  i -= (h*e-k+e)%100;
                  a -= (a-j-h+i-h+i-j*n-d-h*h)%100;
               }
               else
               {
                  k += (j+j-m*c+g+d+c-g-h+h+c*j)%100;
                  j += (d-c-h*d-n-b+b+k-e+a)%100;
                  m += (i+e)%100;
                  j  = (e+b*i+n-a*f)%100;
                  a  = (b-f-c+c+a-j-c-j-i)%100;
               }
               while( ++WHILEcnt[54]%5 )
               {
                  c += (c*g+c+n-k+d+f*m+i+f)%100;
                  i += (b*f-e+h*a-m-n+f*c-c+a*k+e*l)%100;
                  m  = (b-l+i-j-i-h+j+l)%100;
                  l += (h*c)%100;
                  l  = (h+m+a+a-c+j+c-e+l*d+k+n*j)%100;
                  b += (e+c+f*h-h+a+j+m-m-i*b)%100;
               }
               do
               {
                  n -= (b*c)%100;
                  j += (f-c)%100;
                  i  = (e-f+k+j-g+i)%100;
                  h += (h*f-m+e-g+d*g+f+i+i-i-k)%100;
                  h += (m+d-a-g+e+e+d)%100;
               } while( ++DOcnt[55]%5 );
               for( ; ++FORcnt[82]%5 ; )
               {
                  l += (b-n+i-h*h*h+l-k+l+b*m)%100;
                  g  = (e-i+a*c+m+c+l+h+n*f+k-h-n-l)%100;
                  l  = (m+n*f+h*g+b-b*f-g*d)%100;
                  h -= (m+g+a*f-l*g+k)%100;
                  n -= (m-b)%100;
               }
            }
            break;

            case 2:
            {
               b -= (e*d)%100;
               d -= (l-k+n+j-d*f+k-c*h+g)%100;
               k += (n*j+j+h-f*m*k*j*e-l*i*l-b)%100;
               n += (i-f)%100;
            }
            break;

            default:
            {
               g -= (d-m)%100;
               n  = (i+f-e)%100;
               l -= (n*a+d)%100;
               i -= (d-l)%100;
               a -= (l+f+j-j-a)%100;
               g -= (k+b-i)%100;
            }
            }

            h += (f+a*e*f-l+b+k+e*c-k-m-k+m-a)%100;
            n -= (k-h-n+k+b-a-l*n*i)%100;
         }
         j += (n+a+n+i-k+b-j*j+j-h-e)%100;
         e += (e+j-b-k+a)%100;
         a += (a-f+g-d+m*d+g-h-d-k-g)%100;
         c += (l*c+g*b-f)%100;
      } while( ++DOcnt[53]%5 );
      i -= (a-e)%100;
      m += (j-j*e+f-k-f+k+g)%100;
   }
   h -= (a-b*h+k*m-c+j+n)%100;
   h += (h+c+g-k-e-a-i-b)%100;
   i  = (l-h+e-k+f+e+c-b-m*m+a)%100;
   k += (m-n-n)%100;
   h -= (h-n-e+l-b-h-l*e-g+i*g*k+d)%100;
   h += (k-b-l*h-h-h*i-i*d+e+m*c-c)%100;
   g -= (h+b+h*l-h+l-f+a+n*n+m+e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F26(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[87]%5 ; )
   {
      if( ++IFEcnt[57]%2 )
      {
         c += (i*k+f+f+b+i*i+m-m*n+l-c*n-m)%100;
         e -= (j*h-b-i+f-m*j)%100;
         d  = (b+n-g-h)%100;
         d -= (j*e*k-k-i+b+i-g*n*e+l-h)%100;
         j += (a*m-a-m+c*h-c-c-f-h*e)%100;
      }
      else
      {
         while( ++WHILEcnt[57]%5 )
         {
            do
            {
               if( ++IFcnt[42]%10 )
               {
                  n -= (f+h-g-k-b-i+c-n*g)%100;
                  j += (m-m+a+h-f+e)%100;
                  c += (n-n+k+i)%100;
                  n -= (i+b*f-b*c*m+m+a-c-e)%100;
                  c += (m+c-h-g+k-j)%100;
                  g -= (g-g+a-g-d+a-e-g-j*n+k+a)%100;
               }
               i += (d+k-n+i+a*b-l-d-a+e-g-i-n+f)%100;
               for( ; ++FORcnt[84]%5 ; )
               {
                  g += (j-m+i-c-i+a-b+m+g)%100;
                  d -= (a+f)%100;
                  a -= (j-m*m-g+c*k)%100;
                  k -= (c+l+k)%100;
                  n += (d+g+e*k-m+h*n*c-m-c-l+e-i*h)%100;
               }
               
               switch( ++SWcnt[28]%4 )
               {

               case 1:
               {
                  g += (l-f+h-b*f)%100;
               }
               break;

               case 2:
               {
                  m -= (m-n+a+j*n-b+h+n+h-d)%100;
                  h -= (e*a+c-b*e*c)%100;
               }
               break;

               case 3:
               {
                  i -= (n+k+a+m-d*a)%100;
                  g += (f-c-m-e-f+a+c-n-n*d+n)%100;
                  g += (c+c)%100;
                  a -= (g-m*k+m+c+f+l+l)%100;
                  k += (e-i+k+l+k+e*e+i-m-g)%100;
               }
               break;

               default:
               {
                  e -= (b+h-a-e-g*d+e+c-n)%100;
                  b  = (b*f-d)%100;
                  g -= (j-n*g+e+n+e-a+b+k+f-k)%100;
                  h  = (k+a)%100;
               }
               }

            } while( ++DOcnt[56]%5 );
            if( ++IFEcnt[56]%2 )
            {
               g += (a-a+h-c-b)%100;
               a += (a-g*j*l-m-l)%100;
               c -= (c-b*e-k-d*i-c-k+g)%100;
               f -= (f+j+m-f-i-h-b-d-f)%100;
               g -= (n+f+b*a*a+d-h-a)%100;
            }
            else
            {
               while( ++WHILEcnt[56]%5 )
               {
                  h += (a+b-h*j-f+g)%100;
                  n -= (j-c-e+g*e)%100;
                  e += (i-i-e*d+k)%100;
                  c -= (a+d-d-l+f+f)%100;
                  c -= (a-l)%100;
               }
               do
               {
                  b -= (g-j)%100;
                  k -= (b-j*g+c-j*m*f-j+d*g)%100;
                  g -= (g*n-e-f*h*e)%100;
               } while( ++DOcnt[57]%5 );
               for( ; ++FORcnt[85]%5 ; )
               {
                  l -= (g*j-g+c*b+b+e-j)%100;
                  l -= (h+m+i-i-k-k+k-d-f*f-n)%100;
                  e  = (a+i-a-j+k-j)%100;
                  l += (c-i-n)%100;
                  n += (k*l-l-b-j+e+a-b-f*f)%100;
               }
               if( ++IFcnt[43]%10 )
               {
                  n  = (k+k-d+e-m-c-j+h-c)%100;
                  g += (a*i-b-c+i-a*h)%100;
                  f += (f-m-l-e+l-g+c+h-g-b-m*f)%100;
                  l += (c*a*m-f*a+n*h-f*c)%100;
               }
               for( ; ++FORcnt[86]%5 ; )
               {
                  i += (l*c)%100;
                  b -= (f+a-i-g-e+k)%100;
                  l += (g+i)%100;
                  a += (k+b)%100;
                  m += (c-j-i+b*h+l+n*d-d+h)%100;
                  e += (i+n-c-h*k-e-d-e-l-d)%100;
               }
               k += (d+c+n-d*l+k+j-f*h-k+h*k)%100;
            }
            c  = (h+l*n-m*e*a+l-l+g-f+c*l+l)%100;
            b -= (a+i*d-c-a-b+k-f+i-i)%100;
            d -= (a+a)%100;
         }
         b  = (i*a*i*n+b+a-b-j*n)%100;
         i -= (c+e)%100;
      }
      c -= (a+l-b-i+a*k*j+f-i+j)%100;
      c += (l-l+c)%100;
      a += (e-e-h+i-c*i-m-n-l)%100;
      c -= (m+l-n*f*h+c-a-f*k+m)%100;
   }
   a -= (j-i-l-k)%100;
   k -= (j*l)%100;
   m -= (m+j)%100;
   e += (d-c*m*m*l+h+b+i-h-e+n)%100;
   a += (e-l+l+b+d-l-d+j)%100;
   m += (h+b-k-f+l-n-j-e*m+i+j-i-f)%100;
   d -= (i-i+f-d+c+g+e+g-m-b-g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F27(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[60]%2 )
   {
      h += (i+n-l+n-m+a+n-g-m-i*d-n-m)%100;
      f -= (c*g-e-k*h+n*l+l*e-b*g+c+b)%100;
      g += (a-g+f*k+m-n+c-e*i+b*h-e-g*k)%100;
      m -= (k+k)%100;
   }
   else
   {
      while( ++WHILEcnt[59]%5 )
      {
         do
         {
            c -= (a-h+b-j+d+d+d-e)%100;
            for( ; ++FORcnt[88]%5 ; )
            {
               
               switch( ++SWcnt[29]%3 )
               {

               case 1:
               {
                  l -= (g+h+e-f-n+m-j*c+h+k)%100;
                  m += (c+g-c-m)%100;
                  l += (m+j*a+c*m)%100;
                  i -= (j+d*j+h+n-l-i*d)%100;
                  a += (f+g-l+g+l+c+b+e*a)%100;
               }
               break;

               case 2:
               {
                  k += (f-j-i)%100;
                  i += (m+e*d-b*h-n)%100;
                  g += (m+b+j+l+d+a*a)%100;
                  k += (a*c-b+n*b*b+f*g+d*i+h*d*k+m)%100;
               }
               break;

               default:
               {
                  g -= (f*m*m*g+b+k*c-b-g+f+h*k)%100;
                  k  = (f-h)%100;
                  n += (a-n+m-c-g+c-a+c-m+d+c-l)%100;
                  i -= (j+g*l+m*e+i-a-j-k-c+c*j-k+c)%100;
                  f += (c+d*d-m+c-n+b-f-l)%100;
                  n += (e-f-a)%100;
               }
               }

               if( ++IFcnt[44]%10 )
               {
                  l += (g+k*g)%100;
                  c -= (g+i+i-b+g*l)%100;
                  j += (b+j-f-g-e-l*f)%100;
                  i += (i+n+j-n-e+f-j+c)%100;
                  m -= (h+a*l-e-n+f*k+h*m+c)%100;
               }
               if( ++IFEcnt[58]%2 )
               {
                  j -= (b*g*f*b-g-g*j+a-b*a+j-b+c)%100;
                  d += (e*b-g*c+c+m*l-n+b*m+g)%100;
               }
               else
               {
                  h += (f-n-f-e+k*b+h-l-a)%100;
               }
            }
            while( ++WHILEcnt[58]%5 )
            {
               do
               {
                  l  = (m+m-a-j*b+k*e+i+k+f*k)%100;
                  k -= (d*b-k-b+k)%100;
                  l -= (c+b+j*g+a-j-n+g+e-h-a-b)%100;
                  c += (f-c-j+n+m)%100;
               } while( ++DOcnt[59]%5 );
               for( ; ++FORcnt[89]%5 ; )
               {
                  e -= (a+l-e*k*k+c+l*g-c)%100;
                  j += (m+c-c-j+k+l+k-k-l*j)%100;
                  h -= (g+f)%100;
                  n -= (j+f+d*e-m*h+k+d*b+e-g+j-l+f)%100;
                  c += (c*j*i*i*h+d-b+g+c+a)%100;
                  l += (j-l+n+e-n+f+g-d-b-l-b)%100;
               }
               for( ; ++FORcnt[90]%5 ; )
               {
                  g -= (c*j-f+i+d-g+b*n+b*e)%100;
                  m += (l+g-d*d+l)%100;
                  k += (a-k*l+j*a+g)%100;
                  d += (a-a-m*f-e+b+f-f*a+g+d+g)%100;
                  c -= (m*a+h*j-l+f-m+e-b+f+f*l+b)%100;
               }
               if( ++IFEcnt[59]%2 )
               {
                  l += (h+n)%100;
                  e -= (j-e+n*d)%100;
                  n += (g+k+j+i+j+c+n-n+f)%100;
                  l += (c*b+d+d+f-b-g+g+b-c-i-e-m-f)%100;
                  e -= (d*d*n+a+l-m)%100;
               }
               else
               {
                  c -= (a*g-n+m-f)%100;
                  d  = (c-l*a*l-d-j-a+h-h*b-d+j)%100;
                  m += (f*m+a*c-e+n*j+m)%100;
               }
               m += (d-l-k+m-d)%100;
            }
            d += (b-f)%100;
            j -= (m+a-l+l+c-b-m+d+c*d-j)%100;
         } while( ++DOcnt[58]%5 );
         a += (h-l+m-m-g-m-m*e+i+k+b-d-i*j)%100;
         f += (d+l-c)%100;
         l -= (h+g-g+f*d)%100;
         d += (i-k+n*f*m+d-e)%100;
         h += (b*i*n-h+l+i-i+b+a+b-j)%100;
      }
      k += (d*h+f*c+a)%100;
      e -= (i-d*c+l-g-j*f-d-k-a+m*c+j)%100;
      b += (g+b)%100;
   }
   k += (m*i-c+f-m-f)%100;
   i += (n+d-k+n+j+h-h-i)%100;
   a -= (f+b-i)%100;
   k += (i-l-a+e*l-f-l-i+m)%100;
   n += (h-m)%100;
   l += (f*g*b+k-l*n-m*m+i-f-m+k-h-m)%100;
   j -= (i*d-j-e+h+d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F28(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[62]%5 )
   {
      do
      {
         if( ++IFcnt[46]%10 )
         {
            b += (l+b)%100;
            for( ; ++FORcnt[91]%5 ; )
            {
               
               switch( ++SWcnt[30]%3 )
               {

               case 1:
               {
                  g += (c+h*c)%100;
                  l -= (m*c+a+b-a+d)%100;
                  i -= (d+g+h+h-d-e+n-a-f+c-b+i*i+g)%100;
                  l += (n+n)%100;
                  m -= (b+e+k-b-d-g-m-b*i*i)%100;
                  g += (c-g-h+n*m*a-f-m-i-m)%100;
               }
               break;

               case 2:
               {
                  c -= (d-d+n+l-m-m+m-b*c+e-m-j)%100;
                  k -= (n*h-m-e*i-c+j-h+g)%100;
                  d -= (l*e+g+i-m-i+a)%100;
                  d -= (b*f-g+c+k-b+n-e+m)%100;
                  b -= (m-j*i-g+n+a*k+g+a+e+a+a-c-d)%100;
               }
               break;

               default:
               {
                  g += (h*b+g+i-g*e-e-n-i-b+n)%100;
                  h -= (c-i-e-j-m)%100;
                  a += (h*l-h+i+c-k-h*g+f-c*b*c-m+f)%100;
               }
               }

               if( ++IFEcnt[61]%2 )
               {
                  d += (h+c-j-d-a+g-k-n)%100;
                  m -= (c-b-m*k+g*g+c+k)%100;
                  a -= (a+n*j-b-i*m-l-e-l*k-h-n-a-c)%100;
                  n += (m*l*c+n+c+e-n+l)%100;
               }
               else
               {
                  j += (c-c-e+l-h+a+c*d-d-e-m-e-k)%100;
                  m -= (a+i+l-m)%100;
                  c -= (f-m-l+j-d+g-m*n+e*i*e-c)%100;
                  c += (n-i-e+b-j)%100;
                  j += (i-d*m-i+j*m-m-b+c+k+j)%100;
               }
               while( ++WHILEcnt[60]%5 )
               {
                  d -= (m+m+n)%100;
                  c  = (e-i-g)%100;
                  m  = (k-m)%100;
                  n += (g+c-d+i*n*k+d+i*a-j-j)%100;
                  e -= (d+i+j+g+d*k-b-g+j-g*m*i+l*l)%100;
                  e  = (e+g-e*j-m+a+g-d+k*g-c+m*d-g)%100;
               }
               do
               {
                  k  = (i*i+b+b-l+b-f+f*c*g+k+e)%100;
                  m -= (a-n+b+k-k-i+h-f)%100;
                  c -= (j-a)%100;
                  l += (m-f-d+j-i+n)%100;
                  f -= (n+h+i*k-l)%100;
               } while( ++DOcnt[61]%5 );
            }
            for( ; ++FORcnt[92]%5 ; )
            {
               if( ++IFcnt[45]%10 )
               {
                  g += (e+e+d-h-f-a*i*a-k-m+a+c)%100;
                  a -= (b*f+b)%100;
               }
            }
            for( ; ++FORcnt[93]%5 ; )
            {
               if( ++IFEcnt[62]%2 )
               {
                  d += (a*d+h*a-h+j+e+h+m+i+j+i)%100;
                  n += (e-l-c+e+d+f+f-m-l-g-c)%100;
                  k += (f-j-m+d+d+n-n+j+h*b-a-f)%100;
                  d += (l-j-g+m+n+b*f)%100;
                  d -= (j*e)%100;
                  m += (d-l+g+m*f+i*m-e+d+f+e+i)%100;
               }
               else
               {
                  k -= (k-j+m+n+e)%100;
                  c += (e*e+a-c*b+h*f*h*e-h+f+k+a+g)%100;
                  k -= (m-k-k+n)%100;
                  k += (n+c*k-l-d-c-d)%100;
               }
               while( ++WHILEcnt[61]%5 )
               {
                  l -= (a*n)%100;
                  i += (h-i-l+m+l-g+f+m+i)%100;
                  b -= (h+d-h-j-l+c+a+a+h+n)%100;
                  g += (k-b+i*m-d+b*m-e)%100;
                  g -= (h-j+k-n+n-k-e-i*m-f-m*b-h-a)%100;
               }
               f -= (n+l+h-b+f-n-j-h-j+g+l*i-m+l)%100;
               i -= (j+c-a-f+n)%100;
               a += (d+b+j-d-h+a)%100;
            }
            k += (a-f+l+a-e-d-c-n+d+m*g-e+d)%100;
         }
         c -= (n-k*e+n+e+n+g+j+m-n*a+b+m*e)%100;
         i -= (l-a-j+j+h-b-b*k-g*d+c+b-a-j)%100;
         e -= (m+j-l+i*c-e+d-e+j-a+c*g-k)%100;
         d -= (b+a*d*m-g*a+l-j*f+k-j)%100;
      } while( ++DOcnt[60]%5 );
      h += (d+a+h-l*e+g-i*g-d-n-h-h+h)%100;
      i -= (l-i-g+a+n*h+h+c*a-m+j*i)%100;
      a += (d+c+m-n-e-i-f+m-g+k)%100;
      d += (k-j+f*b)%100;
      e += (h-j*c+l+c)%100;
   }
   h -= (m+l-m+a*n*d)%100;
   f -= (e-k-n*k-b*f+k-e+h-k-f*k)%100;
   e -= (b-l+l+n-b*j-g*b-j+k+m+j)%100;
   m -= (a-i)%100;
   k += (h*g+d*h+a+i-c-m)%100;
   n += (e-k*e)%100;
   b -= (n+e-j+n*d+k-k+b*a-i+a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F29(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      e -= (n-d*m+b-d+l+l-n)%100;
      for( ; ++FORcnt[97]%5 ; )
      {
         
         switch( ++SWcnt[31]%4 )
         {

         case 1:
         {
            if( ++IFcnt[47]%10 )
            {
               if( ++IFEcnt[63]%2 )
               {
                  c -= (f+f*e+c-b+e-c+j-m)%100;
                  k += (g*k*l+k-d)%100;
                  c -= (a-g-l)%100;
                  h += (b*a+a+m-k+l-m+f+i-f)%100;
                  i -= (n+c+n)%100;
               }
               else
               {
                  c += (b*m*c-a)%100;
                  c += (c+e-m+j+h+a+l+c+j)%100;
                  j += (j-f+a+k-f+m+h+l*h+f)%100;
                  c -= (h+k)%100;
                  n  = (f*m-k-i+h+d+l+g-m+f+n)%100;
               }
               while( ++WHILEcnt[63]%5 )
               {
                  c += (a*b+d-m*g*a+c*j+b-g-k-b-f+l)%100;
                  n -= (h+f-c-g)%100;
                  i += (a*l-m*m)%100;
                  m += (e-i)%100;
               }
               do
               {
                  h += (i-d+n-a+k-f*d*n+f-m+d*e)%100;
                  i += (e-g-k+n+f*c+e-c-l+h-d-a+l-c)%100;
                  g += (h+c+f*f+f+k+n+c-n*b)%100;
                  l += (b-j-e-n+n*k)%100;
                  h -= (d+k*h)%100;
                  h -= (m+e-l-d)%100;
               } while( ++DOcnt[63]%5 );
               for( ; ++FORcnt[94]%5 ; )
               {
                  l += (a*e+c+f)%100;
                  h += (c-k+i*c*h-m+a-i-m*c+d-e-d*i)%100;
                  g += (k*f+l*h+j*e+j+b-j*j*j)%100;
                  h += (k-f-g+m)%100;
                  m  = (l+b+a*k-b*n*m+f+n*n+g*k)%100;
               }
               for( ; ++FORcnt[95]%5 ; )
               {
                  m += (j-m)%100;
                  m -= (d-g*d-h*h*g+m-b*i)%100;
                  i += (f*h+e-c-c)%100;
               }
               if( ++IFEcnt[64]%2 )
               {
                  d  = (f+h)%100;
                  g -= (i+a*k-f*h-j+c-e*d*c)%100;
                  i -= (i+f+h-m+a)%100;
                  i  = (a+l)%100;
               }
               else
               {
                  i  = (m-j*b)%100;
                  m += (d*h)%100;
                  d -= (b+f+m-k*i)%100;
                  j -= (j-e)%100;
                  m  = (k-d+n*e*n-k*k-h-d-n-f)%100;
               }
            }
            while( ++WHILEcnt[64]%5 )
            {
               do
               {
                  g += (g-l*e)%100;
                  l -= (i+b-k-k+n*c+k-n+m+f+i)%100;
                  k -= (a*m)%100;
                  k  = (m*b)%100;
                  n -= (g+i-a)%100;
               } while( ++DOcnt[64]%5 );
               if( ++IFcnt[48]%10 )
               {
                  g += (a*k-m-j+g+e*c+i-h*f)%100;
               }
               j += (k+m+h+h)%100;
               for( ; ++FORcnt[96]%5 ; )
               {
                  g += (l+n-g)%100;
                  n += (d*e-j+e*g+k+a*c-j+h*c-i+h-c)%100;
               }
               
               switch( ++SWcnt[32]%3 )
               {

               case 1:
               {
                  a += (b+e-n*m)%100;
                  e += (b*n+a+k)%100;
                  n += (k+c+f*f-d-g*m-d*j-e*g+k+i+i)%100;
                  a  = (m+j+e+m)%100;
                  f  = (c+l*k-k+l*e+d-h-d-i*a+c-c)%100;
               }
               break;

               case 2:
               {
                  b += (g+l*g-k+f-g+k-g)%100;
                  h -= (k-m*f+c+k-b+b+h-c*h*k)%100;
                  h  = (b+k-g-a-f-i)%100;
                  e  = (f*f-m-e+l+e+e-l+l-l)%100;
               }
               break;

               default:
               {
                  e += (j+f+h+a-n-b*d+g-a-f)%100;
                  i += (e+e*i+a-f*i-i-g+d*b+j-h-l)%100;
                  j += (d-g-i)%100;
                  a += (m+h)%100;
                  i += (c+h+g-c+a-k-j)%100;
                  e  = (m-k+a+n)%100;
               }
               }

               j -= (d-m*a-i-f-n-l+k+d)%100;
            }
            i -= (h+l)%100;
            c += (n-k)%100;
         }
         break;

         case 2:
         {
            b += (f-c-g-j+c*b-b+h+m)%100;
            e += (k+i+m+a+c*a)%100;
            h += (i*k+e*h-m)%100;
            g  = (g-b+l+l-e*h-m+n)%100;
            c -= (g-c-i+m+l-m-h-f)%100;
         }
         break;

         default:
         {
            k -= (i+g+a-g*i+c*i)%100;
            a += (n-a*c+d+g)%100;
            i += (n-e+f-l+b+h+b-a*m+m*l*d-k+l)%100;
         }
         }

         h += (j*j*j-f+h+h-e*h*h-j)%100;
         f -= (j+e-k-e-k-f-j-b-n)%100;
         j += (g+d)%100;
         n += (c-j+n+h-k*n-c*h-g+f+b)%100;
      }
      g  = (c-d-f-i+j)%100;
   } while( ++DOcnt[62]%5 );
   g -= (l-c+m+b*b+b+e)%100;
   m -= (c*h-b-f)%100;
   b -= (l*f*n+m-l+m-h-c-h+k-a-f)%100;
   e -= (g+f)%100;
   l -= (l*f+j+l)%100;
   f -= (c+l-m+n-g+d+a*n-f)%100;
   i -= (f-i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F30(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[66]%2 )
   {
      l -= (l-a*b+h-a+a+g+d+c+b-c+g+a)%100;
      j += (l+l-e*h*g)%100;
   }
   else
   {
      while( ++WHILEcnt[66]%5 )
      {
         do
         {
            for( ; ++FORcnt[99]%5 ; )
            {
               if( ++IFcnt[49]%10 )
               {
                  g -= (j-i-n-i+f)%100;
                  g += (i+j-d-i-d)%100;
                  c -= (m+l*i+n+g*a+d+l-e+g+b+l+j-n)%100;
                  j += (l+d-j+l+e+m-e+f+k)%100;
                  m += (n-g)%100;
               }
               for( ; ++FORcnt[98]%5 ; )
               {
                  l -= (b-i+h-m-h+e-j)%100;
                  n  = (m-d-g+m+a*h-a-k+i+f-c-a+j-i)%100;
                  b += (f*i-e+a*b*h+a-i)%100;
                  k += (k+c*l+l-m-m)%100;
               }
               if( ++IFEcnt[65]%2 )
               {
                  i -= (d-n-g-g+j*f)%100;
                  m -= (h-f)%100;
                  h += (a+k-k+k)%100;
                  c -= (b*k-f-m-g-c*e+d-d-b)%100;
                  c += (j-e)%100;
               }
               else
               {
                  i  = (k+g+j+e*c+b-a+d*g-b+m+i)%100;
                  c += (a*e+a+a+b-d*l*i)%100;
                  i -= (d*b-l+h)%100;
                  b -= (f*j)%100;
                  c -= (g-a+c-a+e+k-i*e+f-d+b)%100;
                  l += (h+l+f+j+a-m-i)%100;
               }
               while( ++WHILEcnt[65]%5 )
               {
                  f += (d*a+n-e-n-j+b)%100;
                  c += (k+l*g+a*k+l+g+n)%100;
                  m += (b+k+d+g-d+b+i-g-g+n+h)%100;
               }
               do
               {
                  k -= (i+h+j-b*i+i-f+l*h)%100;
                  d -= (f+k-f-m+f+c+i+k+e)%100;
                  g += (m*n-e+l*i+g-b+a)%100;
                  d -= (e*e+c+m-d+n-b+d)%100;
                  k += (i-n*f+h+b+b+e-b*f+n+d*a)%100;
               } while( ++DOcnt[66]%5 );
            }
            g -= (l-g-a*i+d-g*e+l+l+b-h-h+n-k)%100;
            for( ; ++FORcnt[100]%5 ; )
            {
               
               switch( ++SWcnt[33]%3 )
               {

               case 1:
               {
                  d -= (j-m-m-h+b*d+m+l-m*n-a+c+a*l)%100;
                  j -= (d+i*m-g+i-g+l+i+m*f*k-g-n)%100;
                  c  = (l+b+j-d-k+n-m-g+m+k-i*n*k)%100;
                  i -= (i-k-m-j+l+a-l+c)%100;
                  k += (c-f*d-m+c*h+l*c+n+g+d-h+f*d)%100;
                  i -= (d-j*l+j+d-m*m)%100;
               }
               break;

               case 2:
               {
                  h -= (c*c)%100;
                  l += (e*e*j+i+g+n-n+j-e-g-n*l)%100;
                  m += (n-m-h+h*j-h-f+c-d)%100;
                  c += (g-f)%100;
                  f -= (j-h*f-j-j*j-l+k-h*c+l+n)%100;
               }
               break;

               default:
               {
                  l += (n+k*h+e-e)%100;
               }
               }

               j -= (j*m)%100;
               j -= (m+h+g-l-m+m-h-k-j-d+e-l-d-i)%100;
               a += (n*j+l+f+a)%100;
            }
            m += (e+f-j-k+k-b+g+i+k-c+l*k-j*k)%100;
            i += (d*l-e+f-n-n-l-n+h*i-j+h+l)%100;
            j -= (e*i+i-b+h-f+k)%100;
         } while( ++DOcnt[65]%5 );
         k  = (e*n*b-n-g+l+k+f+c)%100;
         m += (l-n-d-c-a-c-j-g)%100;
         i += (a*b-i+l*h)%100;
      }
      k += (g+g+h*l+g*h-m+i+k-j+c*d+a)%100;
      a += (k-k+h+i+e-d-f*e*j+g*f)%100;
      l -= (a+i)%100;
      h  = (d-d+c+g+c*j+k-n*g-k*d-l)%100;
   }
   k -= (n+l-c)%100;
   e -= (f*a*c-l*a*b+f+n*c*n+k-m+n)%100;
   f -= (l+h*a-b+g)%100;
   c  = (g+l+a-l-j*n)%100;
   n -= (j+j-i*m-j+g-i-a)%100;
   n += (f+c+e+g-b*h-g-i-l+h+a-h)%100;
   j += (b+h+b+b*e+d-b+k+n-f-c+g*m+m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F31(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[51]%10 )
   {
      if( ++IFEcnt[69]%2 )
      {
         e += (i-h+k*h)%100;
         f += (b+g-j-j+j-e+e+k+g-h+m-f+a+d)%100;
         e -= (b+i-l)%100;
         b += (e*k+j-b+e)%100;
         j -= (g-d-l+c+a-l*b-l-b+n)%100;
      }
      else
      {
         while( ++WHILEcnt[68]%5 )
         {
            do
            {
               for( ; ++FORcnt[101]%5 ; )
               {
                  n -= (k-h+n-b+n-b+h+k+e-j+c-b+b+c)%100;
                  g += (m*k-e+i+a-h+l*i-a)%100;
                  b -= (l-d)%100;
               }
               for( ; ++FORcnt[102]%5 ; )
               {
                  j += (a+g*i+e+h+i+d+g+c+b*n+d)%100;
                  n += (l*l*c-a+d-j*h-n*b+i+b*n)%100;
                  h -= (l*m)%100;
                  c += (j-m-n+b+f+l+i+e+g-n+l+f+c+l)%100;
                  d -= (n+f-d-k+b+f*e*i)%100;
               }
               if( ++IFEcnt[67]%2 )
               {
                  h -= (b-l+n-m+b-n-h-b+e+i)%100;
                  d -= (b-k)%100;
                  d -= (k-i-i+i+l-c+m*c+n+a+a+l-l)%100;
                  l += (d-a+d+m-g*k+m-d+f-e+k*i-f)%100;
                  h += (l-l-n-d+m+m+j-n)%100;
                  e += (k+j+g+j+n*i+d*b+f-c+g)%100;
               }
               else
               {
                  g -= (c+c)%100;
                  a -= (f+d)%100;
                  k += (j+m*d*j-e*e+h+j+b+i+k-f)%100;
                  h  = (m-n)%100;
               }
               while( ++WHILEcnt[67]%5 )
               {
                  k -= (d+m-b-b+e*d-b*e+g+h-d)%100;
                  m -= (h*h+n+d-j*i-a+c+j*a+k-n)%100;
                  g += (d*e+i-j+e-a-i-h-d+a-i-c-g+b)%100;
                  i -= (g+g+h+f*a+k+h+j-f*h)%100;
                  l -= (i*c+f+a+h*a-i+b)%100;
               }
               do
               {
                  n += (b+k-f+j)%100;
                  e += (c*c-b-h-f+e+n-n*f+j*b-c+c)%100;
                  e += (c+e)%100;
                  d += (k+k-f-m+g-m-g+b)%100;
                  b += (j-e-i+k+l-e+d*n+n+h+f+f-c)%100;
               } while( ++DOcnt[68]%5 );
            } while( ++DOcnt[67]%5 );
            if( ++IFcnt[50]%10 )
            {
               h -= (f-k+l*g*i+h+j)%100;
               for( ; ++FORcnt[103]%5 ; )
               {
                  k -= (m+l*d-d+c)%100;
                  a -= (c*e-m*b+a+g-n-m-n*c*l+e-h-g)%100;
                  c += (i*j+j-f*c)%100;
                  d -= (d*d*e+l+j+e-i-c+e-e*e)%100;
                  n -= (h-h)%100;
                  n += (h-n-e-i+d*l+h+h*h-l*g-f-g)%100;
               }
               
               switch( ++SWcnt[34]%3 )
               {

               case 1:
               {
                  b += (i*j)%100;
                  b -= (c*m-k+c+i+b+m*h*h*h-n*a)%100;
                  c += (l-m-m+b+h*e-n-b+l)%100;
                  a += (c-j+f+i+i*c*c+j+g-h+h)%100;
                  f += (l*g+m*g+b-n)%100;
               }
               break;

               case 2:
               {
                  b -= (m*c+g)%100;
                  m += (h+i+c+h+g*f+f+a+b-c+h+k*a-a)%100;
                  k -= (d*j+g-c-j*e+m+i-b+n)%100;
               }
               break;

               default:
               {
                  e  = (j+e)%100;
                  e += (g-b+l-c+g+d+e)%100;
                  b += (i+e)%100;
                  k += (m-b)%100;
                  a -= (k+a)%100;
               }
               }

               if( ++IFEcnt[68]%2 )
               {
                  b += (k+j-i+g+h+l+a-a-b)%100;
                  g += (b-m-d+l-h*f)%100;
                  k -= (m*d)%100;
                  c -= (n-b*c-d+l*j-c+h+i+m)%100;
                  n += (g-k)%100;
                  h  = (a+c)%100;
               }
               else
               {
                  n -= (b-m)%100;
                  l -= (e*l-b+l-a-g-j+b*k)%100;
                  f -= (j*n-c+k+j-n)%100;
                  f += (f*e*h*i+e+e*i+g*d-m+c*j*a)%100;
               }
            }
            j += (m-i+m*m-f*k-h*j*b)%100;
            e += (k-h*j-e*h+h-a+b+a-m)%100;
            k -= (h+j-l+l+n-f-k)%100;
            b -= (d*b+m+h+g-l)%100;
         }
         k += (b*e-m+k+c)%100;
         n -= (k-d+h-j+h-f+e*d*f+g+d+d)%100;
         b -= (c*c+b-i+l+l*j+a)%100;
      }
      h  = (l-h+j+m+g+e-i)%100;
      l -= (k+a-h*h-a*k+n+i*f*b*d)%100;
      h -= (k+d+f)%100;
      m += (b*i+k-g-c-j-b+g)%100;
   }
   m -= (n*d+h*l+e-n+e+h*i+g+e-n-c)%100;
   f  = (m+c-k*g-i-c+g+l)%100;
   i += (j*l*b+k-d*c-h+h-f*g+l-h+a)%100;
   g -= (c-n+c+k+d)%100;
   e -= (f-c*m)%100;
   k -= (g-b-n-i-i-c+g+n+g-m)%100;
   k += (k+m+b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F32(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[70]%5 )
   {
      do
      {
         for( ; ++FORcnt[106]%5 ; )
         {
            if( ++IFcnt[52]%10 )
            {
               for( ; ++FORcnt[104]%5 ; )
               {
                  e -= (n*d+i+k*k)%100;
                  n += (g+j+i*k-i*a*b+b+b-n*j-i+i-d)%100;
                  i -= (n-h-g+e)%100;
                  m -= (d-m+k-k+j+h-e*a+l-j+e+d-g)%100;
                  f -= (f-f-i-g*l-n+i+l+b*e)%100;
                  g += (k-h+i+g*g+n+e)%100;
               }
               if( ++IFEcnt[70]%2 )
               {
                  h += (n*k+e-f+m+l+n+h+a*n-k)%100;
                  l -= (l*m-c*f+j+b+c*g*k-f-f+f)%100;
                  h += (i*a)%100;
               }
               else
               {
                  h  = (c-b+j-k+f*d)%100;
                  h += (c-c*j*m-g+k-j+k*i*d-k-l+n*n)%100;
                  b -= (n+g+d+a-e-c-b*a-n*b)%100;
                  i += (d+g)%100;
                  f  = (h+c-d-l-l+d)%100;
               }
               while( ++WHILEcnt[69]%5 )
               {
                  f -= (g+e-g+f+i*m-m+f+a*n+l*b+n-k)%100;
                  f -= (j*k-d+b-e*g-i*g+j)%100;
                  i -= (k+n+m-c-e-c+m+e-g-b*j-n*j)%100;
                  a += (l-e-h-m*m)%100;
                  n  = (g-k+l-n+g*h-k*e+m)%100;
               }
               do
               {
                  b += (m+f+i-l-h-g-i+f)%100;
                  b -= (c+i-j+j-h-c-d-m*l-m+a+d-a)%100;
                  d += (m*a*k-c+j+j-e-a)%100;
                  f += (a+l*n-b*g-a+e-k-n-k)%100;
               } while( ++DOcnt[70]%5 );
            }
            m -= (k+i*a)%100;
            for( ; ++FORcnt[105]%5 ; )
            {
               
               switch( ++SWcnt[35]%3 )
               {

               case 1:
               {
                  c -= (b+a)%100;
                  f  = (c-d+a-g*k-l+i-m*f*d-a+c-n+n)%100;
                  b -= (f*n)%100;
                  j += (a-k-c+i-l-e-l-h+n-j)%100;
                  i += (n-a*k+l-l+i+i+f)%100;
               }
               break;

               case 2:
               {
                  f += (m-h-k-e*d-k-d-l+f-a+l+c+f)%100;
                  i += (i*n)%100;
                  d -= (m+n-l-n-j*e-i-n*f+f-b)%100;
                  n  = (f+c+n)%100;
                  a  = (l+b*j+a+f-g)%100;
               }
               break;

               default:
               {
                  a -= (i-h)%100;
                  i -= (m-b-a+n+j*d)%100;
                  e += (m-m)%100;
                  a  = (b-d-a*f+n-f-k*n+k+d+h*n)%100;
               }
               }

               if( ++IFcnt[53]%10 )
               {
                  k += (g+d+b)%100;
                  h += (h+f-i+f*e)%100;
                  m += (c-l+n*a-l*n-i-g-a-n+i-d*h+m)%100;
                  l += (c*e-c+a-k-k+a+m*m-d)%100;
                  h -= (n-n-n+a+m-h)%100;
                  d -= (a-i+i*n-g*h+j+n-k*f-e-f-f-l)%100;
               }
               if( ++IFEcnt[71]%2 )
               {
                  n += (m-c*b+c*a*h+i-k+e*c)%100;
                  n  = (c-g-a+n-l*a)%100;
                  j += (g*b+l+h+i-e+b-d-h*b-d*m)%100;
               }
               else
               {
                  c -= (i-m*m*f+l*l+e*m-j-a*b-l*c-c)%100;
                  m -= (k-c-d-a*a-a+j-h+d-n*b+h)%100;
                  n -= (l+n+e)%100;
                  i -= (d*g)%100;
                  m -= (a+g-i*d*d-d-n)%100;
               }
               l += (d-b*e)%100;
               h -= (n+b-n*l+m-h*b*e-f*i-g)%100;
               a -= (b+l+j-f+e-d+f+j+j-e+b*n)%100;
            }
            n += (i-k*b+d*f-l*f)%100;
            m -= (e+b)%100;
         }
         f -= (i+c-a-c+f*n+b-m+f+a)%100;
      } while( ++DOcnt[69]%5 );
   }
   l += (e-n-b-n-n+d+l+a+k+g+g)%100;
   l -= (d+b-h+h)%100;
   k += (c+j-l+n+n+f+d-d-k*n-n*a*a+a)%100;
   a -= (m-f*m*m)%100;
   l  = (k+h*g+f+b-e-h)%100;
   a += (k+c+e*m*m)%100;
   k += (j+m+d+k+f-d+l-n*g+c*j-i-l+l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F33(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[73]%5 )
   {
      do
      {
         for( ; ++FORcnt[109]%5 ; )
         {
            for( ; ++FORcnt[107]%5 ; )
            {
               if( ++IFEcnt[72]%2 )
               {
                  j -= (e-l)%100;
                  a -= (d+m-h+h)%100;
               }
               else
               {
                  h += (g-g)%100;
               }
               while( ++WHILEcnt[71]%5 )
               {
                  f -= (m*b+h+d-c-l-g*a*k-j*l+m)%100;
                  i += (f+k-j)%100;
                  m -= (k-i+i+e-c+i+a+l-h+a)%100;
                  g  = (f+m*h+j-c+d*d-g+d)%100;
                  k += (l-a*b+m-d*m-m-j*l+l)%100;
               }
               do
               {
                  f  = (n*b-m+h*g+e-h-e+c-c+g-h-i*l)%100;
                  e -= (c-g*e)%100;
                  j += (n+j*h)%100;
                  i += (g+i-f+c-j-d*f+i+c-k*j+i)%100;
               } while( ++DOcnt[72]%5 );
               if( ++IFcnt[54]%10 )
               {
                  i += (c+h+n+d+j*g+k-d-i*g*f*m)%100;
                  f -= (f-h+i-m-l*l+e+m+e+m+f*i*k)%100;
                  i -= (f-h*f*e-e-f-b-f+n-m)%100;
                  i += (g*d*k)%100;
                  l -= (i+k-n*m+l+i+g-f*k-e+g*n)%100;
                  b -= (c-l+e-l*l)%100;
               }
               i -= (b+k)%100;
            }
            for( ; ++FORcnt[108]%5 ; )
            {
               
               switch( ++SWcnt[36]%4 )
               {

               case 1:
               {
                  d  = (b+h+g+f+a-i*m*f+n+j*j-e+a)%100;
                  g -= (h-m+i)%100;
                  c  = (e*h-l*c*h-h+e)%100;
               }
               break;

               case 2:
               {
                  e -= (c+m-f-j+a*a+d+m+j+a-g-j+a)%100;
                  h  = (e-d)%100;
                  h  = (e-d-d-d-b+d)%100;
                  n += (d-d-a+a+d-a-m-k+i+m*k+c*m)%100;
                  b -= (h+d)%100;
               }
               break;

               case 3:
               {
                  k -= (a+b)%100;
                  a -= (l-m-b-g+m+m+a+c*i)%100;
                  j -= (h+n)%100;
                  c += (j-k-l-l+f*a-g-c)%100;
               }
               break;

               default:
               {
                  m -= (a*a+l*l+f+l-m-b-k-g+l)%100;
                  c -= (a+k)%100;
                  k -= (c-m*j-f+e-g+m-k+h+m*a)%100;
                  b -= (j-h-l+h+k+f-e-m-g+g-m)%100;
                  b += (h*m-d-e)%100;
                  i -= (e-k+l-h+b+h-g-h)%100;
               }
               }

               if( ++IFEcnt[73]%2 )
               {
                  f -= (l+c+k-e*f+d+j+n)%100;
                  c += (n-k)%100;
                  d  = (f-m+g+m*m+k*m-m*m-e-e-g)%100;
                  g -= (k*n-e*a+b-m-a+k)%100;
                  j -= (k+m+h*g-m-n+e-d-h)%100;
               }
               else
               {
                  l += (a+c+l-b)%100;
                  j  = (n+g+b+a-b*i+e-d+d-h)%100;
                  g -= (j*e-c-d-b-c+d+j-l)%100;
                  n += (l-n+g-a+d-j+k-n)%100;
                  f -= (k-i*c+l*c)%100;
               }
               while( ++WHILEcnt[72]%5 )
               {
                  b -= (d-f)%100;
                  g -= (e-b+b-a+h-e)%100;
                  f += (d-a+k-n+k+c-j+e*i*a)%100;
                  n += (e+i-i*l-b+e-m+c-c-e)%100;
               }
               do
               {
                  k  = (k+n-j-i)%100;
                  e -= (n*j*k+d*e-k+l-g-c+i)%100;
                  g += (m*g+e+n-c)%100;
                  m += (h-l+i-k-a-i+e*e+k*a*d+b+g+m)%100;
                  a -= (n-c+n+i*g+n+j+k-m-l)%100;
                  c -= (e-c-b-c+m-g+h-c-l-l+g)%100;
               } while( ++DOcnt[73]%5 );
               e += (k+m+b)%100;
            }
            g -= (d*e*e-f-k+m)%100;
            a -= (d-j-k-h)%100;
            m += (e-j+k*n-c-l-i+f+h-k)%100;
            m -= (f-d+m-i+j-b-m-h+g+e*a*f+i)%100;
         }
         f -= (e+f-e-g*j+a+a-n+b+m+a-e*a)%100;
         n  = (c-h*c-h)%100;
         f += (a+b*f*i+i+f*i-i+f+b+k+i)%100;
      } while( ++DOcnt[71]%5 );
      d -= (d-c+n+k-a*g+c+a*d)%100;
      l += (k+d*b-g)%100;
      k -= (e*f*c*n-e+g-c+m-f-c+m*l)%100;
      e += (k+e-j-k-j-j-e+f-f+b)%100;
   }
   i -= (d*e+j+i*i-d+m+k+g-c-h+k+a)%100;
   c -= (d-b-d+b*j+h*b+k-e)%100;
   f -= (m+j-l+n-f-i+m+g+c*d)%100;
   j += (c*f-g-l*f+a+c+d-a-m-b)%100;
   d -= (k-d*h+m*j+e+b-e-a+j*n*b*b+b)%100;
   g -= (j*k+l*l-b)%100;
   k -= (f+f-n*d+g-h-m*b-d-f-m-f-l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<81; I++) IFcnt[I]   =0;
   for(I=0; I<108; I++) IFEcnt[I]  =0;
   for(I=0; I<54; I++) SWcnt[I]   =0;
   for(I=0; I<108; I++) WHILEcnt[I]=0;
   for(I=0; I<108; I++) DOcnt[I]   =0;
   for(I=0; I<163; I++) FORcnt[I]  =0;
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
   sum += F28( ) ;
   sum += F29( ) ;
   sum += F30( ) ;
   sum += F31( ) ;
   sum += F32( ) ;
   sum += F33( ) ;

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      for( ; ++FORcnt[111]%5 ; )
      {
         if( ++IFcnt[55]%10 )
         {
            for( ; ++FORcnt[110]%5 ; )
            {
               if( ++IFEcnt[74]%2 )
               {
                  h += (b-i-a+k-e+l)%100;
                  d -= (a+m+e-n)%100;
                  f += (e+k*g+e)%100;
                  e += (c*m+a+g-l-m-f*a+b+i+l-b*m)%100;
                  d -= (e-c-k+i+m+k-a-b-i+k)%100;
                  c -= (j+n-a-m-e)%100;
               }
               else
               {
                  d += (g+e-i+j+i)%100;
                  b += (i+d+j)%100;
                  m -= (l+j*e*j*a+m-m+j)%100;
                  m += (k-k)%100;
               }
               i += (n+i+j-c-i+e-f*n-l)%100;
               i -= (j+m-f)%100;
               n += (m+l*e+e-n*i*i+b)%100;
               g += (j*d+i-j+b+c+g+l)%100;
            }
            b -= (k*k-h-d*e)%100;
            n  = (i+g-l-c+l-b+i*b-c-e+i-j+b)%100;
         }
         i += (k-d-d*f*l*d*d+j-g)%100;
         g -= (b+j+k-k+i)%100;
         h -= (n*n+j-c-i-i+l-d*h+i*l+i)%100;
         e -= (g-n*k-h)%100;
      }
      f -= (f+i*n+i+m+d-n+b-d)%100;
      h  = (g+d*j)%100;
      j += (l-i+a-b-l+n-n+i*j+h)%100;
      b -= (n+i-c-n+n*g-f+m+e-n)%100;
      f  = (j-e-f)%100;
      f -= (n*j*k*n+b-c*a-h*m-i-g+h+e)%100;
      b -= (g-l)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<56; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 56 << "   Dynamic = " << sum ;
   for(I=sum=0; I<75; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 75 << "   Dynamic = " << sum ;
   for(I=sum=0; I<37; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 37 << "   Dynamic = " << sum ;
   for(I=sum=0; I<74; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 74 << "   Dynamic = " << sum ;
   for(I=sum=0; I<74; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 74 << "   Dynamic = " << sum ;
   for(I=sum=0; I<112; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 112 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}