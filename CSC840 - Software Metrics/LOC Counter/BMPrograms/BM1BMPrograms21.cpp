#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[100],IFEcnt[134],SWcnt[67],WHILEcnt[134],DOcnt[134],FORcnt[201];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         f -= (e+i+g)%100;
         h  = (a+n-n)%100;
         n -= (n-l+e-h*l*m+m-m*l+k-c-i)%100;
         k += (c*e-b*c+i-l*j+n-e-h-e+l-b-n)%100;
         e += (k-i*m+k-b-c-a-k-g*g-a)%100;
         g -= (j-k-f+e-g-m-k+l*d+l+k-g*j-l)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  e += (d-m+j-e)%100;
                  a  = (d-m*h+f+g+k*i-f+a+g)%100;
                  a += (j+c+b+l)%100;
               }
               e += (n*n+e*m*k)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  c += (i*i+m+m+b-k)%100;
                  e -= (d-e)%100;
                  j += (f+n+i-g+b+k-i*b*a*j+l+j-i-b)%100;
                  g  = (n+e)%100;
                  b += (k-c)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  b -= (e-m*i-c+h-l*g*m-j-h-h+i+d)%100;
                  f += (g+c-f*h-a+a-k-i)%100;
                  l -= (e-h-a+m)%100;
                  k -= (l+g*g*a+c+h+m+k+k*h-c+h-f-n)%100;
               }
               break;

               case 2:
               {
                  a -= (m-a-d-l+m+e-n*l)%100;
                  j -= (j+h)%100;
                  c -= (m+j-h-i-h-f+l-m+b+g)%100;
                  i -= (k*d-n-c-d+l-l+j)%100;
                  c -= (i*j+e*k-g+b+k-g-h*i-i-m-l)%100;
                  h -= (f*c+m-b+g-f+k*g-k*g*d-a-h*b)%100;
               }
               break;

               default:
               {
                  d -= (a-f+g*e+b+g*f-e*m-k+l-a+n)%100;
                  a -= (a-f+n+n+l)%100;
                  e -= (b+i+a+i+k-f-g+g-n+g+c)%100;
                  j += (h*f)%100;
                  d += (g-m-d-i+i+c)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  h += (b-i-g-j*e*m-a-f-i-b+g+a)%100;
                  m  = (e-j-i+k-j-l*k)%100;
               }
               else
               {
                  b += (n*i+a-a-b-k-e-h-h+g+b+h-c-c)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  j -= (b*h*b+i-b*e)%100;
                  i += (d+b+c-f-e-g+d-n+m-i*m*m+h+d)%100;
                  j += (g+n+d+k*n-k)%100;
                  b += (i*n+f-l)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  j += (f+l-m*d-n+b)%100;
                  c += (b-n-n+k*b)%100;
                  m -= (l-m)%100;
                  k += (n+n-b-f)%100;
                  m += (m+m)%100;
                  k += (m+b-f*b+a-l+c*i+j-a)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  m += (i*c-c*h*m)%100;
                  k += (j+j-n-e*d)%100;
                  n -= (h*m+n-k)%100;
                  f -= (d+b*e*c+m)%100;
                  i -= (l+a+m+h+b-c)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  d += (m-g+k-a*a*h+n+n)%100;
                  a -= (b-l+a-h-e-m+j+c+f*j+m)%100;
                  g += (g-b+i)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  a -= (j-j*f+c-n-c*l*j*h*j+h-g+l-j)%100;
                  d += (j*j+b+g-c*k*k-b+c+n-b)%100;
                  e -= (j+k+j)%100;
                  g -= (c*i)%100;
               }
               else
               {
                  i -= (n-c*j*d*l*e-h*a-h+f+f+h+n*h)%100;
                  m += (f-l-m-f+g+d+m-j*b)%100;
                  n -= (a+e-e-g+g-c-b*g*l+a*n-i+f)%100;
                  f += (h+d+l+k-a)%100;
                  m += (c*i+m*l)%100;
               }
            }
            e += (n+g+c*n+i-f*a*d)%100;
            g -= (e+l+i-f-l+g+b-g*l)%100;
            n += (b-i)%100;
            c += (c+i*k)%100;
         }
         e += (m*i+k-a-a-l+n+b*b*k-d)%100;
         h  = (n*j-c+b-e-n-i)%100;
         h += (k+d+l+k*a-c+a-i+f-i-m-a)%100;
      }
      a += (n-b)%100;
      i -= (d+e+g)%100;
      h -= (h*e-l+c+d*g-b+j*e-k+j*h*l+i)%100;
      f -= (f*d-h+k+n+h+l-c)%100;
   }
   h  = (a-j-k+i*c+h)%100;
   g  = (m-h-f+f+i-f+j-c-e-b)%100;
   g -= (c+g*a+f*h*e-a+e+a+c+e)%100;
   f += (f-e+k*b*l-e-f*g-d)%100;
   c -= (n-e*b-j*d*m+j+b)%100;
   k  = (a*l-m*j*b)%100;
   d += (d+c+b+d*n-e-e+d+k-h+a)%100;
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
         m -= (e+m+g+c+k-h*d+l*c+m-i)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%4 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  g += (l-f-n*l-l*f+m)%100;
                  b += (a-f-n*h-j*n*a+c)%100;
                  b += (m-d-f-g-g+m*f*k-a+l)%100;
                  f += (d+b+e+g+j+h-j*i+d-g-j-h-e)%100;
                  i  = (g-f-n+d*k+d+m+j-n*l-l-b*l)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  k += (k+m+l+i+c-g-b)%100;
                  e += (a+l)%100;
                  h  = (b+l-g*c+k*m*d*g+m-k-f+l-k-i)%100;
                  l -= (f+i+l+g-i+g)%100;
                  m += (h*i-d+h*g+f*l+e+g-j+d*e)%100;
               }
               else
               {
                  f -= (d-m*n+a-d-h*f+c*i)%100;
                  j -= (k+f-a-d-k-n-l*h)%100;
                  i -= (k*e-c+j*n-k+e-i)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  b += (m-b)%100;
                  c -= (h*n-d+c*j*c-f*m*e*b+c-c+m-h)%100;
                  a -= (b-i*f+l*m-d+n*e-g-k+d-j+a+m)%100;
                  m  = (m+m+j-k-g-e+i*j+m*l-d+f)%100;
               }
               do
               {
                  d -= (c+j+i+n-m+g-n+h)%100;
                  h  = (n+b-n*e*m-a+n-j+g+g-g+k*n*k)%100;
                  e  = (j-m+f-l+k+g-a+d+m+c-k)%100;
                  e -= (n-l)%100;
                  k += (b*b)%100;
                  d -= (f*l)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  b += (l+m*a-d)%100;
                  m += (f+f)%100;
                  h += (f-g-f-h-m-e*f*a*g+h-e*i-g)%100;
                  j -= (g+f+e+a+b-i-h)%100;
                  i -= (e*g-j-d+d-a+b-b*g)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  m += (b-m*i+n+d+k+k-m+e*d+b)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  e += (h-f-j+c-g+h+i+b*e-i)%100;
                  n += (k+g)%100;
                  m -= (j*j+d*f*j)%100;
                  j += (c+h-c)%100;
               }
               else
               {
                  c += (n+i+k+g+k*a-l-f-m)%100;
                  h -= (j+a)%100;
                  m += (a-b*l-d-k*k-j)%100;
                  n += (i+n+f+a*a+i+c-c+c+h-f+h*e)%100;
                  d -= (d-d-n)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  c += (l*d+a*c-b+a-d*c-m+j-j-n)%100;
                  n += (c+j*b-j+h+e*m+d+c-i)%100;
                  a  = (f*e-l-m*k+c-g-g-h-m-m-m+h+c)%100;
                  c -= (a*m-d-g+a-a)%100;
                  i -= (k-a+f-a-j-g-b+f-d-f)%100;
                  k  = (g*n-g-j-a+c+g-i+c-j*h+a+d)%100;
               }
            }
            break;

            case 3:
            {
               do
               {
                  k += (a+e)%100;
                  i += (j+k-k)%100;
                  g += (b+f-i+d+n)%100;
               } while( ++DOcnt[4]%5 );
               m += (m-i-f)%100;
               d += (k-n-m+d-c-k-e+g*e)%100;
               k -= (c+f)%100;
               h -= (h-l+j-g+b-k+c+d-d-b)%100;
            }
            break;

            default:
            {
               i += (i+m)%100;
               g += (h-a+e-c+m)%100;
               i += (m+a)%100;
               f -= (j+i-c+f*e-e+j-g*g-f*m+a)%100;
               a -= (i+a*l+h-l*e*m*d-b)%100;
            }
            }

            m += (f+b*d+a-e)%100;
            b  = (b*i-k+d)%100;
            m += (e-c-j-f+k+m+b+n-e-b-e*m)%100;
         }
         n += (f*n+g)%100;
         e  = (f+c)%100;
         h += (n-n+h-g+i*n*d)%100;
      } while( ++DOcnt[2]%5 );
      m -= (h-d*b-i-d-d+h-d+k+i+a*g)%100;
      n += (b-d+f-k*n+m-i-j-k*c*j+l*c)%100;
      f -= (b+g-i*k)%100;
      c -= (i-f-n*b+l+i-g-k+e+g+d*c)%100;
   }
   h -= (j-n*d+l-a-b+n+f-l-g-g-l+j*d)%100;
   l -= (f*e+j)%100;
   h += (e+e)%100;
   n  = (n*c+h-d*a-b-n-e*n-a-l+f-h*m)%100;
   b -= (f+i+d*j+l-b*l*j-h*n*l+e-g-m)%100;
   e -= (n+a)%100;
   n += (e+g*e+a*a*b-d+h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[4]%10 )
   {
      d -= (d-h-m+e*j-h-g-l+l-a-d)%100;
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
                  d -= (m+m+g-m+e*j)%100;
                  m -= (f+j*d*n+a*h+k-i-i-d+f-c)%100;
                  f += (c*m+g+d-j-f+b-n+i-j-e-j*m+i)%100;
                  i -= (i*g+e-i+l*j)%100;
                  m += (f+g*b+a-b*d*c-n-m-a+d-j-j)%100;
               }
               else
               {
                  i -= (f-c*j-m-m+e*d+d+a+i)%100;
                  d += (e+c+g+i+f*g+j-i-e)%100;
                  l += (c-h+e*f+l*i-l*l-n+m)%100;
                  g -= (g+n-a)%100;
                  j -= (m-e+h-b-k)%100;
                  g += (f-m)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  h += (k-m-k-m*n+g)%100;
               }
               do
               {
                  i += (n+j)%100;
                  a -= (j-n*e-a+c-d*a*n+g)%100;
               } while( ++DOcnt[6]%5 );
               l -= (n-g+m-m*h-k+c-i)%100;
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  k -= (g+h-m-i+d*j*g-c+d-g-n+m*m)%100;
                  a -= (d+g+a-e*e+e+b)%100;
                  e -= (l-c*a*a-n*i-m-l+l+f-a)%100;
                  n += (f*l+a-d+j+k+e-e)%100;
               }
               do
               {
                  j += (f-c-a+e*k+l*c+n+j-c-i*n)%100;
                  l += (n*j*b-h+f*j*g+j-n-k)%100;
                  h += (a-j-j*e+d-j+g+g+c+d*a+e+b)%100;
                  n  = (k*l-h-i*m-f+k*m+k*g-h*m-c)%100;
                  n -= (c+g-f+e-e-d-n)%100;
                  n += (i+h*i+f+i+b-b-l+n)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  c += (f+l-g+d-k+a+e+b+j-d-l+c-e)%100;
                  f += (m+c+h+n-g*j)%100;
                  n -= (e*i)%100;
                  f += (i+d*a-g+f+m+e)%100;
                  b -= (a*l-a-k-b*d*i*c+a-a-b-l+k)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  g += (i-e)%100;
                  g += (k+f-e+c-k+e+i)%100;
                  a -= (c-b)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  m += (j-c)%100;
                  j -= (m*h*g+a+c-a)%100;
                  j  = (e-a*d+f-f-k-d+f-j+e)%100;
                  n += (b+d+b-a-c)%100;
                  l  = (b+m-d+c-n)%100;
               }
            }
            for( ; ++FORcnt[9]%5 ; )
            {
               
               switch( ++SWcnt[3]%3 )
               {

               case 1:
               {
                  h += (h*j)%100;
                  f -= (k-n)%100;
                  l -= (j*i*a+g+l-a*l*h+n+e+f-l+b)%100;
                  i -= (i-f-m+c*f+n+n-c)%100;
               }
               break;

               case 2:
               {
                  h += (e+b)%100;
                  k -= (m-e-n+i+m+l)%100;
                  i += (d+b+m+i-k-n*m*l)%100;
                  m += (l-i+a*f-k+n+h)%100;
                  e += (i-c+k*l*m+f-j+f-l+h+g-b+g)%100;
                  d  = (i*b)%100;
               }
               break;

               default:
               {
                  i -= (e+f)%100;
                  b += (m*c-n+n+g-d+m-b)%100;
                  f += (j+g-l+j*g+i-m+d+f+i-a)%100;
                  c += (n*n+d-j-a+j+k)%100;
                  c -= (f*b-g-c+b-m)%100;
               }
               }

               k -= (m-b-e-e+e*m+h*c*f+e+d*m-k)%100;
               e -= (j-m-c-k)%100;
               k -= (i*n+d-f+i+n+l+h*c+f)%100;
               b -= (a+m-k+g+m+c)%100;
            }
            n += (d-m-a-n-g+e+f-a)%100;
            c  = (l-a*m-i+e*l+l+l*c-n+j*g-j-f)%100;
            k -= (d*c-b+e*n-g-f)%100;
         }
         break;

         case 2:
         {
            l += (l-i+c)%100;
            c += (e+a-g-l)%100;
            g -= (i+k-k-a+f+k-d-g*d)%100;
         }
         break;

         default:
         {
            j += (n-g+j-g-f*j+l)%100;
            c -= (i+f+h-l+e-i-j-i*a+a-g-m)%100;
            b -= (m-i+f-f-l+f-a*k-j-m)%100;
            j += (l+e*d*k+a-l)%100;
            b -= (j+j-i+f-c+k+f-b-f*d)%100;
         }
         }

         k  = (a*g+n*b)%100;
         j -= (k*g-l+g)%100;
         e += (h*a)%100;
         c += (m*f-d*l-f-i-k+b)%100;
         f += (a+h*c-l+f*k-e)%100;
      }
      b  = (l+h)%100;
      b  = (m+i+g-l*h)%100;
   }
   l += (d+l+c-b*b*e-h-a-m+m*n)%100;
   a  = (h-a+c-a-d)%100;
   e += (k-b)%100;
   l  = (c-c+k+h+j-i+j+j-f-k)%100;
   l  = (f+a+j+c-n+g-l+b+k+a*i-f+a)%100;
   f += (c+f+f-h-n+i)%100;
   j  = (f+c)%100;
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
         e -= (c+g-j)%100;
         c += (l*h-b+c+e+g*n*a-a-m+e-e*a*d)%100;
         e += (n-b+b+i)%100;
         n -= (k+m+d+d-h-d)%100;
      }
      else
      {
         while( ++WHILEcnt[8]%5 )
         {
            do
            {
               for( ; ++FORcnt[11]%5 ; )
               {
                  g += (i-m-c)%100;
                  h += (f-d)%100;
                  b -= (k+g+b-n-n)%100;
                  m -= (a*i*h-d-i-b-m)%100;
               }
               for( ; ++FORcnt[12]%5 ; )
               {
                  n -= (h-c-k+j-f+c)%100;
                  e += (g+g+n+f+i-g-d)%100;
                  k -= (h-k)%100;
                  i += (j-n)%100;
                  b -= (f-i-d*c-i-n-d+m)%100;
                  l -= (c-g)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  n -= (l-f-l)%100;
                  c -= (l+n+f*b-c-n*i-j-k+d-m*i+c)%100;
                  h += (m-k*b-i+f*k+k)%100;
               }
               else
               {
                  l -= (b+b+m+m+a*h+h*n-f-d-m+m)%100;
                  j += (f*g)%100;
                  f += (b-a*d+h*d+n+i-h*i-h+f)%100;
                  k  = (f+e+j+n-f+g*n+m+k)%100;
                  g += (c+m-i-m+j+i+b-k+e+j-l+k-i+a)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  b += (d-e+g-f-c)%100;
                  m += (a-n-e+e-a-e-h+l+c*i-a*a+k)%100;
                  k  = (l+n+h-h-c+n-l-l+l-g)%100;
                  h -= (a-e-e-f*j-n-b+h+m-j+l+g)%100;
                  l += (c*e*e+n-d-l*i-b+h*c*a+m*a)%100;
               }
               do
               {
                  a += (d-i+m+h)%100;
                  k += (j+j-n+f)%100;
                  e += (b-k-f+e+e-l*h+d+b+h-g-c-a)%100;
                  i += (m-g-l+l+a*i-h-k*k)%100;
               } while( ++DOcnt[8]%5 );
            } while( ++DOcnt[7]%5 );
            if( ++IFcnt[5]%10 )
            {
               k -= (b*g+l*f+e-g-d-j-d+k+b+m*a+g)%100;
               for( ; ++FORcnt[13]%5 ; )
               {
                  e -= (d-n+i+d+l+g-b-c*f-e-h-k-m-h)%100;
                  m -= (c-f+c)%100;
                  g  = (d-f+i-j-n*d*k+d-i+b+a-j+n)%100;
                  i  = (j-h+e-l)%100;
                  f += (g-l*e+f+e-d+e-d)%100;
               }
               
               switch( ++SWcnt[4]%3 )
               {

               case 1:
               {
                  e  = (f*b*b+i*k+i+h)%100;
               }
               break;

               case 2:
               {
                  b += (b-c-m-b*e+i)%100;
                  d -= (n-d+j-f-n*i-j*i)%100;
               }
               break;

               default:
               {
                  c  = (n+b-g+m-f-k-g+l*e*i+a)%100;
                  k -= (l-c-a-k*b+d+e)%100;
                  g += (b-a)%100;
                  c  = (i*b+j)%100;
                  h -= (f+i)%100;
               }
               }

               n += (b+g-m-i*d-c*k-i+c+k*d-m)%100;
               h -= (c-i*j-i)%100;
               g -= (e+n-d+d-h-k-j)%100;
            }
            e -= (h-g*d)%100;
            n -= (e+m-l+a-a+n)%100;
            m += (k*k+f*f-n-h-n+i)%100;
         }
         f -= (h+n*f+n*h+b+l+d+g-f)%100;
         i  = (c-b-f+k*l-j-b+f-k)%100;
         n  = (j-k-h+e+h-g-l+m)%100;
         i += (d-b-g-f*a*d)%100;
         j += (a+e+d+m+k*n+c+c*l+b)%100;
      }
      i += (a+b-e-e-n-j)%100;
      a -= (l-l-a-e-f)%100;
      j -= (c-c*n-h+i+l-b-e-n-a-m+c)%100;
   }
   j -= (e*n*c*l+b-a*f)%100;
   g -= (i+n*e-n*a)%100;
   a  = (k*f-j+g*f*k+j-c-c-i*d)%100;
   j -= (h+e-e+m-a*h+k-l-j-n)%100;
   n += (f-f+f*l+j-d-j+c-h+c-k)%100;
   g += (l+n+d+m*d-g+i)%100;
   e += (i-e+e-k+g-g-i-b+i-d+i-d+l-c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[10]%2 )
   {
      c  = (d-f*j+b)%100;
      d -= (l+n)%100;
      c -= (n-i-f-l-a-i-b-n-b+g+l-l-f)%100;
      a -= (e+b+g-j-c-d)%100;
      m += (l*b+a)%100;
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
                  h += (g*e*b-j-b-j-e*e-j-f*k-b-a-m)%100;
                  l -= (i+n-j+j*j-d*c)%100;
                  h -= (i*f*n-b-l)%100;
                  k -= (d+h-h-n+i+e-c+h*h-c+k*j-h)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  k += (g*b*d+m*e*g+h+f-m-j+g+h)%100;
                  g -= (n-b)%100;
                  l -= (i-n-l+c+n-m)%100;
                  f -= (e-g-k+e-a+a-d-l*i-m+a-a*d)%100;
                  k -= (l+l)%100;
                  c -= (d+h*c+f+j-f*c-n-h+h+b*f)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  a -= (e+h-j-e-j+g-c)%100;
                  d  = (e+j-j*k-h+f+m+j+k-i+j)%100;
                  c  = (i-a)%100;
                  b -= (g*j-b-j+i-d+k*j*b*h)%100;
                  m += (m+a-m*n+k*j*m*h)%100;
               }
               else
               {
                  k  = (g*j)%100;
                  m  = (m-f-g+f+f*j*k-k+d)%100;
                  f  = (e-f)%100;
                  b -= (m*h-f*a*a-j)%100;
                  g -= (l-l-a+i+l*a+d*d-a+f+c)%100;
               }
               while( ++WHILEcnt[9]%5 )
               {
                  d += (d-j*e)%100;
                  c += (a*e*g+g+j-a*d+m+b)%100;
                  m -= (h*l-d-m+e+i-l)%100;
                  b -= (f*c+f*n*m*k+b)%100;
               }
               do
               {
                  j -= (g+d+g-n+k-k*n+k*f-n)%100;
                  m -= (d-h+b-m-l)%100;
                  e -= (d+e*f*d+m*a-i+e)%100;
                  j  = (m+b-k-j*i-n+k-a-d)%100;
                  c += (g+i-k-f-b*e-f-e-h)%100;
                  c -= (j*k+d)%100;
               } while( ++DOcnt[10]%5 );
            }
            a -= (e+f-e)%100;
            for( ; ++FORcnt[16]%5 ; )
            {
               
               switch( ++SWcnt[5]%4 )
               {

               case 1:
               {
                  i += (g+j-j+d*c-m)%100;
                  b  = (c+n-g*c*h-h-a*h+n*i+b-g+f)%100;
                  m  = (j+d+f*i*g+n*g-c+e-g)%100;
               }
               break;

               case 2:
               {
                  i += (c+n)%100;
                  k -= (n*i+m-e+e-h*n*g+a)%100;
                  a -= (b-h*i+m*b+b*g)%100;
                  b -= (n-i)%100;
                  d  = (g+b)%100;
               }
               break;

               case 3:
               {
                  l -= (i-j+k-j+a+c-i+h+f*e)%100;
                  f -= (h+e-d+g*c+h)%100;
                  i -= (j+h*c-n+g-m)%100;
                  c += (k+c+g*b+a+a+a+g+l+f*j*g-j-d)%100;
               }
               break;

               default:
               {
                  a -= (i-l+k-j+f)%100;
                  l -= (h-l-n-b-l*b+m-h+f)%100;
                  a += (f+f-a-i+c*i+h+a+k+n-i-j*e)%100;
                  g += (e+j+g-f-f+c*l)%100;
                  j += (d+j+n-j-j)%100;
                  k -= (n-h+k)%100;
               }
               }

               b += (l-k-m)%100;
               b -= (i*h+m-l-h*g*b+k+f*c)%100;
               k  = (m-c+k-f-k+f+a+d+e+j-a+d-g)%100;
               n += (a-i-k-k-f-i-i+n-n*m-d)%100;
            }
         } while( ++DOcnt[9]%5 );
         a -= (d-e+i+i-a*e+g+l-j*j)%100;
         j += (h+g-b-h+f*c+l*e-g)%100;
         h += (a+k)%100;
         l += (h+m)%100;
      }
      h += (e+h+a+l+m*n-i-l+e-k+d+g-m-l)%100;
      a -= (h*e-e+n-f-c-j-i)%100;
      h -= (j*k*m-n+g*c+b*m+h)%100;
      h -= (i-c+c-f-h-c-g-c*l+f+b)%100;
      c -= (b+k*n)%100;
   }
   a -= (e*h)%100;
   m += (f-a+c+a+i)%100;
   j += (i*m+i-g*m-e+d+l-g*a-a)%100;
   m  = (f+i+b-b-a+j-m-b+e-l*e)%100;
   f -= (e-d+c+m*b*m)%100;
   m -= (c+g-b-h-b-l-m*j+l-j)%100;
   a += (n*f)%100;
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
         k += (h-d+j+m*h-e)%100;
         g -= (c-l*l+c-h*i+n+e-g-b-l-i+j-k)%100;
         f += (g+d-i+k+d*j-m-i)%100;
      }
      else
      {
         while( ++WHILEcnt[12]%5 )
         {
            do
            {
               for( ; ++FORcnt[17]%5 ; )
               {
                  b -= (e*g-l*b-k-d*f)%100;
                  i += (h-j-k-k+e+b+b-f*g)%100;
                  g -= (l+l*n*b*m*j+c+f)%100;
                  c -= (j+i+k+d+f+n+d*n+i)%100;
                  f -= (d-n*g+i-i-k+c*g-n-b+g-i)%100;
                  g += (k-l+f)%100;
               }
               for( ; ++FORcnt[18]%5 ; )
               {
                  m  = (d*l-j+d-k*m*f*h-b*j)%100;
                  m -= (h+b)%100;
                  f += (b-e+e+a-h*n-b+k-e+h+l*j)%100;
                  b -= (h-a+k+f*e*n+a-j)%100;
                  f -= (i-g)%100;
               }
               if( ++IFEcnt[11]%2 )
               {
                  j -= (j-g-c-c-f-k-n+c+b*j+k)%100;
                  i -= (g+c-g-h+l-n*i+i*d+c+n)%100;
                  n += (i+g)%100;
                  h += (j+g+g+h)%100;
                  c -= (b+h+d*h+l*h-d+n*m+k-c*j+h)%100;
               }
               else
               {
                  c -= (h*c*h*n+l-l+a)%100;
                  a += (f+a+b-n*d-j-k+h+g*a)%100;
                  n -= (f+j-n)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  b -= (l-a*f)%100;
                  h += (j-i)%100;
                  n -= (a-m-h*b-c+n-h*l-k+d-g+n)%100;
                  d -= (f+c+b-c-n-l-j*g)%100;
               }
            } while( ++DOcnt[11]%5 );
            do
            {
               if( ++IFcnt[8]%10 )
               {
                  c -= (l*n-f)%100;
                  b += (a-h-e+l-a)%100;
                  m += (g-f+k+e+f-l*n*k*l+d*c)%100;
                  k += (l+c-i-i+f-a-c-e)%100;
                  i += (m-i+k*d-a+m-n+n+k-l*m+k+m)%100;
               }
               j += (l-e+n-j-h+m+f+c+k+i*b+n-i-l)%100;
               for( ; ++FORcnt[19]%5 ; )
               {
                  e -= (b+e+e+a+e+e*h)%100;
                  d += (e-g+m+m-h+j*b*b+b+n*m*h)%100;
                  g -= (l+l-d-a-e+n+i-c-g+m-d-n+d)%100;
                  l += (a+e+f-n-h-c-c)%100;
                  d -= (g+c+e*m+k-m-f)%100;
               }
               
               switch( ++SWcnt[6]%3 )
               {

               case 1:
               {
                  n += (g-b-i-n+a-c+e-e-c+k-b-m)%100;
                  b -= (d-e)%100;
                  d  = (g*n)%100;
                  m  = (a*j)%100;
               }
               break;

               case 2:
               {
                  n += (b+h+j*k-l-a)%100;
                  m  = (d*c*l)%100;
                  m  = (h-m)%100;
                  i  = (b-g+j+l-l)%100;
                  b -= (e*g*l+c+d-b*e*j)%100;
                  d += (a-c-h-h-k+m*d*j)%100;
               }
               break;

               default:
               {
                  a -= (e-b-m+h-n+m+g+h-k*e+l+g*m+a)%100;
                  b -= (e+l)%100;
                  b -= (h+c+h-m-j-n*m-g*c-g*d-l)%100;
                  i -= (f*e)%100;
                  h += (e+l-f+k-k+l-g-h-e-f)%100;
               }
               }

               g  = (e-f)%100;
               d -= (k-g-n+c*f*g-c-d*d+e)%100;
            } while( ++DOcnt[12]%5 );
            d -= (k*f*n+n+f+b+k*c-h-n-d*c+h)%100;
            n -= (m+e)%100;
            f += (i-i+k+n+j+h-l*c-f+b)%100;
         }
         m -= (b-n-e*f+b-e+k-g)%100;
      }
   }
   d += (e+a+h*g+k+c-e)%100;
   d += (m+b*n+b+f-m+l+l*k+e*j*n)%100;
   a += (g*i-g*h+j-b*h)%100;
   c -= (g*i-a-k+f+g-a+g)%100;
   k  = (b-n-a-l+i-m+k)%100;
   m += (j+n-m-e-f)%100;
   c -= (j*l*l+g-f+e-c-g+a-e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F7(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[15]%2 )
   {
      f -= (e*e+j-i)%100;
      d -= (a-n-f*l-k*d-g*h+n-j+b-n+i)%100;
      m += (b+a-a+a+i+l+b-i)%100;
      b += (h+k+e+n)%100;
      h -= (l+g*l-g+l+c)%100;
   }
   else
   {
      while( ++WHILEcnt[14]%5 )
      {
         do
         {
            for( ; ++FORcnt[21]%5 ; )
            {
               if( ++IFcnt[10]%10 )
               {
                  m += (l-b-h*i+i)%100;
               }
               for( ; ++FORcnt[20]%5 ; )
               {
                  b -= (d+i*j-g-a*a*k+a)%100;
                  h -= (i+b-h+d+m)%100;
               }
               if( ++IFEcnt[13]%2 )
               {
                  k += (c-n)%100;
                  n -= (j+g+l-f-m*b-h+h-j*c*a*j)%100;
                  n -= (n+k+h-j-d*n-j*l+m)%100;
                  e -= (j+i+c-d-i*i+c-g+f-d-g+c-l)%100;
               }
               else
               {
                  a  = (d*d-m-l+a-k*f-l+d-d+n-m*i)%100;
                  h -= (m+a*n+i-d+n-c-b)%100;
                  m += (i+k+e*e-j-n+j-h-j*l)%100;
                  i += (n*a+b+k)%100;
                  j  = (k+b-c+c-m*n)%100;
               }
               while( ++WHILEcnt[13]%5 )
               {
                  m -= (f*a)%100;
                  k  = (l+d+n-e)%100;
                  d -= (e+h-f-a-h*e-d+a)%100;
                  f += (h*f)%100;
                  b -= (h+c+k+a-e+h+k+a)%100;
                  a -= (g+c-a)%100;
               }
               do
               {
                  k += (n*k+l)%100;
                  g += (l-k+m+m*i*l-b*e)%100;
                  k -= (c+a+b-h+m+d-k-b-b-l-b)%100;
                  g -= (d-g*f+i)%100;
                  e  = (j*g+i+g)%100;
               } while( ++DOcnt[14]%5 );
            }
            n += (m+f-n-j-h*d-c*f+j+j)%100;
            for( ; ++FORcnt[22]%5 ; )
            {
               
               switch( ++SWcnt[7]%4 )
               {

               case 1:
               {
                  l -= (k*n*k+d+l-e+b*d+i-f+i+l-n*g)%100;
                  f -= (l*b+g-e-e-h-n+e-a-a*n+f+h)%100;
                  e += (b+e+e-h*b+c-l+e+l-h)%100;
                  l += (k-f-e+f)%100;
                  a += (n-h-l*l*l+n-b-j-g+m+n-g+d)%100;
               }
               break;

               case 2:
               {
                  c -= (a+j+e+j-i+g-m-a)%100;
                  d += (a+d-f-j-k+j-l+m-b+n+h+a)%100;
                  e += (m+e-n+k*b)%100;
                  d -= (e*m-l+f*d*l*d*j+g-b+d+a)%100;
               }
               break;

               case 3:
               {
                  l -= (k+n+b+n-j-d+i+e)%100;
                  i += (h-h-a+l*d-m-h+c+f-h-m+l)%100;
                  m -= (j-k+a-m-k-h-a+g-l)%100;
                  n -= (k-n-k*b*l*k-f+j+e*d-m)%100;
                  i += (g-h*j*n-l*a*a)%100;
                  d += (n+n-l+b*i*i*b)%100;
               }
               break;

               default:
               {
                  e += (m+m)%100;
                  m += (h+h)%100;
                  d -= (h*e*m-h-c*h+g+j-m+m+g-g+e)%100;
                  h -= (m*f*a-l*j)%100;
                  j += (c+m-l+g-e*l-g*g+k*i*l-j)%100;
               }
               }

               if( ++IFcnt[11]%10 )
               {
                  c  = (j+b-g+b-h+h)%100;
                  d += (j-c-g+l+g+j)%100;
                  h -= (n-f-j*c-d+f-b-k-g-e*b+l-c)%100;
                  k -= (a*k)%100;
                  m -= (i+h+c+k*f-n)%100;
               }
               if( ++IFEcnt[14]%2 )
               {
                  l += (l-c-a*h-e-l-b+d)%100;
                  c -= (c+k-d-n-k*c-g+h)%100;
                  h += (n+m)%100;
                  f += (d-g-k+c-i*g)%100;
                  h  = (m-b*f-b)%100;
                  e -= (j*d-f+d-l)%100;
               }
               else
               {
                  f -= (n-i+b)%100;
                  a -= (f+h-m-l)%100;
                  b += (b*j+d*j+a+c+b*e+h*f)%100;
                  j += (h+l+d+a-m-e+i-c)%100;
               }
            }
            c -= (h+k-m-f+n-m-a)%100;
            h -= (k+j*b-e*h*j)%100;
            c += (i-b+d+j-j-h)%100;
         } while( ++DOcnt[13]%5 );
         n += (a-g)%100;
         l += (a-j-i*n+n*j*k-k+i)%100;
         n -= (m-c*j+d+d*m-m+c-f+n)%100;
      }
      b -= (h-i-j*k+l-d+j)%100;
      l += (c*m-e*n+n-k+h+k+e-g+m)%100;
      j += (m+c-f+f*e-f*d-m)%100;
      n -= (n+j+b-n-e-g-h*l+k)%100;
   }
   l += (b-m-f+a-m+i+e-a*h+j+b+m-c)%100;
   m -= (n*k+e+k+g+l-k*f-l+e*l)%100;
   l -= (h-a-n+m-c*c+c+f+i+n-i*h+l)%100;
   d += (f-f-l-g*j+b+l+a-b*d+j+m)%100;
   e += (c-n*m*f-h+e+e-g-m-a+d+i-b*n)%100;
   n  = (a-n+f-f+e-h-h+e-j+n+g-f+d)%100;
   k += (f-d-e-m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F8(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[17]%5 )
   {
      do
      {
         for( ; ++FORcnt[26]%5 ; )
         {
            for( ; ++FORcnt[24]%5 ; )
            {
               if( ++IFEcnt[16]%2 )
               {
                  n -= (h-b+d-e-f+b-m-a+m)%100;
               }
               else
               {
                  m -= (f+n-b+n-h-l+a*f)%100;
                  e -= (f+b-m)%100;
                  d += (g*h-m+g+g-h+n-c*m*a+j)%100;
                  j -= (m*b+b-j+j-e)%100;
                  e += (a-c*e-j-b)%100;
               }
               while( ++WHILEcnt[15]%5 )
               {
                  b  = (h+m*n+a*g-j-m-g-i-n)%100;
                  j += (n+k*m)%100;
               }
               do
               {
                  l -= (h*i)%100;
                  k += (l*f*a*j-d+e+l*j+k-n-i)%100;
                  g += (f+i-b+l+k+j+a+l+e)%100;
                  g -= (l+n-g-n+n*c-g*c-m*n)%100;
                  d  = (a+b)%100;
               } while( ++DOcnt[16]%5 );
               if( ++IFcnt[12]%10 )
               {
                  g += (a+f)%100;
                  f += (k+b-i-a*g-k+k+a*d)%100;
                  j -= (e-l)%100;
                  l  = (n+l-m+f-d+h)%100;
               }
               l += (i-d+c)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  k -= (h-f*g*i+n+k-d+l+g-k-f)%100;
                  g -= (m+l-n-g+m)%100;
                  n += (j-k-n-n+a)%100;
                  c -= (g+b*i*j*f)%100;
                  f -= (g-i*j+f*g+j+n-m*f-h+l+j)%100;
                  k += (d+m+i-b-h)%100;
               }
            }
            
            switch( ++SWcnt[8]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[17]%2 )
               {
                  d += (a+g-n+c)%100;
                  j -= (f+e+g-n+d*i-i-a-l-k-l-f+f)%100;
                  g += (h*d+i+n+f-h*h)%100;
                  j += (e+h-k+n-k+b+k-c+n)%100;
                  g  = (b-g+d*d-c-k+a-a)%100;
               }
               else
               {
                  n -= (l+f+f*l-c+m+n+d-g+b+n)%100;
                  m  = (a*k+a-e+n-h+b+e)%100;
                  n -= (a-g)%100;
               }
               while( ++WHILEcnt[16]%5 )
               {
                  a -= (i+e-k+f-n)%100;
                  l  = (b+l+n-k-f-b*b)%100;
                  b -= (h+c*c+h-i-a+g-f-a-l+g+i-m)%100;
                  c -= (b*i-b-e*b-b+e+e*k)%100;
               }
               do
               {
                  b += (c+k-e)%100;
                  b -= (e-b+l*a)%100;
                  m += (j+f+h)%100;
                  m -= (a+a+c-a-k*n*f+k)%100;
                  k += (j*l)%100;
                  d -= (h+a-f*j-g+k+j+b-a-a*b+f)%100;
               } while( ++DOcnt[17]%5 );
               for( ; ++FORcnt[25]%5 ; )
               {
                  n += (k+f)%100;
                  g -= (n+i-n-m+j+n+f*j+e-d+e-a*g-c)%100;
                  f -= (b+g)%100;
                  e -= (d*l-l-c+k-h-f)%100;
                  m -= (d+i+n+k)%100;
               }
               if( ++IFcnt[13]%10 )
               {
                  h += (e+k-n-m-b-j+l+k-a-i-i-a-j)%100;
                  n -= (c+n*e-k)%100;
                  i += (e+g+f+f-m-k)%100;
                  k += (f-c+m)%100;
                  l += (e+n-m-i-c*k+h*j+c+m*g+h*j+a)%100;
               }
            }
            break;

            case 2:
            {
               b  = (i*e+a+m)%100;
               l -= (e*f-l+e-k-f)%100;
               e -= (a+a-d+a+d-d+m*d-e)%100;
               i += (f*h-c)%100;
            }
            break;

            default:
            {
               k -= (k-g*j+b)%100;
               e += (h+d+e-l*k-d*e)%100;
               d += (e+l+e+n-b+e*g+a+i-i+i-c-g)%100;
               a += (d+g*l-h-m+l+l-d-d-n+h)%100;
               a += (j*j)%100;
               n += (f+l-k+h*f-b*n+f-g+k)%100;
            }
            }

            k += (m*a)%100;
            g -= (h+n+g-d+a-h+d-a+n+g)%100;
         }
         a -= (i+c+m*h*a*m*l-h-b+c)%100;
         f -= (b-a-f-f-d*i*i*b-n-n*h+e)%100;
         n -= (k-h-l-h-h-m+l*d-b)%100;
         d -= (e-l-n*d)%100;
      } while( ++DOcnt[15]%5 );
      c += (e+d-e-f-a-i-g-n)%100;
      m += (b-c*d-c)%100;
   }
   l -= (b+e+k*l-a-i*f+h-d*b-i-f)%100;
   d  = (f-l+b*i-b+m-h+i-e)%100;
   n += (n+j*j-k+a-l-a-f*l-h-l-d+i-f)%100;
   e -= (e*h*f-l*j+n-a-l+k+m-b+n*g)%100;
   d -= (g-b*f)%100;
   i -= (b*g+j+k+l*b+m-m+b*n*k-g+m-j)%100;
   a += (m-m+b+a+f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F9(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[30]%5 ; )
   {
      if( ++IFEcnt[20]%2 )
      {
         m += (l*m-n+c+i+k-e*m-l+c+f-g-n)%100;
         m -= (b+l+j-i+h*l+d+d)%100;
         b -= (j*a+e+f-a*l)%100;
         i += (e+h)%100;
         b += (a+i)%100;
      }
      else
      {
         while( ++WHILEcnt[19]%5 )
         {
            do
            {
               c += (k+b*b*c-i-n+e*l-n)%100;
               for( ; ++FORcnt[27]%5 ; )
               {
                  m += (m-e+a-d)%100;
                  g -= (d*c*e-c+b+l*a+c*d*k+n)%100;
                  k += (c+f-m-l*i-j-g+d)%100;
                  g -= (b-m-k*j+b*l-d)%100;
                  m += (b-i*d-d+n-j+m-k-c-b*g-d+e)%100;
                  g -= (e-j-i+e-n-b-j+l-d-n-i)%100;
               }
               
               switch( ++SWcnt[9]%3 )
               {

               case 1:
               {
                  i -= (g+f*l+a-i*k*h-b*g)%100;
                  f  = (i+d+f*e)%100;
                  i += (l-j-c+a)%100;
                  i -= (f-k+j-h-m+g-i*g*i-d+j)%100;
                  j -= (e+l*l+k*k-b*i-d+a-m-h+c-f)%100;
               }
               break;

               case 2:
               {
                  d += (l-d)%100;
               }
               break;

               default:
               {
                  c += (g+i-h*j)%100;
                  m -= (e+n-f-b-m+k-f-i-i+n-h+m+m-n)%100;
               }
               }

               if( ++IFcnt[14]%10 )
               {
                  k += (i-l-j-n-j*m+a-e-b+d+b)%100;
                  g  = (l*c*e-d*e+i-j*l+g+b-j-b+n)%100;
                  l -= (m-e+e+d-j+f+j-e*m+g*g-b)%100;
                  c += (h+c)%100;
                  j -= (e+a+g+f+c-d)%100;
               }
            } while( ++DOcnt[18]%5 );
            if( ++IFEcnt[19]%2 )
            {
               if( ++IFEcnt[18]%2 )
               {
                  b += (j*m)%100;
                  n  = (g-l+b*m-b-j-j-h)%100;
                  c += (e-e-c+a-d+d*n+a-d+j+e-g-c)%100;
                  e -= (h+a-b+n+d*k*i+e-b+l-d)%100;
                  b += (d+i)%100;
               }
               else
               {
                  j += (e*g+g+d-h-j-n+g-l*k+g)%100;
                  i += (d+b-b-h-n*f*c-i-a)%100;
                  f += (b-n+a)%100;
                  i -= (m+d)%100;
                  f -= (a-h*j+l-m-n*b*h-f)%100;
                  e -= (f*a+j-m+k-a-d+m-c-c+e+c*k)%100;
               }
               f -= (k+e-i-l+f-k-g+i*e+d+l*h+g-b)%100;
               k += (h-a+h-c+l+h-f-c+h)%100;
               c -= (c*m+j-k-g-i-n*n-l-d)%100;
            }
            else
            {
               while( ++WHILEcnt[18]%5 )
               {
                  d += (j-j-d+n+j*b+g-k+d+c-i*h-k-m)%100;
                  d -= (k-k)%100;
                  m -= (a+d+a-k*j)%100;
                  g -= (h-h-h+n+m*i-g+g*m*e*e-g-n)%100;
                  h -= (n+m+c+f+l-c-m+d-f+m)%100;
                  k -= (f+m-c+n+i-g-e-e*j+c+g-k+k)%100;
               }
               do
               {
                  f -= (b+h+d-n-g-d-f+j)%100;
                  d -= (d*b-l-g+c*h)%100;
                  c -= (i*g)%100;
                  n += (i+l-j*j-m+m)%100;
                  i -= (k-f-n+h-k+f+h-a+c)%100;
               } while( ++DOcnt[19]%5 );
               for( ; ++FORcnt[28]%5 ; )
               {
                  j -= (f+h*a*b+n-j*m)%100;
                  i -= (h+n+g-j+d*a-l*a+g+i+b+l+n+f)%100;
                  n += (e-f+j)%100;
               }
               for( ; ++FORcnt[29]%5 ; )
               {
                  l += (a+h-i+f*d-i+j-n+g+f*m+a-f-h)%100;
                  e += (c*m-a-b*i+k+l-e-k-a+e+d-a-n)%100;
                  i -= (d+c-l*c+i+a*n)%100;
                  b += (i+a+l*a+h-g-k*b)%100;
                  c += (i-l+n)%100;
               }
            }
            j -= (b+l-e*n+e+b+a)%100;
            b += (j*b+a-j)%100;
            d += (c*g+f)%100;
         }
         j -= (k+f-k+b+b-c*d+i-f+c*d-m+k)%100;
         n -= (e-b+d*d-h-h)%100;
      }
      m += (h-k-n-c*f+e+l-m*i+a)%100;
      l += (i+d-c+h)%100;
      k -= (c+g+j+f)%100;
      c -= (e-e*l-n-k*i+d*k-m+i+n*j)%100;
   }
   j -= (d-i)%100;
   b -= (c-m-d-g+d*k-l*f+b+g-g)%100;
   b += (c*g+g+i-m-i-c-a-j-i*e-g-k+m)%100;
   m += (l-h*d+c)%100;
   d -= (d-b+j+g-i)%100;
   k -= (n*m+h*d-e-j)%100;
   h -= (c+d-k*k*m+m-d+e-f-f-m+c-n+k)%100;
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
            m  = (d-f*k)%100;
            for( ; ++FORcnt[31]%5 ; )
            {
               
               switch( ++SWcnt[10]%4 )
               {

               case 1:
               {
                  e -= (i*l-i+m+k-g-g-e-e+i)%100;
                  l -= (k*j*g+j*e*f+a+i-l+m-m-b)%100;
                  g -= (f-m-d*i+j*e+g+i+g*l+e-i+h)%100;
                  e += (a-f+m+m+f)%100;
                  e -= (b+l+l*n)%100;
               }
               break;

               case 2:
               {
                  j -= (g-j+c*f*d*c*h+g+i+h+l-h-g)%100;
                  i -= (d-d+h+a*h+b*f*j+c+e-n+d+g-n)%100;
                  f += (c+j-d+n*i-a+m-c+l+n*e-i-k)%100;
                  j -= (d*c*c)%100;
               }
               break;

               case 3:
               {
                  k += (d-k+c+l+f-d*g*l-g*l+l+i*g+a)%100;
                  g += (i+i+d-d-e-l-g)%100;
                  a += (n-f*m-a+f-l-b+i-h-c-n)%100;
                  a -= (e-a)%100;
                  n -= (k+n+i+f-k+e+j-j-l+f*k+c)%100;
                  g -= (k-d*k+c+k-m+m)%100;
               }
               break;

               default:
               {
                  c += (d-n-b+e)%100;
                  i -= (h*j-g+k)%100;
                  i  = (h*i-l+e*c-h-d*i)%100;
                  i += (i-c-m-c-l-d)%100;
                  b -= (l-j-g*f-l)%100;
               }
               }

               if( ++IFEcnt[21]%2 )
               {
                  f -= (a+c+b)%100;
                  a  = (e-d+h-n-f*d+g+k+g-n)%100;
               }
               else
               {
                  a += (d+k-i+g-h+n+c-m+h+d+f)%100;
               }
               while( ++WHILEcnt[20]%5 )
               {
                  l -= (a+i+a-e-a+j+j+h-k-e-f+n)%100;
                  n -= (l-k*c)%100;
                  h += (n+j+b*m-a+g+n+l*f)%100;
                  m  = (e-i-c-j-e+f+j*n-a+k-d)%100;
                  i  = (e-n*d*e*c+m+k)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[32]%5 ; )
               {
                  e -= (k*g-l+f+g+j+i-g+i+d-m+h-f)%100;
                  a -= (h+m-g+b)%100;
                  g -= (a+n+l-g*f-f*a-d-j)%100;
                  k -= (n*m*b+m)%100;
                  l += (m*h*j-k-f-m-k+a+m-g+h)%100;
                  j -= (e+a+g*l-d+j-k-c-b-g*a-d-b-i)%100;
               }
               if( ++IFcnt[15]%10 )
               {
                  i -= (b-k*f+e)%100;
                  m -= (d-k-c-i*h-e-b-j*h)%100;
                  l += (f-f+g-g*f)%100;
                  i += (l+a)%100;
                  b -= (f-b)%100;
               }
               for( ; ++FORcnt[33]%5 ; )
               {
                  b -= (b-c+a*h-c-c*f-b*i*n*m*c-m+k)%100;
                  c += (h*d-l-m)%100;
                  h -= (l-l-g-k-h*k-b*a-n+f*n+k)%100;
               }
               k += (l*n)%100;
            } while( ++DOcnt[21]%5 );
            b -= (e*e-i+e+m)%100;
            g -= (b-a*f+d+a+l)%100;
         }
         g -= (b-f*m*e+m-b+c*g+m)%100;
         d -= (j*b+h+k+a+f-n-e+m-b+n-g)%100;
         i += (n+h-g+k*c-a+f+b)%100;
         d  = (l-h+j+c+i*d+j+f-b+c-k*a-l)%100;
         d += (k+m*k+n*l-c*l-m*c*h+a*a+h-e)%100;
      } while( ++DOcnt[20]%5 );
      c -= (d+j+n*g+j*n)%100;
      c += (j+e)%100;
      e -= (b+g+n+k*a)%100;
   }
   a  = (l+k)%100;
   d += (c*l*g+e+n+n-h+n)%100;
   a += (m*n*b+h+j-i)%100;
   l += (h+e*a-d*i+j+h-h-i+n+m+j)%100;
   c -= (k*b)%100;
   j -= (c-g*k+m*e-e-i+m-k)%100;
   m += (d-k-i*m*j*l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F11(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[24]%2 )
   {
      k -= (f+b+h-n*l+b+n+f-f)%100;
      l += (h-d-d*i*f-a+b+e-e*m)%100;
      m -= (g+h+k*m*g-k+h-h-c-f+k*n+f+h)%100;
      b -= (n*d-d-m*c)%100;
      a += (c+a+f-l-c+c-j+j+j+c)%100;
   }
   else
   {
      while( ++WHILEcnt[24]%5 )
      {
         do
         {
            h -= (c+d-e*c-h-g-m+m-e-b-a-n)%100;
            for( ; ++FORcnt[34]%5 ; )
            {
               
               switch( ++SWcnt[11]%3 )
               {

               case 1:
               {
                  h -= (h+i)%100;
                  l -= (f-f+b-f+c)%100;
                  m += (c+d*n+k-e+n-j-c+g-c-i-h)%100;
                  l += (h*a-d)%100;
                  f -= (d*n*m+g-n+h-n+h+c-j*l)%100;
               }
               break;

               case 2:
               {
                  i += (e+c-b+j*n*n-m-f)%100;
                  k  = (n-d*h)%100;
                  n -= (e*a-l*l-b+j+n+d-g*h)%100;
                  d += (c+l)%100;
               }
               break;

               default:
               {
                  g -= (l+n+a+g*b+e-i)%100;
                  h -= (e+j)%100;
                  j += (k*k-l+n+c+j+f*g*k*j+c)%100;
                  e += (h*a-k-l+f*i+f)%100;
                  b += (f-c+h+i+m+k+i-a)%100;
                  c -= (h-a+l*k-a-f)%100;
               }
               }

               if( ++IFcnt[17]%10 )
               {
                  e += (g-h+b+d*i+c)%100;
                  j += (g+a*i)%100;
                  m -= (g+m*f-n+k*g-m-a)%100;
                  c += (a-c-c*h-m+h)%100;
                  c += (a-l+e-a-h*b-l-j*g-j-j)%100;
               }
               if( ++IFEcnt[22]%2 )
               {
                  l += (n+m+k+a+j-d-j)%100;
                  l  = (d-i-h+k+a*k-n*m)%100;
                  i += (f-c-b+f+d+e)%100;
                  e += (n+c)%100;
                  j += (c+f+b+h+c)%100;
               }
               else
               {
                  d -= (d-h+g-n*b-k-g+m-d+f+l-l-h*n)%100;
                  i -= (d+n+j*i+a+n+k-n)%100;
                  l += (l-d)%100;
               }
               while( ++WHILEcnt[22]%5 )
               {
                  k -= (f-g-f+c*b-f*c+a-d+e*d-k)%100;
                  d += (d+n+g)%100;
                  l -= (e-l)%100;
                  b += (g-l)%100;
               }
               do
               {
                  e += (e+h+h-n-n*b+n-h-a+g*b*k-c)%100;
                  g -= (n-d)%100;
                  l += (n+c*l-a-h+m+m+m+m-e-b-h-e*g)%100;
                  e += (e-f-j-d*g-i)%100;
                  e -= (h+a)%100;
                  c -= (m+e+b-a-j-e-n-k)%100;
               } while( ++DOcnt[23]%5 );
            }
            for( ; ++FORcnt[36]%5 ; )
            {
               for( ; ++FORcnt[35]%5 ; )
               {
                  m += (g-l-m+g-c-g-b-g)%100;
               }
               if( ++IFEcnt[23]%2 )
               {
                  e += (d-b-k+a*l-b-a*n-i-c+h*c*c)%100;
                  l -= (a*a+g-g*b+f-e)%100;
                  c -= (k-j+k*k+e-f+b-m*n+j)%100;
                  j += (k+e*i*a*i-b+i+c-f)%100;
                  l -= (b+n-k+m+j+c+m)%100;
               }
               else
               {
                  l += (n-c+m+h+g-g*l-i-l-m-i+c)%100;
                  m += (f*k*l-e-l)%100;
               }
               while( ++WHILEcnt[23]%5 )
               {
                  f -= (g+a+b-j+c+b*l+a-n+j)%100;
                  f -= (j+i-d+g)%100;
                  g -= (a+i+g*l*m-e+j+l+h+h-k-k)%100;
                  j += (h*i-c*k+h-l-j-l+h)%100;
               }
               do
               {
                  c -= (l-i*j)%100;
                  l -= (d-d*e+a-g-n-f+d+d+d)%100;
                  b -= (m-m)%100;
                  k  = (g-c-g-n+h-i-l+c+d+i)%100;
                  j -= (j*f+h)%100;
                  l -= (f-f+b*j-g-m*n-n+f+d+f)%100;
               } while( ++DOcnt[24]%5 );
               n -= (i*g-j*n-c+b*b)%100;
            }
            j -= (m-k-i-a+j*a+i+i*h+l-l*n)%100;
            e -= (g-l-m-c-i-i)%100;
            f -= (k-j-d+g-i-i)%100;
         } while( ++DOcnt[22]%5 );
         m -= (b+c+h*h+k)%100;
         b -= (f-m-c*g*n+c*j-j-m-l+l-n)%100;
         c -= (j+e+b+n-k-g+f*i)%100;
      }
      h -= (n+e+d*m+d)%100;
      g  = (n+i-i)%100;
      k  = (j-n-b*a-f+d+e+b)%100;
      g -= (c-k+h-j-g-l+i-h+a-g-b*g-k)%100;
   }
   a += (h+d)%100;
   c -= (e-i-k-n-i+a*b-b+f-h-m*k+e-j)%100;
   m += (g*c-m-d-n+g*j)%100;
   n -= (b+c*i+n-l-n*i-g*m-g)%100;
   a -= (b+i-h+f+h+j+l-h+k+d-d-b+d*g)%100;
   l += (b-i*h+e+k+l)%100;
   h += (i-e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F12(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[20]%10 )
   {
      n += (l+a+a-g+h-d+l)%100;
      for( ; ++FORcnt[40]%5 ; )
      {
         
         switch( ++SWcnt[12]%3 )
         {

         case 1:
         {
            if( ++IFEcnt[26]%2 )
            {
               while( ++WHILEcnt[26]%5 )
               {
                  c -= (c+f)%100;
                  e += (e+g+e*i)%100;
                  k -= (c*d)%100;
                  m += (b-l+g+j)%100;
                  d  = (j+h+n+b-b-j+m-c+d+a-i+l)%100;
                  h += (j-h)%100;
               }
               do
               {
                  j  = (c+a)%100;
                  a -= (b-k+c-g-l-j)%100;
                  k -= (l-m-n)%100;
                  j += (m-b+i+a-d-a*c-i-n+f)%100;
                  b += (m+l+d+c)%100;
               } while( ++DOcnt[26]%5 );
               i -= (b*m+n+g+m-d+c*h)%100;
               for( ; ++FORcnt[39]%5 ; )
               {
                  b += (e*a-h-d-i-f+i*g*l*b+i+g)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[25]%5 )
               {
                  l += (j+l-j-j)%100;
                  b += (c-d-n*h+h+k*c)%100;
                  g -= (h-j+i-g-m-b*e*g+l-c+j-f*f)%100;
                  i -= (m*i-k-e+c+d)%100;
                  c -= (c+c-n+c-h+l*k-b-h*l+c-a+d-g)%100;
               }
               do
               {
                  k -= (b-n-k-c+i*l+k-i+b-m-b-h+j+m)%100;
                  g -= (k+h+k-g-l+f*i+l)%100;
                  a -= (n-l)%100;
                  l += (c-b-m+h*e)%100;
                  l += (d+a+f-g+l-d+i-c+k+d*f)%100;
               } while( ++DOcnt[25]%5 );
               for( ; ++FORcnt[37]%5 ; )
               {
                  i -= (g+b)%100;
                  j += (l-h-a*j)%100;
                  l += (l*l)%100;
                  e -= (m-l+h+i-e-g-h-d)%100;
               }
               if( ++IFcnt[18]%10 )
               {
                  d -= (j-i)%100;
                  j += (g*g+n-n+h-a+e-b+b+e*l-b+f*k)%100;
                  g -= (b*e+h*c-h+h-b+a*d+d)%100;
                  d -= (g+j-f+d+e-m*a+a+d-m-i+e)%100;
                  b -= (m+d+h)%100;
                  d += (m-e)%100;
               }
               for( ; ++FORcnt[38]%5 ; )
               {
                  b -= (m-m)%100;
                  c -= (g*i-m-l+a-l-j)%100;
                  e += (c+a*f+b*j*b-e-i+m+m+c+i)%100;
                  m  = (h+f*d-g+e-e)%100;
                  e -= (f+m+c*f*d+m-a-j-e-k+j)%100;
               }
               if( ++IFEcnt[25]%2 )
               {
                  m  = (j-m-e-d+a-h+b+n+d+h)%100;
                  m -= (e+i+l+j*j+a)%100;
                  n += (c-j-i-b-c-i-k+c+n+k-b-a+h)%100;
                  h -= (k+b*c+n+g+e+l)%100;
                  e -= (e+l*h*c+a+e-i+n+j)%100;
               }
               else
               {
                  i -= (j-k*m+k+n*k)%100;
                  l += (g*d+b*h+c-d-b+b-n-g*m-a-e+k)%100;
                  n += (f*i-a-e*d-k+l+g+h)%100;
               }
            }
            
            switch( ++SWcnt[13]%3 )
            {

            case 1:
            {
               if( ++IFcnt[19]%10 )
               {
                  k += (n*f+h*b+a-k-d-c-f+b+b-e-m)%100;
                  n += (c-e*a*n+n-e-e+j+f)%100;
                  h  = (j*e-c+j-l+f-m*f-a-c)%100;
                  c += (k+k-d*h*a-l+c-a-b)%100;
                  k += (n+i-e-e*h-m+e-b)%100;
               }
               f -= (d+j+b-d*d*h-k+e+f*a+f+c)%100;
            }
            break;

            case 2:
            {
               l += (g*d-k*m)%100;
               m -= (d+e+n)%100;
               g -= (l*f+n-a-i+b+f)%100;
               j  = (b-m+b+b*d+k*m+n-c+e+e+c+n)%100;
            }
            break;

            default:
            {
               a -= (e-g*k*l+k)%100;
               e -= (d+k)%100;
               c -= (j-b+i-i-b+e-e*i*i+f-h-m+c-j)%100;
               j -= (n*e+i*f*f-f+c)%100;
               d -= (k*a-c+d)%100;
               a += (h-b)%100;
            }
            }

            a += (c*l+d-g+h)%100;
            d += (f*i+b+b*e+e)%100;
         }
         break;

         case 2:
         {
            j -= (c+j-n+f+d+c)%100;
            j += (h-k-b-i-a)%100;
            i += (i-a-k+l+b+e)%100;
            k -= (c-j-e-l*d+g+n-m-j*f)%100;
            e -= (i+i+g+c+g+d-h+h-g+k-n-k*h)%100;
         }
         break;

         default:
         {
            j  = (b+e+c+l+d+i*l-d+a-n-d)%100;
            k += (n+g-a*b*c-d)%100;
            d  = (l-h)%100;
         }
         }

         i += (k+m+h-h-d*b+a-a-b+h+i-i+e)%100;
         j  = (h+h-c+h+c*c+a+b*a+e)%100;
         n += (a*i*c+m*f-c-k+f-m+b+f)%100;
         n -= (g+n-g-i*m*d-n+j-j+b+m-j)%100;
      }
      j -= (b-a+d*m+g-b-m+f-n*l+l+c)%100;
   }
   k -= (m+a+d-j+b*g-k+k)%100;
   k -= (h+h+g+c-d-k*h)%100;
   n -= (h*m*f+n+b*g*j-j-d)%100;
   n += (j*d+j*a*d+d*e+b+f-j)%100;
   h -= (b-g*j*k)%100;
   n += (d-j-l*d+b-e+e*a-a*a)%100;
   d -= (f-f-l+d-h+d-f+g*m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F13(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[28]%2 )
   {
      h += (j-m-j+d+f+l-e)%100;
      d -= (b+f-i+c-k-i+n-b-e+b-m-b-g+i)%100;
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
                  l -= (e-j)%100;
                  a += (e+k-m*a*c+h*l+f-h+k-k+n)%100;
                  a -= (c*c+h-h+b-i+j+j-c-c+f-b-k)%100;
                  c += (j-a-i+i+k+i*j+l)%100;
                  m -= (j-m+i*n*e*k-h+e)%100;
               }
               if( ++IFEcnt[27]%2 )
               {
                  m += (b-e*b-k-a-a+l-g)%100;
                  e += (h-m-m-h-n+a+f)%100;
                  n -= (i-i)%100;
                  h -= (n+e*d+b-c-m)%100;
                  c += (j+n-l+i-d-b-h+i-b-g*n*a-a+i)%100;
                  g -= (c-k-h)%100;
               }
               else
               {
                  b  = (f-f+d-e-c-g)%100;
                  j += (j*n-h+k*j+m*h-g-d+j+l-i+j+g)%100;
                  d -= (f*k+i*l*a*b*f+n+a*a-f)%100;
                  k  = (n+l)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  m += (f-e+m-k-a-i+n-b+m+i*g+h)%100;
                  l += (l+m)%100;
                  l -= (f*g*k+d-m+e*a-b-m*h+d)%100;
                  a -= (h+l+c*d-a-f-m+n*k+b)%100;
                  l += (c+j-h+g+m+e-g+h+f)%100;
               }
               do
               {
                  j -= (a-c-k+d-m-h-i+j+b+d)%100;
                  g += (a+e-m)%100;
                  i += (b+m+l*e-j-m+a)%100;
               } while( ++DOcnt[28]%5 );
               if( ++IFcnt[21]%10 )
               {
                  n -= (m*n+g*l-k+n-c+h+j+m*b)%100;
                  b -= (h-c*i-f+g-h+g-f)%100;
                  k -= (n-m-n)%100;
                  j -= (m+l-n)%100;
                  g -= (c-d*e+l)%100;
               }
            }
            b -= (l-d+j-i-j*m-a-d-a)%100;
            for( ; ++FORcnt[43]%5 ; )
            {
               
               switch( ++SWcnt[14]%3 )
               {

               case 1:
               {
                  c -= (b-g-h*a+j-c-i+b*g)%100;
                  g -= (k+k*m-n*h-f+b-k)%100;
                  c -= (c+m-m*h+n+e+i)%100;
                  g += (k*e)%100;
                  n -= (b-c+i+g+b-d*g+d+a-e+k*g*l-j)%100;
                  g  = (e-n*c+a-b+e+k)%100;
               }
               break;

               case 2:
               {
                  b  = (l+c-m*h+l+m-m-k+j-e+c*c*b)%100;
                  e -= (c+j+e+l-g*g)%100;
                  l -= (m-k-i+c*j-e+l+n+d*g)%100;
                  b += (j-b)%100;
                  g += (a+n+b+j+l*g-a-m-k*c)%100;
               }
               break;

               default:
               {
                  j  = (i+c+m-d-d+d+g-i-i+a+e-e*a)%100;
               }
               }

               e += (l+n)%100;
               h += (a-i-l+n-e+a*n-b+g)%100;
               m -= (h+g*n-d-f+l+a+f-k*j-e)%100;
            }
            a -= (d+l*j*g-d-m+a*f*h)%100;
            b += (e+g*c+i)%100;
            a += (n+b+j*n+g+c+n-i)%100;
         } while( ++DOcnt[27]%5 );
         e += (h+n-l+e-l-g-n*i*n+d-j)%100;
         h += (a+i-c-l-c+d*m*m-h+m-k+a+k)%100;
         i -= (e+h-a-e*c+k+d)%100;
      }
      c += (d+j+g*a*c*d+k*i)%100;
      l += (a+g-m+b-b-f-k)%100;
      h -= (n*n-b-i-k)%100;
      i += (i-a-k-d*e)%100;
   }
   i -= (g-d*i-m+k)%100;
   f  = (a+g)%100;
   g  = (e+k)%100;
   b -= (f+e-j-h*e-k-c-n-a-l+i-b*n+f)%100;
   m += (c-e+m+g*e+b-l+h-n+n+e+h)%100;
   a  = (a+d+a*c)%100;
   i -= (e*c-l+g*d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F14(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[31]%2 )
   {
      h += (l+m-m+i-b)%100;
      f += (d+c*i+i+h+k+b-h)%100;
      c += (f-n)%100;
      j += (m-g-d)%100;
      d += (g+n*i-f-l*k+d-c-l+a+m+k-f)%100;
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
                  i += (b-l)%100;
                  b -= (k+b*f*i-i*j-i-n-l*n*b-c*m)%100;
                  a  = (b+d+b-h-e+a*h*f+a+f)%100;
               }
               for( ; ++FORcnt[44]%5 ; )
               {
                  d -= (i+m+k*m)%100;
                  d += (i*n)%100;
                  b  = (h-n*n*i-e+g-g)%100;
                  e  = (b*n+b-e*f+c-g+c+m)%100;
                  j -= (a*h)%100;
               }
               if( ++IFEcnt[29]%2 )
               {
                  l += (i-d)%100;
                  j += (e*b)%100;
                  b -= (g*c)%100;
                  g += (e+l)%100;
                  f -= (l+h)%100;
                  g  = (d-h*k)%100;
               }
               else
               {
                  e -= (d-h)%100;
                  n -= (m-l)%100;
                  i += (m-f-e*l+j-b+i-i+a+k+h-e+e)%100;
                  k -= (c+k*n+h-j-k-b+f*a+h)%100;
               }
               while( ++WHILEcnt[29]%5 )
               {
                  l -= (c-f+e*m*a-k-l+n)%100;
                  f += (j-f)%100;
                  i += (c-j+h*b+h*h)%100;
                  e += (h-i+i*d*e)%100;
                  f  = (b+h+i+h+c)%100;
               }
               do
               {
                  e += (d*b-h)%100;
                  b -= (n-m+b+h+l*d-h+d+c*k*i)%100;
                  k -= (b-g-g+m+m+k+g-c*i*a-i)%100;
                  a -= (d-f+l-h-k*c+g+f+h+e)%100;
                  e += (a-f-e+j*f*k-f)%100;
               } while( ++DOcnt[30]%5 );
            }
            b  = (h-j+i-j+i)%100;
            for( ; ++FORcnt[46]%5 ; )
            {
               
               switch( ++SWcnt[15]%3 )
               {

               case 1:
               {
                  a -= (l-j-a+i-b)%100;
                  k -= (n+i-j+k+l+h)%100;
                  j  = (d-k+n+e-h+m*h+f*c-d+e+a*k*j)%100;
                  b -= (e*g-c-c+g-k-l+n*k-c*h)%100;
                  h -= (a-e+h-g-e+a-a+n-b+a+b)%100;
                  e -= (g-m*g-g*b-c*d-a)%100;
               }
               break;

               case 2:
               {
                  g -= (a-h-c+n+c*j*g+a+h+m)%100;
                  j -= (f+j+g-n+m*b+h-k)%100;
                  n -= (n+k*e-c-f-n-h-l-k*e*d+n-h)%100;
                  d -= (a*d-n+n+l*i+i-g)%100;
                  m += (a-n-d*a-c*h-i-m+b-n+j)%100;
               }
               break;

               default:
               {
                  j += (g-e+n-n+b+h)%100;
                  n += (c*m-b-h-f*j+e)%100;
                  f  = (c+f*h)%100;
               }
               }

               if( ++IFcnt[23]%10 )
               {
                  d -= (d-b+c*e*e)%100;
                  l -= (f-e-m-l-c*i*i+g+m-m+j*m)%100;
                  e -= (b*b+g)%100;
                  i += (h-a+l+k-i-k-a*a-j+l)%100;
                  l += (b-i+d*d-k)%100;
               }
               if( ++IFEcnt[30]%2 )
               {
                  m -= (i*h-c+n+a+i+m)%100;
                  h += (e-g+j-n-i-b*m-f-m-l+e+b+i-n)%100;
                  g += (m-e*d-n+e*n)%100;
                  f += (j+c+m+k+l+a*i+f*i+h+j-j+e)%100;
                  i += (m-d)%100;
                  f -= (e*m+j-f*d*i-e*g-i-f*c-c+b-k)%100;
               }
               else
               {
                  g -= (n*a+n*f*a+b*j*h+h-a-c+a)%100;
                  d -= (j-d*c+i-i*i+a+j+e-i-f+l+m)%100;
                  e += (g+g-n+h*n+l*g+l+m-e-j*g+g+m)%100;
                  b -= (c-a)%100;
               }
               h -= (f-d*c+h+h+a-l-b+k-h+a)%100;
            }
            j -= (f-f*i-i+b-a+k-k-k+j*h+k)%100;
            h -= (n+e*c-d*g-i-d-e-j+d+a*l+b-i)%100;
            i -= (a*a+c+h+m-f+g-g-f-g-b*k+i+c)%100;
         } while( ++DOcnt[29]%5 );
         n -= (f-a-m-l+f+m-k-n*a)%100;
         a += (m-j-c+k*e-l+m+k+k*c*c-g+c)%100;
         c -= (d+i-i-e*d*a*c*l+b-h+b)%100;
      }
      a  = (m*n+i*l*j+l+e*h-m*g-m-j-c)%100;
      e  = (c*n+k+f-h-n-l)%100;
      c += (j*k-g+a-n)%100;
      i -= (b*h+a+g)%100;
   }
   d -= (f-g)%100;
   f -= (m*j-h+l)%100;
   n += (j-f)%100;
   f -= (g-k-l*d+n)%100;
   h -= (l-a+j-d-l+l-l-j+j-e*c+i-i)%100;
   b  = (i+k-f-e*j)%100;
   m += (a+j-c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F15(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[32]%5 )
   {
      do
      {
         for( ; ++FORcnt[49]%5 ; )
         {
            for( ; ++FORcnt[47]%5 ; )
            {
               if( ++IFEcnt[32]%2 )
               {
                  h -= (g-g-b*b*a-l*c-c+n*c+d-i*f)%100;
                  k += (n+g+g*c)%100;
                  j  = (f*b*n+a-f*k+d*e*c+m+f+g)%100;
                  k += (b-k+m+f-i+e*i*n-d+m-d)%100;
                  l += (m+b+m)%100;
               }
               else
               {
                  g += (c+b+m-e)%100;
                  b -= (j+j*c+i+k-n-i+d-k+k*a+i+h*i)%100;
                  h += (c+l-n*h-b*n*b+j-d+n*g)%100;
                  m  = (m-l*e*l+d+k-i*j-c)%100;
                  n -= (e+c-m-k*f-h+l-e+a*b+m-k+j)%100;
                  k -= (j+k)%100;
               }
               while( ++WHILEcnt[31]%5 )
               {
                  d += (d+a*k+h-k-e*a-c+k*f-f)%100;
                  g += (g-l-a+e-j+e+l+a)%100;
                  b -= (i-l+f)%100;
               }
               do
               {
                  g  = (n+f-a-f*n*h+l+k*k+n)%100;
                  f -= (i*c*n-k*k-g+l+c+l*a-m-h+e+j)%100;
                  m -= (j-j-c-f-e+b-d+l+i*d)%100;
                  b -= (b+i+g*d-c-d-e-m-e+i*c-a+d-d)%100;
                  e -= (n+i+f-b*b-i+n-a-b-j)%100;
               } while( ++DOcnt[32]%5 );
               if( ++IFcnt[24]%10 )
               {
                  l -= (d+l-b-d-h)%100;
                  g += (j+j-m+d-c-f)%100;
                  l += (f-e)%100;
                  a += (f-j*c-f+n-k+n+h+k)%100;
               }
            }
            n  = (c-c-e+c+g*l+c+c+m+n+e+f)%100;
            for( ; ++FORcnt[48]%5 ; )
            {
               
               switch( ++SWcnt[16]%4 )
               {

               case 1:
               {
                  e -= (n*c+g)%100;
                  c -= (l-h+k+m*m+n+n-i-l+i+b*h*c)%100;
                  f -= (m+n-a-g-g+b+h+n+k-e*a-i+m)%100;
                  g -= (h+k+e-b-c-j)%100;
                  l += (l+d)%100;
               }
               break;

               case 2:
               {
                  l += (b*l-f-g-j+b-n)%100;
                  a += (b-b-k*m+h-g-n*e+j-n+f)%100;
                  a  = (c-c-k*m-i+i*m-g+m-k)%100;
                  h -= (a*g-h-h+f+d-f+e+h*i)%100;
                  d -= (n-f-l*g-h+g+j*h-k)%100;
               }
               break;

               case 3:
               {
                  j -= (k-f+n+k*j-n+n)%100;
                  l += (l+i-m+c-n+g-j-n*l*h+i+b-k)%100;
                  b += (m*e+j+n+i*i+k+c+i+m-k+e-i)%100;
                  a += (m-b+k*m-d-g)%100;
               }
               break;

               default:
               {
                  d  = (f-m+l+n+j-d+m)%100;
                  k += (g+l-n+m*b*j)%100;
                  j += (j-h+e-e-n+i+g+e-a+l)%100;
                  k -= (d-c-k+m*a*f*l+a+b+k*f)%100;
                  i += (l*b+m+i-e*f+b*a+h+f-m)%100;
                  n += (m-j-j-e)%100;
               }
               }

               if( ++IFEcnt[33]%2 )
               {
                  a -= (e+n+e+a*j-j-j*m*k-c*c-b)%100;
                  e += (b-k+b+l-g-c+c+d*d)%100;
                  c += (i+c+g)%100;
               }
               else
               {
                  m -= (c+k-e+j+b)%100;
                  i  = (b+g+d*e-l*i-h*l+c+l-h)%100;
                  l -= (l+i+i*m-c+j+a-l+f+g)%100;
                  a += (d-h*g+m*e)%100;
                  i -= (d-a-m+i+d-d+n+d)%100;
               }
               k -= (c-f-m*l+m-d-h-h)%100;
               m += (m-g)%100;
               j += (m-l-b-c*d+j*a*n+a*m+f+b)%100;
               n -= (m+j+c-h-n)%100;
            }
            m -= (d*h-f*l)%100;
            c += (c+c-f-d*g+b+c)%100;
         }
         k += (g*k-a-g+j+g+h-n+d*d)%100;
      } while( ++DOcnt[31]%5 );
   }
   i += (e-k+c+l+n+m+k*b)%100;
   m += (e-n)%100;
   l += (l-f-d)%100;
   g += (j-n)%100;
   f += (l+n+b-i)%100;
   i -= (c*c+i-h-k-h+n-j-j-c*k+f+f-b)%100;
   d -= (l-c-f+e+a-h*j-i-h*d+j*g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F16(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[35]%5 )
   {
      do
      {
         for( ; ++FORcnt[52]%5 ; )
         {
            if( ++IFcnt[25]%10 )
            {
               for( ; ++FORcnt[50]%5 ; )
               {
                  h -= (e-f+j-d+k+a-e-f)%100;
               }
               if( ++IFEcnt[34]%2 )
               {
                  g -= (a*a-l-j+g-a+h+i-e+n+m*c)%100;
                  a += (d-g-d-n+d-i-l)%100;
                  f -= (k*n+e)%100;
                  j  = (d*g-a*b+c)%100;
                  j -= (e*a-k*d+i*j*l+e*b)%100;
               }
               else
               {
                  j -= (l-i-g-a-n-l*i)%100;
                  j -= (m-g*g)%100;
               }
               while( ++WHILEcnt[33]%5 )
               {
                  l += (h+c+h-c+b+b*a+i*e+i)%100;
                  c += (j+h*k+k+j*b+e+i-l-g-f)%100;
                  j -= (i-e)%100;
                  j += (j+d+k*e)%100;
               }
               do
               {
                  g -= (k+a+b+g-j*j+i+c)%100;
                  h -= (m-a*e-f-b-i*h-m+b+n+d-n)%100;
                  i += (l*b+h)%100;
                  e -= (c-l+i-h+m-l-a+b+d)%100;
                  l -= (n+f+e-n-h-i*e+j+h)%100;
                  n -= (d-f)%100;
               } while( ++DOcnt[34]%5 );
               a -= (d+i*a+c-g)%100;
            }
            for( ; ++FORcnt[51]%5 ; )
            {
               
               switch( ++SWcnt[17]%3 )
               {

               case 1:
               {
                  b -= (a*l*b)%100;
                  h  = (d+h-f*h-a)%100;
                  c -= (j+l-h*f-n+g*g-g+n*a-f-d-h)%100;
               }
               break;

               case 2:
               {
                  j += (m+g-n-c-g+e-d+l*h-b)%100;
                  c += (d*m-a-b*b+k+f+c-g-b+c-d)%100;
                  i -= (n-b-j-b+j+e-i+i+l+a*m*m*e)%100;
                  c -= (d-k-b+d*m+k-b)%100;
                  c -= (e+g)%100;
               }
               break;

               default:
               {
                  e  = (n*l-k+h-n-l-f-d-b-n+a+g*m*m)%100;
                  d += (g-i-h)%100;
                  j += (d+f)%100;
                  c -= (b*c-m-l)%100;
               }
               }

               if( ++IFcnt[26]%10 )
               {
                  b += (i-a+b-b*e)%100;
                  m += (b+h+l*d+a*f*k*m*a)%100;
                  m += (h-d+f+m-m-c-c*n+n*g-a)%100;
                  n -= (g-n-k+n+m-b-f*g-k-m+g-a)%100;
                  m -= (c-f+n-h*a+e-j-d+n+e-h*n*h+f)%100;
                  m  = (j-e*m*g)%100;
               }
               if( ++IFEcnt[35]%2 )
               {
                  d += (g-k-h+i+b+n*f*k+i-l+i)%100;
                  i += (g-j+a-g-e+f*a)%100;
                  b -= (m+f-e*c-a*j)%100;
                  i += (b+g+h+l*g+f*b)%100;
                  d  = (b+k+k+m-n)%100;
               }
               else
               {
                  c  = (k+l)%100;
                  b -= (k+i*a-d+c-k-h-h-c*c-k-a+h)%100;
                  i += (f-f)%100;
                  m += (m-e+b)%100;
                  d += (n-n)%100;
               }
               while( ++WHILEcnt[34]%5 )
               {
                  j += (e+g+j-n-i+a)%100;
                  l -= (f+h-j+g-i+a+k-h-i)%100;
                  a += (b*m+c+k-m-j+f-n-n+b)%100;
                  i += (e+e+n+n*j+k*d-f*e+f-d-e-d-f)%100;
               }
               do
               {
                  m -= (c-k+d-f+i-g+b-h-f+n)%100;
                  i -= (j-d-d-m-d)%100;
                  i -= (d-l)%100;
                  a -= (k*m+m+c+d-j*e-d-e-e+g*i)%100;
                  d -= (d+k-i*i+d)%100;
                  h += (f*m*k)%100;
               } while( ++DOcnt[35]%5 );
            }
            b += (d-b+e*g-a-g-e-a+e-g-n)%100;
            j  = (d-m-n+e-n*h+a)%100;
            h -= (m-f-j+c-l-h-a*a+j)%100;
            g  = (j-k-f-b*j+j*c+b-h-a+j)%100;
         }
         n += (c+m*c*e-a)%100;
         k -= (h+k+e+k*h-i+c+j+d-i-n+d+d+c)%100;
         f -= (f+n)%100;
      } while( ++DOcnt[33]%5 );
      d -= (m-e*c-n-e+b+g-i-i+n)%100;
      l -= (f+b)%100;
      d += (m-j)%100;
      j += (h-i*c+f+l-d-k*e+j+b+g*k)%100;
   }
   g += (n-c*k-j-j+c+e+k*g-m-d+a+c-j)%100;
   n += (m-e+n+i+h+c)%100;
   e -= (e+i)%100;
   k -= (j+k+k-c+d+l-k+e-j-l-l+e*g)%100;
   m -= (d*n)%100;
   b -= (k+i-j-i-a*m+e+l+e+c+j-a-a*g)%100;
   a += (l+a*g*e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F17(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[57]%5 ; )
   {
      for( ; ++FORcnt[56]%5 ; )
      {
         if( ++IFEcnt[38]%2 )
         {
            b += (h+g*d+g*h+d+l+m)%100;
            j -= (m-a+f-m-l-a*k-b+b)%100;
            l += (c-e+d-k-g+h-j-g+b*b)%100;
            e -= (e+h)%100;
            a += (l*g*d*e-g*h+c-g-n)%100;
            n += (d-m+a*g*h)%100;
         }
         else
         {
            while( ++WHILEcnt[36]%5 )
            {
               do
               {
                  c -= (e+k-j-e)%100;
                  n -= (n-c-n-e-j+e-k)%100;
                  l += (h-l*h+c-g)%100;
                  e -= (k-j)%100;
                  l -= (m-k)%100;
                  f -= (j*a-c*k-e-i*i)%100;
               } while( ++DOcnt[36]%5 );
               if( ++IFcnt[27]%10 )
               {
                  i  = (c+h-e*c+e*l*j-f+j-k)%100;
                  l  = (k*g-e-i*b)%100;
                  d -= (e-j+f+h-j+m-g+m-d-h-l+c)%100;
                  j += (a-j+n*h*h*f+f)%100;
                  c -= (e+h+k+f-h*c+j-m-j-g*h+b*m*c)%100;
               }
               c -= (c-j)%100;
               for( ; ++FORcnt[53]%5 ; )
               {
                  i -= (f+i+e-a+b+k-a+g)%100;
               }
            }
            
            switch( ++SWcnt[18]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[36]%2 )
               {
                  j += (n-m-d-b-k-m*b-f-f)%100;
                  k -= (m*f)%100;
                  a += (l*i+a*d*c*b)%100;
                  f += (h-j)%100;
               }
               else
               {
                  m -= (h-g-j+c+j-l)%100;
                  e  = (c+m+d-n-m*f)%100;
                  g -= (c+m)%100;
                  l  = (a+f)%100;
                  l -= (e-h-d+j+j-k+b+d*j-e-b-c-n+b)%100;
               }
               while( ++WHILEcnt[37]%5 )
               {
                  j -= (i+c*f+n+c*k+n*l)%100;
                  m += (c*m+b-g-d-m*g)%100;
                  f += (a+c-k+g-h-l-j)%100;
                  n += (n-l*i-f+f+h+f+m+d-l+d*d-m)%100;
                  m -= (h-e-c+n-d-a)%100;
                  e += (h-f+l*d)%100;
               }
            }
            break;

            case 2:
            {
               do
               {
                  a -= (c+k-n+i+k+f)%100;
                  f += (i-l-m+k+h-n*m-b*l-k-h*i)%100;
                  n += (c+g+i+j*l+d-b*h)%100;
               } while( ++DOcnt[37]%5 );
               for( ; ++FORcnt[54]%5 ; )
               {
                  g += (n+m*a-d-j+a+m-f-l-n)%100;
                  l += (g*c+h-g-j-d+g)%100;
                  m += (n+j-d-m*l-d*e)%100;
                  b -= (e*h-a-k-h)%100;
                  l += (i+b+k)%100;
               }
               if( ++IFcnt[28]%10 )
               {
                  n -= (d-l-m-m-g-j+h+n)%100;
                  l  = (c*i-m+f+h-e+k-b-m)%100;
                  d -= (l*f*l+e-e+k-l-i)%100;
                  d  = (f*f*k+a*j*j+n-n+g)%100;
               }
               for( ; ++FORcnt[55]%5 ; )
               {
                  f += (d-a+i-g+g)%100;
                  f += (f-n*d-c*n-f+a+f+e+g-j*b-b-g)%100;
                  d -= (l+k*f-e+g)%100;
                  j += (l*j+i)%100;
                  k  = (d*e-g+h*j-d)%100;
                  d += (l+n+d+l+h+k+e*e+b*d+a*h+m+m)%100;
               }
               if( ++IFEcnt[37]%2 )
               {
                  h += (l+b-c*a-h-n-n-b*d+c+f)%100;
                  k += (a-a*l-n+g*b+b+k*g)%100;
                  d -= (f+a-d-n-m*j+d*g-l*b+f*b-a+h)%100;
                  g -= (j+l+d-a*g-i*c*k-e+j-a+m-j)%100;
                  d  = (b-b)%100;
               }
               else
               {
                  d += (f*f+h+h-g*m+c-i+h)%100;
                  l += (i+j*i+l+l+i+h*k+d+f*l*h-f-j)%100;
                  d  = (n+e-n+f+e+j+f*g+c*h-l-g)%100;
                  k += (j-n-f-d)%100;
                  c += (a+l+e)%100;
               }
            }
            break;

            default:
            {
               c  = (i+m-l)%100;
               b -= (i+i-b*n+k-i-a-n+m+k)%100;
               l -= (f+i)%100;
               d += (l+n)%100;
            }
            }

            f += (e*a*m*m-g-l+j+j-d-c+h)%100;
            c -= (c-i)%100;
            e += (b-e-j-g-j-c*k+k)%100;
         }
         a -= (f-m*j-b+g-g-e)%100;
         m  = (n-e)%100;
      }
      n -= (b+h-f-a+b-l+a*i-g+c+k)%100;
      l -= (n*i+n)%100;
      d -= (n*l+e-g+b+f+e*e+k+m-b-a)%100;
      c += (l+g+k-c-i*n-j+l*k+l)%100;
   }
   i -= (f-n+j*b+c-j-m-l+i*f)%100;
   m -= (f+a)%100;
   g -= (f-c-d-k-j+h+k*d+b-a)%100;
   m += (f-c-n)%100;
   j += (a-e*k-m)%100;
   b += (k-i+l+j-n+m*i-a-l)%100;
   l  = (l-j*n+k*m*g*b+j+d-n+g+h+j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F18(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[40]%5 )
   {
      do
      {
         c -= (h+k-h-j+f-b-c+k)%100;
         for( ; ++FORcnt[60]%5 ; )
         {
            
            switch( ++SWcnt[19]%3 )
            {

            case 1:
            {
               if( ++IFcnt[29]%10 )
               {
                  k += (a+j-k+l+a+a)%100;
                  n += (f-a-d*n-c-e-m+j-f+m-n+c+a)%100;
                  n += (c*m+m+e*f+n-g*l*m*m)%100;
                  n += (l-c)%100;
                  f += (c-c)%100;
                  a -= (b*i-i*m+c-h*k+j-e-a)%100;
               }
               if( ++IFEcnt[39]%2 )
               {
                  g += (a-c+b+b+h+e)%100;
               }
               else
               {
                  c += (b*n+e+f*h-c*k-k*n-i+c+f-c+k)%100;
                  h -= (n-i)%100;
                  k -= (e+a+i-d)%100;
                  g -= (k-n-c)%100;
                  h -= (d-e+a*n)%100;
               }
               while( ++WHILEcnt[38]%5 )
               {
                  l += (h-d+d-m-m*e-b*k+k+c-d+h-d)%100;
                  d -= (n-f+j*j-i-d+m*a+g-k)%100;
               }
               do
               {
                  d += (e-a*d+n-n+d)%100;
                  k  = (c+n*l+k-i*i+l+e)%100;
                  n -= (c*i*f+h-k-j+i*h-a+i-b)%100;
                  c -= (h+j-n-f-i*m*d*j-d)%100;
                  h += (h+i+c+l-h-j*c+k)%100;
               } while( ++DOcnt[39]%5 );
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[58]%5 ; )
               {
                  l -= (g+a+n)%100;
                  c += (g-i+m)%100;
                  j -= (l-a+i*n*e-e-a+f-a-a*f*c+a+k)%100;
                  d += (j+b+m)%100;
                  j += (f+j*k*m-m+e-a)%100;
                  b -= (l-c)%100;
               }
               for( ; ++FORcnt[59]%5 ; )
               {
                  f -= (d*h)%100;
                  d += (h-n-l-m+b-a-a*j*d+e)%100;
                  b -= (b*h+h+m+f+f*l+n+a+n+i*a-c)%100;
                  e -= (l-e)%100;
                  b -= (d+m-k-n+d-e+d+c-c+l+n+c-j+e)%100;
               }
               if( ++IFEcnt[40]%2 )
               {
                  l -= (b*b*k-m+j)%100;
                  f += (f-a-a+b+e+k+i-g)%100;
                  g += (k+f-k-d-g-b+b*a)%100;
                  b -= (m*l+a+e)%100;
                  k -= (h-h*c)%100;
               }
               else
               {
                  j -= (h+n)%100;
                  c += (c+n+i-l+g)%100;
                  e -= (b-b-j-c-m+g)%100;
               }
               while( ++WHILEcnt[39]%5 )
               {
                  e += (c+m-d)%100;
                  n += (b-a+d+b-i+f*b*h)%100;
                  j -= (i-d-a+d-j*d+m-b)%100;
                  m -= (c+c-a)%100;
               }
            }
            break;

            default:
            {
               b += (m*h+g*e*e)%100;
               m += (i+l-j*k+n+f+e-b+f-h-b-l+e+b)%100;
               e -= (j*e*n)%100;
               n += (d-l+b-j*f)%100;
               g -= (i*i*b*k*c)%100;
               f -= (b+m-n+a-l+h*j+l*l+n-h+m)%100;
            }
            }

            g += (h*m*h-h+l-j*h-m-a-b*e*c-l+a)%100;
            n += (f+a)%100;
            j -= (n-c-i)%100;
            d += (c*b-j*i+a-d+k)%100;
         }
         h -= (b+g-g*n*c+g-n-j-g+n*c)%100;
      } while( ++DOcnt[38]%5 );
      i += (a-i*h-b-l+e*m-f-d*b)%100;
      n += (a*n+h*h*h-c+g-k-k*e*f)%100;
      g -= (j-h+g-f-l*l-d+g+i+f*j-f)%100;
      f += (j+l*j-b*c+k+c*c*g-i+a+l)%100;
   }
   a -= (g+a-g-k-m)%100;
   c -= (k*l)%100;
   g += (l+c-c-m*n-g-n+k)%100;
   l -= (e-b+m-j+g*b-e*c+g+b+m-k+k)%100;
   a -= (f*i)%100;
   f -= (f-k)%100;
   f -= (e+l+d+e-d+j+l+f-f+k+j*d-d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F19(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      if( ++IFcnt[31]%10 )
      {
         e += (a-a-b-d)%100;
         for( ; ++FORcnt[64]%5 ; )
         {
            
            switch( ++SWcnt[20]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[41]%2 )
               {
                  g -= (b-l+k+a+j*f+c+d-j-n-g+c-h)%100;
                  a -= (d+d*n-g*c-l-c-k+e*i-k+c)%100;
                  b += (n+j*a+l+e*b-n-d*e-d+n)%100;
               }
               else
               {
                  e -= (j+b+h-c+m-f+m-b)%100;
                  m += (g+i-f+a-b-h+k+b+a-m*d-j+j+c)%100;
                  i += (f-d-h+h*k-j+g-g)%100;
                  k += (h-k+i+e-l-f+c)%100;
                  j -= (b+a+m-k-j*n+k)%100;
               }
               while( ++WHILEcnt[41]%5 )
               {
                  d += (d-k*e-g+f*a)%100;
                  a -= (b-b+j*h-l-i-i)%100;
                  l -= (i-e-d+g+h+a+j+k)%100;
                  d -= (c+k)%100;
                  c += (a*k+j+i+m*e)%100;
               }
               do
               {
                  a -= (l+l-n+j*b-c+e*g*a+h)%100;
                  m -= (g+a-k*c-d-i+d)%100;
                  a -= (b*d-a+c-l*h-g+m-m*m+d+a-b-b)%100;
                  h += (l+f*j+j-b)%100;
               } while( ++DOcnt[41]%5 );
               for( ; ++FORcnt[61]%5 ; )
               {
                  f -= (l+n+j*b+h)%100;
                  e  = (a+j-f-k-n+a+m+h+j-m-m)%100;
                  i -= (i-b+d-a*n-k-j-f*g+g+k-m*m+f)%100;
                  l -= (b+i-j-d-j-g*e-d*e+k)%100;
                  m += (l+f+c-g+d-g*i-m)%100;
                  i  = (d-j-n)%100;
               }
               if( ++IFcnt[30]%10 )
               {
                  n += (a-a+i-l+f-k*i+e*h+h-j-e-i)%100;
                  n -= (f-e+d-g)%100;
                  k += (a-b-b-e-b+j-b*m)%100;
                  a -= (g+k-i-l+i-j-b*a-j+e)%100;
                  b -= (m-l*e-f+i+b-e+j-a+d-n+d-m+d)%100;
               }
               for( ; ++FORcnt[62]%5 ; )
               {
                  n -= (k+m*g*a*d+i-n+i+g-n-l)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[42]%2 )
               {
                  f += (d+g+m-g-c)%100;
                  e -= (g+j+j)%100;
                  h -= (g-d)%100;
                  n -= (l*n)%100;
               }
               else
               {
                  d += (i-g+l+h)%100;
                  i -= (a+i+a-d*n-n)%100;
                  j += (l-b)%100;
                  d -= (i-i)%100;
                  f  = (d+g+a)%100;
               }
               while( ++WHILEcnt[42]%5 )
               {
                  a -= (c+f)%100;
                  m -= (m+j+j+n-h+m-b+l+b+l+j-h-d)%100;
                  i -= (i+j-c*i-k-h-c-d-c+a)%100;
                  a += (g*f*l+f+g*d+c+n-h-c+f*k-l*d)%100;
                  l += (h-i-l+d+g*c-d+a-a-m-d*c*i)%100;
                  d -= (f*c+n)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  f += (i*b-e-b+c+h+d*g-m-b+g*h)%100;
                  h += (e*b+h*f*b-l-n+n+g)%100;
                  b -= (b-a+i+c+i*d+b-l-h)%100;
               } while( ++DOcnt[42]%5 );
               l  = (a*i-m+i*b+k-e)%100;
               for( ; ++FORcnt[63]%5 ; )
               {
                  h -= (n-f-l+i+k)%100;
                  n += (f+j-c)%100;
                  d -= (l*h+f-c-k+c-b-l*h+g+k)%100;
                  c += (b+l-h)%100;
                  j -= (f-k*k+f-a+j+h+k*i)%100;
               }
               k += (k-h-c+k+c-c+e-d-c+n-f-j*d+g)%100;
               h  = (a*n+c+a-n+m-m-g+j*e-h)%100;
            }
            }

            m -= (f*k-c*i-j+f)%100;
            e -= (d+d+h-i+j-f-k-d+g-k)%100;
            j -= (k+i+a+l*e*f+b*d-h+c)%100;
         }
         k += (g+a)%100;
         c -= (n-j+g+c+l-d)%100;
         c -= (c*b-d*m-j*b-h+g*i-f-c+a-h)%100;
      }
      e -= (k-e-m-f-d*n+d*l-k+k*i+h+m)%100;
      a += (b*m-f+k+f*d+d*k)%100;
      k += (l-c*l)%100;
      d -= (h-d)%100;
   } while( ++DOcnt[40]%5 );
   b += (g*k+n+j-i-a)%100;
   l  = (j*n*i)%100;
   k -= (c+b)%100;
   d -= (k-h+k+l+a*a+c-g+m)%100;
   n += (f*k+a+h)%100;
   m += (m+f-b+j-l-k*a)%100;
   m  = (a*m+c+e+c+m+e-f+a*a*h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F20(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[21]%4 )
   {

   case 1:
   {
      if( ++IFcnt[33]%10 )
      {
         if( ++IFEcnt[44]%2 )
         {
            h += (f-a-n+m+h)%100;
            g += (f+c-i-i+j+k+d+d+m-a)%100;
            c -= (h*d+f-n-d+i+b*f-c+m-n)%100;
            f += (d+m+b+k)%100;
            c += (h*e+g+n+c+h-i-j+e-n+h+d-n+b)%100;
         }
         else
         {
            while( ++WHILEcnt[44]%5 )
            {
               do
               {
                  j += (b+m*b-l-b)%100;
                  d += (k-a*h-d*a)%100;
                  d += (f+n-b-k+j+g)%100;
                  b += (j+j-d-b-e+k-g+g-a+k-g+k)%100;
               } while( ++DOcnt[43]%5 );
               for( ; ++FORcnt[65]%5 ; )
               {
                  a += (b-j*n-n+l*l+m-h-f)%100;
                  b -= (d-l+b+e-e+m)%100;
                  g += (k+l-j-h*d+k*l-i*l*n-n+d+n)%100;
                  f += (m-m*k+e+a-i-e)%100;
                  k += (c+a-j+i*l*b)%100;
                  b += (d+h-l+k-b+h-m+g)%100;
               }
               for( ; ++FORcnt[66]%5 ; )
               {
                  g -= (e+l+g*c)%100;
                  j += (b*g+m+l+m+h-j+n*j+f+m)%100;
                  c -= (m-a)%100;
                  a += (i*e-e)%100;
                  k += (f+i+h*i-k-d+b-e*c+g+a-c+m)%100;
               }
               if( ++IFEcnt[43]%2 )
               {
                  m -= (m+g+e*k*n+b+l*b+b*j+j)%100;
                  m -= (h-d)%100;
                  j += (e+i-k+d+i+b-h+l-j*c*h+c*f)%100;
                  l  = (c+d-e-d)%100;
                  f += (f-a-n-d+d*e+f-n-d)%100;
               }
               else
               {
                  g += (f+b)%100;
                  f += (k+e)%100;
                  l += (l-g-e+b-f)%100;
               }
               while( ++WHILEcnt[43]%5 )
               {
                  l -= (b-c)%100;
                  i += (f+b*h)%100;
                  g -= (a-k+b-l-e+a+d-m-m-a+e)%100;
                  k += (b+a*e+f+e+l)%100;
               }
            }
            do
            {
               if( ++IFcnt[32]%10 )
               {
                  i -= (a+n-f+b*k-a-k+j-n*g)%100;
                  f -= (c+e-f+h+c*m+n-n-i-a+m)%100;
                  e -= (f+a+g+i-b-k*h-h+a+j-e*l*j*k)%100;
                  m  = (j*e*e)%100;
                  k -= (k-g+m-m+n*h-l)%100;
               }
               i -= (j-k+f+j*e+i+g)%100;
               for( ; ++FORcnt[67]%5 ; )
               {
                  m -= (d*d+k-m+a+d+n-n-e*k+a)%100;
               }
               
               switch( ++SWcnt[22]%4 )
               {

               case 1:
               {
                  k -= (g-h-m+a-b+c)%100;
                  f -= (m-j-m-n+f-j-h-d-h-g-f-h)%100;
               }
               break;

               case 2:
               {
                  d -= (a-e+m-b-m*h-e+k+e*h+n-a*e*a)%100;
                  n += (b+i)%100;
                  l -= (g*b)%100;
                  g += (e-k+h-m*a+f*c+n-a-c)%100;
                  e -= (m-e*n*d-h-k+k*l+d*c-g)%100;
               }
               break;

               case 3:
               {
                  h  = (k*d-c+l-l-f-f-c+b-i-g-h)%100;
                  a += (a-k*d*g-f-g*i-b*a-h)%100;
                  m -= (m+g-f-g+m*m)%100;
                  c += (g+n)%100;
               }
               break;

               default:
               {
                  f -= (h-l+l-j+a+a*e-i-f-f-c+e-d)%100;
                  h += (h+g+b-f-d*h+m+n*h*n+a+m+h-g)%100;
                  n += (g+a)%100;
                  g -= (g-e+b+a-j+e-k+f)%100;
                  j -= (k-n-i-k-l+e-d+m-d*k)%100;
                  l -= (n*j-l-j-e-j-i+d-f+h-g)%100;
               }
               }

               j -= (k+a)%100;
               c -= (a+g)%100;
            } while( ++DOcnt[44]%5 );
            l -= (j-e-m+m+n)%100;
            a += (i+i)%100;
            i -= (k-f*k-m-k-b-j)%100;
         }
         e -= (j+j+d)%100;
         d += (m+m-j-j-k+j+m-a)%100;
         i += (l+e-h+f+d-e+k+k)%100;
         e += (m-j-b*b+g*h+k+h*g+m*g+d+l)%100;
         n += (g+k+n*g+i-n)%100;
      }
      l  = (d+i+c+e+d+g+a-c+i+i)%100;
      k += (l-h+j-g)%100;
      e += (k+g*i+b-l-d*d*n*g+g*h)%100;
   }
   break;

   case 2:
   {
      e -= (i*f-h-a+g*k-l+b-m*c-i-e+l)%100;
      a  = (l-i-m-l+m+j+a-k+n+j*i)%100;
      h -= (e+d-c+l+j)%100;
   }
   break;

   case 3:
   {
      i += (l-d+i-k-i)%100;
      g  = (l-j+i+h+d*h-d)%100;
      b -= (b-e+g)%100;
      j += (c*i-a-c)%100;
      m += (i-b-i+b-i-b*h-h-h-n*l)%100;
   }
   break;

   default:
   {
      n -= (a-g-g+n*d+f-a+f+a)%100;
      d  = (m-e+j+j+i*b+e+b-d+m+a*d-f-a)%100;
      b += (f-e-j+e-n-i)%100;
      m  = (l*j+n-b*d-e-k+d*j+k-l-k+n)%100;
   }
   }

   d  = (h-n*l-e+e)%100;
   g += (n-g)%100;
   h += (b*h)%100;
   n  = (m+l)%100;
   g -= (e+g*m-e-n+a+a+e*c+e-h-d+h+n)%100;
   l += (j+m-h-m-a+g-g-m-h+f-f-b*d)%100;
   f -= (h*k+j*m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F21(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[46]%2 )
   {
      m -= (i-m-i*g-f+a*g+f+k-g+l+i-m)%100;
      c -= (f+j-b+l*e-m+l-i-i+g)%100;
      k -= (c*f*f)%100;
      f += (c-a-l+a*b*a+l+h-i-h*h)%100;
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
                  i -= (e-f-k+i+n)%100;
                  n -= (n-i*c-f-h*k*j-l-f+k+b)%100;
                  n += (j*c)%100;
                  k -= (h-n*h-g+e+a)%100;
                  i += (k-c-e+j-b+b)%100;
                  n -= (n*j-j)%100;
               }
               for( ; ++FORcnt[68]%5 ; )
               {
                  e += (l+f*b+e*f-n-a)%100;
                  b += (j+c+f+l)%100;
                  k += (e-g+k+e+i-h+n)%100;
                  f -= (n+e*b-g+l-g-c-i+b-g)%100;
                  g += (c-k-n-j*j-f)%100;
               }
               if( ++IFEcnt[45]%2 )
               {
                  n -= (j+k-a)%100;
                  a  = (k-d*e-g+c+n)%100;
                  j  = (e+i*g-m*c-g+f-c-n-i*l)%100;
                  d -= (b+k-e+k-m*a+i-f)%100;
                  m -= (j+k*k+h-k+i+k)%100;
               }
               else
               {
                  k -= (n+n*e-g)%100;
                  f -= (b-g*i+l)%100;
                  e += (l*i*d+k-k-a)%100;
               }
               while( ++WHILEcnt[45]%5 )
               {
                  k += (b*j*a*n+k-l*n-j+n)%100;
                  b -= (g+d)%100;
                  a += (h*b)%100;
                  b += (n-m-h+g+e-e+j+i+n-l*h+d-d-k)%100;
               }
            }
            do
            {
               g -= (d+n+e-f)%100;
               for( ; ++FORcnt[70]%5 ; )
               {
                  d -= (e*m+g*g-b*j*e+m+k-l)%100;
                  e += (n-g+n+h+n+l-l-g-l+c-d)%100;
                  n -= (a*b+e-m+i*n-a+e-g)%100;
                  k += (a-l-n-f-l-b+c+h)%100;
                  j -= (m+j)%100;
               }
               
               switch( ++SWcnt[23]%3 )
               {

               case 1:
               {
                  k += (h*e+i)%100;
               }
               break;

               case 2:
               {
                  h -= (j*j-c)%100;
                  m  = (c+j)%100;
               }
               break;

               default:
               {
                  m += (b-c+h-c-b-g-h+e-j-d-c+m)%100;
                  a -= (a-h)%100;
                  a -= (n-n)%100;
                  c += (k+m*a+j+k+k+b+c+i-n*c+h)%100;
                  d += (d+j+b+k-g-l-g*i-n)%100;
               }
               }

               n += (m+a)%100;
               j -= (c-j-f+k+l+k+c-h*l+e-h+e+n-e)%100;
               n -= (b+a+l-k+k)%100;
            } while( ++DOcnt[46]%5 );
            a -= (i-k-j*c+m*b-e)%100;
            l += (b-b+f-a+i)%100;
            n -= (n+c+m+c-h*k-d)%100;
         } while( ++DOcnt[45]%5 );
         l += (g-j-l+l+j+n-n*d+m+i+i-b-c)%100;
         c -= (a*j+g+l+n+b-c+l-n*l*h+i)%100;
         a += (d-b*a*f+k+b-f+b*c*k-i*d*i+e)%100;
         b += (c-b*f+n+g+j+m*k+g+m-m+h-n-g)%100;
      }
      m += (g+g*k-a)%100;
      f -= (c+a-h+a*d+e+c-d+n+d)%100;
      d -= (h-c+b*f+a*f*c*h+f-n)%100;
      b -= (n+k+d+j+m+c+k*d-l+f)%100;
      n += (j+m)%100;
   }
   h += (a-k-g*f)%100;
   e += (f-d)%100;
   m += (b-m-a+i+e+c-g*f+b*f)%100;
   g -= (e*f+e-l-f-k+i+j*m+f-d-g+h+n)%100;
   e += (f+k*e-n+f-g+b-a+c+n-k-b-c+c)%100;
   n += (a+i+i*c+f-h-e-d-c*d*j*i+h-l)%100;
   f -= (f*k-m-l)%100;
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
         a -= (l*j)%100;
      }
      else
      {
         while( ++WHILEcnt[48]%5 )
         {
            do
            {
               for( ; ++FORcnt[71]%5 ; )
               {
                  e -= (g-g)%100;
                  g += (i+i-i-h-d-g*j+d-h)%100;
                  g -= (a+l*a-d+b-a+l-c*h*a)%100;
                  f -= (g-e)%100;
               }
               for( ; ++FORcnt[72]%5 ; )
               {
                  k -= (b*m-b*l+n*i+a+k+l*k+c-i-i)%100;
                  j -= (g+d-j*f-c+m-g-n+i-i)%100;
                  a -= (i+j+j+j+m-l+b)%100;
                  g += (b-i*m-l)%100;
                  e += (c+l-b-i+h-a)%100;
                  c -= (i+j*h)%100;
               }
               if( ++IFEcnt[47]%2 )
               {
                  i += (j+j-g+j*m-c+b-a+f-j-i)%100;
                  h += (f-d)%100;
                  f -= (g-i)%100;
                  c -= (b*a+c*a+k+k-i-k+a+a-e)%100;
                  k += (g-e-l-n-h*a+b+g+g-a-g+d-m-m)%100;
               }
               else
               {
                  h -= (h+b-j+c+h+b-n-b)%100;
                  k += (c-g-j)%100;
                  k -= (h*k+b+g-k+b+l-g+e)%100;
                  a  = (b-d-h-e*j+g-b-b-l-m-m*j-g+g)%100;
                  f += (b+c)%100;
               }
               while( ++WHILEcnt[47]%5 )
               {
                  k += (l+g*h+g*c*h+l)%100;
                  i += (l-k-n+m+i+b-m+j-a-f)%100;
                  k -= (k-d-n)%100;
                  a += (e+f)%100;
               }
               do
               {
                  d -= (b-c-h*j+b-b+c-n+l+m*j-j)%100;
                  l -= (k-l-d*f)%100;
                  n -= (f-g+i-i+b-k+a-h*i*j+l+c)%100;
                  j += (e*f+i)%100;
                  b  = (m+a-e+k-g+h+c+a+n-g*c+h)%100;
                  b += (k+c*f)%100;
               } while( ++DOcnt[48]%5 );
            } while( ++DOcnt[47]%5 );
            if( ++IFcnt[35]%10 )
            {
               m += (i-a*k+m*n)%100;
               for( ; ++FORcnt[73]%5 ; )
               {
                  f  = (c-k+c*h-g*n+n*d+f+c+j*n)%100;
                  n -= (i+e+a-i-h-m*d-l*k-m)%100;
                  g += (k+c)%100;
               }
               
               switch( ++SWcnt[24]%4 )
               {

               case 1:
               {
                  b -= (f-i-i-b+f+n-b*m+b-e*j+l)%100;
                  l -= (a-h+i+m-b)%100;
                  f  = (l-j)%100;
                  j += (d+c*b-g-h-h+i)%100;
                  j -= (n+e-n-b+j-a+l+c-l)%100;
               }
               break;

               case 2:
               {
                  a -= (d+b+f*g-m*h*c*b+a+l+a+c)%100;
                  c += (e-j-n*c-g+l-m-a-b-h)%100;
                  n  = (l+d-m+i+k-a-j+f+i-l*d)%100;
                  l  = (c-m-n-f+a-k-j+a)%100;
               }
               break;

               case 3:
               {
                  k  = (n-g+j+f+f-m+f+h-n+i)%100;
                  e += (j*n-c-j+e*e+d)%100;
                  c -= (e+d-a*e)%100;
                  e += (a-n-l-b-g-h)%100;
                  l += (m+j+k*a+k-m*h)%100;
                  j += (c-m+g+h*l-d-c+j-a+m+a+k)%100;
               }
               break;

               default:
               {
                  k  = (e+g+b-m)%100;
                  i  = (h-n+d-d+m+h-m-l-n-c)%100;
                  h += (m*n+n)%100;
                  e -= (a+f-a-i-c+i-m-k-d*d)%100;
                  n  = (l*i-e*m*i+f+j+k*m+h+k+m)%100;
               }
               }

               h -= (f+i*a-j*m-n-g*d)%100;
               m -= (m+b*d+c)%100;
            }
            n  = (j+i-n+h-f)%100;
         }
         i += (f+f+i*g+d-e-e-n-b+c+k*i)%100;
         i += (a-k-l-k+h+m-m-e+i*k*a*g-e-a)%100;
         a  = (k+a-a+f)%100;
         j -= (f+h-k+b-d+i*i)%100;
      }
      a -= (d+i-c+j-l+i*k-a*e)%100;
      c -= (f-e+a+d-a+a*l)%100;
      g += (b-g-e*m*d)%100;
      j += (b+m*h+n-a+d-g-k+k+c-k)%100;
      n += (n+f)%100;
   }
   a  = (h-h+h+i+a-k*b-g-l)%100;
   k += (j-f+j-b+f)%100;
   e  = (a+a-h-h+j+c+g*n-k*d-j)%100;
   k += (m*n+a-h+m+a+f-l+c+m-m+b)%100;
   j += (g-e)%100;
   n += (c+g+f-e+i*g-l*a)%100;
   i -= (f-d-l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F23(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[51]%2 )
   {
      a += (d*d-j+f-i+b)%100;
      i -= (d-c-c-f-k+n-h-i)%100;
      m += (m+l-h*n*l-n-a+e-c-f+g-j+f)%100;
      m += (e+m-k+i*n+a+j+h-j-b)%100;
      a -= (d+l-b)%100;
      h += (c*b)%100;
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
                  i += (d+g-c-a-j+g+i+n+e)%100;
                  h -= (b+h*i*b-h-b-k*b-l-a)%100;
                  d -= (g+n-g+l-e+b-k+f-i-g+a-k+n*a)%100;
                  m += (h+h+h*c-j)%100;
                  e += (h+i+f*d+g+n)%100;
               }
               for( ; ++FORcnt[74]%5 ; )
               {
                  g += (l+h*k-b*b+j*c*c+d-b*b*d*m+k)%100;
                  k += (l+b+i-f-b+c*j-h+f)%100;
                  d += (m+l-e-k+n+e-b+m*n-c*i*f-f)%100;
               }
               if( ++IFEcnt[49]%2 )
               {
                  e  = (l*e+a-k-b*m)%100;
                  n -= (l-d+d+c-c*d+e-h-h)%100;
                  c -= (e+h*c+c-a-g*l+m)%100;
                  n += (k*j)%100;
               }
               else
               {
                  l -= (n-f-h+n*c-f+n*j*h*b-h+m*d+m)%100;
                  n -= (i+e+l+b*e-j+a+m+i+a-l+f-f-g)%100;
                  f -= (b+i*h+l+j*e+a*i+m-e-i+h-m)%100;
                  h -= (m*n*l-b-d+b+j-l)%100;
                  c += (b+b+k-i+i+a-a-d)%100;
               }
               while( ++WHILEcnt[49]%5 )
               {
                  n -= (a-g*e-a+m+m+d-g-d+l-m+j)%100;
                  g += (h*a+b-l+h)%100;
                  e += (l-g-h+n-l-e+m*m-j-l-j*k)%100;
                  l += (j+a*i+h+b+n-g*m+k)%100;
                  i -= (k*a-h+j*f)%100;
                  l -= (g*j+f-m-f+j-k+g+k+f-l*j-b)%100;
               }
               do
               {
                  f -= (d*m-k*a*a+l*e+l-l*b)%100;
                  i -= (j-k*m-g*e+i-b*f)%100;
                  a += (l+e-b+h*n+m+f+k*e+g-n+j+a)%100;
                  i += (m-g-a+k)%100;
                  e  = (a+k*m*g+n+g-i+c-m+c-e*n)%100;
               } while( ++DOcnt[50]%5 );
               k += (h+d+k*g-i*k+l)%100;
            }
            for( ; ++FORcnt[76]%5 ; )
            {
               
               switch( ++SWcnt[25]%3 )
               {

               case 1:
               {
                  k -= (k-i-j+h+k-k)%100;
                  e -= (n-a*l-b-d*g*m+a*g+i*n-i+g+i)%100;
                  e -= (h-l-a*i)%100;
                  l  = (n+j+a+g+d-d+m)%100;
               }
               break;

               case 2:
               {
                  f += (i+d-j)%100;
                  n += (d*h*h+l+f+d*g+i-b*l)%100;
                  e += (a*b)%100;
                  h -= (l-l+e-f)%100;
                  a -= (n+i*h+m)%100;
                  m -= (c*l)%100;
               }
               break;

               default:
               {
                  i += (g-a-i-h-e+e-b-n*g*l-k)%100;
                  c -= (n*b-c+c*a)%100;
                  b -= (c+i)%100;
                  a -= (f+k-a+h-j*j*k+n-i)%100;
                  m += (g-a)%100;
               }
               }

               if( ++IFcnt[38]%10 )
               {
                  h += (d+c+k-a+n+m+b-c-l*n*j)%100;
                  i += (n-e-b)%100;
                  j  = (k-l+g-l)%100;
               }
               if( ++IFEcnt[50]%2 )
               {
                  h -= (e+l)%100;
                  c  = (k+f)%100;
                  h += (g+c+m)%100;
                  i  = (b+m+l+h-a*c-n)%100;
               }
               else
               {
                  i += (g+n-a*a+e)%100;
                  b -= (n-i+m+h-c)%100;
                  j -= (c-j+l-m-g-n+h+e-b)%100;
                  l -= (i-i-e*g-h*g+d+c-d+k*j)%100;
                  f -= (j+j+j-f+a-m-e*f-f-b-e-a-f+a)%100;
               }
               g -= (f+d-j-d+l-c)%100;
               d -= (i+h-m*j*h+a+f+n-g-k*f+f-h)%100;
            }
            m += (f+f+i*m*j)%100;
            g -= (c-f-e)%100;
         } while( ++DOcnt[49]%5 );
         c += (h-c-d+m-k*a-a+e-n)%100;
         n -= (f-f*k)%100;
         b -= (l+c+b*b+i+m-g)%100;
         g -= (e+i*f-j+n-k-a-n+e+h)%100;
      }
      m += (b-b+h+n-e-n+a)%100;
   }
   f -= (e-c-d+g+i*c-m+k*k)%100;
   g -= (b+e-h-b-k+e+i+d+n+l*d*m)%100;
   h -= (b*l+f-f+a-h+e+c*n-b-c*k)%100;
   i += (b*i*j-d-g-j+k-k-i+n*n-b+a*l)%100;
   b += (d-f+a+j*j*j+n*i+i+a-c)%100;
   k -= (e-b*g+m-b-n+c+a+m-n*e+d-g-b)%100;
   n += (a+k*b+h*h*g-i-n)%100;
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
                  m += (c-a-g)%100;
                  c += (m-e-d)%100;
                  g += (e-e-l+n*l)%100;
                  m += (l-h+h)%100;
                  k -= (k-h-d+l-a+k+d-b*n-n)%100;
                  m += (i-m-g+m-e-f*a+a)%100;
               }
               else
               {
                  i += (n-e*e*a)%100;
                  e -= (f-h*b+k+n-i+m+b-n+l-f-h*j+h)%100;
                  c -= (b-g+g)%100;
                  l += (d-l-g-l*f+g+k*l*c-n-f+l)%100;
               }
               while( ++WHILEcnt[51]%5 )
               {
                  c -= (a-f-f+e-h)%100;
                  a  = (d+f+k+j+l+h+l*g*b)%100;
                  b += (a+m+b-f-a-j-j*a+d+g+e+j-c+f)%100;
                  i -= (h+k+e+e-f+f-g+l*f+a)%100;
                  c -= (n-g*d)%100;
               }
               do
               {
                  d -= (m+h+i+j+g-j-d-c)%100;
                  i -= (f-g)%100;
                  c -= (m*m*h+i+g-c-j-i-l+c)%100;
               } while( ++DOcnt[52]%5 );
               if( ++IFcnt[39]%10 )
               {
                  a -= (h+m)%100;
                  n  = (f-l*d+m-m+n*i*k)%100;
                  a += (n+f*j+g)%100;
                  j += (b+e-h-g-a-j+g-m-m+n*g+c-e+j)%100;
                  d += (a+i+b+n-h)%100;
               }
               f -= (i-k-g-b-g)%100;
            }
            for( ; ++FORcnt[78]%5 ; )
            {
               
               switch( ++SWcnt[26]%3 )
               {

               case 1:
               {
                  j  = (k+g+n+a)%100;
                  i += (l-j)%100;
                  n += (b*k+n+n*m-d+j-n-h)%100;
                  l -= (f-g-a-i+a+k-f+k+i+n)%100;
                  m += (n+f*j-h+h-h)%100;
                  n -= (c+d+j-j*a+g+g)%100;
               }
               break;

               case 2:
               {
                  k -= (d-c*c)%100;
                  f -= (k-c-n-a*l+a-f+c)%100;
                  e += (k-b)%100;
                  j += (e+c*i-n+h+e+g+k-k)%100;
                  l -= (i-m+l-d+k+n-g+e+l+d*a-m-n*e)%100;
               }
               break;

               default:
               {
                  e += (m+h)%100;
                  f -= (c+l)%100;
                  h += (b-h)%100;
                  d -= (g*k)%100;
                  j  = (k+b-f-f-m*m+e*g+n-d-f)%100;
               }
               }

               if( ++IFEcnt[53]%2 )
               {
                  j += (e-f+a+g-a-h-b+h+b-n)%100;
                  m -= (a-d+g*l+k-m-c+k-c-b*f)%100;
                  c += (e+g+a-g-g)%100;
                  n += (b-m*m+e+b+g+f-l+l+e+a)%100;
                  g += (i-f+d*j+c+h)%100;
                  g -= (f*h-k-b+g+l)%100;
               }
               else
               {
                  d -= (k+a+d+g*c-i-b)%100;
                  i -= (a*g+c-h-k-g-c-f+a*h+l)%100;
                  f -= (g+d+c+l)%100;
                  j -= (j+f*m+b-c-f+k+f+b-m*d-d-a)%100;
               }
               k -= (h+a+b-m+h*h+f-h-g)%100;
               l -= (d*i*a-f+d)%100;
            }
         }
      } while( ++DOcnt[51]%5 );
      l += (i-b-h+j+k-i-g+l-n*k-h-h+d)%100;
      g  = (d+k+d*h+n+k-a-k-c-g-h-m)%100;
      j += (g-c*c-a)%100;
      h += (c+n*k-e+d-h+m-k)%100;
   }
   f -= (h-c-h-n-e-g-e*k+j+h+c)%100;
   b -= (l+f-j)%100;
   j -= (m-e+n*h+k*g-h+l)%100;
   d -= (m+d+g-n)%100;
   e -= (i*e*k*d-l-i-c)%100;
   e -= (g+m+c-e-i+i+b-e-f-d+n+l+l-f)%100;
   i -= (d+b*l+k+n+n-b-g+c+e+d+l+g-l)%100;
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
         for( ; ++FORcnt[82]%5 ; )
         {
            if( ++IFcnt[40]%10 )
            {
               for( ; ++FORcnt[80]%5 ; )
               {
                  e += (e+l+k+h*d-f*n-f+l*l-k-a+n-d)%100;
                  i  = (m+l-c-f-n*k-g*d-n-j*g-b)%100;
                  a += (j-l-j*h+a+h+c)%100;
                  n -= (e-k+c-l+k+n*i)%100;
                  d += (e-d+h-m*k*i)%100;
                  e -= (a*m)%100;
               }
               if( ++IFEcnt[54]%2 )
               {
                  e  = (f-b+a-d-c+h-c+c+j*c)%100;
               }
               else
               {
                  d -= (a-g-e+n-g+m-l)%100;
                  j -= (m*a-n+b+f+k)%100;
                  e -= (f-m+d)%100;
                  n += (m-n-g+a+i+h+k+c+b+b+g-m)%100;
                  a -= (m*i*j+l)%100;
               }
               while( ++WHILEcnt[53]%5 )
               {
                  d += (f-n-l+a*k-i-h-f+n-f*a+f)%100;
                  a  = (j-e+l*d-d-a+g+f*h-h-a)%100;
               }
               do
               {
                  j -= (g+m+m*h+d*b-m*k+e+j-c+e-k)%100;
                  b  = (j*k)%100;
                  a += (m+b+g+l+b+h+n+g+f-a+j+f*b)%100;
                  g -= (c+b-m*i+i*j*c-m-d-g-j*b-i)%100;
                  b -= (d-n)%100;
               } while( ++DOcnt[54]%5 );
            }
            j -= (b*l-n)%100;
            for( ; ++FORcnt[81]%5 ; )
            {
               
               switch( ++SWcnt[27]%4 )
               {

               case 1:
               {
                  e -= (c+d*m)%100;
                  a += (e-b*i*j*f-l-h-c-j-m+n+j+e-l)%100;
                  g += (m+a-i+e-j)%100;
                  a -= (g+i)%100;
                  e += (e*n-a)%100;
                  i += (i+k+n+a-i-m+g-h-c)%100;
               }
               break;

               case 2:
               {
                  l -= (n-h-n+l+c-j+l+a+i)%100;
                  h += (j+f*f-e+h-c-m-g+b+a-e-l)%100;
                  g  = (i+l*i*a-b+l+e-f*d-f)%100;
                  h -= (f+g)%100;
                  b -= (k-k+k-l-m-b*e+m+e)%100;
               }
               break;

               case 3:
               {
                  m += (h+c+h)%100;
                  n -= (g*l-l-k-i*m*a+j+e-d+j)%100;
                  i -= (k+b*h+h+a)%100;
               }
               break;

               default:
               {
                  f -= (c+h-c+i*d-g+n-d+k)%100;
                  a -= (a*c)%100;
                  n += (b*e+g)%100;
                  b += (k+i-n-a-g+k-g-j-m*c)%100;
                  d += (b-g-a-m+d+h+a-n-m-g-a+h)%100;
               }
               }

               if( ++IFcnt[41]%10 )
               {
                  h -= (g+i+h-m-i)%100;
                  l += (i-b)%100;
                  l -= (e-d+h+g-h)%100;
                  n += (d+g-c+l+i*a+d)%100;
               }
               if( ++IFEcnt[55]%2 )
               {
                  c += (n-a+i+d+b+f+j-m)%100;
                  b -= (n-l+f+b*n-i*d*m*g-a*a+c)%100;
                  f -= (a+g*f+k*e*n+d-e+g*h-e*a-k*h)%100;
                  j += (e-l*h-g*b-a-k*f+k*j-m-d+b+d)%100;
                  a += (j-l+a-b-e*e*b+l+l+a-b)%100;
               }
               else
               {
                  l += (n-i-h*i+i-c-d+n-h)%100;
                  f -= (c+l+h+i-g+j+j+f)%100;
                  d += (b*i-n*k+i-g+k)%100;
                  l += (k+k*h+k-h-k-j+m-e-d-c*n*a)%100;
                  n += (e-k*c-g-l-j-d*l*j)%100;
                  e -= (l+b+f-n*g-n)%100;
               }
               while( ++WHILEcnt[54]%5 )
               {
                  d -= (g+h+k+c+e+l+n-m*j-c+f)%100;
                  k += (a-a+b+e-j+g-m+k*h*g-a)%100;
                  d -= (n-b*b*c+e*f*l+n+k+g)%100;
                  g += (k-f-d+n*i+m)%100;
                  m  = (d+m)%100;
               }
            }
            k += (g+l+j-b+l+i-b+g*g)%100;
            c += (k-i+l+e*h-b*a-h*i-j)%100;
         }
         a -= (e-f-i-n*a+f)%100;
         f  = (n+i+i+g*n-n+l+d)%100;
      } while( ++DOcnt[53]%5 );
      c  = (a-n-d-j+a)%100;
      m += (h*j*h*b+c-k-j-g+i+b*g-l)%100;
      l  = (j-l+h)%100;
      d -= (j+i*a-i-i+a-f)%100;
   }
   m += (h+e)%100;
   m -= (h-k+k+k+c+f*c+a-b+m)%100;
   f -= (m+c+n+i*i)%100;
   d -= (d*d+a+a-l-b+f-l+m+i*i-b+j)%100;
   b -= (d+a-h-j-f-c+l)%100;
   h -= (e+a-l*m-n+g-f+b+l)%100;
   i += (g-b+a+b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F26(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      for( ; ++FORcnt[86]%5 ; )
      {
         for( ; ++FORcnt[85]%5 ; )
         {
            if( ++IFEcnt[57]%2 )
            {
               m += (h*f)%100;
               for( ; ++FORcnt[83]%5 ; )
               {
                  f += (h*f)%100;
               }
               
               switch( ++SWcnt[28]%4 )
               {

               case 1:
               {
                  e -= (j+a+j+g+l-i-a+m+c-d-m*e-n+c)%100;
                  e += (m-b+e*e)%100;
               }
               break;

               case 2:
               {
                  g += (k-h)%100;
                  c += (b+b)%100;
                  h += (n+l*m+e*h*c)%100;
                  b += (h+m-b-k+m*a+f-b-g)%100;
                  c += (a+i+a-k+k+e+h)%100;
               }
               break;

               case 3:
               {
                  l += (f+n)%100;
                  n += (k-m+i*n+d*a-a+h-a*c+j)%100;
                  h += (g*a-c+i*j+n+h-n+h+f+d-b+e*b)%100;
                  m -= (l-m-k+l)%100;
               }
               break;

               default:
               {
                  n += (i*c)%100;
                  g += (f+l+i+j-c+j-e+m+d-n)%100;
                  f  = (b+m*g-m+a+d)%100;
                  e += (c+c+l*k-j+i+c+a-c+n-i*j*d)%100;
                  c -= (a-c*l+h+l-m+e+k+a-l)%100;
                  e -= (k+b)%100;
               }
               }

               if( ++IFEcnt[56]%2 )
               {
                  l  = (g+c-h-b-c-a+b+e-j)%100;
                  e -= (k*h-d-l*m*h-j)%100;
                  h -= (e*j+c+l+i+d-i+h+b+i+l)%100;
               }
               else
               {
                  l -= (g*a+j*l-g)%100;
                  f -= (m+e*n-d+j*l*n*l*h+d+j+j)%100;
                  e  = (e*f-k-j-m+g+e-f*e+a*h-k*e)%100;
                  g += (k*l+a+f+i-a+i-e)%100;
                  j -= (a+e+d-i-k-n)%100;
               }
               while( ++WHILEcnt[57]%5 )
               {
                  d -= (g-l+n*j+l-c+l+f+j*h)%100;
                  a += (a-n)%100;
                  b += (e+h+c+i-l-a-g+n-c-i)%100;
                  i -= (j-n-e-l-b*f-c*n+f)%100;
                  h -= (c+m*l)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[56]%5 )
               {
                  k -= (j+a+e+e+d-m+k-a*n+h+d-b+n)%100;
                  d += (b-a)%100;
                  j += (j+b-g*i+a*l+b*i-h-c+d+a)%100;
                  d += (h*n+e+f-c-n-h+e+k)%100;
                  c += (c-f+g-e-g-m+k+d+c+l+n+n-e)%100;
               }
               do
               {
                  e -= (i+g+l-h)%100;
                  h -= (f*k+e*g-h)%100;
                  m += (g-d+a-n-f-i*l-e+m+f+m*i+j-l)%100;
                  f -= (j+c+d)%100;
               } while( ++DOcnt[56]%5 );
               if( ++IFcnt[42]%10 )
               {
                  e += (j+a-l+h+n-j-a*l)%100;
                  e -= (j-j+g-f)%100;
                  d -= (f-h-n-n-f-i-d-h-j+n+c)%100;
                  i += (m-i-c-c+c*f)%100;
                  l -= (n+n-f+c+h)%100;
                  g -= (b-d-l-g+g-c+d+k-j*n)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[84]%5 ; )
               {
                  c += (k+b*g)%100;
                  h += (a*l)%100;
                  n += (k-m+h+c+i+l+m-l-l+d*n+m-j-n)%100;
                  j += (m+i+k-j+e+b+e+f+n)%100;
                  l  = (e*f)%100;
                  d += (m-i*b+l+c)%100;
               }
               if( ++IFcnt[43]%10 )
               {
                  j += (d-c+k+j+a+a-e+d-l)%100;
                  a += (l-m+k+i-j+h+f-j+l+k-m)%100;
                  k -= (a-m*b*n+n-k+e)%100;
                  i -= (k-b+m-k)%100;
                  a -= (j+f)%100;
               }
               n -= (g-m)%100;
               e += (f+k+e+e-f*k-i-i+g-b-i)%100;
            } while( ++DOcnt[57]%5 );
            k += (d*f+g-a-g)%100;
            a -= (j-e*e+d)%100;
            l -= (c-e+n+g-a-n-e*n-f+k+h+h*b+l)%100;
         }
         d += (j-i+m+f-e-n+g+a-k*i-h)%100;
         j -= (a+n-l*n-m-d-a+j*g-e+a*k)%100;
         k -= (f-g+c)%100;
         m -= (g-a-a-b*b-g+h*d-h-i+i+k*c*n)%100;
         f += (e-m*i+b*g-j-e+l+b*a)%100;
      }
      i += (b+b+m)%100;
      a  = (a+c+i-f*j+e+b)%100;
      b += (m*a+d+n+j*b)%100;
   } while( ++DOcnt[55]%5 );
   n += (l+h)%100;
   c -= (e-n*n+h)%100;
   l += (h*c+g-k-n*j+n+n-k+a)%100;
   b += (k-l*l+b-n+a+k+l-e*e+c)%100;
   g -= (h-e-c+e+f+d-h+i*h+m-g+f*i)%100;
   n  = (h*h-g*m)%100;
   e  = (g+f-k+k+d-i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F27(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[90]%5 ; )
   {
      if( ++IFEcnt[60]%2 )
      {
         i -= (m+n+d-b*b-b-k-b-e+l+i)%100;
         l -= (m*m)%100;
         m -= (c-n-k-j+c)%100;
         k += (d-a-e*h+c+c*n*f-n+c)%100;
         g += (a-h-n*h-j-k+f*k-k-d-c-f-h)%100;
         a += (d-j+i+e-j)%100;
      }
      else
      {
         while( ++WHILEcnt[59]%5 )
         {
            do
            {
               d -= (a+n)%100;
               for( ; ++FORcnt[87]%5 ; )
               {
                  i  = (i+h*i-e+m)%100;
                  h -= (l*g-c+e-g-g-j+a-f)%100;
                  g += (i+j)%100;
               }
               
               switch( ++SWcnt[29]%4 )
               {

               case 1:
               {
                  m += (n*k+n+k-e-c-h+b)%100;
                  k -= (e-m-j+i-n-l-b)%100;
                  k += (a*h+d)%100;
                  a += (b+i+m)%100;
                  j += (f+n+f+m+c+c-f-h)%100;
               }
               break;

               case 2:
               {
                  n += (f-g*f-d-n*k)%100;
                  g -= (b-e-c*a+i-f+f-h-d+m+h+d+i)%100;
                  f += (n-k+c+e-a+m*h+d-m)%100;
                  h += (f-c+h+f)%100;
               }
               break;

               case 3:
               {
                  a -= (n*h-b-d+a*a+f*k*e-m*j-h+h*m)%100;
                  b  = (b-k-d+m+m+e-k-m)%100;
                  k += (m+k-j-f+l-c+e)%100;
                  a -= (j-m*j-b+j*h-f)%100;
                  h -= (j-g-h+m*a-i+h-j*n-h)%100;
                  e -= (i+b+b+c-l-j-l-h-g-g+l)%100;
               }
               break;

               default:
               {
                  l  = (d+n-d+b)%100;
                  g += (f-l-i+c-l-d+c-g+b-j)%100;
                  l += (i-e)%100;
                  n += (h-j*m-b-m+a+l+e-e-k*i+l)%100;
                  e += (g+l-c-f*a+b+d-k+j+f-c+g+n+c)%100;
               }
               }

               if( ++IFcnt[44]%10 )
               {
                  l += (d-n-h+j+n+n*c-b-f-m)%100;
               }
               if( ++IFEcnt[58]%2 )
               {
                  f += (a+d-c*l+b-j-h+m+g-i)%100;
                  k += (d-f-n-h-h-d-d)%100;
                  j += (d+b+k*m-d)%100;
                  m  = (f+m)%100;
                  k += (n-c+c-g-b-k+b-j)%100;
               }
               else
               {
                  l += (g*b-k-a+a*h+e-c*a)%100;
                  c -= (l+c)%100;
               }
            } while( ++DOcnt[58]%5 );
            while( ++WHILEcnt[58]%5 )
            {
               do
               {
                  i -= (j-a*g-c+i-e-g-f*g*d)%100;
                  b += (l-c-l-g+b-a+e-j)%100;
                  e  = (g-h+k-h+g-j+d-n-e-a+b-k)%100;
                  e -= (f*n-a-n-m-m+g+f)%100;
                  f += (n-f)%100;
                  g += (d+a+i*a*b*c*d-l*e-d-i+a)%100;
               } while( ++DOcnt[59]%5 );
               for( ; ++FORcnt[88]%5 ; )
               {
                  d  = (f+a)%100;
                  e -= (b+n-f+i-c*m-j-h+j+c-k-d+d*m)%100;
                  i -= (g+f-l*c-m+b+m+m+g-h*l-b)%100;
                  d -= (b+d-e+d+d+c+f*l+c-j-l*j+k-b)%100;
                  c -= (l-c*c-h*m-a)%100;
               }
               for( ; ++FORcnt[89]%5 ; )
               {
                  l += (m+m)%100;
                  g -= (e+d-c+b+e-h+i*g*i+d+f)%100;
                  j += (i+b+m+c-a*e-n)%100;
               }
               if( ++IFEcnt[59]%2 )
               {
                  f += (a+h*i-n*f+c*k-c)%100;
                  k += (e*d+g-i+h*b-g*e-k+h)%100;
                  k  = (b*n+g+i+l+k)%100;
                  a -= (f+c+i*b-i+n+l*j+e*j)%100;
               }
               else
               {
                  e -= (g*c)%100;
                  a -= (a*j*i-a+h-c+h-n+n+i*l+i-n)%100;
                  i -= (h-n+j+e-f-l-k*g+h+n-a+i)%100;
                  k -= (g*n*i)%100;
                  l += (b-k)%100;
               }
            }
            m += (a*c+f-e-n-m*h*b*b-c*l*m)%100;
            h += (b+g+f-d)%100;
            i  = (d+h+h+k-h-g)%100;
            k -= (i*m)%100;
         }
         n  = (i-f-k+b+b+l)%100;
         j += (k-n*i+h+h+m+j+d-m+n)%100;
         a += (g+e+m)%100;
      }
      i += (h+k-n+a-f+a-l-e+h+g+c-a)%100;
      n += (g-c-a+e-f-j-a+g-h-h*l-b-b-k)%100;
      e += (h+i+l-n+g-c-g-k*h)%100;
      b += (j+a+f+l+e+c*h-k+j*i+a+e+l*c)%100;
   }
   b -= (g-d-n+f+b*m*d+i+l+e+j+h-m)%100;
   a -= (f+i)%100;
   j -= (l-a-d*n+n-k-d+c*i*d-d-f)%100;
   a -= (i-g)%100;
   e  = (l*b+l-i-i)%100;
   f  = (l-l+k+j-k+k+c*k+g*e*j+l)%100;
   j -= (h+k+m+i-i-a-f*b+h+b-h+i-g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F28(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[61]%5 )
   {
      do
      {
         if( ++IFcnt[46]%10 )
         {
            c -= (e+l)%100;
            for( ; ++FORcnt[92]%5 ; )
            {
               
               switch( ++SWcnt[30]%3 )
               {

               case 1:
               {
                  l  = (a-m)%100;
                  h += (i*g-h+f-h)%100;
                  f -= (f*n)%100;
                  b += (h+k)%100;
                  j -= (k-d+a-b-g+f-e-c-g-i-h*l)%100;
               }
               break;

               case 2:
               {
                  m -= (g+e)%100;
                  d -= (m-h+e+h-f)%100;
                  i  = (n+b+l+a+g+m*l+b+j-c-l*j+d)%100;
               }
               break;

               default:
               {
                  c += (n*l*h)%100;
                  g -= (i+l+i+k+e*h)%100;
                  i -= (b+i-a-j-m+m+a)%100;
                  k += (k+l)%100;
                  d -= (b+i-h+j)%100;
               }
               }

               if( ++IFEcnt[61]%2 )
               {
                  b -= (i-h+e*d+h*d-b-j-m*k+l+h)%100;
                  e += (l-c-a-i-d-g+f*g+d-j-g-b-i)%100;
                  m += (m+f+j)%100;
                  b -= (f-e)%100;
                  m -= (e+b+c+m+j*a+n-j+m)%100;
                  i += (b-b-j+g+f*h+f*m)%100;
               }
               else
               {
                  g -= (m-b+j+j-m+b+c-l*d+d-i-c+k)%100;
                  l += (i+l)%100;
                  d += (j+l)%100;
                  n += (i-h)%100;
               }
               while( ++WHILEcnt[60]%5 )
               {
                  e  = (k-i*k*i-l+e-c+h+b+h)%100;
                  c -= (m+k-a+h-b-g)%100;
                  k -= (h-m+g-a+g-l+n+m-d-b+c-g)%100;
                  a += (c*n)%100;
                  k += (f-n+h-i*i-f*n+d)%100;
               }
               do
               {
                  n += (m+a-i+l*d+m+g*k+m+c)%100;
               } while( ++DOcnt[61]%5 );
               for( ; ++FORcnt[91]%5 ; )
               {
                  m -= (n+h-m*k-l+m-h+b-g-b-c-n)%100;
                  k += (a-d-a-n-e-n-k+f-c+m+l)%100;
               }
               if( ++IFcnt[45]%10 )
               {
                  k += (g+c+g-a+k-d+d+j)%100;
                  l += (l+k-l-e*n-a+i-i+j)%100;
                  h += (h*e-e-d-k+g-j+f-l-i-g)%100;
                  e += (g-k)%100;
                  c += (a+i+i-e+m*k)%100;
               }
            }
            for( ; ++FORcnt[93]%5 ; )
            {
               if( ++IFEcnt[62]%2 )
               {
                  j -= (e-l+k-g+k)%100;
                  d += (k*e+k-d-g-a-c-f)%100;
                  g += (l+d-i-j+g-j-f-n+n)%100;
                  e += (j+g)%100;
                  m += (e+f-e-n*b*f-c+e+b)%100;
               }
               else
               {
                  j += (j+l+i-c*a)%100;
                  c -= (j-a-i-j-e+j-n+i-b)%100;
                  m -= (b-g+b-a+c+i*c)%100;
                  j -= (k*m)%100;
                  d += (m-h)%100;
                  f += (f+f+f+i+n-d-b-i-j)%100;
               }
               m += (h*m+k-n+m+a+d-f-a-j*k-j-d)%100;
               n += (f-k+n+e+m-e*j+h+a+g+b)%100;
               j -= (g+i*e*m-c+d)%100;
            }
            f -= (d-n-a*j+e-m)%100;
         }
         h -= (a-e+l+k)%100;
         k -= (m+b-k*h-i+b)%100;
         m += (k-c*i-m-e-a-e+d*i-a*n+j-e)%100;
         c -= (g-f+m*m+c+j-i-f-i-j+k-e)%100;
      } while( ++DOcnt[60]%5 );
      f += (c-d+f+b*n-n+h+j-a+g+e-h)%100;
      f -= (i-k+n-g*d*n)%100;
      d += (i+c*f+a*f*a-k+h)%100;
      l += (j*c+i)%100;
   }
   k += (b+g-i-i*a)%100;
   g += (c+g-e+m-l+n+c+k+l)%100;
   m -= (e-n*l-m-i-l*n-b-f*c+h)%100;
   n += (b+c)%100;
   f += (n*k-h+d+c+d+c*c-g)%100;
   f  = (i+n-e-l+b+j*g*l+f+i)%100;
   j -= (f+a-j-j*l+k*g+b*k-k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F29(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[64]%5 )
   {
      do
      {
         d  = (h+l)%100;
         for( ; ++FORcnt[96]%5 ; )
         {
            
            switch( ++SWcnt[31]%3 )
            {

            case 1:
            {
               if( ++IFcnt[47]%10 )
               {
                  j += (h+h+m-e+i-c*k+g-c-h*d*m)%100;
                  n += (e-l*a-i-d)%100;
                  d -= (f+b)%100;
                  i -= (n-b*h-g*a-i*g*i-j)%100;
                  d -= (j-h-k+n+l+l-i)%100;
               }
               if( ++IFEcnt[63]%2 )
               {
                  a -= (c*l)%100;
                  m += (l+n-m-l-b)%100;
                  k += (b-d+h+j+l-c-a)%100;
                  k += (n+g*k-a+l)%100;
               }
               else
               {
                  d += (l-e)%100;
                  g  = (e-c*g*f+b-f+a*d-g*f)%100;
                  e -= (k*g+c)%100;
                  c  = (f+f+c*d-e+a)%100;
                  b  = (d+i-k*h+d)%100;
               }
               while( ++WHILEcnt[62]%5 )
               {
                  e += (f-i+f+g*e*f*d+g-h-l*j-g*b*n)%100;
                  d -= (d+b)%100;
                  d += (e-f-l+f+j+e+d-h*i+e+e-c*n)%100;
                  l += (l-m-e-d+k+f-g+k-k+i-l+n-a-f)%100;
                  b += (d-m*j+b-l*j*n)%100;
                  n += (k-h+n+d*d+l-j)%100;
               }
               do
               {
                  j += (h*i-m+k+d)%100;
                  d += (i-j+g-n-e-j+j+m)%100;
                  m -= (c-l+b+n-i-i)%100;
                  b -= (m-j+j*j-g-n-h)%100;
                  n += (b-j+n)%100;
               } while( ++DOcnt[63]%5 );
               for( ; ++FORcnt[94]%5 ; )
               {
                  h += (e-d-l-f-m+l+a-b+e)%100;
                  b -= (c-i+h+m+k+f)%100;
                  a += (e*i+i-c*d+j)%100;
               }
               for( ; ++FORcnt[95]%5 ; )
               {
                  l += (a-h-e*k)%100;
                  j += (f*b)%100;
                  j -= (e-m-f+a*b-a+a-l*f+j-i)%100;
                  a  = (c+i+c+e)%100;
                  c -= (d-l-a*f+h-c+g-f+c)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[64]%2 )
               {
                  b -= (b+e+a+a*e-h-l+e-i+b)%100;
                  a -= (h*n-n*k*d+g+g+c+h-e-f)%100;
                  i -= (c*i-g+g-h-l*i+h+f+g+a-d*m*h)%100;
                  c += (g+d-d-i-a*m-d+e*d-d)%100;
                  m -= (a+f*l+d*i+m*b+g+h+c-j-c)%100;
               }
               else
               {
                  g -= (e*k+i-f-i+j+e-l*b)%100;
                  m += (h-c+k-d+n+f*g-l-d)%100;
                  n -= (i-g)%100;
                  n  = (f-h*d-e*b-a*c-a-c)%100;
                  e += (a-h*i+k-n-c+c-l+a+h+i*k+f)%100;
                  l -= (a-c*b*k-k-b-h+l)%100;
               }
               while( ++WHILEcnt[63]%5 )
               {
                  l += (f+d+f-g-n*f*g+j+d+l+e)%100;
               }
               do
               {
                  c -= (c*l*h*i)%100;
                  n += (d+e-m-f*g-a)%100;
               } while( ++DOcnt[64]%5 );
               if( ++IFcnt[48]%10 )
               {
                  j -= (n+a-j-k+j-j+a+b*h-m+j-m)%100;
                  b += (l*c-l+n-k+l+j)%100;
                  g += (l-k-e-d-c-m+d-a)%100;
                  c -= (n-j-f-h+m)%100;
                  h -= (i+c*n-l+a+g-g+h+d)%100;
               }
            }
            break;

            default:
            {
               f += (i-n)%100;
               n -= (n-j+i*g*l+l)%100;
               n += (b-k*e+k+l+k-j-m)%100;
               a -= (l-m+l*i+a+j-e-d)%100;
            }
            }

            b += (h+n*f)%100;
            g -= (m+l+f-j-i)%100;
            c += (k+c+h-b*c+b+d+e*g+c)%100;
         }
         c += (e+a*g+k-g+i-f)%100;
         g += (g+i)%100;
         j += (f*h-e+c*e-a-b-h-i)%100;
      } while( ++DOcnt[62]%5 );
      a += (d+e-m-m+a-a+c)%100;
      i -= (g-g-h*e+b)%100;
   }
   e -= (a+l*g+n*j-l-g+g-j)%100;
   l -= (n-g-c*b*j+d-b-j-e-h-n-j+l)%100;
   n += (m-j*j-m-d*n+i)%100;
   j -= (b+g*e*f+i*b+c*m*h+n+e-j)%100;
   f -= (j*d-j*c-j+n*n-i*f-c-e-h*a+f)%100;
   c -= (l*n+b+c-i-b*n-i)%100;
   d += (b*j-k-c-e+d*c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F30(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[32]%3 )
   {

   case 1:
   {
      for( ; ++FORcnt[100]%5 ; )
      {
         e += (i-j+n*b*m*e+d+f-c-k)%100;
         if( ++IFEcnt[66]%2 )
         {
            d += (f-g-h-d-i-c*d+a+l*n*c-m+f)%100;
            h -= (j+b*h+m*a*d+g)%100;
         }
         else
         {
            while( ++WHILEcnt[65]%5 )
            {
               do
               {
                  k -= (d+m*k+g+l*k-b+e+g-l*l+a-f)%100;
                  j += (n-f+k-f+j+b+m*j-g+f-k-a)%100;
                  a -= (j+e-f+b+b-c+j*b-k*a-m)%100;
                  f += (h+h)%100;
               } while( ++DOcnt[65]%5 );
               for( ; ++FORcnt[97]%5 ; )
               {
                  l -= (g+j-b-m-k-e+e+m-a+j+a*k+d)%100;
                  a  = (i-h-f-b+n*f+e+k-c-k-j)%100;
                  i  = (e+n-i)%100;
                  g += (e+g-h*m*k-a*e-c-j-m*h-m*b+i)%100;
                  c  = (k-f)%100;
                  j += (n-b-a-j-f+l)%100;
               }
               if( ++IFcnt[49]%10 )
               {
                  h -= (g+h-n+b)%100;
                  c += (k*n-l+k+i-i-b*e-m+a+k)%100;
                  b  = (f*m)%100;
                  i  = (e-i-a*b*j+h*n*k+c)%100;
                  n += (k+e-a-n-b+d+b-n+f)%100;
               }
               for( ; ++FORcnt[98]%5 ; )
               {
                  f += (f*h*l*g)%100;
                  k -= (e-d+b*e+a*b-h+k+a-h)%100;
                  a += (h-i+n-a-j-b+k+h-i+a+n-m)%100;
                  l += (j-g+f+i-d+f+f+l-f-m)%100;
                  h  = (h*m+l+k)%100;
               }
               if( ++IFEcnt[65]%2 )
               {
                  g -= (i-a)%100;
                  i -= (h-d)%100;
                  f -= (h-c+n+a+b+e+h+d*m-d)%100;
                  f += (f-h-l)%100;
                  j += (i+c+k-d+n*b+i-d*a+f+b)%100;
                  e -= (g-h*g-j-a)%100;
               }
               else
               {
                  n -= (h+i-h+l*n-a)%100;
                  e -= (d-i-d-i-c+e-n)%100;
                  a += (n-g*g*k+b-g-l+d*m+e-f)%100;
                  b += (l*d+i+d-c-c*a-l+n+c+i-k+b)%100;
               }
            }
            while( ++WHILEcnt[66]%5 )
            {
               do
               {
                  c += (k+n)%100;
                  b += (h*c*h-m+b)%100;
                  k += (i*c+n)%100;
               } while( ++DOcnt[66]%5 );
               n += (i-i-n-a+g*n-n-j-f-l+l+d+i*n)%100;
               for( ; ++FORcnt[99]%5 ; )
               {
                  a -= (f-b-g)%100;
                  a -= (m-e+c-k-h)%100;
                  a += (d+c+m-f)%100;
                  f -= (g+n)%100;
                  d += (m+h+i*h-m+l-e-m-j-a+m)%100;
               }
               
               switch( ++SWcnt[33]%4 )
               {

               case 1:
               {
                  l -= (j-c-h+e+j-n*h+j+f+d+d+j-g)%100;
                  f -= (j+l*j-j+c*k-g)%100;
                  m  = (a+f*f-e*g+e*j*m-m-f)%100;
                  k += (c+f-k+j-d*n-n+d+e+n+d-m+m-d)%100;
               }
               break;

               case 2:
               {
                  j  = (n+n-c-d*c+d+i-m+h-a)%100;
                  m += (m+g-g*l+i*j)%100;
                  e += (n*n-m*d-j-n)%100;
                  j += (c-g+i-d+g*m)%100;
                  n -= (f+a-l-c+d-l*j)%100;
                  f -= (i-n-i+c+f-n-b-b-i-h-k-h-d)%100;
               }
               break;

               case 3:
               {
                  m -= (k-e*k*f*m-d+f-j)%100;
                  n += (a*i+b+e-n)%100;
                  l -= (n*h-l*n+a+l*m-d*b)%100;
                  l += (b+h)%100;
                  m -= (n+c+i+g*j-i+j-f+f)%100;
               }
               break;

               default:
               {
                  n -= (k+m+c-f+k*h-c-h-g*a)%100;
               }
               }

               g -= (m*h-d+f+l-b*a)%100;
            }
            d -= (g*a)%100;
         }
         j -= (h+b+f*k+i-l+n+l-l+b+a-c+f-b)%100;
         d += (j-l+m-l+l*i-i*l-l*l)%100;
         f -= (n-c-k+n+j+i-k-d+n+i-h+b)%100;
      }
      g -= (h*h+e+n-c*a-b+b+i+g-e+b-c)%100;
      l += (i-d-a-h-f)%100;
      h += (l-k+m+k+i-b-e-d*b-j+f)%100;
      k += (j-n-i*n+k+l*j+i+f)%100;
      k += (k*a*j+m*l*k+a-b*c+c+e)%100;
   }
   break;

   case 2:
   {
      f -= (j-i-f-k*j*l-m+a-e-h)%100;
      a -= (m-e-a*g+l+m*h*m+e-c+l+a+m)%100;
      m += (m+f*l+i)%100;
      k -= (l+a+d)%100;
      d += (l+l+h*l*k)%100;
   }
   break;

   case 3:
   {
      e -= (i+n-n*a-h*m+n)%100;
      f += (i*n+b)%100;
      e  = (j-l+m)%100;
      a += (m+i-d-c+i*m+l-k)%100;
   }
   break;

   default:
   {
      m += (i+j-h-f*l)%100;
      a += (h-c)%100;
      e -= (l-l*d-c+f+e+k)%100;
      g += (g-m-k*f-b-f+a)%100;
      n -= (n+e-h+j-d*l+h)%100;
      d += (b-j-g-g-e*j-b-c+k+a-d-a)%100;
   }
   }

   k  = (m-a+l-l-m)%100;
   h += (e*b+b*h+k-a+a-j*m-c)%100;
   c += (j-n-h+h-e-b)%100;
   a += (n+m+g*d)%100;
   e -= (c-g+g-a)%100;
   j -= (i-k*h-k+k+j)%100;
   j += (h-c+g-i-f+m-n*h*k+l+a-m*g-b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F31(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[51]%10 )
   {
      if( ++IFEcnt[68]%2 )
      {
         e -= (h+n+l-e-d+i+g-m-m)%100;
      }
      else
      {
         while( ++WHILEcnt[68]%5 )
         {
            do
            {
               for( ; ++FORcnt[101]%5 ; )
               {
                  m  = (k-h)%100;
                  m += (a-l*k*j-c+f+d+e+e*d+b)%100;
                  h += (d+a+n+b+n+f)%100;
                  h  = (d*l)%100;
                  e -= (i*h+i)%100;
                  d += (b*a+i+i+a-g)%100;
               }
               for( ; ++FORcnt[102]%5 ; )
               {
                  e += (l-l+i+c*e*d-f-h)%100;
                  i -= (i+j)%100;
                  h += (j-a)%100;
                  i -= (b-i)%100;
                  l += (h-k*n+g+k+i-a)%100;
               }
               if( ++IFEcnt[67]%2 )
               {
                  a  = (j-m+n*l+k+b+a-j-i-n+d-a*m+a)%100;
                  d -= (a+c*k-f-b-n+n+n-g+i)%100;
                  m -= (c*d+k+k-m*h-a*d*i+i-k-b)%100;
                  e -= (c+j-i*d-b+e)%100;
               }
               else
               {
                  f -= (e+a+c*e+d-f*f+g-n+a+l+n+m)%100;
                  a += (k-e)%100;
                  k += (g-e+l+a+c)%100;
                  j += (l*n+b+e-f-f+k+j+d*j-c+b-l)%100;
                  k += (j+a+n-j-a-m-b-g+g-f*f+b-f)%100;
               }
               while( ++WHILEcnt[67]%5 )
               {
                  f -= (l+h)%100;
                  k += (a-c)%100;
                  n += (m+h*k+n+i+d-n)%100;
                  n -= (h+n+m+j-i+a)%100;
                  m -= (j-m+c+e-a-a-m+f+i+b*n*n)%100;
                  j += (j+g+g-m-n*i*k-b+e*k*l-k)%100;
               }
            } while( ++DOcnt[67]%5 );
            do
            {
               if( ++IFcnt[50]%10 )
               {
                  i -= (a-n-d-g-n-h*n+e+b+f+e*h+h*n)%100;
                  c -= (e+d-d-i+i-f-h-f-a+a+c-i+c)%100;
                  i -= (d-n+f+n+a)%100;
               }
               i  = (j+i*f+f-e+k*l-m+a*a-i-h-n)%100;
               for( ; ++FORcnt[103]%5 ; )
               {
                  d -= (d+d+c-h+i-f-n-f-k+e-l+h*n)%100;
                  e  = (i+g+i-h-k*n-c-b)%100;
                  i  = (h*e)%100;
                  a -= (b+i)%100;
                  m += (f-h*g+k+b)%100;
               }
               
               switch( ++SWcnt[34]%3 )
               {

               case 1:
               {
                  i -= (j*a)%100;
                  n -= (c*f-c*d-m*c*g-l+k*e-c+b-e*e)%100;
                  f += (b+i+k*i)%100;
                  i -= (n+e+g+k-j-m+h-f-a-l*k*j)%100;
               }
               break;

               case 2:
               {
                  c -= (a-f+f*d-m+c-n-n+l-c)%100;
                  h += (l*i-c-f*a+m*b+h*h)%100;
                  b -= (d-m+l+f-m-d+i-d*e-c-d*b+f)%100;
                  a  = (h*f-l-h)%100;
                  l += (f-j+i+f+h*d)%100;
                  e += (b+n+a+h-c+m-i-c*g-c+b+j-n*c)%100;
               }
               break;

               default:
               {
                  c -= (b+j)%100;
                  c -= (k*i*m+e*l+m-h-a+h+c)%100;
                  c += (e*h*l)%100;
                  c -= (d+g-k-h-g*b-m+d+j-l)%100;
                  a  = (l-n)%100;
               }
               }

               c -= (b+i+j)%100;
            } while( ++DOcnt[68]%5 );
            b += (e-h-f*c-k-b-h-k-a-n-d)%100;
            h += (h+h-k-e-l-i+n-m-e-g-l+g)%100;
            m  = (e+b+i)%100;
         }
         a -= (n-c*k-a+e-f-l-j)%100;
         h  = (j-g*l+l)%100;
      }
      n -= (g*n*a-h+h-k+a+n-e)%100;
      n += (c+i)%100;
      e  = (e-b+i)%100;
      f  = (a-a)%100;
   }
   d -= (f+g-n*c+h*i+e+l+m-f+c-j*g)%100;
   n -= (f-e+c)%100;
   f -= (f+c+f-j+a-k+l-j*d)%100;
   m -= (a-h-h+e+c-l+c-a)%100;
   a -= (f+n)%100;
   a += (e-i*n+g+h*i+i+c+a)%100;
   h  = (h*b+l+f-m+d-e*d+n-a-b*b-c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F32(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[70]%2 )
   {
      b -= (c+h+f)%100;
      n -= (d+n)%100;
      h += (c+c-g*g-f-h)%100;
   }
   else
   {
      while( ++WHILEcnt[70]%5 )
      {
         do
         {
            for( ; ++FORcnt[105]%5 ; )
            {
               if( ++IFcnt[52]%10 )
               {
                  j -= (k*g-b)%100;
                  d += (j+l+j+k+j-n*e-h*f-n)%100;
                  b += (a-g-a+b*j-d+g+l+m*c-m+e)%100;
                  h += (g-e+a)%100;
                  h -= (c+j-k-h-f+b+c-j*f)%100;
               }
               for( ; ++FORcnt[104]%5 ; )
               {
                  b += (m-k*f+g-g+k-b+i+m*d*k+i-k-i)%100;
                  a += (m+i+d-e-b-m+m+c-f*h+g-h-b*d)%100;
                  g += (f-b+a-h+d*g-g+b+h)%100;
               }
               if( ++IFEcnt[69]%2 )
               {
                  f -= (k+d*d+l+f-a+f-j*f)%100;
                  k += (a+c+a+i-f-e+c-f*c*f-g*f*b-n)%100;
                  d  = (i+h)%100;
                  a -= (g-m*k*a+i+a-j+f+g*m)%100;
               }
               else
               {
                  n += (b-a)%100;
                  k += (f+d+j*k*a+m+h-b+h*e+n)%100;
                  m += (c*m+m-d-j+f+l+b-a-b+f*h+h)%100;
                  d += (j*b+c+i*h-h*e+i+k+l)%100;
                  d += (g+k+m-a+g-m-b+a-d-a-h)%100;
               }
               while( ++WHILEcnt[69]%5 )
               {
                  m += (d-j-e-d-j+b*d-c-d*b+g)%100;
                  n += (c-j)%100;
                  a  = (a+f-l*i)%100;
                  f += (g+k+m-c-i+j*g-d)%100;
                  m -= (l-f*l-m-n-m*g*e-n-g*a-n)%100;
                  e += (f-g*k-m)%100;
               }
               do
               {
                  f  = (k-j+n-c-j)%100;
                  f -= (k+n)%100;
                  b += (e-d*h-b)%100;
                  d += (j+f+m-j+c-m-g*e*g)%100;
                  f -= (c+d+k+b)%100;
               } while( ++DOcnt[70]%5 );
               f += (b+a)%100;
            }
            for( ; ++FORcnt[106]%5 ; )
            {
               
               switch( ++SWcnt[35]%3 )
               {

               case 1:
               {
                  e += (a*k+i-l+e-a-j-e+g+m-g*j+l)%100;
                  d -= (d-c-b)%100;
                  h -= (c*m+f*m+l-f*a)%100;
                  e += (i-e*a+l+f)%100;
               }
               break;

               case 2:
               {
                  n += (f+h*n-e+l-g-b-n+h+m)%100;
                  g  = (m-e)%100;
                  l  = (m+c+l+f+a*n+c+j+b)%100;
                  j += (h+j+g+e+l*g+n+k+m-h-l+l-n)%100;
                  h += (n-e)%100;
                  m -= (j+j-h+m-g+j+j+d+k*a+a-b*m+j)%100;
               }
               break;

               default:
               {
                  h -= (h-k*i-c*l-d-j)%100;
                  k -= (e*a*e*h+k+n-i+a*c+i-i+m-m)%100;
                  h -= (b-l-c+l+g)%100;
                  l -= (d+j-l)%100;
                  c += (i-g-i*f-i-l+l)%100;
               }
               }

               n += (j-k*d-j+m-i*e)%100;
               e -= (k+b-j-i*l-f)%100;
               d += (c-n+e)%100;
               c -= (d-h-i+k+l-e*k*d)%100;
            }
            f -= (l*b+a*m+a+h-l-b+j)%100;
            e += (h+f)%100;
         } while( ++DOcnt[69]%5 );
         a -= (e+b+g-f-f-f-d-i*a-f+j)%100;
         b -= (c-k+i+k*f)%100;
         l -= (f*d-m+m+g*f*m+l-c+k)%100;
         a += (c-h*j-j+k-m+i+j-h+n-b*i*m)%100;
      }
      l += (e+g-m+d*a-a-l)%100;
   }
   f -= (h+b*c-e-l-g)%100;
   b -= (m-b-f+k)%100;
   n -= (e-c)%100;
   l -= (l-k+e-a-b-c+m-b-m*m-g*k)%100;
   n += (l+i)%100;
   g  = (m*c-a*j+f*a+b-e-c+d*m)%100;
   i += (k*h+d+n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F33(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[54]%10 )
   {
      if( ++IFEcnt[73]%2 )
      {
         j -= (c-i-j-h*a*j+l+k+k*k+d-c)%100;
         m -= (i+i)%100;
         k += (d+j-e-d+k*b-k+d)%100;
      }
      else
      {
         while( ++WHILEcnt[73]%5 )
         {
            do
            {
               for( ; ++FORcnt[107]%5 ; )
               {
                  f -= (j-b*k*n*h-f-h*h+d-g+c+g)%100;
               }
               for( ; ++FORcnt[108]%5 ; )
               {
                  b -= (e+g+b*k+a-n*g+b-n+k-c+n-k)%100;
                  a -= (j+a*c*i-d*l-b)%100;
               }
               if( ++IFEcnt[71]%2 )
               {
                  a -= (m-g-k+a-h)%100;
                  d += (g+h*i*d+k*a*g+i-b-d+h-e)%100;
                  i += (e-d-j+n+e-e+d+m+a*k-e-j+h)%100;
                  m += (f+c+e*e*e)%100;
               }
               else
               {
                  m -= (m+e-i+n+g-h*j-k-h+f)%100;
                  j += (f+l+g-m-c*a-h*i)%100;
                  c += (b+b+i+a+e*d+k)%100;
                  j += (b+n+a+f-j)%100;
                  g += (i+l-b-m-f)%100;
               }
               while( ++WHILEcnt[71]%5 )
               {
                  j += (d+l-l-n-g*i-l+f-a-b+e)%100;
                  d  = (g*j-j)%100;
                  f += (e*c+d+b-h-k+c)%100;
                  i += (g+m-h+l-d+i+n-k*k*m+j-l*c-m)%100;
                  b += (i+g-h*e+j+a-c)%100;
                  d -= (d*m+e*i+b-g*f+g+m-h)%100;
               }
               do
               {
                  j -= (j-n+l*h*i-c*b-b)%100;
                  b  = (g*n-f*k-j+k-n+i*g*n)%100;
                  f += (k*m*c-h-l-c+k+d-i*l+n+g*b)%100;
                  f -= (e*a-g-n+l+h*c+j-d+h+m-e)%100;
                  k += (n-b-e)%100;
               } while( ++DOcnt[72]%5 );
            } while( ++DOcnt[71]%5 );
            if( ++IFcnt[53]%10 )
            {
               a += (l+d+m+h+l*j-m+n*e+f+k*h-m)%100;
               for( ; ++FORcnt[109]%5 ; )
               {
                  n -= (m+e-c)%100;
                  e -= (n+f+n+i-d+k+j+f*j+d*c*b+n)%100;
                  n -= (a-g*n+n+c*k)%100;
                  m -= (h-b-a+a+d*k-m+j)%100;
                  f  = (f*n-g*d*m-k+f+j*g+e-f*d*g-h)%100;
               }
               
               switch( ++SWcnt[36]%3 )
               {

               case 1:
               {
                  i += (n-c+b-g+f)%100;
                  i += (b-m+k-i*i-i-n+k+k-k+j-d)%100;
                  d += (n-g-e-m*f-g+b-a*l-l+l-d-m)%100;
                  h += (c-i+k)%100;
               }
               break;

               case 2:
               {
                  c += (m*i+k+k+f-a-a+a+k)%100;
                  m -= (j+j-h)%100;
                  c -= (c-b*j+i+h+a*h-m*k-j)%100;
                  f -= (b*e+b+g-e*n*d-d+b-n)%100;
                  c -= (c+k+b)%100;
                  n += (g+a-n+a+k-j+a+a*b-b+e-i)%100;
               }
               break;

               default:
               {
                  e -= (g+b*m-i+h*m+f-m+b)%100;
                  n -= (a-g+f*d)%100;
                  a += (i-h+d*d+l-m+f+j+a+b-c-l-e-j)%100;
                  c += (d-c+f-l-l-l)%100;
                  h -= (g+l-h-h-d+f)%100;
               }
               }

            }
            if( ++IFEcnt[72]%2 )
            {
               k  = (b+n*k+l-n+g-d+m-m)%100;
               l += (g-h*n-n*d+b-e*f-n-e+m*g)%100;
               g += (d+j-l+g-m-n+j-m+b-e-g+c)%100;
               f -= (f+f-h-b+n*c-g)%100;
               a += (l*i-n+n-b-c-g-f+l-h-d)%100;
            }
            else
            {
               while( ++WHILEcnt[72]%5 )
               {
                  g += (b+h+f+l*h-g-b-d+c+g*k+b*n+f)%100;
                  i += (a*i+a+l*n-m-i-i+k)%100;
                  f -= (e+f+g*k-i+h-k)%100;
                  c  = (b*h-a+l-b-n-f-i-d+m)%100;
               }
               do
               {
                  b += (g-g)%100;
                  l -= (a+n-c)%100;
                  e -= (g-j+i-m-l+e+l)%100;
                  n += (k+b+g-k-g-a-d+m-b+n-i-j)%100;
                  j -= (g+k-c)%100;
                  n -= (j+a+c+l-f*i*b-c+c-n+n+a*c+j)%100;
               } while( ++DOcnt[73]%5 );
               m -= (m+k-f+n+k*g-f-l-a*a+b+m)%100;
               e -= (b*f-j+j*g)%100;
               c -= (h-c)%100;
            }
            g -= (m-n-k+m+e*k+n+a-c+d-j)%100;
            h += (a-f-n-f)%100;
            h += (h*g-j-d-j+n*k)%100;
         }
         n -= (l-n-h-i-l-a+f+g+f-l)%100;
         i -= (n-i+i+i*g+a-k*g-a+c+d-h+h)%100;
         c += (i*e-d-b-h-h-a+n)%100;
      }
      b += (c-f*g+h+i-g-i+a-b-k*n*g+i-m)%100;
      b -= (l*n+m+l+l-n-e)%100;
      j += (d-c-i-g+n+h+b*n)%100;
      b -= (f-k+f*n+k-h-h-i-j+m+f)%100;
   }
   b += (c-d*f)%100;
   h += (i-b+a+k+a)%100;
   a -= (b*j*k+n-k+l)%100;
   m -= (l-a*c-b+m-g+b+k-n*f+g+c-m)%100;
   h -= (n*a+b+c+h+i-i-l*m-h+a+n)%100;
   h += (b+d*n+h*k-l+c-k-m+l)%100;
   i -= (l*j*d+k+b+g+i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F34(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[113]%5 ; )
   {
      if( ++IFcnt[56]%10 )
      {
         for( ; ++FORcnt[112]%5 ; )
         {
            if( ++IFEcnt[75]%2 )
            {
               if( ++IFcnt[55]%10 )
               {
                  k += (h-n-e+d-a-h*h+c*a)%100;
                  l += (c+k+l+d*k*j-h*j*i)%100;
                  m -= (b-k+c-a-g-d-c*m*f-i-g)%100;
                  g -= (g+g*k-e*c*f+l*g-c)%100;
                  g  = (c+h+d-f+i+c*i-b+i-n*n)%100;
               }
               if( ++IFEcnt[74]%2 )
               {
                  j -= (d+b)%100;
                  c += (h-k-g+j*m+h+l+f-l+m)%100;
                  j += (b-m+g*j+a+k*m*m-g)%100;
                  f  = (e+c+b-f*l)%100;
                  a += (h+a+h-m+d-l-k+f*e+i)%100;
                  a += (g*l)%100;
               }
               else
               {
                  l -= (b*i-h+m+h-j+h+b-h+c)%100;
                  j += (c-i-h-g+h-d+j-a*i-e*a*f)%100;
                  l += (d+n*f*j*b)%100;
                  m -= (b-h+k+h-e+h-a)%100;
               }
               while( ++WHILEcnt[75]%5 )
               {
                  h -= (f+g*l+h+c)%100;
                  f -= (n+b-a+c-n-j-m)%100;
                  b -= (a*a)%100;
                  f += (f-c-d)%100;
                  a += (n+i-l+a+f-h-a-m-a+k*l+d+n)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[74]%5 )
               {
                  b += (c+j-c-e-b+h+c+d+m-l-m*b)%100;
               }
               do
               {
                  i -= (d*m-a-f)%100;
                  c -= (e+b+m)%100;
               } while( ++DOcnt[74]%5 );
               l -= (h-m*i*m-f+j+k+d+l+f+c)%100;
               for( ; ++FORcnt[110]%5 ; )
               {
                  k -= (e-b*e)%100;
                  a  = (i-c)%100;
                  a -= (m-i-d-g)%100;
                  i += (e+b*a+n-f+a)%100;
                  m += (d+c+l+b+f+h+e-l-g*h-h+g-e*j)%100;
               }
               
               switch( ++SWcnt[37]%3 )
               {

               case 1:
               {
                  f += (b+i+i-a+n-d*j)%100;
                  d -= (e+k-e-g+g-g*a)%100;
                  f -= (k-e)%100;
                  b += (j*k)%100;
               }
               break;

               case 2:
               {
                  h -= (k+m*e+m+h-k+k)%100;
                  f += (n+j+e+f+i+c+g+e-d-g)%100;
                  c -= (k*j)%100;
                  m += (e+i+k-g-b-d-j)%100;
                  i -= (g+a)%100;
                  d -= (i+n)%100;
               }
               break;

               default:
               {
                  f += (f+j+i*a)%100;
                  e += (a-c+i+a-d)%100;
                  m -= (c*b-i+n+m+b-g+i)%100;
                  e -= (m*g+l*f+m)%100;
                  b += (d+l+h+e+g)%100;
               }
               }

            }
            do
            {
               for( ; ++FORcnt[111]%5 ; )
               {
                  g -= (k+e)%100;
                  l -= (b-g*m*d*i+f-h+f*k*g+h*m-j-j)%100;
                  a += (l+e-e+j*b-j-k*m+a)%100;
                  l += (m+h-a*i-n+n-h-j)%100;
               }
               g += (b+a-i-h*b+f-f*a-e+g+i+d-a-l)%100;
               g -= (h*g+f-d*n*e+f)%100;
               d += (n+a-b+k+g+m+e)%100;
               e += (g+i+l-k+h+f+j*e)%100;
            } while( ++DOcnt[75]%5 );
            i += (e-g+d-n*n+d-d*g)%100;
            e -= (d-b+d*d+k)%100;
            e  = (f+n-i+e+l*e)%100;
            c -= (f+g)%100;
         }
         b -= (c+d*n-n-g+j+d*h-n-h*c*j+g)%100;
         l -= (i-h+b+f)%100;
         g  = (l*n*j)%100;
      }
      e += (n*b-l-e*k+e-l)%100;
      k += (d+h+d-f*j+i*f)%100;
      f -= (k-f+j-n-k+b+g)%100;
      m -= (h-l*c-f-n+b-f-h-g+h)%100;
   }
   f -= (f*e)%100;
   h -= (m+e*j+g-c+i+b+c-c)%100;
   m += (e+b*n-j+m+h+j+l*l-d*m+a+k)%100;
   c += (b*h*c-c-g-g+j-f*a+k-d)%100;
   b += (a-i+g+b)%100;
   i += (l+n+a-j-c*c*g-n-h*f+h*m-n)%100;
   m -= (j-f+j-m+c*g*m+m+a+b*n-k-l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F35(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[117]%5 ; )
   {
      if( ++IFEcnt[78]%2 )
      {
         a += (n+c)%100;
         h -= (h*k+h*f-l+j-l-c-i+j+d-l)%100;
         l -= (l+h+j-a-j)%100;
         b -= (g+f)%100;
         j += (m-i+h-m+k*n+l-h+g+c*e-a+c)%100;
      }
      else
      {
         while( ++WHILEcnt[77]%5 )
         {
            do
            {
               if( ++IFcnt[57]%10 )
               {
                  m += (i+d+l+g+i-i+k)%100;
                  h -= (k-i-l*e-l*b-d)%100;
                  f += (m+d-e*j+j*e*g-l-d-i-e)%100;
                  k -= (n-b+k+b-i-g*j*d-a)%100;
               }
               c -= (n-g+b+a*f*l)%100;
               for( ; ++FORcnt[114]%5 ; )
               {
                  h -= (d*g-l*b)%100;
                  j += (n-l-g+l-a+k+d)%100;
                  j -= (m-a)%100;
                  d -= (i*b-c)%100;
                  k += (h+e*h)%100;
                  n -= (j*i)%100;
               }
               
               switch( ++SWcnt[38]%3 )
               {

               case 1:
               {
                  h -= (d-j)%100;
                  e += (c+k)%100;
                  d += (i-g-j-h)%100;
                  i -= (a+i+b-c-c*d+k+j+m*j-b-f-n)%100;
                  j -= (k-d-m+l-c-i-e+c-n-i*a)%100;
               }
               break;

               case 2:
               {
                  j += (b+a)%100;
               }
               break;

               default:
               {
                  l -= (b+l+b+b)%100;
                  e += (f-f-m-l*m)%100;
               }
               }

               if( ++IFEcnt[76]%2 )
               {
                  j += (j*i*f+g+h*f+l)%100;
                  j -= (a+e+a-e+m+f)%100;
                  j += (b-f+d+i*n-l-a+j+b-d)%100;
                  e -= (l-i-g+l+j+m*f*i+i+k-a)%100;
               }
               else
               {
                  m -= (c+l+n-l)%100;
                  n  = (a+k)%100;
                  k -= (j-l)%100;
                  m += (j+g+j+b-k*h-a-h)%100;
                  e -= (h-c+b)%100;
               }
            } while( ++DOcnt[76]%5 );
            while( ++WHILEcnt[76]%5 )
            {
               do
               {
                  l += (m+a+c-k-j+n+k)%100;
                  m -= (d-i-i-d+h*d-e-g+g-n)%100;
                  j  = (b-c+g+i+d)%100;
                  l += (k+k)%100;
                  l -= (i*d+l+j)%100;
               } while( ++DOcnt[77]%5 );
               for( ; ++FORcnt[115]%5 ; )
               {
                  h += (i-k-f+d*d+b+l)%100;
                  a  = (i+k-l)%100;
                  n -= (c+n-b+m+i-d+j+c+e-m-m+m-b)%100;
               }
               if( ++IFcnt[58]%10 )
               {
                  g += (a-i-m+a-b-f-i-e-a+c+h+h+b-j)%100;
                  a += (e+b+b+c*m)%100;
                  a  = (a+k-b+g-f-a-f-i-d-b+b*j+k+n)%100;
                  c += (k-e-e-a+l+g+c*l-h+g+m)%100;
                  b -= (l+l-l-e-c+b-g-l+d-a+k*k-a)%100;
               }
               for( ; ++FORcnt[116]%5 ; )
               {
                  b += (k+f)%100;
                  j += (m+h-d*d+i-l-b-i-d-d)%100;
                  j += (j-h*n-g-l-h+a+h-a-l-l*d)%100;
                  l += (c-n*a+n-e*j*b-c+c-f+f+j+a*b)%100;
               }
               if( ++IFEcnt[77]%2 )
               {
                  k += (n*a-f-j+j-m)%100;
                  f -= (m+g-a+b*j-g+e+i-m+n+c)%100;
                  l += (g+b-f-j*n-l)%100;
                  b += (m+l)%100;
                  d += (g+e+d-g-g+m+m+m+d*e-i*n)%100;
               }
               else
               {
                  g += (a-j)%100;
                  l  = (f-a+g-l-k-i+f-g+b)%100;
                  k -= (n+b*e+b*n+e-h-n+f)%100;
                  a  = (g+j+a+b-l+c-m)%100;
                  e += (n-b+l+a-j-d*n*j)%100;
                  k -= (n-h-f+i+e-h+f+j-g-b+j-j*k*j)%100;
               }
               n += (g-f)%100;
            }
            b -= (g+h)%100;
         }
         h -= (c+e-a+c*m-e+j+a+c+a+h+m)%100;
         g  = (j-c*l-d)%100;
         b -= (k+f-c-g+d+l-a*j-e+b)%100;
         a -= (j+c-a-l-h+l-m*a*a-d-i+g)%100;
      }
      g += (m+m+m+m+n-f-e+d-k+h+m-e*l-g)%100;
      l -= (f-m)%100;
      b -= (m*g-d+c+b+j-f+e*m+h+k+g*j-h)%100;
      h -= (g+k*f+n-j*d-c-e+a*e-d-h)%100;
      i += (f+m-a-h+h)%100;
   }
   n += (h-k-n-b-a-k+d-c)%100;
   j += (j-b*i)%100;
   m += (m-n)%100;
   m -= (a+g-g-c-h-n+a+a+n*i+g+i)%100;
   h -= (m-n+m+l*a+i-j*e+j+h+k+k)%100;
   b += (h-b-n-g-a)%100;
   a -= (g*i+i-j+a-m+g-l-g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F36(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[80]%5 )
   {
      do
      {
         d -= (a+d*i+i+e+c+g-g+k*g-g-i+b)%100;
         for( ; ++FORcnt[120]%5 ; )
         {
            
            switch( ++SWcnt[39]%3 )
            {

            case 1:
            {
               if( ++IFcnt[59]%10 )
               {
                  n += (n-a-i-i-n-c-k+j-a*a+n+m)%100;
                  m -= (g-j-m+i-g*f+k-a+g)%100;
                  c += (g-e)%100;
                  d -= (j-j-n+n-g-a)%100;
                  i  = (g-m-j)%100;
               }
               if( ++IFEcnt[79]%2 )
               {
                  a += (e*e-f+n+g)%100;
                  d -= (k-n*k+i*d+m+f)%100;
                  f -= (e+j+n+e-j-n-i+g-b+h)%100;
                  k += (g-i)%100;
                  i  = (h*n*f-k+n+j-m)%100;
                  g += (f-n-h+n+e+e*b-l+k-j+c+d-f)%100;
               }
               else
               {
                  l += (e-l)%100;
                  h += (l*i+b-b*a-h-a-h+l+l+m+d-g)%100;
                  j += (n-c)%100;
                  d += (e-e-i+d*l-m*n-c-m)%100;
               }
               while( ++WHILEcnt[78]%5 )
               {
                  d  = (c+f+g-k-d-a)%100;
                  i += (b+n-j*c-i*l+b-e+l)%100;
                  j -= (a*h-c+k-d)%100;
                  e -= (n-j-f+h*e+k+h-a-f-n+b-a*c*k)%100;
                  g += (i*k)%100;
               }
            }
            break;

            case 2:
            {
               do
               {
                  d += (i*e+d+l+a*a-k-b+j-l)%100;
                  l -= (f+a)%100;
               } while( ++DOcnt[79]%5 );
            }
            break;

            default:
            {
               for( ; ++FORcnt[118]%5 ; )
               {
                  c += (e+i+c+f+k+n+k+l*i-h)%100;
                  b  = (g-g*d)%100;
                  c -= (m*e-d+a*a)%100;
                  h += (i-l+i+a+i+m+b-c*g-g+e+b-a)%100;
               }
               for( ; ++FORcnt[119]%5 ; )
               {
                  g -= (d*b*n*h*k-c-h-g-n-g-l+j)%100;
                  i -= (m-m-a*b+k*n*e-h)%100;
                  n += (n+a-a+j*f+c-h)%100;
                  g -= (j-l)%100;
                  f -= (a-a-a-d+d+n+f-b-e)%100;
                  i -= (f*d+a-k)%100;
               }
               if( ++IFEcnt[80]%2 )
               {
                  l -= (f-m-g-i-a)%100;
                  l += (h-a)%100;
                  g += (f-k+f+f-l+a+k)%100;
               }
               else
               {
                  j  = (i*f)%100;
                  b += (h+j+d-d+f+l-e-d*k-c-m-a*e-g)%100;
                  h += (n+n*j)%100;
                  e -= (m-j+b)%100;
                  l  = (f+l+b-h+k*l-l-i+d-d)%100;
               }
               while( ++WHILEcnt[79]%5 )
               {
                  k -= (f+a+a-a-b+l-f+b-b-k+l*c-n)%100;
                  a += (l-d*i*j*g*c+m*d-i*k)%100;
                  d  = (e-j)%100;
                  g  = (m-j+h+c*m*c)%100;
                  l += (l-d-e)%100;
               }
               l -= (a*b-f+a+l)%100;
            }
            }

            b -= (k+c+c-e*e-m-i-l+d*k+k+n+j+e)%100;
            m += (f+b-e-g-e+j)%100;
            k -= (d+n+b+c+c-i-h+n-b+m)%100;
            n -= (h*m*n*a-l-d-n-n-h)%100;
         }
         l -= (m-h-l-h+j+k+k)%100;
         a  = (c-m+m-m-f-f*h-i*j+l)%100;
         a  = (j+l)%100;
         g -= (f-n+n)%100;
      } while( ++DOcnt[78]%5 );
      b += (c*f-f*g+h*f-k)%100;
      l += (a+l)%100;
      m += (e+h)%100;
   }
   e  = (h-j*j-g+f+a+j-e-k+i-n+f*f)%100;
   d -= (i+h+g)%100;
   l += (c*f-m-f-j-n*i-a+l-l-b+e)%100;
   j -= (j+j)%100;
   i += (k-f-c-l-m*b*f+j*l+m)%100;
   j -= (i-n*n+b-i+i-k-f+k*f+b-b)%100;
   k  = (j-g-g-e-k-c*l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F37(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      if( ++IFcnt[61]%10 )
      {
         e  = (i+i+n*d+h+g+j*g+a-n)%100;
         for( ; ++FORcnt[124]%5 ; )
         {
            
            switch( ++SWcnt[40]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[81]%2 )
               {
                  j += (m+j-k-l-j-j-i)%100;
                  l += (b+l)%100;
                  d -= (d-d*g)%100;
                  c += (m*j-h+g+f-c-c+n-m)%100;
                  l -= (n-c+a-l+h+e)%100;
                  k -= (f-i+m*l-i*h+n+l-g)%100;
               }
               else
               {
                  h += (c+m+a+f*k*j*c)%100;
                  f += (i+a-h*e*e*l*e+g-l-h-e)%100;
                  c -= (d*d)%100;
                  m -= (f-c-n*e+l*m-k-g-g-d+g)%100;
               }
               while( ++WHILEcnt[81]%5 )
               {
                  k -= (g+b-b+n+c*j*j*k+n-k-k*d)%100;
                  f -= (k-f-m+g-k-e+j-g+c+g-b)%100;
                  n  = (m*g*h-n+g-d+j*j*c-f+k-d*h-k)%100;
                  l -= (b-n-n-b-n+e*e+b-m+f-i-i+l-g)%100;
                  b -= (a+c-m-e*h-d)%100;
               }
               do
               {
                  h += (l*n)%100;
                  d += (n+l+c+m)%100;
                  k += (a-n-l*c*b*l*g-l-n-e*n)%100;
               } while( ++DOcnt[81]%5 );
               for( ; ++FORcnt[121]%5 ; )
               {
                  e -= (c-h-g*c+j-k*c+b+l+f-h-i-i+k)%100;
                  h -= (i-c+c*e+j-k)%100;
                  g -= (i*l+n+l-h+m-f*e*a)%100;
                  h  = (h-a-b+g*f-j+m-j-h-e-e+j+i)%100;
                  j -= (e*j-k-c)%100;
               }
               if( ++IFcnt[60]%10 )
               {
                  k += (a+c-c)%100;
                  n  = (m-h-k)%100;
                  a += (m-e-m+f+m)%100;
                  i += (i-l+j-h-l+f+m*h-c-h-n-b)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[122]%5 ; )
               {
                  b += (a-n+b-n)%100;
                  e -= (g-k)%100;
                  d += (i-c-c-d)%100;
                  d -= (d*f+j+k+l+d-j*c*k+h+e-j)%100;
                  n  = (l-d-f*n-b+g+n+n+l+j+m+f-b)%100;
               }
               if( ++IFEcnt[82]%2 )
               {
                  g -= (e-j+g*g-l-a-e-g+l)%100;
                  h += (h+f-j+k-l-c)%100;
               }
               else
               {
                  k += (d+b+l-l+b+l+a-i)%100;
               }
               while( ++WHILEcnt[82]%5 )
               {
                  i += (h+a-k+k-j)%100;
                  c -= (b-m+c)%100;
                  n -= (c*e-m*f+b+j-f*j-c-k-k+j+b+m)%100;
                  e -= (e-f+f-i-i-h-h-m+b*f)%100;
                  a += (b+i)%100;
               }
               do
               {
                  m -= (a+m-g-h-l-l-i+d+h-i)%100;
                  h += (l-j*f+c-e+f+h-l+d*n-e)%100;
                  l += (k-e+h+e-b)%100;
                  c -= (b+e-c)%100;
               } while( ++DOcnt[82]%5 );
               m -= (n-d*e+f+f+a+n)%100;
               for( ; ++FORcnt[123]%5 ; )
               {
                  l -= (e+b-m*n+e+b*i-d)%100;
                  a += (i+i*h+k+g-h)%100;
                  a -= (b-d-i-i-d-k*e-g-n-b+h*f)%100;
                  l += (h+n+e*l+g)%100;
                  f -= (i*d-m+i-g)%100;
                  n  = (i*g)%100;
               }
            }
            break;

            default:
            {
               d += (e+h)%100;
               f -= (c+h+e+h+f-a-i*n+m+l)%100;
               g += (f*b)%100;
               j += (d*c-m+n)%100;
               j += (b+b+e*n-e+m-f-k+f-e)%100;
            }
            }

            j -= (g-f-f+n-h-d+m)%100;
            e += (d*g+h-m+i*h*f+m+k*j+e+i+c)%100;
            e -= (e-l+d+h+n+b*g-m)%100;
            k += (e+f+e-b-k+f*l+k+h*j)%100;
         }
         n  = (b+l-g+i+d+e)%100;
         j += (d*d*d*d+h*f*e)%100;
         a  = (b*i+j-c-j-l-k+f+j+b+m-n-h)%100;
         e += (d+m*m-c-a*i)%100;
      }
      g -= (j+i+g+g-e+g+d+e)%100;
      i += (e+a-n+k-a+n+h+j-m-b+n+g)%100;
      k += (l+m*b-j*h*n-e*m-e)%100;
   } while( ++DOcnt[80]%5 );
   f -= (n-g*c+m-c-e-d*h+k*l*a)%100;
   n += (e+b)%100;
   j += (b-l+l-n*c)%100;
   l -= (m*d-k-j-d+a-f+g-i+g)%100;
   i -= (f-g+a)%100;
   b -= (i+b-h+m+h+m-a+i-e-l+j+j-a)%100;
   f += (g*g+c*i-c+h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F38(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[41]%4 )
   {

   case 1:
   {
      if( ++IFcnt[63]%10 )
      {
         if( ++IFEcnt[85]%2 )
         {
            m += (d+k+l+m)%100;
            l -= (m*k*b-l+a)%100;
            d -= (m-d+i-h)%100;
            c += (j+g*j-h)%100;
            e  = (d+a-e-i+h+c-j-e+n*l+f-a-n*e)%100;
            f -= (d+m-k+l*m)%100;
         }
         else
         {
            while( ++WHILEcnt[84]%5 )
            {
               do
               {
                  d += (h-d-a+h-h*d-l+m+j+d-m-j)%100;
                  k += (e-a*b+n+e+a)%100;
                  e += (h+h-j-f+i+a*k+a-i*l)%100;
                  a -= (a-k+n-l-d-k-f+l)%100;
                  g -= (h-j-b+m-b*m*a+a+m+i)%100;
               } while( ++DOcnt[83]%5 );
               for( ; ++FORcnt[125]%5 ; )
               {
                  c += (f*e*k-n-h*e+k-e*m*a-d+b)%100;
                  j += (g*j-n+m*d-l*g)%100;
                  d += (h-i)%100;
                  k += (m+n-l)%100;
                  b += (n+e+e)%100;
               }
               for( ; ++FORcnt[126]%5 ; )
               {
                  h -= (i*j-l-i+k-d-b-n-e-e+k-e)%100;
                  c -= (n+j*n+k)%100;
                  m  = (k-b)%100;
                  a += (k+d+d+g+k)%100;
               }
               if( ++IFEcnt[83]%2 )
               {
                  f -= (g-b-j-i*l-a+f-n)%100;
                  m += (n*c+c*h-e+c+d)%100;
                  n += (b*m)%100;
                  d -= (i-l-g)%100;
                  k -= (c+f*d-f-j-d-n+a*l)%100;
               }
               else
               {
                  g -= (a-c-e*f-j-n-m-e-a+d*d-a-k)%100;
                  e -= (j*c+m+g+n+g+k-k-l+a+n)%100;
                  c -= (j*e+b-a-n-g+a*h+h)%100;
                  k += (c+d+c)%100;
                  a -= (g-f-h*g*j-l+c-l)%100;
                  m += (e*k)%100;
               }
               while( ++WHILEcnt[83]%5 )
               {
                  m -= (c+a+c+n*j+b-f)%100;
                  d  = (i-f)%100;
                  d += (i*b)%100;
               }
               do
               {
                  h += (j-g+n-f)%100;
                  n += (j+b-n-a-f+h+m+d-k-d+a)%100;
                  l -= (e-b)%100;
                  m -= (h*a-h+l+n)%100;
                  c += (g-a-n*k+f+b-a-g-k)%100;
               } while( ++DOcnt[84]%5 );
            }
            if( ++IFcnt[62]%10 )
            {
               j += (h-n+n+b+h*b+b-g+e)%100;
               for( ; ++FORcnt[127]%5 ; )
               {
                  m += (g+f+n-e+j-h+k-j*d-l*n+h+e+k)%100;
                  e -= (a+b+d+g)%100;
                  a += (a-n+j+a*c+k+n-b+c*n+a-g)%100;
                  i += (f*a*g-d)%100;
                  c += (m+m+b)%100;
                  g -= (i+l)%100;
               }
               
               switch( ++SWcnt[42]%3 )
               {

               case 1:
               {
                  j += (g-l+k-n+h)%100;
                  k  = (h*e-n*n)%100;
                  g += (h+a-i*d-n)%100;
                  l -= (g+f+b-j-h-a*l-a*l)%100;
                  k -= (a*b)%100;
               }
               break;

               case 2:
               {
                  n -= (j+h-g+a*m+g*g-g-a-k+d+j)%100;
               }
               break;

               default:
               {
                  f  = (j-g)%100;
                  b -= (i*f-f*n-k-k+b-g-d)%100;
               }
               }

               if( ++IFEcnt[84]%2 )
               {
                  l -= (h+c+l-k-h*n+k+f)%100;
                  g -= (k+c+a+a+k-c-m+l-e*n)%100;
                  h += (m*c-a+i*m-j-f-n+b+i*i)%100;
                  e += (g-f+j*h+m+h+b*l-k+b)%100;
               }
               else
               {
                  b += (f-a*h+e+g+e+h)%100;
                  c += (c+f+b-n*c-h-e-a*c+f+j)%100;
                  m -= (a+h)%100;
                  g -= (a-d*f*i+m+d)%100;
                  j += (j+j*b+i+h*l+k-l-k-a+c-l-b*m)%100;
               }
            }
            n  = (l+m-c*j-n+f-l*e+f+k+e-h-d+e)%100;
            i  = (l*a-c-g-l-n+e+k*i)%100;
         }
         c += (c-n+m+e-i-h*m+b-k+d-e-g-h)%100;
         e -= (a+n+c+i*c-b-f-j+l*h*j-g+m)%100;
         i -= (h-c)%100;
         e -= (f-i+c+f-e+n)%100;
      }
      j -= (h+a)%100;
      k -= (g-h)%100;
   }
   break;

   case 2:
   {
      l += (d-h-a)%100;
      i += (f+e*g-m*h)%100;
      b -= (k-h+a+e*n+a+c)%100;
      i -= (d-m+h-g*a-h-k+c*e+c+k+n)%100;
      b -= (h-b+e+j-m-j-f+l+g-b*g-c-a)%100;
   }
   break;

   default:
   {
      f -= (a*n+e*c-g-g-j+l-a-m)%100;
      d += (a+b-n+i*m+m+k)%100;
      n -= (d-b+k-i-i+j-e)%100;
   }
   }

   b -= (g+b+g*b+d-i-a+n-d*f)%100;
   a -= (m*f)%100;
   l += (n+b-k-l-d+g-n-d-g)%100;
   e += (d-b-l+l+n+b-b-g-a)%100;
   i += (h+l-n-i-f-c+g*i*e)%100;
   d -= (d-c)%100;
   a += (h+f-h-b*g+a-c+d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F39(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[86]%5 )
   {
      do
      {
         for( ; ++FORcnt[130]%5 ; )
         {
            if( ++IFcnt[64]%10 )
            {
               for( ; ++FORcnt[128]%5 ; )
               {
                  n -= (g-d*m+h-c-d)%100;
                  b -= (j+k-m*f+j+n+i-i)%100;
                  i  = (b-a+l-j+k)%100;
                  n -= (i+b+e+d+c+m+e-c)%100;
                  f -= (d+i)%100;
               }
               if( ++IFEcnt[86]%2 )
               {
                  k += (k-j-l+i+d-h-i)%100;
                  m -= (l+l+g-d+c-k*c+h-n)%100;
                  b  = (n*g+e-n+j*f)%100;
                  b -= (i*j+d+e+c+d+h-l-k)%100;
                  k -= (j+g+n+j-n)%100;
                  g += (f*n+b-m+c*k*l-g+n-n)%100;
               }
               else
               {
                  i += (l-i*g*l*k-d-l)%100;
                  f -= (m-l-b-g-n-c-i*e)%100;
                  f += (n*c-i*k+n)%100;
                  j += (l-k)%100;
               }
               while( ++WHILEcnt[85]%5 )
               {
                  j += (n+m+f*k+h-k-j-j+l+l*m+h+n)%100;
                  g += (h+a)%100;
                  m -= (b+f-l)%100;
                  n += (d+e+i+i-h+m+f*l-a-a-b-h+m)%100;
                  i -= (c+a*i-f-d+k-i*k+j)%100;
               }
               do
               {
                  e -= (a-l+a+d+l-n-h-k+j+b+n-h)%100;
                  b += (b-h+m-e)%100;
                  n -= (i-e+h+g-j*d-f+i+k-m-f-m)%100;
               } while( ++DOcnt[86]%5 );
               g -= (j*k-h+e-l-h-l+e-f+e+n+j+d)%100;
            }
            for( ; ++FORcnt[129]%5 ; )
            {
               
               switch( ++SWcnt[43]%3 )
               {

               case 1:
               {
                  d += (k+g+j+g-g-f-h-b-b-c+a+a)%100;
                  l  = (g-a+e+j)%100;
                  l -= (e*e*j-n+i-k-f-c-a-g*g-n-j)%100;
                  g -= (c+j)%100;
               }
               break;

               case 2:
               {
                  n -= (n+n+j-i*b*m+d*c-a+g*a-n+f+h)%100;
                  i += (g+a-f-i*f*n+m)%100;
                  k -= (h-g+k-e*a-j+a-l)%100;
                  e  = (f+i)%100;
                  i -= (d+n+d*b*l+f-c*e+c*f+h*c)%100;
                  c -= (d+a-n-h-c+n+f-i+i*m+d+n+c)%100;
               }
               break;

               default:
               {
                  b += (e-h-b-h+a-d-n+h*g-n+b-e)%100;
                  l += (i*k-f*f+n+k-i-j*a*i-g*f)%100;
                  k += (n-j-i-c-f-c+d+g+e-f+j-j+n*a)%100;
                  j += (g+c+e+e-k+j-l*c+f-h+d-i-f)%100;
                  m -= (h*m)%100;
               }
               }

               k += (c-e+g-i*b+l)%100;
               k -= (a-a+l+a+n+k-f+f+a-j*k+i+j)%100;
               i += (k+d+l*j+g-g+a*e+h-h-h)%100;
               k -= (m-d-c-c+j+l-j+e)%100;
            }
            a -= (e+n-m*k*i-h+k-l*a+d+m)%100;
            d += (i-c-a)%100;
            l += (m-d-e-h+m)%100;
            i += (n+f)%100;
         }
         f += (a*m)%100;
         h -= (c+d-e+b-n-g-k-h-e-a*g)%100;
         b += (k-b+b-m-b)%100;
      } while( ++DOcnt[85]%5 );
      a -= (n+n)%100;
      h += (m*g+a-j*f-b)%100;
      b  = (j+d+c-a)%100;
      a  = (j*c*b)%100;
   }
   j -= (i*c*n-k)%100;
   f += (l+i-h+l+e*k+j)%100;
   c -= (i+d*g)%100;
   k -= (h*k*m*j+h+b*n+c)%100;
   j -= (d*e-e+j*c*h-e+i*j-l+i*g-e)%100;
   h += (m-j*n)%100;
   e  = (l+h-i-e*c+g*b-g+j*m+b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F40(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[66]%10 )
   {
      if( ++IFEcnt[89]%2 )
      {
         a += (i-n+l-i-d*b)%100;
         d += (e+f-b*c)%100;
         c += (e-m+i+c-b-e)%100;
         l -= (g+n-l-e-a*d-c*l-f)%100;
      }
      else
      {
         while( ++WHILEcnt[88]%5 )
         {
            do
            {
               for( ; ++FORcnt[131]%5 ; )
               {
                  m -= (e*c)%100;
                  h += (i+a*i+c*n+k*h+m+g*h)%100;
                  c += (n-k*e+l+d-f-j-g*i-n+n-n)%100;
                  n  = (c-n+e+n-j-g+l+i)%100;
                  m += (b+e-n-l+b+n+i*c)%100;
                  h -= (a+e*a+f-b-n+d-i-f*b+i-k)%100;
               }
               for( ; ++FORcnt[132]%5 ; )
               {
                  l += (h-c)%100;
                  j += (b+e+c+g-d+c-d+a)%100;
                  b += (e+d-e-m*l-e+k)%100;
                  l += (f+f-e*k+d*g+j-l-g*n+d)%100;
                  c += (d+h)%100;
               }
               if( ++IFEcnt[87]%2 )
               {
                  h += (b-i+l-h-g*l-i-g+j+i*a-n)%100;
                  d += (b-j+d-n+a*n-i+k-n+g+j+l-i-i)%100;
                  c += (e*f-n-n-f+m+b-j+n-g+c)%100;
                  a -= (h*l*k-n-b+h+e-e-m+k*d-b)%100;
                  d  = (i+c-g)%100;
               }
               else
               {
                  k += (g+d-e-l-l*i*h-m*e+e-g)%100;
                  m += (j+b+n+j-d+e-k-i+e)%100;
                  m  = (n+m)%100;
               }
               while( ++WHILEcnt[87]%5 )
               {
                  j -= (f+g)%100;
                  a -= (j+c+d-g+k)%100;
                  g += (i+g*l+f*i-j)%100;
                  b -= (g-a)%100;
               }
            } while( ++DOcnt[87]%5 );
            do
            {
               if( ++IFcnt[65]%10 )
               {
                  d  = (a-m+h-n*e-a*m)%100;
                  g += (i+j+g)%100;
                  j += (g+n-a-c-m*i-c+g+d-n-e)%100;
                  b -= (l*b+c-e)%100;
                  e += (h-e)%100;
               }
               g += (a-f-g+e)%100;
               for( ; ++FORcnt[133]%5 ; )
               {
                  k += (g-h+h+m*g*f+k+e-c)%100;
                  b  = (h+c-e+c+h-c+j)%100;
                  h += (n-m)%100;
                  k += (d-i+b+a-k+n-g)%100;
                  c -= (j*c)%100;
               }
               
               switch( ++SWcnt[44]%3 )
               {

               case 1:
               {
                  f -= (a+g-l-j+l*a*h-k-c)%100;
                  m += (a*e+j+h-d-d+g-g+a-n*d-f+j)%100;
                  f -= (l+a*a)%100;
                  m -= (i-e-l-h-m-i-i+m-d)%100;
               }
               break;

               case 2:
               {
                  a -= (m*m-h+i-k+b-e)%100;
                  d -= (m-e-l-b+b)%100;
                  h += (a-n+d*h+d-k-e*e+m)%100;
                  k += (j+a+b+f*i-k+c+g*k-j)%100;
                  m -= (e-b*d-a-j+f)%100;
                  c -= (l+g-i-c*d*j+i+e+e+h-a*h+e)%100;
               }
               break;

               default:
               {
                  j -= (m-a*g-h+h*m)%100;
                  l -= (i-a+f+m-n*k+k+a-i+a-j+b-m)%100;
                  n += (g-f-f)%100;
                  f -= (d-a+e+d)%100;
                  g += (e+m-b+k)%100;
               }
               }

               if( ++IFEcnt[88]%2 )
               {
                  l -= (i+e-c*k+g-h+e-f)%100;
                  e  = (m-d+c-m-f-l-c+h-h+k+m)%100;
                  c  = (d*i+g+n-h+a+j-l-n-l-j)%100;
                  n -= (h*e-g-b+l-g-f*d+j+g*m+g+l)%100;
                  h += (n+e)%100;
               }
               else
               {
                  j += (f+j*e+b+f+f*g+m*g-b*b)%100;
                  e -= (l-n+i+l+m*i+d+b-b-d)%100;
                  i  = (l+j-d*m+j-d)%100;
               }
               m -= (h-h)%100;
            } while( ++DOcnt[88]%5 );
            a -= (j+k-h)%100;
            k -= (e-h-g+l)%100;
            j -= (b*n)%100;
         }
         n -= (k+a-m+a-k*m+k+i+c*n+l)%100;
      }
   }
   a -= (i-c+m+a-k*e*g*d-a)%100;
   j += (b-d-a-n+j*h+e+j-k-k-c*a*n)%100;
   l -= (c-i+d-h+a*c+k*b+j)%100;
   h -= (n+m-e-c-j+h*h-f+e+e+c-k*m)%100;
   f -= (a*c+j-k+m+e-d-b+a-f-n+h+m)%100;
   l += (f+f-l*l*d-k-b-n)%100;
   h -= (j+g-c+f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F41(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[91]%5 )
   {
      do
      {
         for( ; ++FORcnt[135]%5 ; )
         {
            if( ++IFcnt[67]%10 )
            {
               for( ; ++FORcnt[134]%5 ; )
               {
                  a -= (m-n*j)%100;
                  b -= (d+d*f-m*c+h-n*e+n-b-c*h+k)%100;
                  i += (c*h-f-f*l)%100;
                  b += (e+g+h*l*d+a-a+g)%100;
                  d  = (k-n*j+e-n+i-f+k*m*b)%100;
               }
               if( ++IFEcnt[90]%2 )
               {
                  c -= (h*i-g-a-j+k+g-a)%100;
                  g -= (g+f+m+m-j-f*i-g-g+i*a+n)%100;
                  f -= (a-j-e+f-l+l*c+c+j*g+n+g*l)%100;
                  a += (j-g+i*l+g-c-c+l+i-j-f-i*m-e)%100;
                  k -= (k-l+a)%100;
                  g += (f*b+m+h)%100;
               }
               else
               {
                  j -= (j+d*a)%100;
                  j -= (b+b+l+j*a-i-l*e)%100;
                  k -= (a*m)%100;
                  a += (k+f*j*i-b*j-i-c+a-k-b*g*c)%100;
               }
            }
         }
         while( ++WHILEcnt[90]%5 )
         {
            do
            {
               k += (i*g*a-c-g)%100;
               for( ; ++FORcnt[136]%5 ; )
               {
                  i += (g+m*k*k*f-e-l+g*n)%100;
                  j -= (g*l)%100;
                  c -= (a-h-f*k+l+n+l+g-f-c)%100;
                  l -= (k-l*l+d)%100;
                  f -= (d+j)%100;
               }
               
               switch( ++SWcnt[45]%4 )
               {

               case 1:
               {
                  m -= (g*a+i+l-f)%100;
                  a -= (m+d+k+j-m*a-c+k+e+e+c+c-m)%100;
                  b -= (e+h)%100;
                  n  = (m+e)%100;
               }
               break;

               case 2:
               {
                  f -= (e-a+e*b)%100;
                  g += (a-c*l+k+c)%100;
                  g += (b*a-n*f-c)%100;
                  g -= (e-j+c*e*c+f-n+a+n)%100;
                  b -= (j+h-f+e+f*d)%100;
                  k += (n-j+i*l*a*a+m+a-d*f-d*h)%100;
               }
               break;

               case 3:
               {
                  a -= (l-j+i-a-l-e-f)%100;
                  c += (d+l+f*m-k+a-n*c-c-b*k+a)%100;
                  b -= (e+n-d)%100;
                  a -= (a*j+j-b*l-l-h-k-i)%100;
                  b -= (l+d-e-m-e-l+c+h+h+n+n*i+d)%100;
               }
               break;

               default:
               {
                  l += (l*h*j*d+k+d+n+b-g-n)%100;
                  h -= (m-k-f-j+d+f)%100;
                  k += (f*b+d)%100;
                  f += (i*j-h)%100;
                  c  = (l+a+k*j+b-a+j-i*j+b-f+f-h-f)%100;
               }
               }

            } while( ++DOcnt[90]%5 );
            if( ++IFcnt[68]%10 )
            {
               if( ++IFEcnt[91]%2 )
               {
                  m += (h+g+c)%100;
                  a += (g-m+j-g*n-k-d*d-j+k+j-e)%100;
                  n += (k-m)%100;
                  l += (h-d+c+n)%100;
                  c  = (h*e+l-m-g-m-e-h-j)%100;
               }
               else
               {
                  l += (f+l+f-m-h-d-a*d-n+e*l-a)%100;
                  j -= (l+m+j+a*b+h+j-a)%100;
                  d += (g-m-l-n*i-h*b+k-a+k-h-e)%100;
                  d -= (d-d-g-i+h)%100;
                  c += (n+c-i-j-i-d*a+f-a+f-g+h-g)%100;
                  i -= (k-j+c*b-l*f+e-g+d-j+d-h)%100;
               }
               while( ++WHILEcnt[89]%5 )
               {
                  j += (n+e-i-h+c-j*n*g-l+k+i-m)%100;
                  f += (a-f)%100;
                  b -= (b+g-c+m-b*i+l-d-e-e)%100;
               }
               n -= (e-e*i-d*n-c+n+c+b-m-k)%100;
               c  = (c+n-j*i+h)%100;
            }
            f  = (a*c)%100;
            k  = (a*n+a-g-i-c)%100;
            l -= (e+n-n)%100;
         }
         i += (i-a-h-h+b+b*e-g)%100;
         h -= (h-k+l+g*n+a+f+f-k*m*b)%100;
         i += (b-b+j*c-i+a*m*c+c-f*e-e-g)%100;
      } while( ++DOcnt[89]%5 );
      g -= (d-l-j+e-n*c*e-a*d*k-m-n+b-m)%100;
      k  = (b+e+k-d-n+f-g+f+g*c-f-g*m)%100;
      n += (e+m*i*i-a-b*l+a*k-f*l-k)%100;
      g  = (g+g-a+m+j+m)%100;
      d += (m-j)%100;
   }
   g += (f+b+d+i*m+n-l+l+i)%100;
   g += (c*n-c-m-i)%100;
   k -= (i+e*j+g+a+j*f*c)%100;
   m += (c-b-m)%100;
   h += (d+c-n-j)%100;
   c -= (b+k+g*a+h*l+b-f+n+d-c-d-n)%100;
   l -= (c+f+g-l-j-b+b*l-j-i-b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<100; I++) IFcnt[I]   =0;
   for(I=0; I<134; I++) IFEcnt[I]  =0;
   for(I=0; I<67; I++) SWcnt[I]   =0;
   for(I=0; I<134; I++) WHILEcnt[I]=0;
   for(I=0; I<134; I++) DOcnt[I]   =0;
   for(I=0; I<201; I++) FORcnt[I]  =0;
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
   sum += F34( ) ;
   sum += F35( ) ;
   sum += F36( ) ;
   sum += F37( ) ;
   sum += F38( ) ;
   sum += F39( ) ;
   sum += F40( ) ;
   sum += F41( ) ;

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      do
      {
         for( ; ++FORcnt[138]%5 ; )
         {
            for( ; ++FORcnt[137]%5 ; )
            {
               i -= (a+i-g-e+c+i*h*n*b+f)%100;
               m += (b-f*b*g+c*g+d-l)%100;
               m += (a-h+n-a+l-l-a*n+k-k+b+e+f)%100;
               a += (j+b-c+e)%100;
               h -= (j-k*b+a+f+m-j-h)%100;
               k -= (i-k+g+f+j+a+h-h-e-d+g)%100;
            }
            f += (n-c+b+f+i+e*g-b)%100;
            h += (g-m-j+b-b-n-m-b*j+c+f*b+i-n)%100;
            f += (e+h-e-e*n)%100;
         }
         i -= (c+j-f*i-n*j+a-f-k-i*d*c-b)%100;
         f += (j*k-m+k+c-l*h*c-j+g)%100;
         i -= (n-f)%100;
         j  = (b*n-n+d-b+b+h-a+k+h+j-n*j+d)%100;
      } while( ++DOcnt[91]%5 );
      k += (m+c-e-m*d-d-l-l+n-i-g-a-h-f)%100;
      e -= (f*e*m)%100;
      k += (d*d+k-d*j+d-d+i+e*h-f-j)%100;
      a -= (j*e+k+n+g*b+j-b)%100;
      c -= (f-g-h-f-k)%100;
      b -= (k+l+i-m*j*n-b-k-l)%100;
      d -= (k+n-d+c*e)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<69; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 69 << "   Dynamic = " << sum ;
   for(I=sum=0; I<92; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 92 << "   Dynamic = " << sum ;
   for(I=sum=0; I<46; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 46 << "   Dynamic = " << sum ;
   for(I=sum=0; I<92; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 92 << "   Dynamic = " << sum ;
   for(I=sum=0; I<92; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 92 << "   Dynamic = " << sum ;
   for(I=sum=0; I<139; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 139 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}