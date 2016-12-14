#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[72],IFEcnt[96],SWcnt[48],WHILEcnt[96],DOcnt[96],FORcnt[144];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         j += (e+d-m-a+h*n-f+h-d-m-c)%100;
         e += (k+c-m+b+n+g-m)%100;
         j += (d*i-a*m*f+l+j)%100;
         l  = (k*f-a+d*e*a+h+j+f)%100;
         l -= (g-l-e-a+c+a-j+a+n-h-n)%100;
         n -= (k+d+k-i-j-e)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  m -= (m+k-k-d+e+n+b-f*l+n-b+c)%100;
                  k += (h+e-m+j-n-e-j*d)%100;
                  l -= (h-m*j+b+g+a+i+m-i)%100;
               }
               a += (k-n-b*g+c+n)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  e -= (d+a-n-d+g+g*l*n)%100;
                  i  = (l*n-h+k)%100;
                  h += (m-g*c)%100;
                  h += (f*a-k-i-l-c+h*h+h+f+i*b+m+n)%100;
                  k  = (l*j+e+b-c*k-j-e+j+g+c)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  e += (b-a)%100;
                  f -= (e-g+b+n-b)%100;
                  d -= (h+i*l-f*c-c*b*d-h-e+b-i+b+g)%100;
                  e -= (j-e*c-j*h*l+k+e-k+k*h-h)%100;
               }
               break;

               case 2:
               {
                  h -= (i+m-c*e+d-i+k+f-d+b-j)%100;
                  g += (a+j-i-f*a+k+l-e*n+j+f)%100;
                  e  = (n+f)%100;
                  j += (f-n-l+k*d-n-m-h-n)%100;
                  b -= (j+n*f-m*m+h*h+b-d-g)%100;
                  l -= (g+l+f-e-f+a+l-i+n*f+b-c)%100;
               }
               break;

               default:
               {
                  e -= (e-l-h-m-g*f+m)%100;
                  i -= (g-m*c-m-g+n*k+e*l+b)%100;
                  c -= (j+h+a*l+e+a+j)%100;
                  m += (g+l-a-g+d-e+n-b*e)%100;
                  d -= (f+l-j*n+b*h-h-f)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  g -= (n+c)%100;
                  i -= (a-a+j-k+a-c-h*j*c-j-f-j)%100;
               }
               else
               {
                  g -= (d*a-h)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  k -= (h+d+a+k*d-f+d-c)%100;
                  a -= (m-j-n+b-j)%100;
                  b -= (e-j)%100;
                  a -= (j+m+h*l*n+a-a*g+k-m-f)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  a -= (e*b+h-l+g+m)%100;
                  d  = (k-l-b+c*m-m-m+c-c+d*c)%100;
                  k += (k*e*k+k-f+l-d+b+f-k-h-l)%100;
                  i -= (f*k)%100;
                  j += (d*f+d+c-l*i+f+g*k+h*j-e)%100;
                  f += (d*a+n+i)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  k += (b+g+i-j+l)%100;
                  d -= (f+f-m+j+g-d-m-a*k)%100;
                  l += (b-j+i+k+f)%100;
                  n += (g*j-j)%100;
                  h  = (f-e-i)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  a += (n+e+m+a+m*a-d-m+n+k-l*j)%100;
                  n  = (m*m)%100;
                  b -= (b-c+k+n+k+n+e*a+j-k-b)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  m -= (b+g-h+f)%100;
                  g -= (l+g+h+j-n*f-h-i)%100;
                  n += (i-f+l+h+h+b)%100;
                  m  = (l-k)%100;
               }
               else
               {
                  j -= (j-l*k+k-n-f+k+m+h*n-k-a*n)%100;
                  g += (n+n+d-j+n-k-g+c*n)%100;
                  d -= (j-l)%100;
                  j -= (i-i-f+j+e)%100;
                  f -= (k*i+m+j-i)%100;
               }
            }
            f += (j-n+j*g)%100;
            j -= (i*n)%100;
            a  = (i-n+g+d-e+f+k+n+g-f-d-f)%100;
            h -= (e*d+j-f+m+i*k)%100;
         }
         n += (l-l-m*i-k+h-n+l+i-l+a-f)%100;
         n += (i-a-a+k+l-b-j-k-l*e+c+n)%100;
         i += (e+j+n-c-g+f-j+a*k+c-j-i)%100;
      }
      d -= (e+b*f-e-n*f*l-h*m+j)%100;
      i -= (h-a+m-b*j+k+e)%100;
      d += (l-e*k+f-b+b-k-i-m-b-k-n+j+a)%100;
      e -= (f+m+m+f-m*a+k+n+e-c-d-e-d)%100;
   }
   e += (k-l)%100;
   e -= (m-a-d-b+c-m*k+e*l+c+n-b)%100;
   k -= (j*e)%100;
   a += (c+a*m-n-n+h+g-a-h-a*f)%100;
   h  = (m+e*j+d+h-d-k+c-k+d)%100;
   h -= (a-k+m+a*a+k+i-b-b*d-d)%100;
   l += (l+h+c-k-a-b-e+l)%100;
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
         k += (m+k+f-c+d-j+e)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%3 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  e -= (d-a-c-n-l-k)%100;
                  n += (i-k*g-j+i-a-i-e+n+e+m)%100;
                  c += (f-b-k-e+j*i-b*h)%100;
                  m  = (n+d+m+k-j-e+b+i)%100;
                  c  = (c-k*a-k*j+n-k*g-n-l-m*b)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  d += (i+l-d+f)%100;
                  i += (k*i)%100;
                  n -= (f-b)%100;
                  g -= (j+g+l-n+c-e)%100;
                  b -= (n-m-l-k)%100;
               }
               else
               {
                  k -= (j-n+i*j*a+g+f+d-m+l+c-i+c*g)%100;
                  b -= (g-b-h+a-c-l)%100;
                  j += (c-f-h-d+j+j)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  b += (j-h-b-i-h+n+g-n)%100;
                  l -= (c-n+a+i+n)%100;
                  j += (l+g-e+k-a+h+e-g)%100;
                  l += (c*a-g+g*d)%100;
               }
               do
               {
                  c += (g*l-n)%100;
                  i -= (b+g+j-b-b-g-c-g-k+l)%100;
                  j  = (c+h)%100;
                  d += (m-l-k-m+b*i+i+k-d*e-g-i+j-e)%100;
                  e  = (e-m-g+j-e)%100;
                  i -= (j*i-d*c+c-d+i*i-c)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  f += (n-d-e-g-f+g+d-i*k)%100;
                  a -= (l+h+n-a-i+k-m)%100;
                  f -= (i-m)%100;
                  l -= (n-d)%100;
                  c += (l*g-a+i-e)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  k -= (d*a-e+f-h+l)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  d -= (m-e+e-k*i-m+c-i+i-i+a+n)%100;
                  a += (k+g)%100;
                  n += (h+j+j-k+n)%100;
                  e += (n*j+n-n-e-c-n+f*h-m-e-b*e)%100;
               }
               else
               {
                  e  = (h*h)%100;
                  m += (a*c+e-a+d)%100;
                  l -= (e+m-j-n)%100;
                  l += (h+f-g+f+k+c-k-i+d-m+c)%100;
                  j  = (a-f+g-m*k-g+f-n-m-j+l+i+b)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  k -= (c-j-k*i+h-g+m+f-c+h)%100;
                  j += (d+j)%100;
                  g -= (i-k+h+c-k*c-c+c+h+d-f+a)%100;
                  b -= (n-c*n-a+a*k-a+j*k*b)%100;
                  b += (l*k+a*n)%100;
                  l += (l*a)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  b -= (j+j+h-c+c-k*d+h)%100;
                  f -= (j-h+l+h+i)%100;
                  c += (h+l-m+d+d+d*g+m*i+m*e)%100;
               } while( ++DOcnt[4]%5 );
               g += (k-c+f-n+h+a+g-f+d+b*i-f)%100;
               a -= (d+a+m+b+g+a+l+f)%100;
               c -= (b*k+i+f*m+a-e-g+j*m+f+h+d)%100;
               i += (h+i+h+m+a*k-g*d)%100;
            }
            }

            i += (g-d*g-l-d-e-m)%100;
            f  = (g+e+n-d)%100;
            j += (b-i+c+j)%100;
         }
         d -= (i-c)%100;
         e += (b*i+m)%100;
         n -= (m-g)%100;
      } while( ++DOcnt[2]%5 );
      h -= (a*i+m-k*h*f-a*d-n-m*g)%100;
      m += (n-f)%100;
      l -= (c*e-d-f+g+b+b-a)%100;
      n += (e+j+m+j+i-c+i-h+c*g-f*h)%100;
   }
   a += (e+h-d-h-l*c)%100;
   i += (l-n-l-n+d+e-j*k-e)%100;
   e += (c-i-g-h-g)%100;
   e  = (m*d+n*h-j)%100;
   m  = (l+c+c-d-n-k+e-g-k*d)%100;
   k  = (c+i*g*m-e*b-j+k-g*i+n-a)%100;
   g -= (a-l+g*e-b-l-m*i-j-m+e+c+a-i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[5]%10 )
   {
      i -= (g+m)%100;
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
                  d += (a+i-g+l+c+d+m-m-c*d*a-d)%100;
                  b += (h*j+g*d*b+h-f-m*a-f-f-e-h)%100;
                  j -= (c*n+h-h*g*g-i*i-c-f-c+l)%100;
                  n -= (i+b+i+i*g+e-n-g+f)%100;
                  a -= (n*m-d-a)%100;
                  k -= (k*f-i-i-e*d+g)%100;
               }
               else
               {
                  e += (l*d-i-f*l)%100;
                  j -= (e-c*n+e+e+a-c-n-i-n)%100;
                  n += (n*k*e-j+l*k-c-e+g)%100;
                  b += (d*i-c-m-f+l+h+f+b-a)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  e  = (j+k+n+b+h)%100;
                  d  = (c*d)%100;
                  j  = (a*c*k-n+l+g-n+e+m+f)%100;
                  i -= (d-k+h-l*b+n-n-i+j+c-g)%100;
                  n += (g+b*g*k-j+e*k)%100;
               }
               do
               {
                  e += (j*f-b*h+f-m-l*k*h-h+b-f)%100;
               } while( ++DOcnt[6]%5 );
               a  = (k+e*l*h-f)%100;
               for( ; ++FORcnt[9]%5 ; )
               {
                  k -= (n-k-l+i+l*g+k-f-h-i-f+n-e+b)%100;
                  g += (f-j-i-c-l*f+i-c-m)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  f += (e-a)%100;
                  g -= (i-d*m+d+a-g)%100;
                  f += (i+m+g-f+b-g*a)%100;
                  d -= (l-i)%100;
                  e -= (l+l-h+d+a-k+c+e+e+b-d-i+n-i)%100;
               }
               do
               {
                  d += (i+d-i+g-h)%100;
                  m -= (a-f)%100;
                  a += (g+e-d+n+c+g+k+h)%100;
                  l -= (n+i)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  h += (j-b)%100;
                  c += (i-c-n*k*e)%100;
                  e += (n*i*i+j-n+a-f)%100;
                  n += (g-l+g-i*f)%100;
                  c -= (e+f+i-n-a-m)%100;
                  e -= (i*b*a*m+a+a+e*m*f+f+b-f-f-b)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  j -= (g-a+j)%100;
                  e += (a-j+c-k+k-i+b-f-j)%100;
                  g -= (n-c-d)%100;
                  n += (n-m-d)%100;
                  k += (g+m*j)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  n -= (i+k+d-c)%100;
                  f  = (f+l+e+f-f-e+d+e)%100;
                  k  = (l+k)%100;
               }
            }
            
            switch( ++SWcnt[3]%3 )
            {

            case 1:
            {
               if( ++IFcnt[4]%10 )
               {
                  c -= (e*k-h+m*g+f+i*a*h+b-a)%100;
                  f += (d-h+b-n+l+n+n-e+k-h-c+i)%100;
                  h  = (l-h-m+f-l+a-e-g+a)%100;
                  l  = (a+h*j+e+b+e*h)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  e  = (g-d+c+b)%100;
                  c -= (m*e*e+n+k+d-f*m+a)%100;
                  l += (m+i+k-i*n-b-j-m+b-h)%100;
                  f -= (i+j+b-n+k)%100;
                  f -= (g-e+c-d)%100;
               }
               else
               {
                  f -= (j-k*f-f)%100;
                  b -= (a-e+f-b+l-j+a-h-m)%100;
                  c += (d+k+g-n+j*e+f-c*j-f-g+b+n)%100;
                  f -= (m+h)%100;
                  h  = (l+c+a-c+k)%100;
                  e += (b*b-n+k+f-n*d+c)%100;
               }
               j -= (h-e-k+k-a-j*j-n-n+g+b)%100;
               n  = (n+b-i-e-l+f-g-i+m-l+e+n)%100;
               j += (l-m-a+e-i-f-k-m-k+d)%100;
            }
            break;

            case 2:
            {
               e += (i-f+f+n*c-e*f-k*m-m+l+m-g)%100;
               a -= (a*m+l-e+f*j-d-d-g-j-d)%100;
               h -= (j+b-i-f-c-f+n+i-n-i)%100;
            }
            break;

            default:
            {
               d += (k+l+n-b-g-b*a)%100;
               e += (i*n)%100;
               c -= (j-k-b+n-d*j*b)%100;
               b += (d-c)%100;
               f -= (b*i-m+h+a+h*e-e-m)%100;
            }
            }

            a -= (j*b-d+j-g+k*i-j-n)%100;
            k += (d-m*c*j+c+d*l)%100;
            k += (c+n+e+f+e-a-k*j+c-c)%100;
            e += (k*i+c)%100;
         }
         break;

         case 2:
         {
            m -= (f*n*j+n-k+j-e-g-i*e-l+k*g+j)%100;
            l  = (d+c-c*m+h-n*k+e+h+c+h)%100;
            d += (j+b+g-e-m-h*h-d-m+c+l-a)%100;
            k += (a+f)%100;
         }
         break;

         default:
         {
            j += (j+d+h+d)%100;
            k += (f-h-g-n+k+h)%100;
            f += (k+a+g)%100;
            h += (j-m-m+h-k-i-e+g+e*k*h*k-e)%100;
            h += (h-m)%100;
            j += (g*l+f+m+b*b-h-i+a+d-a)%100;
         }
         }

         f -= (h-k+k+d+a)%100;
         d += (d+g-f-a-m+g-b-b-f-k-f+m)%100;
         e += (l-b*b-n-a+n+g-n*l*d+h+m)%100;
      }
      k -= (j+m+g-k*m-l+h+m*c+n*b)%100;
      c  = (g-c*h+c*l-a+g-h+j-a-n+b-n*g)%100;
      i -= (d+l)%100;
   }
   j  = (a*d+n-j+j-h-d-n+h)%100;
   c -= (b*m-h+e+e+d-n+a+i-k-i+l-e+f)%100;
   f -= (f-m*l*g*f+m-g)%100;
   m += (b+f-f)%100;
   m -= (h+l+g*a+b+d*c+l+j+j*k-d-b)%100;
   l  = (f-e)%100;
   b -= (i-l-g*a-b+e*l-k*l-g+j-h)%100;
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
                  a += (g-d)%100;
                  c -= (m+f-n-c+i-n+i)%100;
                  c += (c+j)%100;
               }
               else
               {
                  h  = (d-b-c+f-a+g-c+b-k*g+b)%100;
                  i += (i-c*i+j)%100;
                  f += (l-k-a+b)%100;
                  b -= (j-f-k+i-a+k+l+c*f*b-k+f)%100;
                  e -= (e+a+c-g*k+e+e-i-l)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  e -= (n*k+e*g*h-c+m-m)%100;
                  n -= (k*j-c-a)%100;
                  k += (c-b+l-i-f)%100;
                  l += (g+f-b-g-d-l)%100;
                  h  = (j+b-d-g-e+n-k+m*b-k*d-k-l)%100;
               }
               do
               {
                  h -= (i-c+b*a+g-n)%100;
                  h -= (a+e-g*i+m-b-l*c-h*m)%100;
                  l  = (b*m-c+g+i+g+h+k*a)%100;
                  k -= (d-f-n-d*e-c-n+k+b+l*m-k*f)%100;
               } while( ++DOcnt[8]%5 );
               if( ++IFcnt[6]%10 )
               {
                  c -= (c*e+g-i+f+a+f+a)%100;
                  g += (l+f-c+b+c-g+g*j*l-i+f+m-f)%100;
                  a -= (l+g*k-g-c)%100;
                  h  = (k+a-n+b-f-f+b+e+g*a-n+a)%100;
                  i -= (m-l)%100;
                  f -= (l*m*h)%100;
               }
               k += (e-h)%100;
               for( ; ++FORcnt[11]%5 ; )
               {
                  m -= (a+k)%100;
                  h  = (h*e*l-n+i)%100;
                  c  = (f-f+n)%100;
                  h  = (c+c-c+j+g-l-n*d-i+c+h+m)%100;
                  m  = (g+n+a-k+g+c+e-j+l-j-b)%100;
               }
            }
            
            switch( ++SWcnt[4]%3 )
            {

            case 1:
            {
               e -= (a*i*l+k-n+k+c-j-g-f)%100;
            }
            break;

            case 2:
            {
               e -= (d+e-g-n-m+i+c-h+k-c-n-f+k+c)%100;
               n  = (n-k+k*e+g-b+n)%100;
            }
            break;

            default:
            {
               k -= (e+m+j*f-d+k+d+l*j-l-b+b*m-b)%100;
               f += (b*j)%100;
               j -= (h*e*h+i+f*j+b*f-a)%100;
               l -= (g-b*m)%100;
               j -= (n+b+m*b+k-j+g-j+l*n+n*m)%100;
            }
            }

            e -= (a-d)%100;
            l -= (j*a-i+l+j)%100;
         }
         l -= (a+d)%100;
         h -= (k+i+m-f-g-l)%100;
         i -= (l-m+a+m*j-l+b-n-n)%100;
         a  = (i-f+m)%100;
      } while( ++DOcnt[7]%5 );
      n -= (i*k)%100;
      b += (e*a+c-i-b*i-c-e-a)%100;
      e += (d-g-d-m-m)%100;
      f -= (n+i-j-k+d*i)%100;
   }
   d += (h+e-d*h*h+k-m-i+e*l*n+h*n-n)%100;
   n -= (j+i)%100;
   n += (f-g-l*l)%100;
   n -= (e-k)%100;
   m += (h+d-m+a*g-i-a-i-f*k+b+d-d)%100;
   l  = (g+i-b-m+f-n+i-e-e+d)%100;
   a += (h-g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[11]%2 )
   {
      e += (k-k+d)%100;
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
                  i  = (d-f-i+f+g+e*e+f-g)%100;
                  g += (b-f*a*j-j-n+g+f)%100;
                  l -= (h+l+d+n+d+k+j*h)%100;
                  k += (a+h*c-m+f-n+l)%100;
                  i -= (m+g+j+d-l-f-f*j+n)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  a -= (k-n)%100;
                  h  = (n+l+j+n-n-d-h+m-d+d)%100;
                  n += (i+h)%100;
                  e -= (i-d*i+l-n*d-f+d+b-b-k+g+b)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  d -= (h*b*h-h+a-j*d*n-c+j)%100;
                  n += (l+h)%100;
                  d -= (m-c-m-i+n+e)%100;
                  a += (k-j*n+j-i+k-b+k*h-c*k*a)%100;
                  k += (f*c*i-j+f+j*m-b)%100;
               }
               else
               {
                  d -= (i*e+f+n-b*f+f-h*g+n+f)%100;
                  l += (n+l-g+n)%100;
                  k += (c+f+d-k+a)%100;
                  a += (g+k+b-c*h*d*f+h+a+l)%100;
                  l -= (e+j)%100;
                  l -= (c-c+c)%100;
               }
            }
            while( ++WHILEcnt[9]%5 )
            {
               do
               {
                  h += (l*c+h+a-d*e*l+a-l)%100;
                  a -= (l*j*i)%100;
                  e -= (b+k-m)%100;
                  d += (a+m)%100;
               } while( ++DOcnt[10]%5 );
               j -= (f+f)%100;
               for( ; ++FORcnt[16]%5 ; )
               {
                  h -= (a-i-a+h-e-i*e-h)%100;
                  h -= (a-i-n)%100;
                  n += (d+n+i)%100;
                  a -= (b-d-l-i)%100;
                  l += (i*k+l-g+g*k+c-l)%100;
                  n += (d-a+l-n*e-g+c-h+d-h-e)%100;
               }
               
               switch( ++SWcnt[5]%3 )
               {

               case 1:
               {
                  k -= (i+g+k-i-e+h*k+d)%100;
                  n += (i-i-i-b+n+d-e+a+l-j+i-j)%100;
                  c -= (h-m*c*j-c)%100;
                  a += (g+b-e*j+c-m-c-f)%100;
                  c -= (m*b+h-e)%100;
               }
               break;

               case 2:
               {
                  f -= (g+f-e*m*n+j+n*j-k)%100;
                  d -= (g-e*c+h+e+n*h-m*n)%100;
                  c -= (k-a*m+h-i*k+k+f)%100;
               }
               break;

               default:
               {
                  e += (n+m)%100;
                  e += (a-h+d+a-e*f-m*e-d*j-i-b*d-m)%100;
                  g -= (g+h+e+k*d-h*f)%100;
                  a -= (h-m+e*l)%100;
                  i += (k+n+g+j+a+c-m*g+m-l)%100;
               }
               }

               if( ++IFcnt[8]%10 )
               {
                  d -= (a*b+a+l-b-i-f+f+f+b-a+m+c)%100;
                  d += (m*c*c*d-f-m*i-l-m+a-f*a)%100;
                  d += (i-j+b-f+h+i-h+c-b*n+m)%100;
                  n -= (d*j-g-j+i+b*h-a+l)%100;
               }
            }
            if( ++IFEcnt[10]%2 )
            {
               d -= (f-b+h+d*j+m+h)%100;
               c -= (j*k+a*m*n+j+l+n)%100;
               h += (h-f-c+c-g*f-g)%100;
               b += (e-j+n*b*e-f-e+h+m)%100;
               k -= (e+h+l+h*h+g-f*d+m+l+i+a)%100;
            }
            else
            {
               k  = (f-g-j+b*d-h+j-a+f-l+m)%100;
               k += (g-h-n*g+d*n-n-n)%100;
               f -= (k-e+d+m-i+j)%100;
               c += (g+e)%100;
               i -= (e+l-e+i-f+j+c-f-f*k)%100;
               b -= (n+b+e-n*f+f*j-e-b)%100;
            }
            a += (k+b-g-g-d-i-h+d*c)%100;
            f -= (m-c-e-m-l+e-e+j*j+i)%100;
         } while( ++DOcnt[9]%5 );
         n -= (k+d-d*a-g+m+a)%100;
         e -= (l+j+c-j-d+m+k*c-h-d-i)%100;
         g += (a+d*n)%100;
         b += (b-f-n-c+j-j*c-d+h-c*n+k)%100;
         n -= (h-k*g*n*k+e+l+m+j+e)%100;
      }
      j  = (j+h+n-d*h-l+n-d*k*m-j)%100;
      j += (l-c+i-c+i-j+k-e-h+m)%100;
      a += (a+m-g-b-j-g-h+e-i-e-i+l)%100;
   }
   b += (h-a-k+k+h)%100;
   b  = (m+c-c-k+f+e-a*e+f-b)%100;
   i -= (l-f*g+h*h+b*k+c-k-a+i+l+i+k)%100;
   d += (j*l)%100;
   f -= (l-d+e-e+n+e-m*g*d-e+m-h)%100;
   c -= (e+b-n)%100;
   f += (d*j+i*c-h-a-c-j+i-h-n-d*n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F6(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[13]%5 )
   {
      do
      {
         for( ; ++FORcnt[20]%5 ; )
         {
            for( ; ++FORcnt[18]%5 ; )
            {
               if( ++IFEcnt[12]%2 )
               {
                  d -= (k-l-a-a*a-c-h+k+i-a-d+h+c)%100;
                  d += (f-g+k-i-a+d-d+b-a)%100;
                  m += (e+b)%100;
               }
               else
               {
                  m -= (d*e-l+a+m)%100;
                  m -= (c-i-l*f*a+a)%100;
                  i  = (l-d-d)%100;
                  l  = (a*g+d-e*j-l+c+g)%100;
                  h += (n+h-k+j-n+f+a)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  k -= (e+f)%100;
                  i  = (l+e-l*c*d-f+d-k*c+h*e-a)%100;
                  k += (g+m-e+m)%100;
                  c -= (i-n)%100;
                  k -= (j-i+n-m+h-n+j-m)%100;
               }
               do
               {
                  g -= (l+n-m+b*g-a+i+m+i)%100;
                  g -= (g-d-e*m-a)%100;
                  l += (c+d+k-l-n+k+f-n-k)%100;
                  d += (j+m-g*g+k+m-a*k)%100;
               } while( ++DOcnt[12]%5 );
               if( ++IFcnt[9]%10 )
               {
                  k -= (a+f+b)%100;
                  j += (j-j-j+f-l-m)%100;
                  h -= (k-i+c+k+i+j-m+l-d*f)%100;
                  c += (g+n+b-b+i+f-l)%100;
                  c -= (b*d+g)%100;
                  i += (c-n*m+c-g+a+d)%100;
               }
               k -= (e*i-c+i)%100;
               for( ; ++FORcnt[17]%5 ; )
               {
                  c -= (b*e+h*n*d*e-m*g*j-n+l)%100;
                  a -= (m+l+d+d+l-l+n+i-a*j*a+d-n-k)%100;
                  k += (m+a*g*c-c+f)%100;
                  h -= (n-b)%100;
                  i += (b*g-g-l*b+i-d-h*f+c+m)%100;
               }
            }
            
            switch( ++SWcnt[6]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[13]%2 )
               {
                  i += (b-h-j+m-g+i-f*e-l+d+a-j-f+g)%100;
                  k += (i-n-a-h+h*k-i*m+c*e+a*f-l*m)%100;
                  f += (g+f-f*b-n+h-g)%100;
                  f -= (a*e*j-n+i-g-d+f-c+n)%100;
                  a -= (n-m*b+f-l+i+g-a)%100;
                  j += (c+j+i)%100;
               }
               else
               {
                  b += (c*f+c*h-e)%100;
                  j += (n-h+e+j-h+g-c)%100;
                  c -= (c+a+c+k*j*b)%100;
                  c += (g-j+l+i)%100;
               }
               while( ++WHILEcnt[12]%5 )
               {
                  i -= (g+b-h-i-n-l-e)%100;
                  j -= (k+f+d*g-m*e+k*f)%100;
                  e -= (a-b-b*a-a-b*j-g)%100;
                  n += (a-j*d-a*j*m+g*f-d+d+g)%100;
                  l += (f*g+j+a+n+k-e+g-c-f+k*k-i)%100;
               }
               do
               {
                  m += (j+k)%100;
                  b -= (e-l)%100;
                  b -= (e*a-j-d-b-g+k-g*j+h+b-i)%100;
               } while( ++DOcnt[13]%5 );
               for( ; ++FORcnt[19]%5 ; )
               {
                  n += (d*m+k*l)%100;
                  i -= (k*e+j+k+n-d-k+j+k+b-m+l+f+l)%100;
                  n += (i*h)%100;
                  a -= (i+m-b-k-i-m*m+a+e*b+a+g-n)%100;
                  m += (j*g+f*f+e+i)%100;
               }
               m += (b+i+c+c+e-c*d+g+m-f+c)%100;
            }
            break;

            case 2:
            {
               a -= (h*h-n+a+m)%100;
               e -= (c-n-i-e+g*c)%100;
               a -= (j*k-b+i-m*b+e-f+g-g+g-k+e-n)%100;
               h -= (l+g-l)%100;
            }
            break;

            default:
            {
               m -= (k+m*i-m-h*n+a*h*a-k+k-b)%100;
               a -= (f-d+j+h-m+h*a)%100;
               c -= (i*g-k)%100;
               e  = (c-n-n-a-l+j-b+m-i*a+l-l)%100;
               j -= (m-b+m-b*n+h-g*n+c-f-e+h+e*c)%100;
               e += (i+f-h-h)%100;
            }
            }

            n -= (l-n)%100;
            h += (k-m+g-e*j-c*e-n)%100;
         }
         d += (c+k)%100;
         f += (m+j-b*m*b+n-e-a+n)%100;
         b += (e+b+g+l)%100;
         c += (h-m-h-g-d*d)%100;
      } while( ++DOcnt[11]%5 );
      i -= (m+h+c-k-i-e*a+j-k+j+e-a*d)%100;
   }
   m += (n+c+g*b+c-d-l)%100;
   n += (h-d-m*f*k+k-m-l+c-l-c+n-n+k)%100;
   d += (d+h-j+b*i+c-j*h+b-d+j-d-c)%100;
   e  = (a-l-m-e+d-d+h-b-k-a)%100;
   i += (g-a)%100;
   b -= (k*j+h*n*g+j-b-c+d+d-g*m-k*i)%100;
   b += (a*i-f+n+l+a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F7(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[11]%10 )
   {
      for( ; ++FORcnt[23]%5 ; )
      {
         if( ++IFEcnt[15]%2 )
         {
            c -= (a-d)%100;
            e -= (d+d-e-m-l+l*m+k-k*c-g)%100;
            j += (b-f-j+i-m-d+i*m+k*l+c-i-e+e)%100;
         }
         else
         {
            while( ++WHILEcnt[14]%5 )
            {
               do
               {
                  m -= (e*m+b-i-n-e-j-k+a-d-l-h)%100;
                  h += (i*a)%100;
                  e -= (j*c)%100;
                  l += (k+d+i-l+f+g-j*j-m-h)%100;
               } while( ++DOcnt[14]%5 );
               e += (a+c+b)%100;
               for( ; ++FORcnt[21]%5 ; )
               {
                  d += (b-h+c*h+m-d+n+d+l*d-h+d)%100;
                  m += (m-g-m)%100;
                  d -= (a+k)%100;
                  i += (l-d-b+j-c*e-n+j)%100;
                  d += (b+f)%100;
                  i += (j-h-h-n-b-i-d*j)%100;
               }
               
               switch( ++SWcnt[7]%4 )
               {

               case 1:
               {
                  n += (f-e-i+k*b+f*e+f+i-h)%100;
                  n += (e-c-c-d+i+h*i-g-l-h-f-g-h-m)%100;
                  j += (i+j-f+e-k-n+c+b*e+b-b-j+c)%100;
                  i -= (n-h+b+j-k-e-b+b*g+g)%100;
                  a += (f-h-n*n*c*a+n+e+a+e*g)%100;
               }
               break;

               case 2:
               {
                  h += (k*j)%100;
                  l -= (e-b+b+b*d+b*c+n-n+h+c*l-c)%100;
                  a += (k-e*n+l+l+g-d-b)%100;
               }
               break;

               case 3:
               {
                  i -= (n+k-i*g*l+l+c-b+m*m-f)%100;
                  g += (l+k-m*c-n*c-i+h-h+b+a)%100;
                  k += (f+k-g+c-i+m-i+n+g)%100;
                  g -= (e+e-m+a+j-g+d-k-n-i+e*h-f)%100;
                  m += (c-h+e+j+a-b)%100;
               }
               break;

               default:
               {
                  d -= (l-e+j*j-l)%100;
                  f -= (d+h-m+n+m-l-g+e+i+g)%100;
                  d += (h+a+l+c*e-n-k*n*k-j+a+n)%100;
                  e  = (f-j-d*b-c*g+j)%100;
               }
               }

               if( ++IFcnt[10]%10 )
               {
                  n += (a*h-g-i-m*l-a+b-f+m+d-i)%100;
                  g -= (h-f+c)%100;
                  j  = (n+m-a-n-i*g-c-d)%100;
                  a  = (b-c-k-f*c*b)%100;
                  g -= (i*a+h-a-g)%100;
                  h -= (h-a-m+e*n-d-h*c-g+m)%100;
               }
            }
            if( ++IFEcnt[14]%2 )
            {
               j -= (a*j-n*d-f-c*a-l-j*k-g-l+l)%100;
               f -= (m*k-k*c)%100;
               j -= (k+n+k+l*e*d+g+h-d+j)%100;
               j += (j-b+l-d+c)%100;
               g += (m-j)%100;
            }
            else
            {
               while( ++WHILEcnt[15]%5 )
               {
                  e += (d-k*n-f-n*d-f+c+e*g-e+a)%100;
                  a -= (j-e)%100;
                  i += (b+i-e)%100;
                  j += (b+m*g*h+i*b)%100;
                  n += (k-b-e+d-k-m*m-k)%100;
               }
               do
               {
                  d += (f*j-m+i)%100;
                  j += (j-c+l*a*d+n*a)%100;
                  k += (d+l+j-h*a+b-n+m+l-a+i+k)%100;
                  j += (h+c*n-m+m-j-a+n-l)%100;
               } while( ++DOcnt[15]%5 );
               for( ; ++FORcnt[22]%5 ; )
               {
                  l  = (h*j-n-c+f-e*l+f-d+d)%100;
                  j -= (i+i-n*j-h*m-g*a*g-d*b-b*k+m)%100;
                  g -= (n-d+e-k-e+d+b)%100;
                  a -= (d+i+d*c+d+j*m*l-i+b+n*a*i-g)%100;
                  l += (g*b*n*c+h-d*k+m+k-k)%100;
                  k += (j-n-i-l-j+b-g*a+i+k*i*a-m)%100;
               }
               n += (f*c-k*m-b+d+i*k*f+c*m*b*n+n)%100;
               l  = (m-b+j+k+j+d-d-b-n-f)%100;
            }
         }
      }
      c += (l-a-f-j)%100;
      g -= (k+n+c-j+i-f)%100;
      h += (n-e)%100;
      j -= (c-b)%100;
   }
   h -= (n-n*i+m-h-k+c+k+m-a)%100;
   i -= (d+j-f+m+m+k-j)%100;
   n += (f*c+e)%100;
   g += (a+m-k+k*l*l+l+i+h-f-e*b)%100;
   f -= (f*i+f-a*n*g-h+e)%100;
   f -= (n+i*d-f)%100;
   b += (g*h-m+m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F8(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[27]%5 ; )
   {
      if( ++IFEcnt[17]%2 )
      {
         b -= (m+g+g-f-j-f-g*c+g-n+f*n-l+j)%100;
         e -= (b*c+l+a+a*j-j+i)%100;
         c += (j+k*k+f-h*a-c-e-b+b+h-c-e)%100;
         h -= (c+m+n)%100;
      }
      else
      {
         while( ++WHILEcnt[17]%5 )
         {
            do
            {
               if( ++IFcnt[12]%10 )
               {
                  h += (n*l*l*h+c*m+j-m)%100;
               }
               k += (c-m*b+j+a-h+g-c*e+e*m)%100;
               for( ; ++FORcnt[24]%5 ; )
               {
                  b += (b-h+b+f-l+j+a*f+h-e*j+b)%100;
                  h += (e-d+d-e)%100;
               }
               
               switch( ++SWcnt[8]%3 )
               {

               case 1:
               {
                  i -= (b-e-a+m)%100;
                  f -= (l-e)%100;
                  e  = (a*i+d+b-d-d*d)%100;
                  e += (b-d)%100;
                  g += (a*d+l+c+d+g+f-f+n+h)%100;
               }
               break;

               case 2:
               {
                  c -= (a-k*m+g*d-j-i)%100;
                  h += (c*d+j*d-f*m-i-c+n-c*d-m)%100;
                  a -= (m-f-n)%100;
                  b -= (k+l*l+e+a-m+b-j*d-k-h*d)%100;
               }
               break;

               default:
               {
                  e -= (k-l*h-g-k+h)%100;
                  n -= (i+f+j*e-n-n*l+g-f)%100;
                  h += (m+c+n-c+g+h-d+m-e-a)%100;
                  g += (d+k*h*d-b-b+g+g+f-f+l+d+a)%100;
                  a += (i+a*c*n+c-f)%100;
                  e  = (j*d-d)%100;
               }
               }

               if( ++IFEcnt[16]%2 )
               {
                  f  = (g-g-h)%100;
                  g -= (n*k)%100;
                  b  = (b+g-a-b+c-n+e+c-f+i+g*m-h+h)%100;
               }
               else
               {
                  f += (c+m)%100;
                  c -= (k-c)%100;
                  f -= (n-h)%100;
                  a -= (f+f+k-g)%100;
                  a  = (d-b+m+b+e*h-m+e-h-i)%100;
               }
            } while( ++DOcnt[16]%5 );
            while( ++WHILEcnt[16]%5 )
            {
               do
               {
                  m -= (e-m+n-m)%100;
                  h += (j-c*j+n-k-c-a*c+l-n-m+b)%100;
                  b += (n*n*j*e+f-n+f-d+b)%100;
                  m += (n*n+i+i+f*i)%100;
               } while( ++DOcnt[17]%5 );
               for( ; ++FORcnt[25]%5 ; )
               {
                  j += (h+l)%100;
                  k -= (e*m-c+i+n+d-k-m+l+l*c-i+j)%100;
                  h += (a+i+b*b+b-g-k-n+l-j*c*c+k*b)%100;
                  f += (g-h+g+g-i)%100;
                  i += (g-n*d-a-c)%100;
                  d -= (m+a+j+n+e+n+m-n+i-f*n-j)%100;
               }
               if( ++IFcnt[13]%10 )
               {
                  c -= (f+g*k-l*a*d+n*k+m-a*f)%100;
                  j -= (b-j)%100;
                  j -= (a+l-b-d-l-b-l*l-g+a-h-n+f+l)%100;
                  j += (e-k-b+f-a-b*k-d+k*b*e-j)%100;
                  j -= (a*h+l-i*c*m+b+g-j)%100;
               }
               for( ; ++FORcnt[26]%5 ; )
               {
                  e -= (a*n-i*l*d+n+b+b+n)%100;
                  i += (a-a*h*d+m+h)%100;
                  k -= (k-l+e*n-e-f*g+m-n+n+j)%100;
                  g  = (k-h+h+a-g)%100;
                  d += (j*i-e+l+a*b+i+b*e)%100;
               }
               j += (c*n-d)%100;
            }
            h += (f-j-g-j-e*a*g-k-j)%100;
            l -= (i*l+n+g-c)%100;
            g += (i+c+f-c)%100;
            m += (g-g+f-l+h*c+h+j+n*f)%100;
         }
         d -= (h*h*e+i-i+l-h)%100;
         d += (d*b*d-h-m-c*h+i+a-d+b*c+j+m)%100;
         l -= (j+a-g)%100;
      }
      k -= (n*f+k+h*k+b+k*a+d+c*a)%100;
      j -= (n+b)%100;
      i -= (h-h+g+n+g-m*g*k+e+f-e-j-l)%100;
      m += (k-d*h+n+f*j)%100;
   }
   b += (n+j*f-l-b+h-i)%100;
   j += (g-j-e+g-d+d-j*e+j-c)%100;
   a -= (b+m-c-n+a-m-e+m+c+l-f-c+c)%100;
   n -= (f-c-k-b-n-b-j+j-i)%100;
   g += (b-i-n*a*e*h+f*j+j-l-l+b-b)%100;
   c += (m+d)%100;
   f -= (c-j-h-d*d-e-a-e-c-g-c-n+l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F9(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[20]%2 )
   {
      b += (n+j-j-l+e+m*i+h)%100;
      k -= (n-l-e+m+h*c)%100;
      b -= (c-h-f*l-l+h-k)%100;
      h += (h+h*d)%100;
      h -= (d+i*b+j-k-a+i+c*f)%100;
   }
   else
   {
      while( ++WHILEcnt[20]%5 )
      {
         do
         {
            m += (j-a-a)%100;
            for( ; ++FORcnt[28]%5 ; )
            {
               
               switch( ++SWcnt[9]%3 )
               {

               case 1:
               {
                  j += (b+g+b*b)%100;
                  b -= (e-c+j)%100;
                  a -= (n+b-e-g)%100;
                  d += (d+f+l-e-g-h-f+l+n)%100;
               }
               break;

               case 2:
               {
                  c += (c+h)%100;
                  a -= (n-e+c*k-h-n-m-i+n+f+e)%100;
                  n  = (m-c-h*g*l*k+n-d-c-a+i)%100;
                  j -= (n-i+i*j-d-a+f+a-i*f+g*h)%100;
                  i -= (f*g*i-g-g+g-m+k+d)%100;
                  m += (m-l+c-a+b-m-c-l+f-h+e*b*c)%100;
               }
               break;

               default:
               {
                  i += (c+b-m-c+a-a+c-d+l-l+k*i)%100;
                  c += (g+k)%100;
                  c += (i-j+g-c-i+b*m+h-l)%100;
                  g += (c-a+n-k+k-g*c-f*m*e)%100;
                  n += (f-m+m+n+j+f*f-l+b-l)%100;
               }
               }

               if( ++IFcnt[14]%10 )
               {
                  n -= (e+n+j-k)%100;
               }
               if( ++IFEcnt[18]%2 )
               {
                  c += (k+h+l-d-d*i-e*a-f+g+f-f)%100;
                  k += (k*h-h-a*a*a*g*a-c+l*m+e)%100;
                  k -= (c+e-m+j-b-b*c-i+n+m*a-j+b*b)%100;
                  a += (l+c-c+d-c+k+j)%100;
                  k -= (e+c*l-g+n-k-l+g+k-e-c)%100;
               }
               else
               {
                  l += (k+f)%100;
                  n += (n-e)%100;
               }
               while( ++WHILEcnt[18]%5 )
               {
                  n -= (h+f-b+g-h-m-n-j*m*c-a)%100;
                  h -= (c-j+a-m*d+d-d*e+n-m+l*h+h)%100;
                  d -= (h+l-f+e-k)%100;
                  c += (f-a+b)%100;
               }
               do
               {
                  d -= (d-n-m-a-i-m*h+g+k+k*b)%100;
                  k += (e-b+m-i+d+e+m+c)%100;
                  h -= (h-j+f-g*a)%100;
                  c += (c*e*a-i)%100;
                  n += (m-l)%100;
                  f -= (m*h*a+j)%100;
               } while( ++DOcnt[19]%5 );
            }
            for( ; ++FORcnt[30]%5 ; )
            {
               for( ; ++FORcnt[29]%5 ; )
               {
                  i -= (j-h*j+k*l+n-k)%100;
                  c += (n-f+b+i*k-m-d-c+a*c+a*j+b)%100;
                  m += (e*l+e*d-i-f-n+a*d+m-b-d)%100;
               }
               if( ++IFEcnt[19]%2 )
               {
                  k -= (m-i-n+c-g-i+m-k+d-e+i)%100;
                  f -= (a*l+n-j*k*g+d+h)%100;
                  d += (d+d+g+b+h-e-l+j-i+i-f-l-a*d)%100;
                  k += (b+i*m-m)%100;
               }
               else
               {
                  d -= (j+g-k*i-b-k+f)%100;
                  c += (a*k+l+f-f-j*e-f)%100;
                  a += (a+n*h+l+m+m+i+j-j)%100;
                  l  = (m*d+a+f+m+h-m)%100;
                  k += (m-f+l+h*j+j)%100;
               }
               while( ++WHILEcnt[19]%5 )
               {
                  c += (i-k+c+g-a-h+j*e+n-h-f+b-j)%100;
                  c -= (n+m+f+f+j+n-n-l+g*c+m+a*i+d)%100;
                  c -= (n-n+d+j-d+l+c*h+n+b)%100;
                  k  = (k+g)%100;
                  j -= (e*g)%100;
                  d -= (i+d+b-a-d+l+h+h-e)%100;
               }
               g += (l*k)%100;
               i -= (h+j*d+a+c-f)%100;
            }
         } while( ++DOcnt[18]%5 );
         c += (c*e-l-j-e+f*g-g-j+c+d)%100;
         h  = (l-n*f*n+b)%100;
         a += (d+e+d*c-l*f-e+j)%100;
         l += (b+a)%100;
      }
      e += (j*j-c*f-m+g+j+i+i-c+g*n)%100;
      i -= (f*j*h+c+e*a-h+b-b*e+e)%100;
      n  = (d-j-l+c-e+f-j-h+m+m)%100;
      l -= (i+f*f-c-f-b*f+f)%100;
      a += (j-c*l+d+h+f*k*g-i+m-n+j-g)%100;
   }
   m -= (l-k+e-h+k-e+i+d+j-e-g-b)%100;
   e += (m+d+j*f-d+b-n-c*m+e*k+j)%100;
   a -= (h*f*h*e*l-k*f+i)%100;
   d += (i-b)%100;
   e += (m-h-n*h+j-d-m+c-b-d*b+e)%100;
   n -= (d-l-d+g)%100;
   l += (k+j+n+h+e)%100;
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
         h -= (j-h+j+e+c)%100;
         for( ; ++FORcnt[33]%5 ; )
         {
            
            switch( ++SWcnt[10]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[21]%2 )
               {
                  l -= (n+m+g-a+g+g*l+g+i-k+j*j+c-d)%100;
                  e += (g*m)%100;
                  d += (l+l)%100;
                  g += (e*n+c-d-a+j*e+m-d)%100;
                  b -= (j-j+j*n*d)%100;
               }
               else
               {
                  a += (i-e)%100;
                  h += (d-a*c+n-m-m*b+a-h+c-j)%100;
                  c -= (n-j*i*k+c)%100;
               }
               while( ++WHILEcnt[21]%5 )
               {
                  k += (k+m*j+h)%100;
                  l += (i+i)%100;
                  f += (j-b-g-l+n-k-b*j+j)%100;
                  j  = (k*f)%100;
               }
               do
               {
                  m -= (c-n-a)%100;
                  h += (b-l+i*k-e-e-i*j+e)%100;
                  f += (h*m-i*j-f+h)%100;
                  h -= (j+e+h-g+b+j*d*h+k-g)%100;
                  i  = (d+k)%100;
                  d -= (m+a+m+i+k)%100;
               } while( ++DOcnt[21]%5 );
               for( ; ++FORcnt[31]%5 ; )
               {
                  k += (d+k+n+k-f-h)%100;
                  g += (f-f+l)%100;
                  b  = (g-h+j*d*n+a*k-h+f)%100;
                  d += (g*j*l-l+f*g+i+d+h-e-g-c-i*l)%100;
                  d -= (m*g)%100;
               }
               if( ++IFcnt[15]%10 )
               {
                  c += (c+g+j-f-l+j+n-h*a+f-k+b-g)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[32]%5 ; )
               {
                  c -= (a-f-i+c+l+k-l-l-a-f+k)%100;
                  e -= (b-m*k+i+m-d-f*m-l*b*e-h)%100;
                  e -= (d-k-j+a+h-a+i*f+d-j-e-b+g-b)%100;
                  k += (c-i*n+d+f*j-e-f)%100;
                  j += (e+m-b-d-a*l+j+e-d+d-k+g+d+e)%100;
               }
               if( ++IFEcnt[22]%2 )
               {
                  d -= (i+f-a+a*m-g+c-a+a-h+e*j*a+n)%100;
                  g += (l-g-c*f-g-k-j-h-k+f*k+f-d)%100;
                  i += (m-e-n-i-l-l+m-g*e)%100;
                  m -= (m*f-h+b-d*e+d-j-m)%100;
                  f -= (e+d+e+e+c+c-n*a-n-c+i-k*g-k)%100;
                  d -= (h-c+d-b+k*m+e+b+h+h)%100;
               }
               else
               {
                  l += (h-a-c-i+h+l-n+i+j*h-b+k-d)%100;
                  b -= (f*d+f)%100;
                  l  = (g+c+l+c*b-g-e-i+d+l-e)%100;
                  c += (e*n-i)%100;
               }
            }
            break;

            default:
            {
               while( ++WHILEcnt[22]%5 )
               {
                  b += (i-j)%100;
                  d += (j-j+k*d-k+k-k*g)%100;
                  m += (m+k-h+n*i+b+b*j)%100;
               }
               do
               {
                  g += (m+k*b-c-f*c-n*l-l+b-j-k-a)%100;
                  d  = (d-k-h+h-h+k+j)%100;
                  d += (d+j+f+m*j-e+i)%100;
                  e -= (h+k)%100;
                  m += (a+i-k*m-a+k*k+k)%100;
               } while( ++DOcnt[22]%5 );
               i += (f-d*d-l-g*j*l*j+k*j-g-j)%100;
               l -= (l+a*e+d*i+a-b-a+k-b)%100;
               j  = (g*n+d+e-b*c*f+l-k*j+l)%100;
            }
            }

            g -= (f-h-k-i-a-e-f-f-i)%100;
            h += (g+k-d+l)%100;
            h += (m-j)%100;
            l -= (f*k+k-l)%100;
            b -= (h+b-m-f*k)%100;
         }
         a -= (a+d*n+k+b-m+n+l*a)%100;
         l -= (a*i)%100;
      }
      l += (n+i-b)%100;
      i += (e-n+c-k+d+a)%100;
      l += (h-d)%100;
      k += (i-m+j-e-d*a+n-e*l)%100;
   } while( ++DOcnt[20]%5 );
   h -= (m-e-a-a)%100;
   i += (f*i-n+m-n-d+l-h+a*i)%100;
   l += (j+a*a+d-a-i)%100;
   m += (l*h*m-l-h)%100;
   b -= (f-i+c+n+n+l+g)%100;
   i += (b*c+g-n+j+h-g*k)%100;
   n -= (d-d-c*c-a-g+f)%100;
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
                  e -= (h+n)%100;
                  h -= (a+b*j+i+m-e)%100;
                  d += (h-k+l+i*i)%100;
                  k -= (a-a-a-h-g*b*d+n)%100;
                  k -= (e+d+f)%100;
               }
               do
               {
                  e -= (j+k+k-d+f+b*i-j+c-h+n+c+f-i)%100;
               } while( ++DOcnt[24]%5 );
               if( ++IFcnt[17]%10 )
               {
                  b  = (a-d+e+l+f*h-b-f+j-d*m+l)%100;
                  m -= (h+b+m*c+g*n+m+i*j)%100;
               }
               d += (j-h*g+k*n-g+e*f+k+m-g*a)%100;
               for( ; ++FORcnt[36]%5 ; )
               {
                  m  = (e-c-a)%100;
                  e += (j*f+d+g+b-b)%100;
                  n  = (k-j*g+m*l*i)%100;
                  i += (c-a+i)%100;
                  e += (l-b-g+e-l-l-l-e+i)%100;
               }
               
               switch( ++SWcnt[12]%4 )
               {

               case 1:
               {
                  l += (a+i-l-c)%100;
                  i  = (d-f*m)%100;
                  d -= (n-d-b-j-a+i+h-f-e+d*n*c+a+l)%100;
                  k += (l+e+d)%100;
               }
               break;

               case 2:
               {
                  a += (e-f+f-a-d)%100;
                  n += (h+f-m*j+k+f-g+n+l-d)%100;
                  e += (d+h+f+n*i-h-e-g-e-h*m-i-j)%100;
                  k  = (i+k-j+d*f+n*l-a*g+g-b+m)%100;
                  h -= (h*m-i+l*k)%100;
                  h -= (n+m+n-a+d-g-n+j-l+b-g*c)%100;
               }
               break;

               case 3:
               {
                  c += (m*a*m)%100;
                  f += (i*a)%100;
                  f += (b+b)%100;
                  l -= (h-e+i-h-a-l-j+j)%100;
                  e += (h+f+m-b-k-j-d+g*c+l+d)%100;
               }
               break;

               default:
               {
                  l  = (d*m-b)%100;
                  h += (f+m*m+k+g-j*b)%100;
                  l -= (a*l*i-g)%100;
               }
               }

            }
            else
            {
               while( ++WHILEcnt[23]%5 )
               {
                  n  = (n+e+c*c+m+h+i-h-e+j*e+i+h)%100;
                  l += (f+e-h+d+d-c+k-h-a-n)%100;
                  e -= (k-c)%100;
                  e -= (f-h*f-h*m+b)%100;
               }
               do
               {
                  k -= (m-h*e-n-m+c-h-b)%100;
                  k -= (h+n-j*d)%100;
                  h -= (e-g+k-c*i+f)%100;
                  a -= (j+e*k-g)%100;
                  m -= (f-k-k-e-d+m-d-b)%100;
                  c  = (d-a+g+b+l)%100;
               } while( ++DOcnt[23]%5 );
               for( ; ++FORcnt[34]%5 ; )
               {
                  h -= (g*d-a+e-l+d-f-f*c+g+h)%100;
                  e += (k+e-e)%100;
                  d -= (d-g+m-b*c+b-e*e-n+i+g)%100;
                  k -= (k+f+b+d+b+c+b-k*e*e-c)%100;
                  k -= (d-e-a+g+e+f*l)%100;
               }
               for( ; ++FORcnt[35]%5 ; )
               {
                  g  = (a-m+c-k*l*h+e-f*g-i)%100;
                  b -= (e+l-e*k-i*n+e*n-c)%100;
                  h -= (i-h*d+e-i+a+h+l-h)%100;
               }
               if( ++IFEcnt[23]%2 )
               {
                  n -= (a-g+h-c+d-n-b+e+j*l+i-l*a)%100;
                  n -= (a*a*n-h*n+g+b-c+i+n-n+b-a-e)%100;
                  n -= (l+f-k-h*j-i-a+g+i+h)%100;
                  b += (g-k-h)%100;
               }
               else
               {
                  j += (f-e+a-c+d*c-h-l-l+f-f+f+g*g)%100;
                  h += (j*e-f*e*a+i-a-l)%100;
                  m += (g*h*j*a+d)%100;
                  n += (c+c-c+n-a*h+h-j-m*i+i-e-i)%100;
                  g += (h*i-a*e-b*n+c)%100;
               }
            }
            l += (g-i+a+d-b-l-a+h-b-m)%100;
            k  = (h+d)%100;
            d -= (k-j*j+h-i-i+c-e-i)%100;
            k += (m+a)%100;
         }
         d -= (a*l+j-b+e-b+h+k*h+n-n)%100;
         k -= (h+j)%100;
         m += (a-m)%100;
         f -= (j-h-l-i)%100;
         k += (g+j-k)%100;
      }
      break;

      case 2:
      {
         k  = (a-l+c-f+f-a+n+m*m+n-c-n)%100;
         m += (k-n+a-h-k+f+g+d)%100;
         n += (n+m+b-a-l-g-c+l-g)%100;
         g -= (a-a-l*c-k+k+e)%100;
         g -= (i-h-m+e*m+e)%100;
      }
      break;

      case 3:
      {
         h  = (b*i-k*a+e)%100;
         j += (c*i)%100;
         l -= (l-h-j-e+i*k-b-h)%100;
         k  = (e*d-g-l)%100;
      }
      break;

      default:
      {
         d -= (j+n-i+b+f*j*i-j+k*l)%100;
         m -= (f+e+l+e-m-g-a+h+c-d*i)%100;
         k -= (i*f-h-f+i+d-d*e*b-k*g+e)%100;
         e -= (k-i-d-m)%100;
         l += (f-f-e-j+d-d+n)%100;
         h += (f+e+g+k)%100;
      }
      }

      a += (l+f)%100;
      b += (i+j+h-j*b+a+m+a)%100;
      n += (h*m+d+e-f*i-l-d)%100;
   }
   f += (g+j+i-h+l+j)%100;
   f -= (c-l-d-g-d+l*b+j+e)%100;
   f += (i*j+a-b-h*e+b+i-j+m+c)%100;
   h += (n*d*e-g+e)%100;
   h -= (n-h+d*n+i+f-b*b-i-m+k-m-c+m)%100;
   f += (e-m*h-f+c+j+e*n-k+f-c-n*j)%100;
   n -= (i-c-f-d-a*d-k+i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F12(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[26]%2 )
   {
      k += (d-h+i+f-l*k)%100;
      a += (d+g*l*k*e+g+f+g+c-g+a+n)%100;
      j  = (b-n-c+a-h-a-j+l*h-a)%100;
      i += (d-j-i+g-j-k-n-d*j*f-b)%100;
      b += (i+h+a+l-e)%100;
      b += (k+d+d+l-h+e+k+b+i+m+e-n+a)%100;
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
                  i += (c+g+g-a-d+g+m+k+c-n-c+g*l)%100;
                  h += (f*k-d+l-k-g+l*f+e)%100;
                  k  = (i-f-l*l+l*d+a*a+l)%100;
                  k += (h+k-l-b-b*k)%100;
                  g -= (l+c)%100;
               }
               for( ; ++FORcnt[38]%5 ; )
               {
                  a -= (n+e+l-i+i*h)%100;
                  c += (g+h+g+k+g-e)%100;
                  g += (c+h+j)%100;
               }
               if( ++IFEcnt[25]%2 )
               {
                  b += (n+d*b*c-g*h+b-a+e-f+m)%100;
                  a -= (b+k+c+l+e-k+c)%100;
                  e -= (m-f*g+h+j+l-l-a)%100;
                  g -= (b*e+l-b*k-l-d-n+j+k+n+l)%100;
               }
               else
               {
                  f -= (h-j+e-h+n-f+n+l-d*m+g-e*d+m)%100;
                  m += (h-m*l-e+i*m*d*f-d)%100;
                  f += (e+b+g*a-h+g*k*g+d-d+f+n+g*a)%100;
                  j -= (i+m-f-l+j-h*d-c-b)%100;
                  h -= (i-g-l+a+g+f)%100;
               }
               while( ++WHILEcnt[25]%5 )
               {
                  b -= (i-h)%100;
                  f += (c-k-m*n*g*i+i)%100;
                  l -= (f*l)%100;
                  m += (k+k-m-b*j)%100;
                  d += (k-g*h+f*g-b-n+c+k-b*g-g*i-a)%100;
                  j += (n-e-i)%100;
               }
               do
               {
                  f -= (j*f)%100;
                  a -= (g-a)%100;
                  m -= (n+b)%100;
                  i += (k-e*k+c)%100;
                  a -= (f+k)%100;
               } while( ++DOcnt[26]%5 );
               g -= (g*h-n-f-c*k+i)%100;
            }
            for( ; ++FORcnt[40]%5 ; )
            {
               
               switch( ++SWcnt[13]%3 )
               {

               case 1:
               {
                  b -= (e-m+f-m-i*n*c+g-b)%100;
                  d += (c*e+m+f+j)%100;
               }
               break;

               case 2:
               {
                  b += (m-j-n+b+g*b)%100;
                  i -= (i+m+b)%100;
                  c += (j+d)%100;
                  k += (h-h-g-e-e*l-l-c+d-n-k)%100;
                  n += (m*i*h+k*k-d-a-c+k)%100;
               }
               break;

               default:
               {
                  c += (l-h-a*e+c-b-e+l)%100;
                  d -= (d-d-l+f-b-j+h-e-g+e+m+c-k+i)%100;
                  d += (c-l*b*m*b)%100;
                  a += (n-i-i-i*i-b+e-n-l-m*c*i*m+d)%100;
               }
               }

            }
            m -= (j+m+g+g*f-i+n-e-j-l-m*d)%100;
            m -= (g-j-d-b-f+e*m+m)%100;
         } while( ++DOcnt[25]%5 );
         k -= (e*c+a+j+f-g*j*m-f+e+j+i*h*h)%100;
         a += (n+c+e+e*j*m-f+e)%100;
         n += (i-b)%100;
         j += (l+f-l-e*i-b)%100;
      }
      e += (m-e)%100;
      g -= (d*g*a+a+i)%100;
      m -= (f*f+h*h)%100;
      m -= (g-m-a+c+j+h-b*f-e*f-k)%100;
   }
   f  = (h+l+e*m*a)%100;
   i -= (i+g-b+d*d-h-d+e-g-d+f-h)%100;
   e -= (m-n+i*g-f+g+b*j-m-c)%100;
   b += (h+h+n*n+b-n*g*h*d)%100;
   f += (f-l+l-f*e*a-j+d-e-j-j)%100;
   h -= (a-k-k-e+c+a+c-j+h)%100;
   b -= (j-m-k+d-c-k+d*g+m-c+c)%100;
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
         e += (e+d)%100;
      }
      else
      {
         while( ++WHILEcnt[28]%5 )
         {
            do
            {
               for( ; ++FORcnt[41]%5 ; )
               {
                  h -= (n*a)%100;
                  c -= (d*c*k+a-l-d+c)%100;
                  j += (f*c+g+i-d+j)%100;
                  d += (j+l-i-l+m+d+f-h-l+a-h)%100;
                  h += (a+g+m-n+a+k-c-n+c*b*g+e)%100;
                  c  = (k*m+k-m+m-j-d-f*k)%100;
               }
               for( ; ++FORcnt[42]%5 ; )
               {
                  g += (j+n-m+g-e+b+h-a)%100;
                  k += (b-c-b+c-d+f-j-m*m-c+h-b)%100;
                  l -= (i-f*k-g+b+n+b-f-b+a+d-b+g)%100;
                  f -= (b+g-k-d+g+j+b-k)%100;
                  i += (j-d+n+h-a+a+h+h-g-c+k-m*c+f)%100;
               }
               if( ++IFEcnt[27]%2 )
               {
                  a -= (k+a+h-n*k-d+k+a+l+n-d+j-d-k)%100;
                  m -= (b+n+c+e+m-l+a+j*e-m)%100;
                  h += (h*l+k)%100;
                  e += (n+c*e+k+m*h-m*j+c*g-e+j-d)%100;
               }
               else
               {
                  g += (h-d+l+k-l*j*d+h-i+i+d+g*a*h)%100;
                  c += (a*j*g+l+a*f-c+d*b)%100;
                  d -= (h+l*g+e*c-h-i-a+a-j-i*i-k)%100;
                  d -= (m-m)%100;
                  d += (n-h-g*c*b*b-n+b-i)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  i += (k+a-g-e-a+e+n+d+a+m-l-n*m)%100;
                  h += (l+k)%100;
                  c  = (n+a*g+n-a*f-j+f+e-c+g*f)%100;
                  c -= (j*c+k+e-k*m)%100;
                  d  = (i+h*k+j-c-e-g*g+f-b+b-h*a)%100;
                  c += (i*l-f-i*k-m-d-g+l*b+m+n+a)%100;
               }
            } while( ++DOcnt[27]%5 );
            do
            {
               if( ++IFcnt[20]%10 )
               {
                  b += (k*h+j-g+g+b+a)%100;
                  m  = (i+k)%100;
                  f -= (g*c+k+n-k+i-n)%100;
               }
               l -= (c-d-i+n+l+b+h)%100;
               for( ; ++FORcnt[43]%5 ; )
               {
                  g += (b-h+e-g*a-l*e+i-n+c+a)%100;
                  c  = (f+g+m-l*b-k+b+a-f-f-e)%100;
                  m -= (i*j+i*g)%100;
                  h += (m+c*h)%100;
                  n += (h+c-e*e+l*b+g*h+i*d+n)%100;
               }
               
               switch( ++SWcnt[14]%3 )
               {

               case 1:
               {
                  i  = (f+l*m+i*d-g+i+k+m-k*e+j*g-i)%100;
                  b -= (n*k-n-g+a+l*h)%100;
                  i -= (h*k*h-e-j+h-m+i-f)%100;
                  i  = (e*j+m-g-k+b)%100;
               }
               break;

               case 2:
               {
                  g -= (d-i)%100;
                  d -= (c+j+b-l+b-d+k+h-d+b)%100;
                  m += (a*h*f*n+h-f-b-c*e+k+b-k*f)%100;
                  c += (i-a*e+j-i+c-h+f*g)%100;
                  h += (g-j+k*i)%100;
                  b += (m-d)%100;
               }
               break;

               default:
               {
                  m += (i+b+f+h+m-i+k+m-b)%100;
                  b -= (l*i+k+g+a-i*i)%100;
                  e -= (g*f+a+j+l+g+h)%100;
                  e -= (g+l*m*d*d-n+l-b-a+h)%100;
                  i += (c-a*h-n-j+i*n+n-e-d+a-a-d)%100;
               }
               }

               g  = (n-l-c+d+f*h+g-b*i+d+l)%100;
            } while( ++DOcnt[28]%5 );
            b -= (g-l-g-c)%100;
            l += (j-b-n+n-f-i*l*k-g)%100;
            h += (e+e-k-c+j-b*e+j+e+i-n-l)%100;
         }
         c -= (d-n+j-f-c*l+h-a-g*a-l-i+g*a)%100;
         k  = (n-n+n+b-a-h)%100;
      }
      i -= (e*k+b-e-h+b*n+b+h)%100;
      l -= (h+f+l-i-d-h+f-h*i*d+g)%100;
      b += (k+k)%100;
      d += (a-i+d)%100;
   }
   f += (i+e)%100;
   f += (g+m+d+c*h+h-j-d-m-e)%100;
   m -= (f-d+a-h+c-f*f+m+h+m-j-m)%100;
   f += (n+f-e+i-f*k-a-d+b*g-g*a)%100;
   a -= (e-i-h)%100;
   i  = (f-i+g*e*k-c)%100;
   i -= (a+j-j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F14(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[31]%2 )
   {
      a += (a+l*g+f+b*m)%100;
      i  = (n+m-c+f+h+c)%100;
      b -= (g+f+b-c-i)%100;
      l  = (m+f-g*h+j*j+l+b+b+k-g-g+h)%100;
      k -= (i-g*b)%100;
      j -= (a+l-h+j*k+j-n+a*a-i+i)%100;
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
                  k += (h+c*c*n+k)%100;
                  d += (l-b*n+c+j-n+j-c-l-m+l+j+l+n)%100;
                  m += (i-l*l+h*e*j+d-f)%100;
                  d -= (k-e-k)%100;
                  c += (h-e-g-n*a-n-d+c*b*b*e*g-e+j)%100;
               }
               for( ; ++FORcnt[44]%5 ; )
               {
                  a -= (i*d+h+m-c+k*h+m+f)%100;
                  c -= (b-d+b-b-b-c)%100;
                  e -= (n-a-l-e-b*l+e)%100;
               }
               if( ++IFEcnt[29]%2 )
               {
                  j -= (f+g-m)%100;
                  c += (f+b-l-d+e-j)%100;
                  m -= (e-l+a-h+m-m+b-b+h+e)%100;
                  e += (f+b-d+d-i-c+f+h+h-e-k)%100;
               }
               else
               {
                  f -= (f*d)%100;
                  l += (f+h*d+g-j+j+m-f+a+j)%100;
                  n += (d-a-j-l+f*k*i+g+e+g-e+g+l)%100;
                  a -= (j+k-l-e+h*b+e-c-e)%100;
                  j -= (d-b)%100;
               }
               while( ++WHILEcnt[29]%5 )
               {
                  h -= (d-h-h-m+b+g-j*k+d)%100;
                  f -= (d+j)%100;
                  l -= (n+a-n+a+g+f*g-e-m+j-a-d)%100;
                  m -= (f-m-e+h-j+n-h+g-g+d*g+f-j)%100;
                  a += (j*a)%100;
                  f += (c-l-e+n-j+m*l+c+i-m-d)%100;
               }
               do
               {
                  a -= (e-n)%100;
                  e -= (k-f-c-g+j+g-g*a+g)%100;
                  k -= (b-a-l*g+i-c*b+d*a-m+g-d)%100;
                  a += (a+e-c+h-m-f+h*h+m+e+a)%100;
                  g  = (f+f)%100;
               } while( ++DOcnt[30]%5 );
               f -= (i*e)%100;
            }
            for( ; ++FORcnt[46]%5 ; )
            {
               
               switch( ++SWcnt[15]%3 )
               {

               case 1:
               {
                  g += (j+b+e*b+j+c)%100;
                  j -= (j+m+k-j*n+m-b+d-h-d*f+e)%100;
                  c += (c+i+g*i*d+a+b+f+h-m+j-i)%100;
                  i -= (e*e-n-d-j-f-j-h*a-n*c+d+f)%100;
               }
               break;

               case 2:
               {
                  j += (b+e+g-c+g+m*l+k)%100;
                  e += (b+b*e+e)%100;
                  m -= (g+h*i*i*i)%100;
                  c += (n*j-b-h-d*a)%100;
                  b += (a*b)%100;
                  i += (l-g+k-j-d+a-j-c-g+j+m+b-e)%100;
               }
               break;

               default:
               {
                  d -= (d+g-g+k-c+a*n+m)%100;
                  g -= (n-d-n-b*f-a-h+g)%100;
                  k -= (k*h+i-n-n)%100;
                  l -= (k*h+n+h+g+g+f*j*a+i)%100;
                  a  = (c-e-c-e*a+h-e+l+h+c+m-e+m)%100;
               }
               }

               if( ++IFcnt[23]%10 )
               {
                  a -= (n-j)%100;
                  j -= (a-i*g-j+e+l-h-k*g-n)%100;
                  e  = (a-d+i-e-j+f+g-b+e+e+f-i)%100;
               }
               if( ++IFEcnt[30]%2 )
               {
                  a -= (g+a-g-n+e+a-k+n-k-d-g-c)%100;
                  e -= (l-n+b-c-d+i+n-b+l+h)%100;
                  i += (k*g)%100;
                  j += (f-c)%100;
               }
               else
               {
                  e -= (c+e)%100;
                  a += (k+d-g-i)%100;
                  l  = (d+m+g+c*e-f+j+l*e)%100;
                  j -= (b-n+j)%100;
                  k -= (e+l+c+n*j)%100;
               }
               d += (m+h+e-h*g)%100;
               j -= (j-c*j+g*b+i*e*n-j+a)%100;
            }
            a += (d*m-h+b-l-c-d-f+d)%100;
            l -= (l+c-d*k+d-n-b+a+b+e*m+e-i-c)%100;
         } while( ++DOcnt[29]%5 );
         n += (j+i-e-m)%100;
         d += (k+d-h-l-f+m)%100;
         h += (l+c+m+f)%100;
         j -= (j+m-k-h)%100;
      }
      g -= (j-b-f*k*j+i-c)%100;
   }
   m -= (d*a+g*a-c+h+l+l)%100;
   e += (k*g-j)%100;
   c -= (n+i-j)%100;
   g += (m-a)%100;
   m += (d*k-b*h+l*k*h*m)%100;
   c -= (l-j*j-i)%100;
   l -= (n+n-l+h+j-m-i-b-k+i+k+k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F15(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[33]%5 )
   {
      do
      {
         for( ; ++FORcnt[49]%5 ; )
         {
            for( ; ++FORcnt[47]%5 ; )
            {
               if( ++IFEcnt[32]%2 )
               {
                  n -= (k*l+g+j-f+e-h-h-f-l+k*k-d+a)%100;
                  j -= (f*h-k+n+f-j-h)%100;
                  n += (k-f-n-f+i-e+b+a-n)%100;
                  b  = (j+i+a-a*c-k+a-b-c*n*i-f*j*h)%100;
                  e += (h-h+j*k)%100;
                  h += (a-f*j)%100;
               }
               else
               {
                  c -= (n+n-a-b-b-c+d-j-d*i-l-h*g)%100;
                  c  = (h+e+k-n-c*h-c*n+e)%100;
                  j -= (a+c-m-c-l-b-b-e+k*f*e+e-b)%100;
                  m += (b*h*j-d-f-j+l-m+b*j+k)%100;
               }
               while( ++WHILEcnt[31]%5 )
               {
                  b -= (e+j-i*n-j-i+h-m*n+i*e)%100;
                  k -= (l-g-d*e+d-k-b+e+c-n)%100;
                  i += (g*f+n)%100;
                  n -= (b+d)%100;
                  f += (a+k-n+b*f+i+m-c-d)%100;
               }
               do
               {
                  a += (d+m-c+f-g)%100;
                  m += (h-a+j)%100;
                  j += (h+g+a-g+c+m+l-k+k-n)%100;
               } while( ++DOcnt[32]%5 );
               if( ++IFcnt[24]%10 )
               {
                  b -= (n-n+l+d+m-a+c+f-f+m*m)%100;
                  d += (d*l-l+m-j+h*f+i+l-k-h)%100;
                  d += (a-m+c)%100;
                  j += (e+g-l+l+m-j+i+d+g-l*g+l)%100;
                  g -= (n-b+f+h-d+d-f+g)%100;
               }
               n -= (g-c+d-g-c-j-i-f-i+b+k+n+f-n)%100;
            }
            for( ; ++FORcnt[48]%5 ; )
            {
               
               switch( ++SWcnt[16]%3 )
               {

               case 1:
               {
                  h -= (n*k*h+d+k)%100;
                  g  = (e-j-l-c-h+c-g-i)%100;
                  g -= (b-i+b+l-g*h-n-k+k+f)%100;
                  e += (g+m)%100;
                  l += (k+a-j-d+h*e*a*l-e+f+n-j+m*n)%100;
                  k -= (i+f)%100;
               }
               break;

               case 2:
               {
                  d -= (f-h-d*f-f-k)%100;
                  n -= (f+l-m-b+b+n-h-l)%100;
                  b -= (k-d)%100;
                  f  = (m-j)%100;
                  b += (i-m)%100;
               }
               break;

               default:
               {
                  g  = (g+g+e-i+m-k-l+l-c)%100;
                  n -= (l-e+l-n+l+g-l+m-l)%100;
                  f -= (i+e-l)%100;
                  j  = (f+j*h-l+a+d-k*e*g-e-n-a-j+k)%100;
                  n -= (h+b*d+f+m)%100;
               }
               }

               if( ++IFEcnt[33]%2 )
               {
                  l -= (f+n-e)%100;
                  n += (k-f)%100;
                  b -= (a+c-f*g+k+d+a)%100;
                  k -= (l-j-i+m-f*a-a+i-d-a)%100;
                  l -= (j+i+h-i-h)%100;
                  h += (g*d-n+h)%100;
               }
               else
               {
                  n += (b-i)%100;
                  i += (i+l-l+i+c*i-e*f)%100;
                  e -= (e-e+c+i+j)%100;
                  a += (n-d+n-c*l+h-h+a-c-h+l*k*b-a)%100;
               }
               while( ++WHILEcnt[32]%5 )
               {
                  l  = (c-i-n*k+a)%100;
                  k -= (j-e-l*m+d)%100;
                  j += (m-a)%100;
                  i += (n+f-l+b+g-j*l-j-n*n-k)%100;
                  a += (i*n+a+e-n*a+g+b-n)%100;
               }
               d  = (a-h*j*k*j*c-k-k+k-e)%100;
            }
         }
      } while( ++DOcnt[31]%5 );
      l += (e+a-e+f+f+f)%100;
      e += (h+b+f*f-a-b+d)%100;
      j += (m-c+k-c-a*k+b*l+n+e)%100;
      l -= (f-n-a+h-g*j-m+i*i*f-m)%100;
   }
   k += (n*c+f+c+l-h-d-g+a+e)%100;
   c += (m*k*d-e-i*d*k+k)%100;
   e += (h+a*e*m+n*k*f-l+g+h-j+k+m*e)%100;
   g += (k-h*b*j)%100;
   l += (m+b*h+j-g*c*h-g+m+b+m)%100;
   a -= (e*h-a*n+l*l)%100;
   m += (k+a-c+f-k-g-i+j*m+a-e+d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F16(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      for( ; ++FORcnt[53]%5 ; )
      {
         if( ++IFcnt[26]%10 )
         {
            for( ; ++FORcnt[51]%5 ; )
            {
               if( ++IFEcnt[34]%2 )
               {
                  g -= (h*j*b-b)%100;
               }
               else
               {
                  f += (e*b-m+b+a*a)%100;
                  h -= (h-n+m-l-f+h*k-k-g+g+a-g-c+i)%100;
                  g  = (b+f-i+j+k-f)%100;
                  c -= (n*e-h*e-c*l-g-i-a+d)%100;
                  g -= (n+b-d+n-m*f+d+h-k*h-n+e-k-b)%100;
               }
               while( ++WHILEcnt[34]%5 )
               {
                  b  = (a-b+i*a-m-i-j+l)%100;
                  b += (m*a)%100;
               }
               do
               {
                  c += (a*f+b+k+j+e-m)%100;
                  d += (c+c-m*i-h*g-l-m+l-k)%100;
                  h += (b-l-e-f+e-m)%100;
                  b -= (a-a*j*n-b+f*c*g-m-a+a*g*e)%100;
                  m -= (b-a)%100;
               } while( ++DOcnt[34]%5 );
               d  = (g-l-j-k+j*g-i*j-g+l-i)%100;
               for( ; ++FORcnt[50]%5 ; )
               {
                  k -= (e+c*c*e-a*j+a+h)%100;
                  j += (b-d)%100;
                  b += (a-f-h+g+g*g*l)%100;
                  c -= (c-j*m*g-h+a-k-k+a*d-f)%100;
               }
               
               switch( ++SWcnt[17]%3 )
               {

               case 1:
               {
                  l -= (n+a-a-a+k-j+a-m+j+a+c-e-d-l)%100;
                  m -= (b+d-k*c+m)%100;
                  a += (b+l-m+a+k+g+i+m-f)%100;
                  k -= (d+g-n-a+g-f+e-a+d)%100;
                  d += (a-a+d+a+a-c+d-b*i)%100;
                  b -= (f-b-d*d-m*i+m)%100;
               }
               break;

               case 2:
               {
                  a -= (d-m)%100;
                  d += (a-d-e*b)%100;
                  k += (b*f-k+h+h-f+c*i-d+i+k)%100;
                  f -= (l-j+h-l+m)%100;
                  d -= (n*m)%100;
               }
               break;

               default:
               {
                  n += (k+c*f)%100;
                  d += (a*j)%100;
                  k -= (a+i+n+g-i-e-d+h)%100;
               }
               }

            }
            if( ++IFcnt[25]%10 )
            {
               if( ++IFEcnt[35]%2 )
               {
                  f += (n-e+m-b+l*a-g-c-n+h-g)%100;
                  c -= (c-j+d+m-n-a+c-d+d-l-i+l+i*h)%100;
                  g += (h+j-j)%100;
                  d -= (f+b-e)%100;
                  e -= (c*g*h-f-g*k-e)%100;
                  c -= (l*m*j+f+j+j)%100;
               }
               else
               {
                  k -= (n*j+i+d)%100;
                  g += (m+a+f-j+j)%100;
                  f += (e*i)%100;
                  f -= (d*f)%100;
               }
               while( ++WHILEcnt[35]%5 )
               {
                  n -= (n-m-n*j-f)%100;
                  c  = (d+f)%100;
                  l += (d*c-e-l+b*g+m+l*l+h+d-j)%100;
                  d  = (i-c-c-m-m-d+l+l-b-b*e*n)%100;
                  b -= (h-c-f+f-l*g*a*j-g+f*j)%100;
               }
               do
               {
                  b  = (n+k-l+l+h+e+j-l)%100;
                  b += (d-e+a)%100;
                  c += (n*n)%100;
                  k -= (m+k+d-e*c-j*m-n*i*b+h*m-c)%100;
                  e -= (g-n+l-b-g-c+l)%100;
               } while( ++DOcnt[35]%5 );
               for( ; ++FORcnt[52]%5 ; )
               {
                  d -= (f*a+e+h-h-a+b*a-i*f)%100;
                  f += (f+h)%100;
                  i -= (d+n*j*j+f+f*d+j)%100;
                  g += (f+c-g*m+a-g+j)%100;
               }
               g -= (m+i-c+l*h)%100;
            }
            i += (g*c+d)%100;
            c -= (l-f*h+d-b+l+c-k)%100;
         }
         f -= (e-g+f)%100;
         f -= (f-j-m-l+i-j-h*g*j*l-n)%100;
         m -= (l+j-n-l+f-f-c+a*f+n+f+a)%100;
         a += (a-n+h*j*k+a+b-j-d-j)%100;
      }
      k += (m-m-i-c)%100;
      l -= (f*l-g-e+e*f+j-e-c+m+i-h-e)%100;
   } while( ++DOcnt[33]%5 );
   c -= (i*k-f)%100;
   h  = (l*e-a+l+f)%100;
   c -= (n-e*b+c-i+g*a*c+b-b-c+e+b)%100;
   e += (c*n-k-k*h+j+d*c-c)%100;
   i += (e-f+e+m+l-j-f+n-c+i*a-j*k)%100;
   a += (b+i-b-e*i+l*e-m-e+h+i+n+b-m)%100;
   k  = (j+h-g-b+j+c+i+e-i*n+f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F17(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[57]%5 ; )
   {
      if( ++IFEcnt[38]%2 )
      {
         b -= (e+b*g-e)%100;
         e -= (f-l-d-f-g)%100;
         n += (e*f-n)%100;
         n += (k+a-f+l+m-k)%100;
         l += (g+f-m+f-m+l+a-j+l+h+g-m*h+e)%100;
      }
      else
      {
         while( ++WHILEcnt[37]%5 )
         {
            do
            {
               if( ++IFcnt[27]%10 )
               {
                  g += (h-j-j)%100;
                  l += (d+b+d+f+e)%100;
                  n += (f-e-h+e*a)%100;
                  f += (i+d-g-i+n-f-e*c*i+h+c-j)%100;
               }
               n += (c+g+h-i+e+l*e-n)%100;
               for( ; ++FORcnt[54]%5 ; )
               {
                  a += (m+k-g+n*l-l+g+m*m-j+m+k*f)%100;
                  k += (h-f+c-a+b)%100;
                  g += (c*h-m*l*c+c)%100;
                  k -= (k*a+c-a-b-h-l-b+e*e-d+c)%100;
                  n -= (a+h+f-j+j-n+d-n)%100;
                  k += (h-b-g+m-j+e)%100;
               }
               
               switch( ++SWcnt[18]%3 )
               {

               case 1:
               {
                  a += (d+i-n*f)%100;
                  l  = (h*h+g-b+m+f-c+d+i-f+n*f)%100;
                  l += (d-n*f-h-a-c+e+h-e+i*b-n-f)%100;
                  k += (f-c)%100;
                  l -= (f+c-g+n)%100;
               }
               break;

               case 2:
               {
                  c += (n-n-a*i*f+f-i-h+m+c+c-n)%100;
               }
               break;

               default:
               {
                  c -= (i*n+j+m*l+i*c*i-e+d*a-d)%100;
                  f -= (f-j+m-g+b+i-d*h-k*n+c*m+m)%100;
               }
               }

               if( ++IFEcnt[36]%2 )
               {
                  j += (k+d-n-i-d+d-e+n*f+l*i+n)%100;
                  e += (d-e+n+e+g-j+g*i+l+n-g*c)%100;
                  i += (d+h*a-j+k+j+g-g-n)%100;
                  b += (b*j)%100;
               }
               else
               {
                  e -= (l*j+c*h-j-b-j-b-i*i+l*e*k)%100;
                  f += (c+b-b-k+f+h-g*d)%100;
                  m -= (h+i-e+g*k)%100;
                  e -= (g-g-n*m-i-n+e-g*b-f+m*f*m-i)%100;
                  j += (d+j)%100;
               }
            } while( ++DOcnt[36]%5 );
            while( ++WHILEcnt[36]%5 )
            {
               do
               {
                  d -= (m-h-j+l+k+a+c-n-g*e-l*c+c)%100;
                  i += (j-g-j-f*n-b-h+a)%100;
                  c += (f*j-a-e-a-j-f)%100;
                  a -= (c+g-n-h-f-f+f-c+a*j-n)%100;
                  c -= (k+e-d+c+k+n+a*c-k)%100;
               } while( ++DOcnt[37]%5 );
               for( ; ++FORcnt[55]%5 ; )
               {
                  k  = (j-e+l-m-n*j-d+b-l+j-n)%100;
                  c -= (n+k-m-k+i-n+m+g+a-k-b-g)%100;
                  l -= (k+f)%100;
               }
               if( ++IFcnt[28]%10 )
               {
                  a -= (n+c-n*j+d+d*j+h+f)%100;
                  d += (k+b-j*n+j+c-l+c+l+h)%100;
                  a -= (d+k-e-m-i+e)%100;
                  h  = (n-e-e+e-b*m+e*a)%100;
                  b -= (g-k-b-b-c*j-j)%100;
               }
               for( ; ++FORcnt[56]%5 ; )
               {
                  l += (e-g-e+b-g-g-b)%100;
                  b += (f-h*c+l-g)%100;
                  k  = (g-h-h+g)%100;
                  h -= (j-m-j-c-h*k+c*g+a-b+g+j)%100;
               }
               if( ++IFEcnt[37]%2 )
               {
                  n -= (i-g+k-f*a)%100;
                  n += (a+m*j+n+a-l*m-a)%100;
                  n -= (b-n*m+k-f+i-n-m-b*d-b+b-j-f)%100;
                  n -= (a*b+e-m+i*e*e*l-f+f-g)%100;
                  l -= (b*a+j*m)%100;
               }
               else
               {
                  n -= (c+f+c-h+c)%100;
                  h += (k+m-g*d+i*i+b+k)%100;
                  h += (l*m+i+b-d*n-b+l-c)%100;
                  c -= (d*f-f+g*f*k-e*a-c)%100;
                  l += (n*g*l*k-g)%100;
                  d += (k+l+l+e+a*a-h+f+m)%100;
               }
               h += (j+i-m-d-k+g+l-j-d+k*c-k-h)%100;
            }
            f  = (c-i+n*l+n-h-h-j+m+c-k-g+c-e)%100;
         }
         n -= (c-e-a-b)%100;
         k += (h-m+e+i*f*k-k+c-e*f-j-k*j-g)%100;
         d -= (i*h+c-g+a*a-n+b*c+h+j-i)%100;
         l -= (k+i*e-a+a-i+a-k-c*f)%100;
      }
      h  = (k+k+g+g*i-m+m-e*k*i-g+n-n)%100;
      j -= (e*h+a*n+k-b*f-m+m)%100;
      k  = (h*h-e-k+e*c+d-n*m+d-e)%100;
      h  = (f-i-e+h+k+h+n+k+g)%100;
      f -= (n*h-b*m+b-g-e-j-j-l)%100;
   }
   h -= (j+f-d+h*f)%100;
   n -= (l+e-b)%100;
   e -= (e+k+b*h-l)%100;
   a += (b*g*h+l*b-h-n+k-g+b-k-c)%100;
   f += (c+l+d-i+g-j-g+l)%100;
   m  = (m*m+a*f+j*l-d+a+h+k-n+d)%100;
   f -= (n-d+l*k+m)%100;
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
         c -= (j+h+n-j+b+e*l)%100;
         for( ; ++FORcnt[60]%5 ; )
         {
            
            switch( ++SWcnt[19]%3 )
            {

            case 1:
            {
               if( ++IFcnt[29]%10 )
               {
                  e -= (e+j*h+a+e+a+k+n-g-l+f-b+f+n)%100;
                  a += (k*b+i+b*h-g-c)%100;
                  i -= (b*l+l-a-k+l+f)%100;
                  c += (e-c*c-e-e+n-e)%100;
                  h -= (k-g-d+b*c+k+d+g*d)%100;
               }
               if( ++IFEcnt[39]%2 )
               {
                  l += (i-f)%100;
                  b += (g*a)%100;
                  k -= (k-k+j*l+d+f)%100;
                  h += (a*f)%100;
                  k -= (j+m+j-j+n-k+l+f*m*f+b)%100;
                  d  = (b-m+f+b-n*n-b*f*e*j-l-m-h*c)%100;
               }
               else
               {
                  b += (c-k+l)%100;
                  n -= (e-a+b)%100;
                  d -= (c*l+f)%100;
                  g += (m+c+l*h+j+b+n*c+h-g+e+m+e+a)%100;
               }
               while( ++WHILEcnt[38]%5 )
               {
                  d -= (g-m-e)%100;
                  e -= (n*l+j-j+c-d+j*h*d+e+m*d)%100;
                  k -= (h+m-g*f*c+e-h-e)%100;
                  c -= (k-h+n+j-l+n)%100;
                  h -= (c+l+c*l+c+c-c-k*m-e*b*f)%100;
               }
            }
            break;

            case 2:
            {
               do
               {
                  l  = (k+h)%100;
                  e -= (b-l+g+b+j)%100;
               } while( ++DOcnt[39]%5 );
            }
            break;

            default:
            {
               for( ; ++FORcnt[58]%5 ; )
               {
                  b += (e-h+f+j+b+g-e-k+h+i-l)%100;
                  a -= (k+j)%100;
                  e  = (c*f+f+g*f-j*m*n*m+a-a)%100;
                  i -= (k*a-b*h)%100;
               }
               for( ; ++FORcnt[59]%5 ; )
               {
                  h  = (a-b)%100;
                  l -= (m+m*d*m*j-b-m+g+c+k*a)%100;
                  g -= (c-i+f*i+c-i-g)%100;
                  f += (e+f+c-l)%100;
                  d -= (i-m+g+n+j-m+m+k*j)%100;
                  j -= (i+f*e)%100;
               }
               if( ++IFEcnt[40]%2 )
               {
                  l += (h-f+e*a-b+l+n+h+g-i+m)%100;
                  e -= (m+c-a-g*n-k+k+g+h+k+l)%100;
                  e += (g-e)%100;
               }
               else
               {
                  f += (b-b-j+f*l-i+l)%100;
                  k -= (i+k-e-e-k+d-c+h-e*g-m-k-j+h)%100;
                  l += (l+j+d-i+n-i*d*j+c-g)%100;
                  i  = (l*d*l-k+i*i+n*d+c*j*g-k-h)%100;
                  g += (b-e+d+j*i-j-j+g+g+j-j)%100;
               }
               while( ++WHILEcnt[39]%5 )
               {
                  d -= (j-n+c)%100;
                  g += (l*b*c-k*h*j-n)%100;
                  a += (m+n-j+k*d*k+a*h-c+b)%100;
                  f -= (d*b)%100;
                  n += (e-e+h-f+a+n+k)%100;
               }
               do
               {
                  m += (i+h+j-h*a-i*h+m*b*b-a+h+l)%100;
                  l += (i+a+i-j+h+k+d*b-j)%100;
                  i  = (m*a*j+g-d-n)%100;
                  e += (i-l*k-k*j+e)%100;
               } while( ++DOcnt[40]%5 );
            }
            }

            if( ++IFcnt[30]%10 )
            {
               j -= (i*g+j)%100;
               f -= (j-e+f+b*f*b*k+g)%100;
               e -= (c+m+e)%100;
               l += (c-c+f+f-b*m*m+n+c+c+e*b*n)%100;
               k += (g*l)%100;
               h += (e+k-b+g)%100;
            }
            f += (k-j+n+f)%100;
            g -= (a+f-g+f*g+e+l-a-g*b-d*b-a)%100;
            j  = (k*g*n-k+b-a-m+b+g)%100;
         }
         g += (a+d-d-k-m-b+l*d*g-e-c*l+m*f)%100;
         i -= (i-b)%100;
         k -= (b+b-i*n-k-j-j)%100;
         k -= (h+i+c+f+i*f-g+c+f*n*n-f*m+l)%100;
      } while( ++DOcnt[38]%5 );
      c  = (i+a+g+i*e-i-g+d+e-j-e-k-m)%100;
      a += (l-c+h+k-g-n-j-d-n+j)%100;
      h -= (f-e-c-k+a-b+i*b-l*i*b*h-e*d)%100;
   }
   k -= (e-c*e+h*h-m*l*c)%100;
   a -= (n*e*j+d+j+i+i*a)%100;
   k  = (k-h-b+j*a*f+h*i-g+l*d)%100;
   f  = (d+l-f-e-b)%100;
   e -= (f*i-e*n-d*l-c-k)%100;
   a -= (d-l-m+l*f)%100;
   a -= (m-i+d-f+b+c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F19(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[20]%4 )
   {

   case 1:
   {
      for( ; ++FORcnt[64]%5 ; )
      {
         c -= (k*i*m*h-k*g+f+g*h-c*n)%100;
         if( ++IFEcnt[43]%2 )
         {
            i += (i+j+f*h-e+k)%100;
            h += (h*k+l+m+i+e+a*i+f)%100;
            i += (h-a-g*h+j*g-a)%100;
            m += (a+l-a-m+g-i+f+j+g-j-g)%100;
            j += (a+m+j-j-j+c)%100;
         }
         else
         {
            while( ++WHILEcnt[42]%5 )
            {
               do
               {
                  f += (c*f)%100;
                  j += (d+m+i*i-n-c*a-g-e)%100;
                  i += (f+l-e*l+k-b+i+c-j*n+i)%100;
                  c -= (m+b+h-e+j+c-b+a*f-b)%100;
                  i -= (b+l*c-l+n-d-b-n+h+f)%100;
               } while( ++DOcnt[41]%5 );
               for( ; ++FORcnt[61]%5 ; )
               {
                  d -= (l+b+j-b+h+k+h+b*j-i)%100;
                  c -= (f-a*a-g)%100;
                  l -= (k+k)%100;
               }
               if( ++IFcnt[31]%10 )
               {
                  a -= (k-l+a+j+h-d+d+d*c+g-a-a)%100;
                  m += (k-f-h-a)%100;
                  f  = (m-n+g+c+e+g+f-h-k*k)%100;
                  c  = (l+m)%100;
                  c -= (d-k-m)%100;
               }
               for( ; ++FORcnt[62]%5 ; )
               {
                  c -= (l-h+e)%100;
                  h += (h+n+n)%100;
                  n -= (l+k*k*j+c*n)%100;
                  e += (f*e)%100;
               }
               if( ++IFEcnt[41]%2 )
               {
                  b -= (c+k+l*a+a+i-f-l-b-h+b)%100;
                  d -= (a*k*f+a-n-c-d-m)%100;
                  m -= (m-k-a-i-i*n*j-g-j-f*n*f)%100;
                  c += (b+c+i)%100;
                  d += (k-m*j-d-i+m+l+c*g)%100;
               }
               else
               {
                  f -= (l+b-c-b-l+b+m+l+g-b+g+e+j)%100;
                  d += (d+m+c*h*f-f+n*g-l-k+a-h)%100;
                  g -= (e-f+i-j*g)%100;
                  a += (k+d)%100;
                  j += (k+j-i+g-k*h-a-m+d-d*k+m)%100;
                  n -= (i-m*f+e*n*h)%100;
               }
               while( ++WHILEcnt[41]%5 )
               {
                  e += (k-i+c+j+b)%100;
               }
            }
            do
            {
               i -= (n+k)%100;
               for( ; ++FORcnt[63]%5 ; )
               {
                  b  = (f+a-l*b+n+a+a)%100;
                  h += (j+e-l+i+c+g+j+i)%100;
                  d -= (g-n-i-j+m*j-c-h+l+a*b*a)%100;
                  l += (l+m+b*l-l-c)%100;
                  m += (c+e)%100;
               }
            } while( ++DOcnt[42]%5 );
            
            switch( ++SWcnt[21]%4 )
            {

            case 1:
            {
               if( ++IFcnt[32]%10 )
               {
                  f += (i*n-d*h-d)%100;
                  e -= (l+g+b-m+c+l+i-h+e+h-l)%100;
                  c += (b+c-e-j-a*m-j)%100;
                  e -= (k*j-b-c+h+j+k*f+n*c*e+e-a-c)%100;
                  j += (a+n-h-l-n-m*k*b*e+b+d-j)%100;
                  e -= (g-n-g)%100;
               }
               if( ++IFEcnt[42]%2 )
               {
                  j  = (l+b-j*l)%100;
                  j -= (i-c-j-c-j-i-j+c+k*h)%100;
                  k += (f-f+h-b*e+i*d*a+m-f-g-k)%100;
               }
               else
               {
                  h += (k*l*h+m-n-i*e-n-j+e*f-k)%100;
                  b -= (g+i-l*g+k*j)%100;
                  d += (d*d+c)%100;
                  n  = (l-a-g*n*n-k+k)%100;
                  n += (l*g-d+h+a-f+g+c-j+i+j)%100;
               }
               j -= (i*g+c*l-n-a-i-i+g-f+g+f-m)%100;
               i += (d-b)%100;
            }
            break;

            case 2:
            {
               g  = (n+c*a-d*e+c+m)%100;
               k  = (k+a*i-e-m)%100;
               f += (h+h)%100;
               g -= (k+k+k-b-i-j+h*a-k+a)%100;
               g += (e-f+c+l-e+b-a+i+k-b+l)%100;
            }
            break;

            case 3:
            {
               l += (m+g-n+l-k-e+d-n+h+f+g)%100;
               h += (e+h)%100;
               k += (k*j*i+a+m+c+h)%100;
               g -= (f-m+l+c+h+i-d+n+d-e-m+g-d)%100;
            }
            break;

            default:
            {
               f += (b-k+n*i+g-g-d)%100;
               e -= (n-d-f+f*j+a-b+m*a*a+k)%100;
               b += (g+m-e)%100;
               f -= (k+h)%100;
               c += (i-j+j-h+e+l-i+n+n-i+b+n*a+l)%100;
               j += (m+c*n)%100;
            }
            }

            i += (h-e+b*a+l+g*f+n+b)%100;
         }
         h += (l*j-f+k+n-a+k)%100;
         l -= (b+m*m+f-a-i+m-g+a*i)%100;
         n += (f-k+a+i+e+b-g-e-e-b+g-d)%100;
      }
      m += (e+n)%100;
      b += (m+j*k*m-d-f+e*f)%100;
      c -= (n-b)%100;
      n += (l-g*e-a-j+f+b*d+k+e+c*d+d+g)%100;
   }
   break;

   case 2:
   {
      c += (m+f+a-i+a*g*d+c)%100;
      d += (i-m+i*m-j+f-g-l*e-n)%100;
      b -= (k+k*c)%100;
      a -= (m+e+k-j-i*l+n-c-d)%100;
      a -= (c*i+a+l+e+c*f)%100;
   }
   break;

   case 3:
   {
      i -= (g-g-f+e*e-m-c+k-d*n+g)%100;
      h -= (i-e-c*m*m*g+b+c*n)%100;
      m  = (c-h*a-g-j*g+c+f-i+e-d+b)%100;
      h += (j-f+m-b-m)%100;
   }
   break;

   default:
   {
      a -= (f-f-i)%100;
      d += (b-l+f*f+k-g)%100;
      m -= (j*g+b-n*l-j)%100;
      g += (g+f-h-i-b+d+a-j*j-i-c-k*e-g)%100;
      h -= (h-m+k-a-d-a+f+h-c)%100;
      l += (j-k)%100;
   }
   }

   n -= (j*m-n+i-h*f+i+i)%100;
   a -= (j-f)%100;
   n += (b-k)%100;
   e -= (n-a+b+a*b*i*n)%100;
   d += (e*i-j+e-c-l+i)%100;
   b += (k*f+c-i+h-f)%100;
   a += (g+b*d*i)%100;
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
         for( ; ++FORcnt[67]%5 ; )
         {
            for( ; ++FORcnt[65]%5 ; )
            {
               if( ++IFEcnt[44]%2 )
               {
                  e  = (h*d-n+l)%100;
                  g += (i-a-d+j+d*e+f+l*h-j+i-h)%100;
                  j += (k*k+g+f-c+e+k)%100;
                  d += (c-b-c-m+j-c+c+i+l)%100;
                  j -= (j+d+l-a*c-j+n+l-j)%100;
               }
               else
               {
                  m -= (g+d-c+h+h-l-m-n-m-c-m-d*k)%100;
                  m += (f*f-i-e*i+d)%100;
                  a -= (k-j*g-a+j*c+d)%100;
                  h -= (i-n*k+b*n*n*f-h*d+j+c*d+c)%100;
                  m += (d+l-j)%100;
                  n += (a-j+m-i-i-g*a-h+l-g+g*n)%100;
               }
               while( ++WHILEcnt[43]%5 )
               {
                  g += (k*f)%100;
               }
               do
               {
                  f -= (h*f+j+l-l+j-k+a+a)%100;
                  g -= (h-c+l+g*a-n)%100;
               } while( ++DOcnt[44]%5 );
               if( ++IFcnt[33]%10 )
               {
                  f -= (f+m)%100;
                  h -= (l+l+c*b+a-h+m*f+b-a-j)%100;
                  d += (b-e+n+i+f+j+f-n+c)%100;
                  h  = (n-g+a+g+i+f*c-n+d+a-g+a-e)%100;
                  k += (m-j-j-j*k-k)%100;
               }
            }
            a += (a+k-d+b-i+l-g)%100;
            for( ; ++FORcnt[66]%5 ; )
            {
               
               switch( ++SWcnt[22]%4 )
               {

               case 1:
               {
                  e += (i-f-c-f+j-f+e-l-j-d+i)%100;
                  j += (m*k-m-e-i-b+h*e-h+m-c)%100;
                  l += (h*a+m*d*k-j+k-m+a+n-n)%100;
                  d -= (g+c+l*l-c-b+j)%100;
                  l -= (k-k*d+b-g+b-c-l-n*i+i)%100;
                  c += (e+j-e*e+c)%100;
               }
               break;

               case 2:
               {
                  e += (l-f-l-f+c)%100;
                  d += (g-m-g*d)%100;
                  h += (e+n+n+h+j+i-i-b-g-n+d+l)%100;
                  e += (e+g*f-c+c+b*i*j+a+l)%100;
                  m -= (i*k)%100;
               }
               break;

               case 3:
               {
                  k += (g-h+d-d*b+m+d-d+c+g-a+c+i+b)%100;
                  n -= (k-k+a+i+l-j)%100;
                  g -= (b+l+j*f+d-b+j+h-j+g*k*n)%100;
               }
               break;

               default:
               {
                  f += (b*k)%100;
                  a += (h-c-d-b-i+j-m)%100;
                  d += (d+m)%100;
                  b  = (e+j*n-m-d+g-f)%100;
                  m += (f-j+h-f-b-g-n-f-b)%100;
               }
               }

               m += (n-l*g-b-h+c-a+k-h)%100;
               i -= (a-j+l+m-h*c)%100;
               i -= (f-a)%100;
            }
            i += (j+j*g)%100;
            c += (g*j+f-a-l+m*c*m-c+m-e)%100;
         }
         j -= (h-f)%100;
         a  = (k-j)%100;
      } while( ++DOcnt[43]%5 );
      m -= (j+a*b-l-e*h-d-j+c-g+h*a)%100;
      g -= (b+e+c+i)%100;
      k += (j-h*b+e)%100;
      i += (k+a-f-l*i*m+n+a-h-a*k-m)%100;
   }
   e += (m-k+f)%100;
   j -= (g-j)%100;
   j += (f*g-d-e-d-e+i*b+k*i-h+b-e+d)%100;
   m  = (b+f+e+a+g+l)%100;
   e += (e*l+i+i*a+a-n-i*m+b*h*a)%100;
   m -= (i-e-g-f-a)%100;
   j -= (f+f-i+m+l*a+d+d+d-c+g-j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F21(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[46]%2 )
   {
      b -= (d-l+d+g+f)%100;
      h  = (f*l)%100;
      j -= (d-a)%100;
      d -= (j+l)%100;
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
                  j -= (a+j+h-f+b-l)%100;
                  g += (l*m*n+a*k-f+a-i+f)%100;
                  j += (d-h*b-b-c-h+j+m)%100;
                  n += (k*n-d-l*c+b-n-b-l-b)%100;
               }
               for( ; ++FORcnt[68]%5 ; )
               {
                  j += (f+k*i-e*k+d+c-i+l+f)%100;
                  c -= (m+i-d-f-a)%100;
                  m -= (a+m*g-h-h-f*d*k-d-j+m+h*l+j)%100;
                  b -= (e+d-a-f*l+i)%100;
                  e  = (k-h+b*l+m-n*d+a-b+i)%100;
                  g  = (j+m+e*f+n+k-e-g-j-e-c-i*k+d)%100;
               }
               if( ++IFEcnt[45]%2 )
               {
                  h += (g-m)%100;
                  l -= (d-h*h-n-f)%100;
                  g += (k+f-n-f*k-c-c)%100;
               }
               else
               {
                  h -= (n*h-a+c+k*n+i+n-l*g-b-g*k)%100;
                  i += (e+l+j+b-c*k*k*e-m)%100;
                  g += (j*d+l-c+g-i-k-k+d*e+g-i+e-e)%100;
                  i -= (m*n+c*j*e-d)%100;
                  j -= (d+i+g*a*n-f*l+a-d-c-j-e)%100;
               }
               while( ++WHILEcnt[45]%5 )
               {
                  a -= (i*m-i+e+d+f*n+i+i*i*n+c*c-c)%100;
                  l += (k*a-k-c+e+i*k-b)%100;
                  l += (n+i)%100;
                  i -= (j+g)%100;
                  i -= (n+m+h-l)%100;
               }
               do
               {
                  f += (k-a-a-l-j-f-f-j+n-m-b-b)%100;
                  l += (c-d+k-f+e+f+n+i+l)%100;
                  k -= (k*m+h+c-h-g*n+g+d+i)%100;
                  j -= (a*d-d+h-h+k+m-h+a-b*d-e+b-j)%100;
               } while( ++DOcnt[46]%5 );
            }
            f += (m*g-g+n*d*a+l-d+j+j-j+b*n+m)%100;
            for( ; ++FORcnt[70]%5 ; )
            {
               
               switch( ++SWcnt[23]%3 )
               {

               case 1:
               {
                  k += (k-b+e*j-b-e-k-e-f)%100;
                  c -= (a+g*h-e-a+c-b-h+c-l+g)%100;
                  d -= (k-b+n-i+f+a*m*k)%100;
                  e -= (n*n+e)%100;
                  d -= (m+k*j+f-f-i)%100;
               }
               break;

               case 2:
               {
                  m -= (m*l+n+k*h-l-f+m-l+h-b-a)%100;
               }
               break;

               default:
               {
                  e += (m+g)%100;
                  h -= (m*k*j-g+g-l-g*m-f+l-b+j+j-f)%100;
               }
               }

               if( ++IFcnt[35]%10 )
               {
                  n -= (a+a*i*i-j+b)%100;
                  d += (m+h)%100;
                  f += (c*h)%100;
                  h -= (n+c-m)%100;
                  g -= (c+b)%100;
               }
               n -= (m-h-k+f+e+l+f)%100;
               g += (m-g*k-n+n)%100;
               l -= (e-g-b-j*c*f-j+c-l*n-b+k*i)%100;
               b += (j-e)%100;
            }
            k -= (f+j)%100;
            c += (f+c+j*n-d*d-i+f*g-i-a*g-c)%100;
         } while( ++DOcnt[45]%5 );
         a += (e*a)%100;
         b -= (f+b+d+n-i-j+i+d)%100;
         h -= (d+e-g+e-d*c+e*a+i+m+c-b-a)%100;
         k -= (j+e-i-i+f-k+b-n*g+g+l*b*b)%100;
         d += (c+f)%100;
      }
      e -= (f-j-j+f*e+k+e-b*l)%100;
      j -= (a-a-l+f*b+d-a)%100;
      b -= (b*c+e)%100;
   }
   i  = (k-e*k+h*e+b-d-n-e-k)%100;
   b += (b-c*c-b+c-d)%100;
   d += (l*k)%100;
   j -= (e-j)%100;
   k -= (a+e+c*c*k)%100;
   e += (m-l*i-b+k+a*k-a)%100;
   c -= (m+j+e+m-c-n-e+a+h+l*h-c+d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F22(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[48]%2 )
   {
      h -= (k*d+c-c*g*h-j-a)%100;
      k  = (d-d*c*l-a*j*f-f-j-b+f+a-a-a)%100;
      c -= (h+j+i+n*b*h+h-g-a*e-g+i)%100;
      b  = (h-n)%100;
      i += (g-f+k*g-l+g*m*e+n-c+h)%100;
   }
   else
   {
      while( ++WHILEcnt[48]%5 )
      {
         do
         {
            for( ; ++FORcnt[72]%5 ; )
            {
               for( ; ++FORcnt[71]%5 ; )
               {
                  m -= (g-h-m*k*i*b)%100;
                  j  = (n-i-l+m-c)%100;
                  n -= (m+c-f+e*m-g*f+e-k+f-m*d)%100;
                  h -= (g+n)%100;
               }
               if( ++IFEcnt[47]%2 )
               {
                  e += (c-a-k-d)%100;
                  b -= (h+f+a+l+e+n+i*l*l-j-c+l+i-n)%100;
                  b -= (e+k+e+n-l*c-g)%100;
                  j -= (g+n-k+f+a-j*b*m*e-l+k)%100;
                  h -= (a+i*n+a+a+b+b+m+b-f)%100;
               }
               else
               {
                  g -= (f+m-n-c+j)%100;
                  g -= (d-a-k+j-b*l-a)%100;
                  j -= (e-f-m+i-k-b-e-b+k+m*h+a+m+e)%100;
                  m -= (d+f-b-h-f+f+e*m-f+e*b+e+d*a)%100;
                  d += (g-g+j+l-d+n-f*i)%100;
                  f -= (d-a*c+i-a-d*h*e+k-h-a*f-l)%100;
               }
               while( ++WHILEcnt[47]%5 )
               {
                  a += (g+j-a+g+e+a-i-c+n-a-a+f*m)%100;
                  g += (l*e+f+c-l*b-d*n)%100;
                  f -= (g-c-d+h)%100;
                  j += (m-j-g-m+n+k)%100;
                  d -= (i*k)%100;
               }
               do
               {
                  b -= (c+f-l-i-b+n-i-m-k+a)%100;
                  n += (h+n+d-h-l)%100;
                  e += (d*d)%100;
                  i -= (k-m+j-n-a+l+g-m)%100;
               } while( ++DOcnt[48]%5 );
               if( ++IFcnt[36]%10 )
               {
                  n += (b*c)%100;
                  f -= (b+n+n-i-m+l*g-g+n-k-f-d+j-k)%100;
                  g += (k-e-d-n-f*b+i*n+a)%100;
                  l -= (k-n)%100;
                  a += (g+m*c+a+f*l*c+m-a-e)%100;
                  i += (j+h-i-e+g+d+e-m-m-a+n)%100;
               }
            }
            j  = (b*i+b-b-c-b+c*j+j+d+g)%100;
            for( ; ++FORcnt[73]%5 ; )
            {
               
               switch( ++SWcnt[24]%4 )
               {

               case 1:
               {
                  e  = (b*l+l-i-i+d+m+g+e-b+c)%100;
                  h += (l-e-d+d*j+h+g+b+h+e-e-e)%100;
                  l += (m*f-c+k+g*c-l-k+j)%100;
               }
               break;

               case 2:
               {
                  m -= (i*c-m-i*l+n-b+d*n-c-j)%100;
                  h += (f+m*i+c+h+c-n+k*f-i+d-i+k-n)%100;
                  c += (a+h-h+d*g-c-j)%100;
                  m -= (f+e+j+m+m+i+k+d+b-h*c+n+n+a)%100;
                  i += (l*j*j+i-f-i)%100;
               }
               break;

               case 3:
               {
                  c += (j+h+j+k*n-e+f-k+l-d+n+e)%100;
                  h += (l*g)%100;
                  m += (n*b)%100;
                  k += (j*f-i*k-l-j+h*j*m-c+g-h+a)%100;
               }
               break;

               default:
               {
                  e  = (m-d+j+l+k+c-e-c+a-n-g)%100;
                  c -= (f-e*i*c*n+e*l-n*m+e-k*l*e)%100;
                  e  = (n*c+g+j)%100;
                  a += (b-d-b+f*d*e+e+m-l+b-a+j-m*h)%100;
                  k += (d+a+b-d-l-m-j-c+e-n-e-j)%100;
                  k  = (l-n)%100;
               }
               }

               b -= (d+h+g*d*a-l-a+c)%100;
               g += (j+k+l+n-d-n-i-c-i+n-i*i*a)%100;
               j  = (f-a-e+m+k-n)%100;
               l += (j-m)%100;
            }
         } while( ++DOcnt[47]%5 );
         i += (a*f-a*l-l-i-j-n+c+n-f*g)%100;
         l += (c+n+k*a*a-c+e-c)%100;
         e -= (b-l+g)%100;
         f += (d-d+b-g+d+a-d*b+f+i+j*m-c+e)%100;
      }
      a += (c-d-f*b-h+k)%100;
      l  = (c+a+m-k+m-e*j-i-n-c-f+l-f)%100;
      i += (h-m-h+i*f*k-g-c-g-n+e-e+c)%100;
      a -= (l*j*g-e)%100;
      l -= (l+a-i-f*i-g*l-f-m*m*i+i)%100;
   }
   l -= (j+m)%100;
   m -= (a-n-m)%100;
   h -= (f*d)%100;
   e  = (m+f-f*d-k-b+g*c-b+b*a+e)%100;
   d += (i+j+k)%100;
   d += (n+g)%100;
   d -= (j+d+f-a-j*b+e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F23(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[51]%2 )
   {
      g  = (m-n-i+e+h*d+e-a*i+k-a+d)%100;
      h  = (c-n-k+b+i-i*b-a+c*b+k-k*k*l)%100;
      e -= (a-c-j-n)%100;
      b += (i+b)%100;
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
                  f -= (j+m+e-l-f-b+g*h-j-a)%100;
                  b += (e+d+a)%100;
                  a += (l+l*m)%100;
                  g -= (a-c+k-e+h+m+b*c+j+m-f-e-h)%100;
                  k += (b*n)%100;
                  k -= (h*h+k+b+n+g*l)%100;
               }
               for( ; ++FORcnt[74]%5 ; )
               {
                  g += (j-c+l+d*c+i+b-h*l)%100;
                  g += (k-a*e)%100;
                  k  = (d-h)%100;
                  e += (d+e-a-c+f+k*b+e-g-l+h+l*d)%100;
                  j  = (e-i+d-n+a*k*d+f+l-b)%100;
               }
               if( ++IFEcnt[49]%2 )
               {
                  a -= (d+e+n-e*m)%100;
                  m -= (m-h-n*m-l-c+m*c+a)%100;
                  d -= (e*n*g*i+g+n-k-e-m)%100;
                  i += (i+e-a-k-m)%100;
                  l -= (d-d+n*h-d+h-m+a*a-b-f-j+k*g)%100;
               }
               else
               {
                  f += (f-h*k*l+i+c-a*h-a*m+f)%100;
                  g += (l-l+h+m+e-m)%100;
                  g -= (m-j-f-a-f-i-c+h+k-f+m+e-l-i)%100;
               }
               while( ++WHILEcnt[49]%5 )
               {
                  k += (d-n+e+k-c-n-a+h)%100;
                  n -= (h+k*h*k*e-d*i*f*n)%100;
                  m += (c-j+g*j+n+f)%100;
                  c += (d*f)%100;
               }
            }
            do
            {
               d -= (n-a)%100;
               for( ; ++FORcnt[76]%5 ; )
               {
                  c += (l-g+b*j-i*g-a-h+c*b)%100;
                  g += (g+f*e-c-e)%100;
                  i += (m+f-h+b)%100;
                  g += (g-n*i+e+i)%100;
                  n  = (b*m-e-d+e*n*l-c+n+a*g+c)%100;
               }
               
               switch( ++SWcnt[25]%3 )
               {

               case 1:
               {
                  n += (f-h-e*d-h*m*e-b)%100;
                  d  = (g-e+n+l-a+g+n+m*l-k*m+g+n)%100;
                  h += (i*i-b*a-l+i)%100;
                  i -= (i*c+k+g*n*g-d+k)%100;
                  f -= (j+a)%100;
               }
               break;

               case 2:
               {
                  c += (a-f-f-n-k+h-n-b+k-f*m+k)%100;
                  g += (h+b-c-n-j*i+m+d)%100;
                  d += (j+c-c*n-g)%100;
                  l  = (i*e-i-h+m+i+d)%100;
               }
               break;

               default:
               {
                  a -= (b*m*k-j*d*n)%100;
                  f += (d-k*k+c-c-j+i-l+f+e-j*b-m)%100;
                  n -= (m-l-f)%100;
                  e += (n+j-j-h+c-n-f-k)%100;
                  d -= (l-e-d-h-m-f-e+a-a*c)%100;
                  h -= (n*f-m-c-n+c*f-j-d)%100;
               }
               }

               if( ++IFcnt[38]%10 )
               {
                  n -= (m+n+i+f*k-h*f-e)%100;
                  l -= (n-b+d-m*j-j)%100;
                  l += (n+i+n)%100;
                  j -= (a+e+e-m-i)%100;
                  b += (i-b+j-m+g+b-n+f+g*l*f)%100;
               }
               if( ++IFEcnt[50]%2 )
               {
                  i += (c-b+e+g*h+k+c-j+i-d*d+g)%100;
                  g += (h-l+b)%100;
                  f += (h*l+f-f*f+m*f-g*k-n)%100;
                  i += (l-n)%100;
                  d += (g+g+f*h+e+a*n)%100;
               }
               else
               {
                  b -= (f+j*c-b+e*g*g*m+j-h)%100;
                  i -= (b+g*n-l+c*j+f-f-k+n-d-h*d+d)%100;
                  e += (n-g-l)%100;
               }
               i += (i*e)%100;
            } while( ++DOcnt[50]%5 );
            m += (b-m+m-b-f-f+i-j+l)%100;
            c -= (m+b+g-h+a*i*c+b+c)%100;
            n -= (e*j-l+h-a)%100;
         } while( ++DOcnt[49]%5 );
         i += (h-j+k+a+c+n*f-n)%100;
      }
   }
   n -= (d-c)%100;
   a  = (c-n-a+j-k+m-i-c-n-k+c+n+g-i)%100;
   h -= (m+k+d+k+g)%100;
   m -= (a+j+a)%100;
   b -= (h-j*l*n+j-e-g-f*l+g+a)%100;
   a += (a+j+h-i+b+h-a)%100;
   k -= (n+h-d-e*k-f-a-b+e-h+l+j-n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F24(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[53]%5 )
   {
      do
      {
         for( ; ++FORcnt[78]%5 ; )
         {
            for( ; ++FORcnt[77]%5 ; )
            {
               if( ++IFEcnt[52]%2 )
               {
                  n += (d+b-g+d*a-e-c+g+n-k+h+j+a-m)%100;
                  f  = (a-j-j+b-e+i)%100;
                  e += (d*l-n)%100;
                  k -= (b-k+f+k+n-c+g-a-j-i-i+b+l)%100;
               }
               else
               {
                  g -= (a+d+e-l+f*l+b-i-a*d*d-k*m)%100;
                  g -= (f*j+n-h+g*n+b)%100;
                  a += (f*f+f+a*k+h-b*f+h+a*e)%100;
                  b += (j-k+n+k-a-g-g+n-l)%100;
                  g += (d+k+h-g*b-k*l+l)%100;
               }
               while( ++WHILEcnt[51]%5 )
               {
                  h += (f-k-e)%100;
                  k += (n-f-l+h+k-e*g-m*a*l+h)%100;
                  e += (i-e+f+b)%100;
                  g += (j*i*n-e+d+d-i+b+d-e*n-g)%100;
                  e -= (c-c+l-m-a+l)%100;
                  b -= (d*c+k+i-f)%100;
               }
            }
         }
         do
         {
            if( ++IFcnt[39]%10 )
            {
               m -= (c+c-f)%100;
               for( ; ++FORcnt[79]%5 ; )
               {
                  g -= (g-m-h+j*f)%100;
                  j -= (d+n+c*j*h+b-b+e*j+a+m)%100;
                  i += (n*h-m-g+e*f-n-c+m-f)%100;
                  c += (e+g-n-c+b+d+i+k-j+a)%100;
                  i -= (f*l+c+l-n*h+a*k+f+b)%100;
               }
               
               switch( ++SWcnt[26]%3 )
               {

               case 1:
               {
                  h -= (g-g*d+m-b-j*l-i-k-k-b-f+g-m)%100;
                  c += (l-n+k*d-i-d-c-h*a+l*l*g)%100;
                  b -= (h*h+d)%100;
                  f  = (k+l-n*f+d)%100;
               }
               break;

               case 2:
               {
                  h -= (l+b*h-l+c-j-m)%100;
                  n += (f*j-l-h)%100;
                  k += (l+b+g-m+m-j+c+d*g+e-m+i)%100;
                  i -= (b-a*m-e-m+a*b-f)%100;
                  a -= (f+h+a*n-d-n-k+n)%100;
                  i += (b*e-c+a*g-j+b+h-c-c+j*b+k-g)%100;
               }
               break;

               default:
               {
                  a += (g+m+e-b*k-n*f+d*f)%100;
                  f -= (f+h)%100;
                  h += (b-j-c-f*c-g+g-f*a-a+g-j)%100;
                  a -= (f+b)%100;
                  l -= (j+c+i+k+d*h-h-e+e)%100;
               }
               }

            }
            if( ++IFEcnt[53]%2 )
            {
               j -= (l*j)%100;
               i += (f-a+k+a+b)%100;
               h -= (d-a+n-e)%100;
            }
            else
            {
               while( ++WHILEcnt[52]%5 )
               {
                  h -= (c+i*j-j)%100;
                  k -= (h-i+c*a-g+f+i+b-m-h-g-m-e)%100;
                  n += (e-d)%100;
                  c -= (h*a*c-i-e+i+k*m*f*k+c-g*m*a)%100;
               }
               do
               {
                  m += (d+i)%100;
                  i += (c+j+m+i+d*n-i+g*n-a-h-k-n+m)%100;
                  l += (c+d+d+d+m*n-i+b+a-f-a-a)%100;
                  e += (j+b-n+g*j+d+m*f*c-n+f+d+e+j)%100;
                  a -= (n+a-j)%100;
                  f -= (h-k-e-j-m+e-e)%100;
               } while( ++DOcnt[53]%5 );
               for( ; ++FORcnt[80]%5 ; )
               {
                  g -= (e-h-h-n-h-b-c)%100;
                  a += (m-n+a+f-g+d+b-l*l*h)%100;
                  c -= (a*d+b+l-a)%100;
                  l += (e-m-i+h+f-n*c+l+l-j+a+m)%100;
                  g -= (l*b+c+f)%100;
               }
               n -= (c+i+d+e*k+b-e)%100;
               a += (c-f+m-n+g+j*i)%100;
            }
            m -= (f-m-f-f*g+k)%100;
            n -= (n-j)%100;
            c -= (l-k+n*j+k)%100;
         } while( ++DOcnt[52]%5 );
         i += (l-a+m+d-j+c*m+c-j)%100;
         j -= (c-b)%100;
         e += (n+h)%100;
      } while( ++DOcnt[51]%5 );
      d  = (n*d-j)%100;
      l += (n+c*k-j)%100;
      k += (a+e-h)%100;
      j -= (j-d-i+f+m-g+g+m)%100;
      l += (e+n+b-a*c+n-h)%100;
   }
   g += (l*k+m-b+a+m+m*b+k-k+f+k)%100;
   g += (a*f+j-b-l*c+a*e-c*c+i+f)%100;
   n -= (h+j*m-k+g-h*e-g)%100;
   a -= (i+e+m+j-d+d-k*n)%100;
   b -= (k-g+d-k-b-m-d)%100;
   i += (e+e-j-i+i+k-n-b)%100;
   e += (f-f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F25(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[41]%10 )
   {
      for( ; ++FORcnt[84]%5 ; )
      {
         if( ++IFEcnt[56]%2 )
         {
            l += (f-g+c*a-d*n+e-a-f*c-b*n)%100;
            h += (a+b+a-d+a*d-h+j+a-a-k*e)%100;
            j -= (j-e+m)%100;
            n -= (h+a-i)%100;
            k += (f-d*h)%100;
         }
         else
         {
            while( ++WHILEcnt[54]%5 )
            {
               do
               {
                  j -= (j-n*a+n-j)%100;
               } while( ++DOcnt[54]%5 );
               l += (m-m-m+g+e)%100;
               for( ; ++FORcnt[81]%5 ; )
               {
                  j  = (g+h*m-i-m)%100;
                  m -= (c*h-h+d+m-m-j-e*l)%100;
               }
               
               switch( ++SWcnt[27]%3 )
               {

               case 1:
               {
                  b += (d+l-j-j-h*d+g+a)%100;
                  d -= (c+i-a+j+k+l*e+e-e*c+a+c)%100;
                  j -= (i+i+h)%100;
                  d += (l-m+g+i-c-i+n-n+h*e-b)%100;
                  m -= (c+m-n+m+j+i-n-n)%100;
               }
               break;

               case 2:
               {
                  l  = (c-e-m-i-l*g-g*h+f+e-l-i)%100;
                  m  = (b+j+a+a*e*a*d+d+j)%100;
                  d  = (b*h-i-e-f-b*m+m+h-i+c-f)%100;
                  c += (e*n-l-j-e-d-g)%100;
               }
               break;

               default:
               {
                  f -= (j+h-i+b+j-h)%100;
                  n -= (k-n*c-h-l+c-f+b*k*n+l*a*g)%100;
                  c -= (b*i+c-d+i*a)%100;
                  f += (m+e+i+l+b-l+d+g+n+h+f-e*m)%100;
                  c += (d-e-i*a-i+k-j+a)%100;
                  k -= (m-h-h-k-j)%100;
               }
               }

               if( ++IFcnt[40]%10 )
               {
                  f -= (k-l+b+e)%100;
                  k -= (e+a*i-k)%100;
                  a += (k-g+c+g+e+c+b+c+l+f*f)%100;
                  l += (m+n-c+k*f-f*g+i-k-a)%100;
                  l += (n*a+a)%100;
               }
            }
            if( ++IFEcnt[55]%2 )
            {
               for( ; ++FORcnt[83]%5 ; )
               {
                  i -= (e+f+l-m+j+d*j+a+n+j)%100;
                  f -= (b+f-e*m)%100;
                  f -= (l*j+i-e+j+k-d+h-c-k+f-c-g*i)%100;
                  a += (d*n+d+e)%100;
                  m += (g+h)%100;
               }
               if( ++IFEcnt[54]%2 )
               {
                  l += (e-n+i+l+e-n-e+h*l+l)%100;
                  k += (c-n-l*b+j+i-h+d-l-l)%100;
                  i -= (f+j*h+g-m+a-e-n-e-a-g)%100;
                  m -= (e-l*f+k*i-b-k-m*c-b*a+g*h)%100;
                  k -= (j*b+h*c)%100;
                  k += (f-l-c+b+j)%100;
               }
               else
               {
                  l  = (k+b-g+h-e+g-f-a)%100;
                  b  = (f+b+a+i)%100;
                  h += (m*i-g)%100;
                  b += (l-b+l+f)%100;
               }
               j += (l+c*g*n-l+d+a-a+b-e-j+j-a-b)%100;
               f -= (f-e+j-h+b)%100;
               m -= (b-j-e-b*g-d+d+n-i+c+m-d-b+a)%100;
            }
            else
            {
               while( ++WHILEcnt[55]%5 )
               {
                  h += (a-c-n*f-m-l)%100;
                  f += (i-f*e)%100;
                  d  = (e+j)%100;
                  i  = (g+b)%100;
                  g -= (h*k-d-m-n*f*k)%100;
               }
               do
               {
                  h  = (n-f-e-k-g+e*j-m)%100;
                  m -= (f-l-i*k+f-a+d-a+b-i+g+d+j)%100;
                  h  = (d-a-k+h+h)%100;
                  g += (k+i-c+m+l*j*k-h-k)%100;
               } while( ++DOcnt[55]%5 );
               for( ; ++FORcnt[82]%5 ; )
               {
                  h += (d+d+h-c)%100;
                  c -= (h+e*i+e-c*f)%100;
                  l -= (c+l-m)%100;
                  f -= (g-m+l-c-n)%100;
                  d += (i+n-a+e+l*f-e+n)%100;
                  m -= (j+j-n-a-d+j*h+k)%100;
               }
            }
            e += (k*g-n+h-d+d-c+i-h+i+k-i-a-i)%100;
            l  = (i*k+n+b)%100;
            n += (n*i-e+i+a)%100;
            h  = (l-c)%100;
         }
         m -= (d+l+l*m*k*c+m*a*c+i+f-e+e-d)%100;
         d  = (e+f-m+f+m+m-h+g+a-c+j)%100;
         e += (f-c-g+d+e+d-l-m)%100;
      }
      d  = (a+n-e*k-i-g*k)%100;
      j += (l*n-b+f+d+j)%100;
      j += (k+g+f+j-l-g-m-l*n+h*m+l-d)%100;
      m -= (c-n)%100;
   }
   n += (m-g+i+f*i-i+i)%100;
   h -= (b*h+h+j+j*j-c*l+g*n-j*l+m)%100;
   g += (h*j*k-m*k+b+j)%100;
   g += (j*b+d)%100;
   i += (g-b-e-k*k*d-b-c-i)%100;
   m += (h-c)%100;
   j += (f-b+e-m-i+h-n+l-d)%100;
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
         if( ++IFcnt[43]%10 )
         {
            i -= (j-i+f+g-l-f+b)%100;
            for( ; ++FORcnt[86]%5 ; )
            {
               
               switch( ++SWcnt[28]%3 )
               {

               case 1:
               {
                  m -= (f+g+c-d*f+l+c-m-k+b-d-g-j*j)%100;
                  a -= (a-h*g+j-c+l+h+g-k-k-n*a-h)%100;
                  f += (k+m-d-i-f)%100;
                  d -= (f+a-e-g)%100;
                  d += (c+m)%100;
               }
               break;

               case 2:
               {
                  k -= (m+h+c+e+i+c-g+j*m*n+m*b-e)%100;
               }
               break;

               default:
               {
                  j += (d+h+d*n)%100;
                  i -= (a+k-c-l-i-a*h+g-m-b+m-c*n)%100;
               }
               }

               if( ++IFEcnt[57]%2 )
               {
                  g += (g+a-l+g-l+f+i*e-n)%100;
                  j -= (d-h*d+d-b-k+a-f*n*j)%100;
                  a  = (n+m)%100;
                  k += (a-k+e-c*g-a)%100;
               }
               else
               {
                  g += (k+e*i-b*b)%100;
                  g += (f+h+f-f*k+c*d-b+a)%100;
                  m += (i+a*k+h)%100;
                  j -= (f*k)%100;
                  b  = (l-h-g-m-g+d-j+a*l+m+c)%100;
               }
               while( ++WHILEcnt[56]%5 )
               {
                  l += (g-l-e+m+n-k)%100;
                  d  = (n*d*l-n-k-m-b+m+g-j)%100;
                  l += (e-b*c*d*b-b+m)%100;
                  e -= (k-d+e-n-d-g-m)%100;
                  c += (k-h-f+m+l+m-e-i+b-k+f-f)%100;
                  n += (e+l-k-k+j+m+e-g)%100;
               }
               do
               {
                  a -= (m*m+g-g-n*e)%100;
                  a += (f+j+n-j+d-b-b-c*g+j)%100;
                  a += (e-j-g)%100;
                  j += (g*i)%100;
                  d -= (c*a*g+m*l*d+m)%100;
               } while( ++DOcnt[57]%5 );
               for( ; ++FORcnt[85]%5 ; )
               {
                  m += (i-k*j-h+c+n*h-i+g-f+c+n-b)%100;
                  a -= (f+l)%100;
                  d += (n+j-n+b-h*c*h-h*k+c*h)%100;
               }
               if( ++IFcnt[42]%10 )
               {
                  e -= (d+e+h+e*m)%100;
                  h += (i-a*f+a*b+f*f-c*f-f+g+n)%100;
                  c -= (i+m-a-e-i-e-i)%100;
                  h -= (d-f*d*c+g*e-m+n-f*n+c*h-e-l)%100;
                  a -= (c-j-b+h-i+e+j+d-d*j-i-m+b)%100;
               }
            }
            for( ; ++FORcnt[87]%5 ; )
            {
               if( ++IFEcnt[58]%2 )
               {
                  f += (j+c-d+m+h+h+g-h+e-c+l+g)%100;
                  n -= (m+e-d*j-f+b-n-n*l+k-n)%100;
                  k -= (d-n*k*a)%100;
                  a += (j*j-a+c+m+h-f-j)%100;
                  k -= (l-f*i+e+c-c+b)%100;
               }
               else
               {
                  e += (l*e+k*m)%100;
                  j -= (e-d-n)%100;
                  c += (e-f+g*h*d+l*d*l-e+e)%100;
                  g -= (a-a+h-i-d-c+b)%100;
                  k -= (h-h-f-e-n-e-k+e-e)%100;
                  h -= (a*c+g*j+j*k+d+a-d*a+j-b-k)%100;
               }
               g  = (e+i)%100;
               f -= (c-m)%100;
               c += (f*f+g-a+j-b+g-f*a+g+e-j-m*l)%100;
            }
            b -= (f-l+j)%100;
         }
         f -= (b-c-b+k+m*a-b*e+l+a+g*n+a*k)%100;
         a -= (h+e)%100;
         b -= (j-k-g-e*l*h+h*m*g)%100;
         j -= (j+l*c+j+f-d-n-h*d*m+d-a*f)%100;
      } while( ++DOcnt[56]%5 );
      k -= (m*g-k-h-m-i+i+h+c+d-l+c)%100;
      c -= (j-c-h-j+c+b+d-i+n-b-g*k)%100;
   }
   a += (g-b-c+h-i-h*d)%100;
   d += (j+d-k*n+b-k)%100;
   e += (a+c-m+f+j+g+b-l)%100;
   e += (e-l)%100;
   i -= (g+j*h+d-b+k+m)%100;
   h += (f-a-a*k+h+l*c-d-k+d+i-h-g)%100;
   i -= (d+h-c-c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F27(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[60]%5 )
   {
      do
      {
         c -= (h-k*c-f+n+g-d-n-j+f-i+c*b-l)%100;
         for( ; ++FORcnt[90]%5 ; )
         {
            
            switch( ++SWcnt[29]%3 )
            {

            case 1:
            {
               if( ++IFcnt[44]%10 )
               {
                  k -= (k+e-l)%100;
                  j += (c-f+k+k+m+b+n*n+n)%100;
                  c -= (b-e+k-f+d+c*l+d*l-j-f-n)%100;
               }
               if( ++IFEcnt[59]%2 )
               {
                  g  = (h+d-i-l+i)%100;
                  g -= (f-i-j-j-m+k+m-k+f*k-g)%100;
                  f -= (e-e*l+m-l+n-b*n-e*c*i)%100;
                  f += (n-c+d*n+b-l-i+d-f-n+n)%100;
               }
               else
               {
                  g += (d-j-n+g+e-l-l+f-c*g-i-j+k-d)%100;
                  e += (b*k-a*d-n-j)%100;
                  i  = (a+e-f-e+f-c+h*d+a)%100;
                  i -= (b-h+c+h+a*f-f-c*m-f-e)%100;
                  i -= (j+m-c+c+h+i+c+i)%100;
               }
               while( ++WHILEcnt[58]%5 )
               {
                  e += (h+l+n+m*m*n+l)%100;
                  c += (m+d+e+d+c-n+h+d+f+l-f*k+a)%100;
                  b += (h+l-f+f-d*f-i-d+l+h+j+k)%100;
                  f += (a+m-e-e-h+m*d*c)%100;
                  i += (c-g-g*m+g+h+e+c-j)%100;
                  h -= (d-n)%100;
               }
               do
               {
                  d -= (g-i+f-i-i+g-d+f+b+h+l-f)%100;
                  h -= (l*e-a*a-f+b*e+e+j-g*k-b+d+k)%100;
                  m -= (m-l-k*i-d*b+c)%100;
                  k -= (l-l-b+c-b*m+f)%100;
                  l += (l*c)%100;
               } while( ++DOcnt[59]%5 );
               for( ; ++FORcnt[88]%5 ; )
               {
                  m -= (j+d*b+f*c+l*i*a+m)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[89]%5 ; )
               {
                  m += (k-k-n-a-f-n+c-i+a)%100;
                  j += (n+f-k-n)%100;
                  c -= (a-e+g*b+k-n)%100;
                  c -= (e-g-f)%100;
                  e -= (f+n+d)%100;
               }
               if( ++IFEcnt[60]%2 )
               {
                  i -= (m-n)%100;
                  h += (j-a-a-h*i+k*h*f-d+i+j*g-k+n)%100;
                  c -= (h-l*l)%100;
                  k += (e-g-m)%100;
                  f -= (e-d*k)%100;
                  f -= (h*g-n+f-k)%100;
               }
               else
               {
                  l += (i-b+k-d+f-h+g+l+k-n+c+f)%100;
                  b += (h*j*e*d-h+f+h)%100;
                  i -= (b*d+c-n*e+g-l)%100;
                  j += (j+b+m)%100;
               }
            }
            break;

            default:
            {
               while( ++WHILEcnt[59]%5 )
               {
                  n -= (k+m)%100;
                  k -= (b-k+j+c)%100;
                  g -= (h*l*a+h-i+b*k-f-b*h+l+a+m*l)%100;
               }
               do
               {
                  c  = (c+m-b*l)%100;
                  k -= (h+n)%100;
                  a += (n-d+f*c-d-d*l*b-k+i)%100;
                  l -= (a-f+a*a+d*a+f-e+d+h-b)%100;
                  l -= (h-g)%100;
               } while( ++DOcnt[60]%5 );
               if( ++IFcnt[45]%10 )
               {
                  i += (g+n+e+j-e-g*j-g+j)%100;
                  a += (d-d+m-m*k*e-a-e+m*c)%100;
                  e += (a+m+i+b-i-h+n+n-c-b+l-d*h-l)%100;
                  e  = (k-g)%100;
               }
               m += (i-n+b+l-f-b-b*f-l+c-f+k)%100;
               i -= (g*b+f+l+e*i+e+j-h+i+h-a+n+j)%100;
            }
            }

            c  = (b+d)%100;
            f -= (g*m*g*b+l-e-j*h)%100;
            j += (e+d*l-g+j*l+h+d-c-l-k*c*f+i)%100;
            n -= (k-a+j+c+b+k+k)%100;
            g  = (h+c+m-d+m+e*e+a-d-b+i)%100;
         }
         k -= (e+c-e+h-g-g-c-j-k*f+l*f+d-m)%100;
         h -= (j-k)%100;
      } while( ++DOcnt[58]%5 );
      e -= (l*m*e+e+g*i-m+f)%100;
      a += (h+d-a+g+f)%100;
      f -= (i+b)%100;
      l += (j-m-f-d-e*c+e+e+f)%100;
   }
   d += (d+e+l+j)%100;
   c -= (d-g-b-m-h+j*f*g-k)%100;
   c += (j-i*m+g+n*l-d+n*i)%100;
   c  = (l-a-l+n+c-f)%100;
   a += (c*f+c+h-c+k*k+e-i-h-a*a-m)%100;
   k += (d+f+j*f*m*g*b-e+d-l)%100;
   n += (h+b+a+e+d+h*k+i-c-c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F28(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[30]%3 )
   {

   case 1:
   {
      for( ; ++FORcnt[94]%5 ; )
      {
         g -= (i-k-c-e)%100;
         if( ++IFEcnt[62]%2 )
         {
            m -= (d*a-c-e*d+c)%100;
            f -= (h+g-c+c-k-d-c-k+a-l+e+l*l)%100;
            g += (g+m-f+l+a)%100;
         }
         else
         {
            while( ++WHILEcnt[61]%5 )
            {
               do
               {
                  b -= (a-j+e+g)%100;
                  k -= (d*d*c-e)%100;
                  g -= (k+e+d-d*b)%100;
                  f -= (m+e+i+i*h)%100;
                  m += (g+j+j*n+e-f*k)%100;
                  n -= (b-c+j+m*k-f-b)%100;
               } while( ++DOcnt[61]%5 );
               for( ; ++FORcnt[91]%5 ; )
               {
                  b += (h+m-i*h-e+h-h+j)%100;
                  k += (l-f+b-k+e-m+j)%100;
                  a -= (k-j-k*a+j-d+h*h-l+f+d+l)%100;
                  i += (k*h*c-a-n+a-i)%100;
                  g -= (j*i*a*n-g-k+a-d+l-m-i-i*k)%100;
               }
               if( ++IFcnt[46]%10 )
               {
                  f -= (f*e-e-n+j-e+l)%100;
                  d += (m-i-c*b*h+l+k-e*d+i-k+e)%100;
                  i += (l+l-n+b+h+n*j-j-i*f*e+h+b+m)%100;
               }
               for( ; ++FORcnt[92]%5 ; )
               {
                  f += (d+b-l+b+d*k+h+l-n+c+n+b)%100;
                  n += (c+g+j+k-b-n)%100;
                  l += (m-g)%100;
                  d += (e*g+i-j+a+c*f)%100;
                  m += (j-i+n+d*j-k*i+g+e-e-h*a)%100;
               }
            }
            if( ++IFEcnt[61]%2 )
            {
               
               switch( ++SWcnt[31]%3 )
               {

               case 1:
               {
                  l -= (l*m-l-n+d-j+j)%100;
                  b -= (h-i)%100;
                  d += (b+f-g+a*g+k*l+c*n+e*g+b)%100;
                  f += (k-j+g*g+d-f)%100;
                  l -= (d*i+g+j-n-i+a-b-m*g)%100;
               }
               break;

               case 2:
               {
                  i += (n-k)%100;
                  f -= (b+c*l+b+h-k-g)%100;
                  c -= (a-f*c-l*l+e)%100;
                  f -= (m-d-m-f-d+c-g-d+g-g*j-f+f)%100;
               }
               break;

               default:
               {
                  k -= (n-a+a-a-m+f+c-l+m+b)%100;
                  e -= (d-h)%100;
                  f -= (e+c-f+e*n+g-b+g+l-e*l-h*c+b)%100;
                  g -= (l+j-i)%100;
                  h -= (i+b+m-g-b-h+j+n+m*g)%100;
                  a += (b+l-n)%100;
               }
               }

               if( ++IFcnt[47]%10 )
               {
                  b -= (l+i+c+g)%100;
                  d += (b-h+e-m-g-l-d)%100;
                  k += (a-n-i-a)%100;
                  f += (d-a-g-k*n+b-h+n-b+d+g-a-f+m)%100;
                  f += (c-n*d*g-j*e*f*m+h)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[62]%5 )
               {
                  a += (m+e-f-l+k+k+b-m+c+e+d-h*j+f)%100;
                  e += (c-f*f+b+h)%100;
                  c += (l+i*l*j+h)%100;
                  l -= (g-k-g*d+n-n-l+m+n+a)%100;
                  n += (i+k-l*d-g*n+k*n*k+f-g)%100;
                  c += (f-d*k+j-g-k-d)%100;
               }
               do
               {
                  e += (d-i-n*c*m+n)%100;
                  k += (l+n+n+i+n-h-d-h-e-f+m-i-f-f)%100;
                  h  = (h-f-n-d-j-m+e-g+b*e+l)%100;
                  f  = (e+c+e+h*f)%100;
                  g += (g-l+f+l-h-f*c+h-a-n-i-j-m)%100;
               } while( ++DOcnt[62]%5 );
               g -= (e+f-m*n+k*m*g)%100;
               for( ; ++FORcnt[93]%5 ; )
               {
                  j -= (b+e-m-a*d)%100;
               }
            }
            e -= (l-i*e+i+d-b-a-c)%100;
            d -= (i+h+m+g*i)%100;
            d += (c+c+g-c*e)%100;
         }
         d -= (j*m-f+n-e+g*i)%100;
         j -= (l+h-b*l-i-h*d-j*a+c+g+l*d*h)%100;
         n -= (m-g-c+d-m+n+i*a*f-a+k)%100;
      }
      i -= (h-i-b+m)%100;
      k -= (h-b+a+j+m-h)%100;
      n -= (a+c-n*j-m*d*h-g*i*h-j*g-j-c)%100;
      h += (j-g*f*b)%100;
      g += (f-c*e-d+g)%100;
   }
   break;

   case 2:
   {
      j += (m+j-a-g-b*l-d-i+b-g*b+f*h)%100;
      g -= (l+h*c*j-c*h-k*a-c+d-n*m-i-m)%100;
      l -= (f+k+j-g+b+d-g-d-b*g-a+i+b)%100;
      g -= (a+k*c*m+k)%100;
      a += (j+c)%100;
   }
   break;

   default:
   {
      i -= (e-m+g-c-h+k-e-e)%100;
      d += (g-n+h-e-n-l+g+m)%100;
      b += (l*e+i*m*b)%100;
      m  = (k-f-a*n-a*l+j-e-n)%100;
   }
   }

   e += (a+l+j*h+a-l)%100;
   j -= (k-a-h-d-b-g+b-f-l-d*e)%100;
   h -= (b+h+j+h+e+c+e-j+k-a+h*e*b)%100;
   c += (f-f-h-g*n-m*k+g-e*f)%100;
   i -= (d-a+j-l+e-d-k-h-b-b+j-g-b-d)%100;
   c -= (b-n+f+b*c)%100;
   i -= (m-c-j-d-l-g+l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F29(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[65]%2 )
   {
      m -= (c-l*m)%100;
      i -= (e-c)%100;
      k  = (a+e)%100;
      k -= (n*l-m-e*h+e+i*f+g*f-m+a)%100;
      k -= (b+m+f+c+d-h)%100;
   }
   else
   {
      while( ++WHILEcnt[64]%5 )
      {
         do
         {
            for( ; ++FORcnt[96]%5 ; )
            {
               for( ; ++FORcnt[95]%5 ; )
               {
                  c -= (a+k-k-i*j+f+i+l-m+c*e-l*d)%100;
                  n -= (i+h+d*k)%100;
                  f += (a-n)%100;
                  m -= (j-d-i+j)%100;
                  f -= (m-c*i+c*n+l)%100;
                  e -= (d-c-l+n-e+f-d-c-f-i)%100;
               }
               if( ++IFEcnt[63]%2 )
               {
                  h += (g*k+d+f+a+d+m-n)%100;
                  m += (a-i+g)%100;
                  i -= (l+a-a-l-e+g+k+j+l)%100;
               }
               else
               {
                  f += (d+f*k-g-i+n*i+j-n-a-a)%100;
                  f += (k-b-d)%100;
                  d -= (k-m*e+d*a)%100;
                  i -= (l-m-n-m-l+f)%100;
                  k += (g-g*b-g+i+a-i+i+a*d-b)%100;
               }
               while( ++WHILEcnt[63]%5 )
               {
                  c -= (a*h*i-m-j-g)%100;
                  m += (f-n+f)%100;
                  i  = (g+i*g+n-e-g+g+j-f-e-f-a+e)%100;
                  b -= (d*e+l+b*g+n)%100;
                  m  = (e-f-a*j)%100;
               }
               do
               {
                  a -= (i+i+n-e+e+c-h*f)%100;
                  k -= (b-g-j-l)%100;
                  k += (g-i)%100;
                  c -= (n*a+k+l-e-j+d+d+e-d+l-e+m)%100;
               } while( ++DOcnt[64]%5 );
            }
            if( ++IFcnt[48]%10 )
            {
               f += (m-f+c)%100;
               for( ; ++FORcnt[97]%5 ; )
               {
                  b -= (i-m-b-d-c)%100;
                  h -= (g*b-i-i-c-l)%100;
                  l -= (c*l-b+i-b-g+d-d)%100;
                  b -= (d-f-g-k+i+h*k+f+l*j)%100;
                  n -= (k+g-g+k*j-g+k-j+j+j+c)%100;
               }
               
               switch( ++SWcnt[32]%3 )
               {

               case 1:
               {
                  e -= (d-b+a*g-a-k+g-b)%100;
               }
               break;

               case 2:
               {
                  j -= (h-j+c+n-d+e-m-e-f)%100;
                  a += (m+g+e)%100;
               }
               break;

               default:
               {
                  f += (l-i*i*k+k+m+b+h*e+d-e)%100;
                  d -= (f*n-l)%100;
                  l -= (c-i-l-n+e-g)%100;
                  l  = (i+c*i-e+a+b+a*h+a)%100;
                  h += (c-i*g-k-c-d+e+f-a+i+e-h)%100;
               }
               }

               if( ++IFEcnt[64]%2 )
               {
                  k -= (k+j-f+h-m*m-n*i-h+e)%100;
                  d -= (l+e+m+b*n+e)%100;
                  a += (f-n+k*i+g+k+h-a+h+h*n-b+e)%100;
                  a += (c-g-a-n-g+f+f-a*l-e-l)%100;
                  g -= (k-j-b-j-d*d+i-g+f+f)%100;
                  m -= (h*c+i-f*m-h-j-k*l+j+l+a+n)%100;
               }
               else
               {
                  i += (a+l)%100;
                  k += (c+b+b+m-m-g-j+f+j+e-i+c)%100;
                  c += (c-h-h-k-h+k+d+d+a)%100;
                  h += (k-g-m-a-b-k-l+k+e*b+n+g)%100;
               }
               e -= (e-a-j-m-h+n*e-f*e-g-e*k+k)%100;
               c -= (f-b+d*m*d+h+b)%100;
            }
            h += (j+k-e-b+a*m+e+j)%100;
            a -= (a-c+i*b-k+a-n)%100;
            n += (n-k)%100;
         } while( ++DOcnt[63]%5 );
         a += (n-i-g-n+g-h+j)%100;
         b -= (e-m+e-l+k+j*m*d+h-k+a)%100;
         k += (e-b)%100;
         b += (a-m-d-j*l+c+b-j-j)%100;
      }
      j += (l*d+k+i*m-c+k)%100;
      d -= (g+a+a+i-i*f)%100;
      g -= (n+a*c*l-h-a+c*k-h)%100;
      d -= (n+h-a-b+k+d*j-n*a+m+h*b)%100;
      d += (i-k+b)%100;
   }
   m -= (h+d-m-a-f+l-d*j+a*c*k-m+n+i)%100;
   b -= (i+b*f+m+i+d*d*k-c-m-a-j)%100;
   a += (b+j+b-c+j-n+d+j+f-i+k)%100;
   c += (i-h+l+i+k*j*f-j-g)%100;
   i += (l+f)%100;
   e += (n-k+e)%100;
   d += (a+l-g-c+j-j*f+j-g+e*l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<72; I++) IFcnt[I]   =0;
   for(I=0; I<96; I++) IFEcnt[I]  =0;
   for(I=0; I<48; I++) SWcnt[I]   =0;
   for(I=0; I<96; I++) WHILEcnt[I]=0;
   for(I=0; I<96; I++) DOcnt[I]   =0;
   for(I=0; I<144; I++) FORcnt[I]  =0;
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

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      while( ++WHILEcnt[65]%5 )
      {
         do
         {
            for( ; ++FORcnt[98]%5 ; )
            {
               if( ++IFcnt[49]%10 )
               {
                  l -= (a+l-e-d-h-n-m-h+c-e-j)%100;
                  g -= (j+f-a-b+l-d*n+i)%100;
                  d -= (b+l+m-g+j-e*n-n*c)%100;
                  b  = (b*d+h+l+c+d+c)%100;
                  a += (c*g*e*a+c)%100;
                  k  = (a*g+h+h*f*j-f*k*c+e-f)%100;
               }
               g -= (f+f*f+j)%100;
               n -= (k+l-h+l)%100;
               f += (f+e*g+n-c*e-l-h+d-c+i+c-d)%100;
            }
            f  = (k*m)%100;
            a += (n-i+i+d-e+l-j+n+l*a)%100;
            h -= (i+l)%100;
            j -= (a-h-i+b-h-g+h)%100;
         } while( ++DOcnt[65]%5 );
         k += (e-h-j+k)%100;
         c  = (c*b+f)%100;
      }
      e += (e-l+n)%100;
      i -= (m*c-d)%100;
      k += (n*m+m+m-m*g+e-c+m-h-h-l-j+d)%100;
      g += (i-n-i)%100;
      b -= (e+d+g)%100;
      a -= (a-j+h+f*e-i)%100;
      c += (g-g+m-k*i+f+k-h-h-c+g-k+l-l)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<50; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 50 << "   Dynamic = " << sum ;
   for(I=sum=0; I<66; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 66 << "   Dynamic = " << sum ;
   for(I=sum=0; I<33; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 33 << "   Dynamic = " << sum ;
   for(I=sum=0; I<66; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 66 << "   Dynamic = " << sum ;
   for(I=sum=0; I<66; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 66 << "   Dynamic = " << sum ;
   for(I=sum=0; I<99; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 99 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}