#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[91],IFEcnt[121],SWcnt[60],WHILEcnt[121],DOcnt[121],FORcnt[182];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         i -= (m*k-g*m+m)%100;
         i += (b-j+d+g-n-j+m-c+g+a-f+k-m*h)%100;
         j -= (n+i)%100;
         f += (d+m-k-l*g-j-n+n*g)%100;
         b += (k*d+k+m*f*g-j-m+d)%100;
         l -= (a*n*h-h)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  f += (a-n-f*l+e+j+m+b*c)%100;
                  f -= (d*g+k-m+l+f)%100;
                  a += (d-c-g-h)%100;
               }
               j -= (j+m+i+f-j*b)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  k += (n-h)%100;
                  m += (e-n+e+n)%100;
                  g -= (e-g*h+d)%100;
                  l -= (b+f-g+f*b*b-a-c-j-h)%100;
                  i += (e+a)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  k += (h-c-h+c-a*e*e-n+k+m-i)%100;
                  m  = (f+i-g+i)%100;
                  n += (a+h+k-i+e+g-g-i+c*c-e+l-l)%100;
                  l += (n-n+n+e*n-c*b-g+f-e*m+n+e)%100;
               }
               break;

               case 2:
               {
                  g += (e*m+c+k-j+j*h*f+c-d+j+i+f*d)%100;
                  k -= (e*j)%100;
                  h -= (f+c-b+c-f-k-j-f+k+l+n)%100;
                  i -= (h-l*c-k-f-g-g-d)%100;
                  e -= (e+a-m)%100;
                  b -= (l+e+c+j-g*i+a*a+d+m*e+c*h-m)%100;
               }
               break;

               default:
               {
                  j -= (n+h*m+g-f+i+l+h+k*a+k+d-h*e)%100;
                  a += (h+i+l)%100;
                  j -= (m*g-a*n-c*i+c-k)%100;
                  m += (d-j-k-f)%100;
                  m -= (b+l-i+f+l*l*e+i-d+d-j)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  g -= (l-m)%100;
                  g  = (g+l-c*e+l-k)%100;
               }
               else
               {
                  f -= (d+j)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  e -= (n+j-n+m-j-b*h)%100;
                  g += (c*d)%100;
                  a -= (e-m*m+n)%100;
                  m -= (h+h-l*e+a-d-k*d+g*a+f)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  m -= (i+n-m+k*m+j+c+m-c*m-c-d)%100;
                  b -= (n-n*e)%100;
                  c -= (k+m-i-h*l*k*k)%100;
                  k -= (h-j-i*i-h+m-d-l-e-b*e*j*a)%100;
                  c += (m-b+m*m-n+g-m-a*g-e-l-l-j)%100;
                  h += (f-n-i-n+l+g-c+h+d+l-d*c+d*k)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  c -= (a+b+g+k-d-c-j*b+b+h+i-d-b)%100;
                  m -= (f-k)%100;
                  l += (c+k*g*m-b-k)%100;
                  d -= (c*h-a+g*a+l)%100;
                  h += (l+n)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  n -= (g-l)%100;
                  k -= (b*b-i-g+m+d+i+n-g+l-i+j)%100;
                  k += (k+e+e-b+h*f)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  e -= (i*h)%100;
                  b += (d+m)%100;
                  e -= (g+g-d-h)%100;
                  m += (e-d+m+i-d-d+i-d-n*g)%100;
               }
               else
               {
                  h -= (k-h-c*j*i*g+j+f-e+j)%100;
                  d -= (g+e*n)%100;
                  j  = (b+n)%100;
                  e -= (b-l-l-d*h)%100;
                  j -= (k-a+l*e-d+i-c-n-k+j*c*k*b-i)%100;
               }
            }
            f  = (a+k+d+l)%100;
            k  = (b-m-i+k+b*n+g+g)%100;
            g -= (c+l*b)%100;
            d += (j*h+j+h+n+f+n+b-m+e+m+i)%100;
         }
         l += (l-n+c*n-h-a-m)%100;
         l += (k-f*d*j+d+i-m+d-a)%100;
         n  = (l-i*l)%100;
      }
      l += (g+d+l+l+j-a+c)%100;
      k -= (h+e+g-m+b*e-l-h-i*f)%100;
      g += (f*m*g+k-b*j+c-a+e*k)%100;
      a -= (d-b)%100;
   }
   j += (i-c+b-i*n+h*i*f+h)%100;
   g -= (j+a+b+m-n+f*j+m+d+k-i-e*c)%100;
   h -= (b+n-j+e-n+i+n-d-l-l*a)%100;
   e -= (f-a+f-j+b-f*j)%100;
   k -= (b*a-n+k-d+a+i+c+l-a-c*b+c)%100;
   g += (f-f-g*i+e+b-e+c-a+j+n-f)%100;
   f -= (k+b*g+f)%100;
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
         j -= (f*f-j+h)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%4 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  e -= (m+n+n-i*b+j+j-n+b+i+c+l+g)%100;
                  a  = (n-n*c)%100;
                  f -= (g+i+i-n*f+k+h+c*l+l-c)%100;
                  f -= (f*e+g-g+l-i+a)%100;
                  m += (k+k*a+h+g+b+a+h-c*n+h*l+a)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  n -= (n*f-a-n+l)%100;
                  k -= (a-d-k*i)%100;
                  d += (l+h+f*j-b*c*d+e-c*a*i+k)%100;
                  i -= (j+l+k*a*l-f)%100;
                  k += (g-a)%100;
               }
               else
               {
                  e -= (h*l+j-d-m+f+k-k-c)%100;
                  k += (c-n)%100;
                  h -= (j*l+c-b)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  n -= (k+i+c+e*c+k-m*g+k+i)%100;
                  m  = (b+m)%100;
                  l += (g-c)%100;
                  d -= (m*k)%100;
               }
               do
               {
                  j -= (g+a*m-i*a-i*k)%100;
                  b += (e-i)%100;
                  g -= (a*m-h+f-n-b-i-i+f-i-m+g)%100;
                  g -= (a+c)%100;
                  j += (c+m+e-c-k+h*d-d-b)%100;
                  l  = (f+j+c)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  c += (k+j)%100;
                  h -= (j-k)%100;
                  m += (h+j+d-h-m-a+c-n-d)%100;
                  g -= (k-j+a*l+a)%100;
                  e += (d*g)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  n -= (c-a-d*c-f+k-a*m*h-e+j)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  e += (g-d+b-f+m*i+i+i*a-m-h+g+a)%100;
                  k += (i-b+g*c+m+h+k+d+d-h-g-a)%100;
                  a += (b*b+j-h-a+h)%100;
                  c -= (e+a)%100;
               }
               else
               {
                  h -= (j+n+i-m-c)%100;
                  l += (f-d-h*a+a-k-l-l+m)%100;
                  k += (h-h-a-c-k)%100;
                  h -= (a-c+g+m-b+f-i+m+a-c*f-c+b)%100;
                  n += (c-n+c-l-a-l-f-e+d+b-d+h+h)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  g -= (b-a-h*i-m-e-l-k-f)%100;
                  l -= (j+h-k-l+i+i-e-i)%100;
                  m += (h+d-g+k+f*m*l+f-n-c-h+l)%100;
                  f += (b-a-c*m-e-c+b-k)%100;
                  j -= (l-f-c+l-f*f)%100;
                  e += (i*g)%100;
               }
            }
            break;

            case 3:
            {
               do
               {
                  f += (l+g+e+g+g-b-k*m+e*f+m*b+k)%100;
                  g += (f*k-g*a*j+j)%100;
                  d -= (f+j)%100;
               } while( ++DOcnt[4]%5 );
               a -= (g+l-d*m)%100;
               a += (j+h*b*g+f-g*i-m-f*m*k*i)%100;
               b  = (a-m-d+j+l-d-f+c-e-n+a*k-d-m)%100;
               f += (k-k-e*d-b-k+e+h-b-k-e)%100;
            }
            break;

            default:
            {
               h += (a-c-e*a-l-b)%100;
               m -= (e-c+g+h*n+a+j+k)%100;
               l -= (d-n+j-d-a)%100;
               n  = (e*e-a-g+k*k+g+m-h+i-f+a-b-m)%100;
               m -= (l+g+l-c)%100;
            }
            }

            j += (m-k+j)%100;
            c -= (g+c-d+b-j+h-a-a)%100;
            g += (j+m-f-c)%100;
         }
         c  = (i-l+l-b+b-e)%100;
         k += (a*n+e+k+c-e)%100;
         j -= (g*c-l-l-e-j-f-n)%100;
      } while( ++DOcnt[2]%5 );
      d += (l+i*g*h+h*n+f)%100;
      f -= (a-a*g+b-h*l+a+h*e+a-m)%100;
      m += (g+n-b-i)%100;
      i -= (i-a+c+e-h*j-j-f+a)%100;
   }
   d -= (g-h-j+m*h*l+a+b)%100;
   l += (j*f-k-l+d*i+h-a-c+a*c+h)%100;
   j -= (e-g+g*f+h-k+f-c-c)%100;
   k += (c+m+f)%100;
   a -= (e-d+j-g)%100;
   b += (c+d-i)%100;
   a += (k+e+c-k*e-i+c+f+k-b-n*b+b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[4]%10 )
   {
      b += (d+n*h)%100;
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
                  g += (f-l-e-i+j+a+c-k+j-j)%100;
                  j += (k*h+c-j-g-j+n-a-c-g-n+i*h)%100;
                  h += (m+f+i-e+m)%100;
                  e += (f-j-a+n*f-b-d*h*c+j-f)%100;
                  n += (h-k+k*a+l-a-c*l-f)%100;
               }
               else
               {
                  l -= (h-f)%100;
                  b  = (g-d+i*f*j)%100;
                  f -= (a+n-l+j-h*i)%100;
                  b  = (m-n*a-n+n)%100;
                  n -= (j+i+l+m+c-m)%100;
                  e -= (g+g-g+g+d+k+g-g-c+j-b+b-c-h)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  b -= (k+a-f*d-a*k*l)%100;
               }
               do
               {
                  h += (l-a+g+k-k+e-i)%100;
                  k -= (g-h+d+n-j*n-d+c-j-f-m)%100;
               } while( ++DOcnt[6]%5 );
               j += (f+b-m)%100;
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  j += (n*d)%100;
                  i -= (f-a+d-c-d-l+a-e)%100;
                  d += (g+k-g+c-j+l-b+g*h+m+k+b+m)%100;
                  b -= (g+n+b-j*h+m-a)%100;
               }
               do
               {
                  f -= (i+e-n-k+k*h-e-k-f*d)%100;
                  k -= (h+k*l-c+a+l*i+g*a-i*g+a)%100;
                  n -= (l*j+e+m*e-b+h+b+j*j+g-d-i-c)%100;
                  j += (m-a-c-a*m*i)%100;
                  b += (e-f+l-b*m-i*e)%100;
                  d -= (k+d*e+l-g+l)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  c -= (b-e-j*m)%100;
                  l += (d+f)%100;
                  n -= (k-l+h+f*g+c+m-k)%100;
                  l += (g-i-e+b*l+c-l+h-c)%100;
                  g -= (m-m*e+d-n*d+a*g*i+h-c-l)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  j  = (i+i+g+m*c-f+l+c+i-g-h)%100;
                  d += (l*i-f-e-m+b+j+g+n*e+k)%100;
                  f  = (e*e+k+d-h-b-g+l*c+l*h*e*c*e)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  c -= (c+l-h+c-b*a-m+f)%100;
                  n -= (n-h*l-d-j-g-b-j)%100;
                  j -= (i-i*e*f*f-k-a)%100;
                  n  = (h+b-k)%100;
                  h += (a+l)%100;
               }
            }
            for( ; ++FORcnt[9]%5 ; )
            {
               
               switch( ++SWcnt[3]%3 )
               {

               case 1:
               {
                  a += (l-b*k*k-a*d)%100;
                  l  = (h-g)%100;
                  k -= (l-d)%100;
                  a -= (g*g-a)%100;
               }
               break;

               case 2:
               {
                  e -= (b-a*h+m*n-b-k-g+b+h-b)%100;
                  i += (j+n+i-n+g+d+m*c)%100;
                  k += (e-i+m-f-m-j+h*n-i-j*f)%100;
                  a += (k+a*f*g-b+a-c+e-c-k-h-i+m-n)%100;
                  h -= (h-d+l-n-g*e+n+m+h-k)%100;
                  g -= (i+h-n+c+k-c+k*h-a*k)%100;
               }
               break;

               default:
               {
                  e += (k-a+l*m+e)%100;
                  j += (h+h-d*g-i+h-j)%100;
                  b -= (k+l*c+k*k)%100;
                  f -= (a*g+d-h+i-n-d*b)%100;
                  k += (a*m+k*l)%100;
               }
               }

               i -= (l*b*i*h-k*d-f-d-g+n+h*l+m-c)%100;
               b += (l-f+k)%100;
               e -= (b+f)%100;
               m -= (e-h+f+d+j+m*h+h+g-h+m+f+d)%100;
            }
            f += (c+l+c*n+m-n*k-c-d-k)%100;
            m += (n-a-d-l+a+j)%100;
            j += (i+l-b+g*j*a*i)%100;
         }
         break;

         case 2:
         {
            b += (a-g*b+l+k+n+d+b)%100;
            i -= (h-a-j*b+d+h)%100;
            h -= (g*l)%100;
         }
         break;

         default:
         {
            n -= (h+l+d)%100;
            n  = (h+g)%100;
            l += (d-j+n)%100;
            c += (j-k-g)%100;
            i -= (i-n*b*b-c-c+j-a-a+d*b-m)%100;
         }
         }

         i += (i-d+j-j-l-i-g*a)%100;
         d -= (b*g)%100;
         g -= (i*i-g-b-n+b+n-c+i*n)%100;
         d -= (f+j*a+g+a+e)%100;
         m += (c+j-e*b*b+c-m-e*f*m)%100;
      }
      d += (b+n+b-c-m-m*b+a*l*e-n)%100;
      d -= (n*l+n+l+n+i+a-j+l+j+e+e)%100;
   }
   d  = (m-a)%100;
   i += (e*c+n+c*c-k-m+d*l)%100;
   f -= (c+i+k+c)%100;
   j += (b+k)%100;
   m -= (a+h+j-g+d-d*g*l)%100;
   l += (m-i*k-h*e-a-l*e-g-k-l+m)%100;
   b -= (h-i+e+c-j)%100;
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
         b += (h+d)%100;
         j -= (n+b+m-m+j+h-j*i*e+k-c)%100;
         d -= (h*f*m-b+g+k-d+d-m-d*l+g*j+m)%100;
         m  = (j+n+k*j-b*l-m)%100;
      }
      else
      {
         while( ++WHILEcnt[8]%5 )
         {
            do
            {
               for( ; ++FORcnt[11]%5 ; )
               {
                  c -= (g+c+j+j*b+g+n-a+d-l)%100;
                  e += (k+n)%100;
                  i  = (l*n-f*e+d-m+a)%100;
                  i -= (h-i*a+j+i+f-a+g+h-d+l-m-f)%100;
               }
               for( ; ++FORcnt[12]%5 ; )
               {
                  f += (n*k+h+j-n+m-e)%100;
                  f  = (m+c+m-l+e+e-b-e+b+n-l+f)%100;
                  n += (b-l+l*d)%100;
                  j -= (k*f+g-b)%100;
                  k += (a+l+g-i-h-g)%100;
                  d -= (j+f+c-g-c+k*n-h+d+d*k)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  i  = (c+g+j+a-f-i-e-a*d-k-b+k+e)%100;
                  b += (n*d+l-l+l+h+j-b*l-e*g)%100;
                  c += (k+d*d+j+a)%100;
               }
               else
               {
                  m += (g-j+l-a*i*j)%100;
                  k += (k*j*g-f+d-n*c-k-i+b)%100;
                  d += (g-m*b-k+h-j-g-j+f)%100;
                  g -= (m+a+m-g-d-f*f-j)%100;
                  n -= (a+n+e-e+k-n+b+f-m*c-c*a)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  m += (l*f-e-g+f+k+k+c*c+k)%100;
                  i  = (d+n-b-f-b-j+a)%100;
                  d -= (c-i+e)%100;
                  c += (k-d-e-n+f+l+j+g-f+m+l-a)%100;
                  a -= (b-n-i+b)%100;
               }
               do
               {
                  l -= (m-n+c-c*e-c-m+e+c*h+h+b)%100;
                  d += (a-e-d+i+m-c-c*b*b-m-a+l+f)%100;
                  e += (d+g)%100;
                  m -= (b*m-d+a*l-n-j+i*k)%100;
               } while( ++DOcnt[8]%5 );
            } while( ++DOcnt[7]%5 );
            if( ++IFcnt[5]%10 )
            {
               n -= (a*h*e-l-a-l*i-f*c+d+m)%100;
               for( ; ++FORcnt[13]%5 ; )
               {
                  k -= (j+m-g-b)%100;
                  d += (m+g+l+a+j+d-f-i*i*e*d+b)%100;
                  a -= (m+k-b)%100;
                  k += (i-g)%100;
                  h += (l-m*f*l-e+c*l)%100;
               }
               
               switch( ++SWcnt[4]%3 )
               {

               case 1:
               {
                  i  = (i+m+l-c+j+g+g+c)%100;
               }
               break;

               case 2:
               {
                  i -= (i+d*b+a+b+m-f*i-g-j)%100;
                  b += (m*g+f+k-d)%100;
               }
               break;

               default:
               {
                  i -= (m-n*j)%100;
                  e -= (e+i+b)%100;
                  g -= (c-n-l-a+j)%100;
                  h -= (i-n-k+a*l-d+b-a-h*h+b-g*i-n)%100;
                  i += (g*b*i)%100;
               }
               }

               h -= (c-j)%100;
               f -= (a+k+g+g-g-i+b-d-b-e+c+j-l)%100;
               h += (e+m*e+n-m*k)%100;
            }
            c -= (b+e+b*j+h+f-f-f-m-j+a)%100;
            a += (e+f-m*k*c*c)%100;
            a += (g+f-b+i-g+g-i-g-d+k)%100;
         }
         c -= (c+g)%100;
         m -= (d+i-e)%100;
         h += (c-l*m*m*d+c*m-l-i+c+c-f*n)%100;
         j += (j+e-m*j*i)%100;
         j -= (n-i-b*g+g+g-g)%100;
      }
      h -= (f*d+f-b*c+n-f+g-n-l-i-e)%100;
      b -= (f-k+m+n*g*c-h)%100;
      h -= (k*e)%100;
   }
   m -= (c-l-d+a+l+n+h-m*l-n+g+l-f*f)%100;
   f += (i-n+f*i-e-c-g)%100;
   i += (i*i)%100;
   g -= (g+e*k*f+f-j*k)%100;
   g += (f*f)%100;
   a -= (c*b+b+h+n*i+f-f+b-e+j*k-b)%100;
   m -= (m*m+i+d*m+m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[10]%2 )
   {
      d -= (g-l+h+a-d-h*m-k+e+c-b-b+l)%100;
      k -= (c+g+h-c-d+h+e+b+e-f+i*f-g)%100;
      c -= (n+f)%100;
      i -= (b-i-h-c-h)%100;
      e += (j-i-i+a*m-c)%100;
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
                  l += (j+b-b+f+m)%100;
                  b -= (l+m*e+a+f+l)%100;
                  l += (f-m-c*i-k-k+k-l+l)%100;
                  b += (e-g*b*j*f)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  m += (d-d)%100;
                  m += (k-g-e-g+a+m-c-n)%100;
                  k -= (k-k)%100;
                  f += (h-c-g+i-n+f-n+f-j+m+j-d-c)%100;
                  e += (n+e-h-g+a-j-d)%100;
                  n -= (i-b-h-a-f-j-e+g-l*g-l*e)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  l -= (n-g*b+h+m+l)%100;
                  h  = (a-i+l+m+d-n-d+k-g)%100;
                  m -= (j-j+e+e+n-l-a-d*l-j-j+m-f)%100;
                  c -= (d*m+j+b*e+j-a+d-a*h+d-e)%100;
                  i += (f+h+k+n-d+d+e+f-h)%100;
               }
               else
               {
                  j -= (c+f)%100;
                  e += (j-a-k+n)%100;
                  h += (n-f*k-g-c+e)%100;
                  j -= (b+f-n-n*f)%100;
                  e -= (g+e)%100;
               }
               while( ++WHILEcnt[9]%5 )
               {
                  j += (m*f*h-k-m-h-i*b*h-b+k-h*j)%100;
                  l -= (a+d-i)%100;
                  l += (l+e+j-m*c*j-d+d)%100;
                  f  = (i-f-j-n*j-c*f)%100;
               }
               do
               {
                  c += (c+m+c*l+f-a-b-k)%100;
                  c -= (k-g+n-m-f*b*f-m)%100;
                  c -= (f-h-g)%100;
                  j  = (f-f+n-l-g-g-b+d*c*m+f)%100;
                  i += (h*f+h+g-f+j-k*i*n+d+c-i+n)%100;
                  f += (f*b*e-i+h*e-k+j+n-b*e+g)%100;
               } while( ++DOcnt[10]%5 );
            }
            c -= (h+c*g-c-k-m+a+g)%100;
            for( ; ++FORcnt[16]%5 ; )
            {
               
               switch( ++SWcnt[5]%3 )
               {

               case 1:
               {
                  e += (h-a-d+a-k-b*b)%100;
                  m -= (g-e+e*b+n+n*a*c+f)%100;
                  m  = (c+g*j-f-f)%100;
               }
               break;

               case 2:
               {
                  d -= (a*f+a*j-d*j+b-m-k)%100;
                  l  = (n*d*e+f-d+k-i+b+m-c-n+k)%100;
                  l -= (l+n-d+g*h-h-b+a*j)%100;
                  j += (a+b+m-l+k+j+g+a*k-i-e-n-a)%100;
                  k -= (e-n*n-i+m-f*g-k*l-d*h+k)%100;
               }
               break;

               default:
               {
                  b += (e+b+g*d*m*h+m)%100;
                  h -= (c+h+h-k+c+b-j-m+d-c)%100;
                  f -= (i+b)%100;
                  d += (a*c-e+h+b+a+l*f+i*h+n+d)%100;
               }
               }

               if( ++IFcnt[8]%10 )
               {
                  f -= (f+b+f+m-a+c+e*j)%100;
                  k += (g-a)%100;
                  j += (f-l+f+m+n+a-m*k+h+b)%100;
                  h -= (k-f+n-a*n*l*n*b)%100;
                  f -= (j-n-h+l)%100;
                  c -= (l*m+k*h*b-k-k+a-a-d)%100;
               }
               h -= (b*a*f+g+k-c+b-b*j-f+m-h)%100;
               e += (b*b-i-h+i-i*a-h-k-d-b)%100;
               c -= (h+k+c*b+j*f+i)%100;
            }
         } while( ++DOcnt[9]%5 );
         f -= (d*f-c*n)%100;
         i += (f+i-e-d+h+j-e+j-l-j)%100;
         m -= (k+e)%100;
         n  = (h+c-a+m+e*h-n+i*d*i+i)%100;
      }
      b -= (k+i-e+j)%100;
      e -= (i+c*d*c-c)%100;
      l += (b+b-e-e+m+a-k-c*m+d)%100;
      a -= (d-a)%100;
      h += (n-h-c-i+e+l+j+d-c+a+j)%100;
   }
   e += (a*k)%100;
   n  = (l+c*d+a+m*l-l)%100;
   g -= (l-b+d-i+i)%100;
   m += (k-b*k+g*k+e)%100;
   l += (k+h)%100;
   f += (c-e-i+h)%100;
   g -= (g+k+a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F6(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[13]%2 )
   {
      m -= (l+a+b+c*n+a+f*l-n-e-f*b+k)%100;
      h -= (a+g+n+j*e-e*h+m*i+n+g*i+k)%100;
      d += (d-i*e+j-c-e+b)%100;
      e -= (m-d-a-h+b+h+c-b*c)%100;
      k += (d-n)%100;
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
                  m -= (a+h+l*h*l+m*d+l+j*g-l-g-f)%100;
                  i -= (i*k+j+h*b+m*c)%100;
                  d -= (n-l)%100;
                  k -= (a*j+e+c-i-e+m)%100;
                  b -= (j+j+l-f+g-g+b-k*n+n)%100;
                  k -= (i-n)%100;
               }
               if( ++IFEcnt[11]%2 )
               {
                  i += (i+f)%100;
                  h += (h+n-h)%100;
                  a -= (d+f*n-d+l)%100;
               }
               else
               {
                  n -= (f+d-g-m-a*l)%100;
                  g -= (b-g+k)%100;
                  f -= (l+m+c)%100;
                  k -= (c*h+i+h+a)%100;
                  f += (g+c*k-j-c*i-h-d+e-d+l)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  g -= (n-j*l+i+i*e*a*e+b-c-n*a-d)%100;
                  n += (k-f+j+d-a*e+f-m-f+d*c-e)%100;
                  j += (i-i)%100;
                  a -= (e-j-d)%100;
                  i -= (n+i+l+g-c+m)%100;
               }
               do
               {
                  a += (m+c-m+b*a-l*e*h*h)%100;
                  j += (k-m+h*h-i-a*j-g*m-f+f)%100;
                  l += (l+a+i-c*d-k-a-e+h+d)%100;
                  i += (a-d+d)%100;
               } while( ++DOcnt[12]%5 );
            }
            if( ++IFcnt[9]%10 )
            {
               c -= (b-h-c*l-a-f-m-f*m+a-b+h+a)%100;
               for( ; ++FORcnt[19]%5 ; )
               {
                  c += (d+k-c-k-a-b-g*g+d*a)%100;
                  m += (a-c-n+g-a+f+m-a-j-k+d)%100;
                  e  = (f+g)%100;
                  k += (a+b*n+h-a*c+n-i+j*m+b+j+c)%100;
                  k -= (n-g)%100;
               }
               
               switch( ++SWcnt[6]%3 )
               {

               case 1:
               {
                  f -= (m+k-b+b+h+f-d-f+n*n)%100;
                  g -= (m+j)%100;
                  g -= (a+e+c-d*i+d)%100;
                  l -= (e-j-a+f*i-n-a-j*a*e-l+j)%100;
                  m -= (n+f+m+d-n+c-d-h+l)%100;
               }
               break;

               case 2:
               {
                  h -= (i+m+h*f-h-i-j-m-l+l+l)%100;
                  d += (c+m-f-g+h+f)%100;
                  b  = (j-a)%100;
                  l -= (b+k-a+h*e*g-f+k-f-j+n+k)%100;
               }
               break;

               default:
               {
                  i += (e-k*n+k)%100;
                  e -= (g+i)%100;
                  g -= (a-e+f+g*h-n+l*n+l-l*a-j)%100;
                  d -= (j+k*k+j-l*c+a+i)%100;
                  f -= (n*f)%100;
                  f += (n-l*b*a-a-f)%100;
               }
               }

               if( ++IFEcnt[12]%2 )
               {
                  l -= (l-m)%100;
                  g -= (n-h+g-h-g+b*b-e*b)%100;
                  j -= (i*a+d*j-f+h-i+n)%100;
               }
               else
               {
                  d -= (c+g-l+j)%100;
                  f -= (k-c+n+a-b-h*n+h-k+g+k+i)%100;
                  d += (j-e-c-e-n*g+d+g+h)%100;
                  m += (d*k-i*i*l*j+c*h+b+n*c)%100;
                  e += (c-d-c+k*i)%100;
               }
               e -= (j*g-a+k+k+k-b+h+f)%100;
               g += (g+b)%100;
            }
            k += (n-k+h)%100;
            i += (d-j-b)%100;
            i += (m-g-c+d+i*i-m-e+b+i)%100;
         } while( ++DOcnt[11]%5 );
         m -= (h*i-b+h-d*m+h+m*b-d-k-g+l)%100;
      }
   }
   h += (c-f*g+k+d-g-k-l-j-h)%100;
   i -= (h+k+e-k)%100;
   c += (j-j*f*k+k+l+d)%100;
   f -= (b+j-k+l+k*l+g-d+h)%100;
   n += (i+a-e-e-l-l-f-m*d+a+g+d*b)%100;
   i += (n+n*g+c*i+g-e-h+m)%100;
   e += (n*d+a*a-d-l*j-n*b+j-j-a-a)%100;
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
                  l -= (i+e*h-n+c*n+g+i+k+a-f-m+n)%100;
                  g += (e+c*m+b-d)%100;
               }
            }
            if( ++IFEcnt[15]%2 )
            {
               if( ++IFcnt[11]%10 )
               {
                  l -= (n-f+l*g-j*c+e*a-n+b-k-b)%100;
                  a += (e-b+a+e*n)%100;
                  j  = (i-g-b-a*d+l+f-b*j-a-i+i-g-h)%100;
                  a += (j+e*h+j*a+j)%100;
                  d -= (f-i-a-k+n-d-c-a+b-g+l)%100;
               }
               if( ++IFEcnt[14]%2 )
               {
                  i -= (g-k-i-a+n-m+k-e-m)%100;
                  c += (h+d-k*n*a+a)%100;
                  b -= (b-l+k+k-k-m+c-j+g-f+k*n-i-e)%100;
                  f += (a-n-n-n+g-f-i)%100;
               }
               else
               {
                  h -= (f-f-d-h-k-c)%100;
                  m += (g+a+b)%100;
                  n += (c-a+c-h-e+n+i-f*c+j)%100;
                  j  = (c-e+e+b+i-d-k+n+k*f-f)%100;
                  j -= (j*g-n+i-l-h-k-e*k)%100;
               }
               while( ++WHILEcnt[14]%5 )
               {
                  i  = (f-b-f-k+a+e+f-b*i)%100;
                  e -= (a*g-n+c-k-c)%100;
                  d  = (f+n*c+m+i+e-n-f)%100;
                  k += (i+c*g*c+f-g-g+g)%100;
                  m += (i*b-d)%100;
                  g += (d+i*j+i-a)%100;
               }
               do
               {
                  c -= (d-a-m*b-d+c)%100;
                  e -= (c+n)%100;
                  h += (d-a+a*n-e-d*m+d-g+k-i-d)%100;
                  k -= (j*n+l)%100;
                  j += (c-m-h*b+b-f+b*m-f*c*k+c+l-h)%100;
               } while( ++DOcnt[15]%5 );
               j += (b*j-a-i-c-n-i+b-j*g)%100;
               k += (h+j-j-n-e-e-j-d*h+i+i)%100;
            }
            else
            {
               while( ++WHILEcnt[13]%5 )
               {
                  j -= (c*g+m-n-g*g*n-l-l)%100;
                  f += (l+d+c-g+f+g-e+d+d+a+n-k)%100;
                  m -= (b-f+l-d+j)%100;
                  g  = (a*e-m-c+m+k-f-b*a-f)%100;
               }
               do
               {
                  m  = (k+b-e-b*g-g)%100;
                  c -= (f*k+g-e-g-j+l-l+e*i+c)%100;
                  l += (g+m)%100;
                  h -= (e+j+c+j)%100;
                  f -= (c+i+j*m+g*d+l*k+m+l-a+j-f-b)%100;
                  d -= (a+b-g+c*h+m-j*d+g*d)%100;
               } while( ++DOcnt[14]%5 );
               g -= (c-n)%100;
               for( ; ++FORcnt[21]%5 ; )
               {
                  j  = (f-e+c*g-g*a*i+m+h-j+b-h+e)%100;
                  a  = (k-n+k)%100;
                  e -= (l*g+d+h*f+n+e-k-l+d-b-n+f+c)%100;
                  b -= (l-e-a)%100;
                  i -= (a*h-a-i+m-f-f+e-d-b+m*e-e-j)%100;
               }
               
               switch( ++SWcnt[7]%3 )
               {

               case 1:
               {
                  j += (l*a-l-g-f+k)%100;
                  e -= (h+m-n+l-f)%100;
                  l -= (b*n)%100;
               }
               break;

               case 2:
               {
                  b -= (f-l+i)%100;
                  h += (f+f+n+k-h)%100;
                  d += (e-h)%100;
                  i += (f+b-m+d-k-c+k-l-g-b+k-l-d-l)%100;
                  c += (h-h+n-m+b+i-n+j)%100;
               }
               break;

               default:
               {
                  m += (c+b)%100;
                  k  = (d+e+f+g*m-b+d-c+a-e+j)%100;
                  n -= (f-c-d-g+m-d-m+k)%100;
                  f  = (j+g-k*f*c-k*d+k)%100;
               }
               }

            }
            j -= (e+i-a-b-g+n-f+l+g*l+j+j)%100;
            h += (i-c)%100;
            g  = (d-k-f-e-f-l-i+l-k*d)%100;
         }
         b -= (c*m)%100;
         i += (d*n-c-d+e-g-m-l*f-b)%100;
         l -= (b-h+i*f-i*i-j-j-b+d-k+j-f)%100;
         l += (h*b*m-k+i+g-m-n-l-a-j*l+k*a)%100;
         h += (d+e-f+e+g-j-j-l+b)%100;
      } while( ++DOcnt[13]%5 );
      k -= (g+a*l-i)%100;
      h -= (l+d+b-g-i-j-h*c+i-n+g+m)%100;
      l -= (b-b-h+j+m+d-h+e+l*f-d)%100;
   }
   j -= (d*k-d-j+m-b-m*h-e+g-h)%100;
   c -= (f*c*l+a+c+c*h*k-i+h-i-m*k-k)%100;
   e  = (g+d-e+a)%100;
   n += (c*c-g-a)%100;
   k += (e+j+c-m)%100;
   l += (l+b+d+k*g-k+i-k+l-i-a-b*h+f)%100;
   k  = (e*i-h)%100;
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
            n  = (b+m+n*i-f*b-c+c-c*a)%100;
            f += (e-h)%100;
            j -= (c*j-a*d+n+e+f-k+d+m+k-d)%100;
            d -= (g-e+f+e+a-e-c-n-j+n*k+a)%100;
         }
         else
         {
            while( ++WHILEcnt[16]%5 )
            {
               do
               {
                  h -= (n+i-e+n*c-i)%100;
                  b -= (g+c-n-f+j-n+h)%100;
                  d += (n*i)%100;
                  k -= (l-d*k-b+f)%100;
                  j += (k*h+n+k+l+a+k+h+c+b)%100;
               } while( ++DOcnt[16]%5 );
               if( ++IFcnt[12]%10 )
               {
                  j += (c+j-a*b)%100;
               }
               m -= (d-j)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  i += (g+l-j+l-j-k-n*a+c-b)%100;
                  e += (i*a-h+a-g*m)%100;
               }
               
               switch( ++SWcnt[8]%3 )
               {

               case 1:
               {
                  l -= (b*e-f-f-m+d-e+k-i-c+m-a)%100;
                  l  = (l+e+l+h-g-n-f+m-i-n+m*d-c)%100;
                  d += (k-h*n+d*h*h-c-i*c)%100;
                  a += (h*e+b+a*f-d-l*m*e+c-g*k-f-j)%100;
                  c += (j+e)%100;
               }
               break;

               case 2:
               {
                  l  = (f+k-n)%100;
                  d += (i-b-g+e+b+j-l+k*a)%100;
                  j -= (c-j+a+m-h+g-g+a*h-l-d+e*d)%100;
                  m += (b+c*a-d+g+l*n-i-j+k+j)%100;
               }
               break;

               default:
               {
                  e += (e*h+k+f+g)%100;
                  k += (n-d*f-a+i+m+a-i*k-i)%100;
                  b += (e-f-c+j+a-g*i-c)%100;
                  m += (h-j-g-e-k+b*b+c*h-f-i-m-d*f)%100;
                  e += (d-c)%100;
                  f += (n-d*m)%100;
               }
               }

               if( ++IFEcnt[16]%2 )
               {
                  f += (i-d-i-d)%100;
                  l -= (d-a+e-a)%100;
                  k += (c+i-k-n*g*h)%100;
               }
               else
               {
                  k -= (i+j)%100;
                  l += (d-h*a+h+e-h-l*a*e+l*l)%100;
                  n -= (a-d*g-h+l*h-m-l)%100;
                  d -= (i-h*d+b-g-k+f*f-f-n*f-i)%100;
                  j -= (c+j-d*j+f-n+e)%100;
               }
            }
            while( ++WHILEcnt[17]%5 )
            {
               do
               {
                  b -= (n-l-k+g-l+h-a*m+i-f-n-m)%100;
                  e -= (f-l*a+c+b-f*c+j)%100;
                  n += (d-k)%100;
                  j += (e-d-m*m*d*a-c*d-k)%100;
               } while( ++DOcnt[17]%5 );
               for( ; ++FORcnt[24]%5 ; )
               {
                  m -= (d+c-i)%100;
                  k += (f-b-k+c*k+j*m-h+j)%100;
                  n += (a+n*g-f)%100;
                  a -= (i-c-j+j)%100;
                  h -= (m-g*h+c*n-m*m+j+c-j*e-i)%100;
                  b -= (f+m-f+k-k-b-c+f-a-f+k)%100;
               }
               if( ++IFcnt[13]%10 )
               {
                  m += (d-b-m+n-n+a-n+l+a+d+d)%100;
                  e -= (j-b*g)%100;
                  f += (l+f+g-m+a-a)%100;
                  h -= (d+c+m+f+m-l-e+f+b-c+f+n+c+j)%100;
                  c += (l-e-j*h+d-h*i-m*m+d+n-n)%100;
               }
               for( ; ++FORcnt[25]%5 ; )
               {
                  i -= (k*d)%100;
                  c -= (m+j+m+l-j-g-m-f)%100;
                  a -= (f-g-b+n*k*e*a-h+m-i-j*e-l)%100;
                  b += (b-l+d+j*f-l-g-d-h-e-j-h)%100;
                  b += (l-i-e+f+e-f+j+m)%100;
               }
               k -= (n-l+g+n*l)%100;
            }
            c += (k-c*l+l)%100;
            g -= (l-k-m-d+a-e*m+n)%100;
         }
         l -= (l-j+i-e+a-k+i+i*m+l+f)%100;
         a -= (k-g)%100;
         i += (d-g)%100;
         j += (c-m+k+b-b-d*n*m-h+c-j)%100;
      }
      l += (b+n-b-f*c*f+j-i-e+k-j*n)%100;
      b += (k+f-m-g*a-g)%100;
   }
   f += (m-b*a+a+a)%100;
   d += (n+a+k*m+c*g*m+m)%100;
   k -= (b-f-m)%100;
   g -= (h-f+e-f-k+l*k-n+j*e+c*i-k)%100;
   a  = (j+n*g*a)%100;
   l += (h*h*l+g-a-k-e-k-n-l-k)%100;
   h -= (k*h*e+m-a*e-k*m+l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F9(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[20]%2 )
   {
      k += (n+m+n+m+d*b+k+l)%100;
      n -= (k-f-g-n*c*i+b)%100;
      a  = (l-l)%100;
      j -= (k+d)%100;
      k += (h-d*h-c-c-b-g+k-d+h-l)%100;
   }
   else
   {
      while( ++WHILEcnt[20]%5 )
      {
         do
         {
            k -= (g+h+d-c-d+j-j*e)%100;
            for( ; ++FORcnt[28]%5 ; )
            {
               
               switch( ++SWcnt[9]%3 )
               {

               case 1:
               {
                  f += (a-h-k-h+m+j+e*c)%100;
                  j -= (l-k+k)%100;
                  c -= (l+b*l+m+j)%100;
                  k -= (h-m+k)%100;
               }
               break;

               case 2:
               {
                  e += (b+e+j*k*j+m+d+b)%100;
                  f += (i+n-i*f)%100;
                  c -= (a+m-f+g)%100;
                  f += (n+i+i+c-i+j+m*m-j*n)%100;
                  e -= (e-j+h-k-h*n-l-d-f+g)%100;
                  d += (m*n-n-l-b+b+g)%100;
               }
               break;

               default:
               {
                  n -= (n-f-h)%100;
                  e  = (g-h-k+f-a-c+b*n-h-l-e)%100;
                  a -= (e+j-c*e*m-d)%100;
                  g -= (n-h-l+d*e)%100;
                  d += (l*b+n*f-k*b+f+f+e+b+a-e-i)%100;
               }
               }

               if( ++IFcnt[14]%10 )
               {
                  j += (i+e*g-f-j*m+d-h+e+g+d)%100;
               }
               if( ++IFEcnt[18]%2 )
               {
                  d += (n*f+m+n-m+j-l*h-c*i-a)%100;
                  b -= (b-b-k*g*b-g*h*a+f)%100;
                  k += (k-n-f)%100;
                  a -= (d-b)%100;
                  a -= (b*c-n-i+a+m-c+b)%100;
               }
               else
               {
                  c += (j-m)%100;
                  f -= (g*g+b-a-b-e-m+m+f+i-n+m)%100;
               }
               while( ++WHILEcnt[18]%5 )
               {
                  n += (h+f+l*j-i-n+f-g-b+i-k)%100;
                  g += (m*j+f-c-c+c*k+k-m-g*f+m*i+i)%100;
                  i -= (a+c+i+e)%100;
                  n += (c-i)%100;
               }
               do
               {
                  c += (g+e+i*b-j)%100;
                  c += (j+m*f*a+m)%100;
                  c += (a+i-c+i*l+b*m+i*l)%100;
                  g += (j-f)%100;
                  j += (k+e+h-i-k+i+n*f+h+h-n*e*m+j)%100;
                  k += (d+a)%100;
               } while( ++DOcnt[19]%5 );
            }
            for( ; ++FORcnt[30]%5 ; )
            {
               for( ; ++FORcnt[29]%5 ; )
               {
                  d += (e+g-n-i-e-j-e-n+b-b+i-f*k)%100;
                  b  = (i-m)%100;
                  g += (l-a)%100;
               }
               if( ++IFEcnt[19]%2 )
               {
                  g += (d*c+h+l+e-i-i+i+i)%100;
                  g -= (h-k-k-j+h)%100;
                  a += (h-e*i*m*c)%100;
                  b -= (n+c)%100;
               }
               else
               {
                  c -= (c-g-m+j-g+f+j)%100;
                  i += (h-l+n+m+b-h-d-j+b-b)%100;
                  g -= (l+l)%100;
                  d += (e+g)%100;
                  c -= (g+h+h+f+j*f-c-a*c+j+d-h-e)%100;
               }
               while( ++WHILEcnt[19]%5 )
               {
                  h -= (n+c*f-c*c-c+h+k+m)%100;
                  m += (l-e)%100;
                  h += (e-m-c+b+d-c-m*c+b*b)%100;
                  n -= (e+f*b+m+g*c+b-h+d)%100;
                  d -= (e-g+h+g-g+a*h)%100;
                  e += (j-m+a+h+i+i)%100;
               }
               h += (f+m)%100;
               c -= (c*f+m*f+f+a+h-h+g+i-h+n+e*b)%100;
            }
         } while( ++DOcnt[18]%5 );
         d -= (j+b-a-k+i)%100;
         i -= (d+c-d-j*c-d-b-e-m-n-k)%100;
         d += (k-m)%100;
         g -= (c*m*m-f-j-j*n+e+b-d)%100;
      }
      j += (l-h-m*a+b+h)%100;
      g += (g-a-l*d-d-m+m*c-c-k+g+g-i-h)%100;
      e -= (f+a*c+b-i-j*g-l+f-f-g+j+d)%100;
      l += (j+l-c*m+k-c*f+g+a+l+i*i)%100;
      j += (c-a+j-m+i-g*k-m+l)%100;
   }
   l += (c-f+h-l+e*h+b+e+e-g)%100;
   f -= (h-k-n-f*f*m-l+i+h-i-l)%100;
   j += (m+l-f+i-b*l-f)%100;
   j -= (j+i+c-n-i*d-h-m-d)%100;
   k -= (m+g-d+i-j-d*f*g)%100;
   j -= (g+g+m*f-d)%100;
   a -= (k-l+j*i-n+b+a*e*l-i-k*m)%100;
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
         i += (a*a)%100;
         for( ; ++FORcnt[33]%5 ; )
         {
            
            switch( ++SWcnt[10]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[21]%2 )
               {
                  i += (e+f+l-d+e)%100;
                  f  = (d-g-e)%100;
                  e -= (m*l)%100;
                  c -= (e-k+m+f-e+b)%100;
                  c -= (n*d-e*h*g-i*l-n+k-b-d)%100;
               }
               else
               {
                  k += (m+c-l-l*d+h+h-g-d-d+k*k)%100;
                  n -= (j*b)%100;
                  g -= (d+n+f*e+e+b*m-a*e-a)%100;
               }
               while( ++WHILEcnt[21]%5 )
               {
                  g += (e-m*n+i+a)%100;
                  f  = (a-i-c+e-f+h+n+i)%100;
                  a -= (k-e+d*m)%100;
                  n += (m+l+i+l*i+l-d+c*h*k+j-i)%100;
               }
               do
               {
                  h += (n-a-j*j-d-i)%100;
                  d -= (d-j*m+k-i)%100;
                  e -= (j-m)%100;
                  h -= (c+k+c+e)%100;
                  c -= (n-m+d+d-e*i-d+g*n)%100;
                  a  = (h*l+e-b-a*l*n+n+d-j-l-e+f*f)%100;
               } while( ++DOcnt[21]%5 );
               for( ; ++FORcnt[31]%5 ; )
               {
                  m -= (n-a*l)%100;
                  j += (h-j-h*h+b-j+d)%100;
                  h -= (a*i+m-l-g+n+e-l+g)%100;
                  k  = (j-f+d-m*e-h+c-d)%100;
                  m -= (m-d*g*l*c*d)%100;
               }
               if( ++IFcnt[15]%10 )
               {
                  a -= (b-m*d-n-a+l*a+g+h+g-a+e)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[32]%5 ; )
               {
                  l -= (k*h*m+e+l+g)%100;
                  l  = (l+l-l-i*l-g+g-c)%100;
                  h  = (g+a*e*h-g-b-b-b+k-h+a)%100;
                  k -= (a+c-e-e+a-b-a-h*f+f)%100;
                  k += (i+a-j+k+a)%100;
               }
               if( ++IFEcnt[22]%2 )
               {
                  m -= (a-b)%100;
                  n -= (c*i+n-h+d-g+k-g-g-e+a+j-j)%100;
                  h += (m-n-e+g-d*e+c)%100;
                  c -= (b-a)%100;
                  m -= (c-e-g-d-i-j+f*n+i+l+j)%100;
                  n += (a+a)%100;
               }
               else
               {
                  m -= (k-n*f+n+a+l+m+a)%100;
                  a += (f+f-e+i*b+d+h+k+i-h-d-m+e*k)%100;
                  n -= (i-j+d*m+d-e-m*f)%100;
                  g  = (h+m-n+n*i-c+l+f-d*l+l-l)%100;
               }
            }
            break;

            default:
            {
               while( ++WHILEcnt[22]%5 )
               {
                  m -= (g+a*h-b+h)%100;
                  h += (b-e*e)%100;
                  d -= (i-k*e-k*d*m*h*j-c-b-j+n+h*f)%100;
               }
               do
               {
                  c -= (a-j-j)%100;
                  k += (l-b-l+m)%100;
                  h += (a*m-g+i+i-i*k-a*j-g)%100;
                  f -= (d-k*e)%100;
                  d -= (h+a)%100;
               } while( ++DOcnt[22]%5 );
               n -= (n+a-k*n*i)%100;
               c += (m+i+l+k-e-i+c)%100;
               m -= (k+i-e)%100;
            }
            }

            n += (c-g-b+j-g+d*j+d)%100;
            e -= (m-i+m+m+d-l-j-b*e+l)%100;
            j += (n+g+l-f*i*g*j)%100;
            l -= (n+k)%100;
            l -= (f+l)%100;
         }
         m += (a*k+n-i-b+n-f-c-a+g+n+m-n+j)%100;
         i += (l+j*h*d+h+j+a)%100;
      }
      j += (k+d+l+n+n+b-c)%100;
      j  = (k*l+i-b+l-n+d-i-c)%100;
      i += (g*a*a-h*h+g-k+h+f)%100;
      g -= (m+i+c-k-b+h+c-l+d+h-i-j+h-c)%100;
   } while( ++DOcnt[20]%5 );
   e += (i-j-f-n-a+b+i)%100;
   b  = (l+h-a)%100;
   m -= (g+e*e*h-i-m+g+i-f)%100;
   j  = (n+c-d*b-l-h-m)%100;
   k += (g-m*i*n-j+j+b-f+k)%100;
   j += (n*k-c)%100;
   n += (f-j-l-b-d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F11(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[37]%5 ; )
   {
      
      switch( ++SWcnt[11]%4 )
      {

      case 1:
      {
         if( ++IFcnt[18]%10 )
         {
            if( ++IFEcnt[24]%2 )
            {
               while( ++WHILEcnt[24]%5 )
               {
                  i += (j-h*k+g*m+h*d-e-j-n-k)%100;
                  i += (m-a-a-c+h*f*m+g-b+l-g+i*g+f)%100;
                  a += (k-d)%100;
                  f -= (l+j-n-g*l+i-g-b+m+m)%100;
                  i -= (j+g+j-j+n-a-b-a+j)%100;
               }
               do
               {
                  c += (g+h-k-a+c+f+a+l*e-b)%100;
               } while( ++DOcnt[24]%5 );
               if( ++IFcnt[17]%10 )
               {
                  n += (n+k+e-d-j+d)%100;
                  e -= (c-j-d+m-e-j-f)%100;
               }
               j -= (b+n*a-c*a+m-d*g*i-i+e-a-m)%100;
               for( ; ++FORcnt[36]%5 ; )
               {
                  g -= (k*f-m*c-k)%100;
                  j += (d-g-c-n)%100;
                  m -= (g*d-m*m*c)%100;
                  i += (h-b+b-f-g-h*i*m+k+k-k+j)%100;
                  c -= (d+b*m-k+a+k-i+d+j)%100;
               }
               
               switch( ++SWcnt[12]%4 )
               {

               case 1:
               {
                  n += (i-m-m+d*m-f*d-n*g-h*l*e+a)%100;
                  c -= (h-h+l+m+e-l-c-a*j*j-i)%100;
                  n -= (a+m+d-h-m-g)%100;
                  d += (m-e+c)%100;
               }
               break;

               case 2:
               {
                  c += (l+m-i*i)%100;
                  e -= (g-c)%100;
                  n -= (b-l-m*b-g+n+a+m-j*a*e)%100;
                  i += (a-l-g-c*m+i*l+a+d+b-n+e)%100;
                  k += (c-k*m+j-b)%100;
                  d += (k+l-e-n*h+h+j)%100;
               }
               break;

               case 3:
               {
                  a += (f+c+k+i-i*i+e+l-l-i+k-b+h)%100;
                  h += (b+e)%100;
                  a -= (e+n*f+e-g*i-d+f*j+f-a+h)%100;
                  d += (b-m+m+n+d*e-c+e-l*d*h-f-n)%100;
                  a += (b+c)%100;
               }
               break;

               default:
               {
                  a -= (f-i+i*d+h+b-n*a+l-g+e-k*m-n)%100;
                  e += (a*f+b-b+b+i+l*d+c+m+n)%100;
                  m -= (k-i+d)%100;
               }
               }

            }
            else
            {
               while( ++WHILEcnt[23]%5 )
               {
                  m  = (j-g-n+l-m*i+f)%100;
                  n -= (k-b)%100;
                  k += (m*h*i)%100;
                  h += (d+l-j-l+j-b+h*b*m)%100;
               }
               do
               {
                  g -= (d+b-l-i+g*a-b-i-n-h+n*h-c)%100;
                  j += (c+g)%100;
                  b -= (c-l-f+f+i)%100;
                  m += (m-l+g*b*d-a*d+b-j-a*i*g)%100;
                  d += (b*j-f*a-l)%100;
                  e -= (a+a+f*m-d)%100;
               } while( ++DOcnt[23]%5 );
               for( ; ++FORcnt[34]%5 ; )
               {
                  n -= (l*m*g)%100;
                  b -= (h*k-c-j+n-b-d-n-l-l-f+i+j-a)%100;
                  h -= (n+e*j*b-k-e-m-b-l-h-c*e-c)%100;
                  n -= (h-i+f+a*n)%100;
                  c -= (a-k*j+d+d*k+i+a+c)%100;
               }
               for( ; ++FORcnt[35]%5 ; )
               {
                  f += (i+d-g-g+e-e-h*m-l+g-m-l)%100;
                  f -= (e-n+b+e+b)%100;
                  n -= (d*g+k*m-h+h+m+a+b-l*e-a+c)%100;
               }
               if( ++IFEcnt[23]%2 )
               {
                  l += (j*i+d*d+d-m*k-f+h*f+n-k)%100;
                  n  = (g-h)%100;
                  g += (l-h+n-k+g)%100;
                  e += (j-k-m+h-d*g+b)%100;
               }
               else
               {
                  b -= (f-k+g-f-d)%100;
                  c -= (d+c+l+j+b+h-g+a*i)%100;
                  k -= (h-i*a-g-g-f+b*g*m-g)%100;
                  c += (d-n*d*c+l-l*j+l)%100;
                  j += (g*b-g-d+k-j-k*i*f)%100;
               }
            }
            f += (a*a+g+h-a)%100;
            g += (l*m-b+n*a-d)%100;
            b += (m+b-i*a-k-a+h)%100;
            d += (c-l)%100;
         }
         n += (g*d*d+l+b*h+k*n)%100;
         l -= (g*j+k+l+i*l+h+i+i+m+i-e)%100;
         d -= (l*h+l+l+j*g-m*m-e+b+f+g-i)%100;
         g -= (e+j-k*l+d-i)%100;
         d -= (d-a+l+h-n+m)%100;
      }
      break;

      case 2:
      {
         h -= (c+k+n+f-e+e-e+l+e+h+a+d-g+c)%100;
         d += (g-a)%100;
         g -= (a-d-h-b)%100;
         d -= (g*d)%100;
         n += (k-d+m*m*g+e+k+f+i)%100;
      }
      break;

      case 3:
      {
         m += (f+j-c-c-i-k+a)%100;
         n -= (h*b-a-h-e+f*m-i-d+l+i+a)%100;
         j += (h+i-h+c-l+i-b+i*n+j)%100;
         l -= (h*g-d)%100;
      }
      break;

      default:
      {
         d -= (d+f-e+c+a-g-g-c-d+i+e*h-i)%100;
         j -= (e*h-a*n-g-f-d-b+f*b)%100;
         n += (c-d+f-e+i)%100;
         e -= (a-h+h-d+j+c+f-g*m+e)%100;
         a -= (l-b-a+a+h-h*k*b-g*k-h+f+c)%100;
         k -= (b-l+f+d-l)%100;
      }
      }

      n += (c*g+j-m)%100;
      c += (a+l*g+a*a-a-m+h*l)%100;
      m -= (a-n-e*e*e-a+m*f-j+f*f-m+l)%100;
   }
   j += (g-b-d+n-f+b+a+n+k)%100;
   a += (e-c+h-l+i*e-h+i-b*f*h)%100;
   b -= (k-b-f)%100;
   c -= (g-e)%100;
   c -= (m+f-j+k-n-j)%100;
   j -= (f-f-n*f+k+g+d)%100;
   k += (d*b-h-a-k+d-m+i+a-m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F12(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[26]%2 )
   {
      n += (a+m-i+a+c*h+n+a+i+d)%100;
      e += (d*g-h-l-i-g+m)%100;
      e += (f-f+i+h-b-k-d-a)%100;
      l += (d+a)%100;
      e -= (c-d)%100;
      b += (a-d*k+g-g+m+n*g-e-a+e+i-i*n)%100;
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
                  k -= (i+f-a+c-c*e+b-h+b+a+h*n)%100;
                  f += (h-f-k+k+h-c+g-d*c+g+j-l-f-m)%100;
                  i -= (i-j+i-a-f-c+f*m)%100;
                  a += (k-k+c+a+h+b+e*i*l*h-d)%100;
                  e += (d*e+b)%100;
               }
               for( ; ++FORcnt[38]%5 ; )
               {
                  e -= (l-i+i*d+h+m-h+k+e*e-d-m+f-j)%100;
                  b += (g*d*n*k+m+j+f*g-h+k-k-j-m)%100;
                  i -= (d+a+i)%100;
               }
               if( ++IFEcnt[25]%2 )
               {
                  d -= (i+f-l+l-l-m-i+m-c*c*l*m-f+g)%100;
                  m -= (l+f+c-n-l-h-a-a-n+j+m-b*l)%100;
                  m -= (j*h-g+n)%100;
                  k += (e+c+k+d*i+f-c-g-e-g)%100;
               }
               else
               {
                  c  = (f-h)%100;
                  e += (f-k*k*k+h-k)%100;
                  g += (b+d-h-b*g)%100;
                  i += (k*c-m-i+m-b+h*n-c+k+n+n+e)%100;
                  n  = (h*i-j*i-a-e-k*e)%100;
               }
               while( ++WHILEcnt[25]%5 )
               {
                  i -= (n-g+d*k-m-f*f-i-c-c-d-m+a*h)%100;
                  j += (b-k)%100;
                  b -= (a-j-n*b-l+a-m+d+e*a+d)%100;
                  b -= (k+b-c)%100;
                  g -= (n+g+i)%100;
                  b -= (d+h+d+h-l-a-i)%100;
               }
               do
               {
                  c += (b+a*d)%100;
                  l  = (f-k-b*b+m+f)%100;
                  k -= (m-d-g-n-j+m)%100;
                  l += (e*d+k*m)%100;
                  i -= (m-l-h-h*a+a-b-j+k*h+n*m)%100;
               } while( ++DOcnt[26]%5 );
               j  = (j-b*c-m-b-a*f+e*c+g*j+k+f+i)%100;
            }
            for( ; ++FORcnt[40]%5 ; )
            {
               
               switch( ++SWcnt[13]%3 )
               {

               case 1:
               {
                  f -= (i+h)%100;
                  e  = (d+a)%100;
               }
               break;

               case 2:
               {
                  b += (c-a+m-a+m-j-h-n)%100;
                  k += (g+h*k-g+n*c*k-e-h-k-g+i*h-n)%100;
                  k += (b*h+i-m-e*h+k+e*j-k-j-d)%100;
                  g -= (f+b+b+l*b-i-a-f-a-a*k-b)%100;
                  h += (j-f-n+c+d-h*f+i-g+f-i-i)%100;
               }
               break;

               default:
               {
                  n -= (m+m*m-k+a-d)%100;
                  b += (n*e*c-e-j)%100;
                  m -= (g-i-n+l+j)%100;
                  c += (e*b-k+i*b+k+h*a-n-d)%100;
               }
               }

            }
            l += (h-a)%100;
            i += (i*b)%100;
         } while( ++DOcnt[25]%5 );
         d += (b*d*g-k-l-a+h)%100;
         k -= (i*c*n*j-l+b)%100;
         k -= (k-k+l)%100;
         k -= (n-c-f*i+g+g-f)%100;
      }
      i -= (b*b-d-l-a+m+d-l+d-f+n-d-a)%100;
      a += (e-i*c*b+a+a+b-g)%100;
      e -= (g-c-c+n+n*f-m+i-g+h+b+i)%100;
      l += (b+c+m-j+n*e+g-n*k+l-d+h)%100;
   }
   d  = (c-l+j+l+c+l+l-i+c+d+g)%100;
   a -= (g+e-c+d*j*m-b-b+l)%100;
   d += (l+i*m+c-e)%100;
   c -= (k*g)%100;
   c += (b-m+m-i-c+f-a*b)%100;
   l += (j*m*d-f*d)%100;
   e += (a+e)%100;
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
         m += (l+j*k-h*n-k+g*g-c*d-a-m)%100;
      }
      else
      {
         while( ++WHILEcnt[28]%5 )
         {
            do
            {
               for( ; ++FORcnt[41]%5 ; )
               {
                  d += (j*g-e-l+a-a)%100;
                  f += (i+i-j-e-e+g+n+m-a)%100;
                  c -= (j*i-b-l+i)%100;
                  c += (e+a+i*j-c*f*j+j*d*f-d-m)%100;
                  f -= (k-d)%100;
                  h -= (b+c+i-b+l-j-c)%100;
               }
               for( ; ++FORcnt[42]%5 ; )
               {
                  l += (a+l-e*a+h+a)%100;
                  n += (g-a+g-e+l-i-g-m*e*l*g)%100;
                  g  = (f+f*b+c*g+l+l-e-j-m-c-b+c*c)%100;
                  g += (n-h*k)%100;
                  a += (i-a+n-k-d-k*e+f)%100;
               }
               if( ++IFEcnt[27]%2 )
               {
                  i -= (h+b*l+j+h)%100;
                  l -= (a*a-c*m)%100;
                  a  = (c+g)%100;
                  n += (g+n*d)%100;
               }
               else
               {
                  b -= (c+k)%100;
                  c -= (h+l-g*g+k+h+i-i+e+k*a-e+i)%100;
                  j -= (c+h-a-e*f+a+l+c+i-j)%100;
                  m -= (a-k-j*n+e+n+h+f-b-m+l*n-l)%100;
                  e += (a-h)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  h  = (g-e+e+n)%100;
                  f -= (i*h*l)%100;
                  l += (m*j-f-m-a+b-g+g+d)%100;
                  i -= (j+n-k-h-k)%100;
                  f -= (l+g-b+c+i+h+f-k-g-i+f+j)%100;
                  j += (h+m-c)%100;
               }
            } while( ++DOcnt[27]%5 );
            do
            {
               if( ++IFcnt[20]%10 )
               {
                  h += (b-d-f-b+d)%100;
                  e  = (i-d-a+f+a-n-i+d-b)%100;
                  a -= (a*i)%100;
               }
               j -= (a+c+f-b-c-j+b-g-k*c-e)%100;
               for( ; ++FORcnt[43]%5 ; )
               {
                  m -= (e-l+g+e-n+a*k+i)%100;
                  k += (j-e-c*i+g-m+d-m+e-i+j*i-b+c)%100;
                  j += (g+l)%100;
                  j -= (d*k-j*f+i+k+g*k-l-i+j*a+c)%100;
                  i += (k+e+f+n-c-i*h*i+i+n*i+i)%100;
               }
               
               switch( ++SWcnt[14]%3 )
               {

               case 1:
               {
                  g -= (n*b-h)%100;
                  h -= (l-j-i*l+f*i+d-l-h+n+g+f+n*b)%100;
                  d += (l-b-b+c-c-h+d-b+n+j-f)%100;
                  e -= (a-d-f+i+i-c+k-b)%100;
               }
               break;

               case 2:
               {
                  g += (m+h-e)%100;
                  l -= (e*b+n-d*e-j-m+n+h)%100;
                  a += (a+m-i*n+i*n)%100;
                  i -= (g-n-l-f-h+a+e-d-a)%100;
                  k += (b-h*i+a-c-a+e-k+e-d+m+k)%100;
                  l += (n-l-e*n-e*b+m*d*b-c-j*d-f)%100;
               }
               break;

               default:
               {
                  h  = (g-h-i*m+c+g-l)%100;
                  k -= (a-k-c+m-b+f+i-j*j*n-b+k)%100;
                  f += (a-m+c+j)%100;
                  k += (n+d+i-l+c*f*l*g*g*c-l-f)%100;
                  e  = (f*a+c-b-c+m)%100;
               }
               }

               a -= (e+m*i+a)%100;
            } while( ++DOcnt[28]%5 );
            i -= (k+k)%100;
            l  = (e*i-l+b-g+k+g-k)%100;
            l -= (j-c-g*h+a+b-f-j+a*m-i+e-d-k)%100;
         }
         g -= (e*e-l-e+d*n-l+b)%100;
         f += (f+b-b-f-b-k+i+g+j+l+e+e)%100;
      }
      d += (f+f+l-b)%100;
      f += (g+g*g+j-g*j-i*l-f+l)%100;
      e += (b-n*a-l)%100;
      e += (n-a+n-b+d*n+j+m+d*c-h+l-f-d)%100;
   }
   h -= (n*k)%100;
   e += (l+e+d-m+d)%100;
   k -= (c*k-a*d-l+k+a-m)%100;
   n -= (f-l+i)%100;
   d += (c+n-n+k+h+f*l+g+e+d+m)%100;
   l += (i+l-e*j+g)%100;
   n += (m+n-k-a*e-a+j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F14(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[31]%2 )
   {
      k += (m+k+k-f+k+k-b+f-e+e*k+j)%100;
      c -= (i-c*f*h+n-f-m+j+k)%100;
      i  = (g-f-i+l+e-e-n+f+l-g+f-a*l*a)%100;
      b -= (i-a+h+b*i-k+l+i*g*j)%100;
      e -= (i+m+h-d-b+e+j-m+l+g-h*e+n)%100;
      e += (d*d-a+n+c-k+i-h-j)%100;
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
                  l  = (i+k+j-j)%100;
                  i -= (g+i-m*h+e)%100;
                  a += (d+e+n*g*g-a+m*c+g)%100;
                  b += (l*g*b*n+n+a-e+a)%100;
                  c += (k*e*l+m+f+d+f*i+h)%100;
               }
               for( ; ++FORcnt[44]%5 ; )
               {
                  g  = (h+j-e-g-a+m+b+c*a-i-c-m+h+b)%100;
                  j += (l+k)%100;
                  c -= (n+k+a+l+d)%100;
               }
               if( ++IFEcnt[29]%2 )
               {
                  n -= (k+h*b-a+n+g+e)%100;
                  d -= (l+i)%100;
                  n += (a+k*a)%100;
                  f  = (g-f*k-l-l+k+j-k)%100;
               }
               else
               {
                  a -= (n+d*i-h-c+d-d)%100;
                  m += (b+k-c+b+c*i-m)%100;
                  k -= (e*d+m-d+g*g-i+a*d-a-i+m-h+l)%100;
                  f += (k+a-h+f+b-c+j-c-f-i)%100;
                  a += (b-j*i+f*c-i-c*c+m-k+j*i-i)%100;
               }
               while( ++WHILEcnt[29]%5 )
               {
                  n -= (i+n+k+a+e+e-i+e+h-j)%100;
                  k += (b+b*m-l*a*c-i-g-m)%100;
                  b -= (k-a+i+j-b-l-k*l)%100;
                  c -= (k-k-f-b+i+g-i)%100;
                  n -= (i-d-k+n-i*m)%100;
                  e -= (c+d-n+n+a-f+k+i+e+j+k-i)%100;
               }
               do
               {
                  h += (a-a+k+l+k-c-i-j+b+h+e-h)%100;
                  l -= (k-h)%100;
                  d -= (f+j-i+k-l+l*b*i-b-c-b+a+n)%100;
                  d -= (c*b-k-k*d+a+n+n-f-n)%100;
                  k += (m+g+c-i+f-i+m-m+c-a+f)%100;
               } while( ++DOcnt[30]%5 );
               k -= (d+l-g-l-h-j+a-m-m)%100;
            }
            for( ; ++FORcnt[46]%5 ; )
            {
               
               switch( ++SWcnt[15]%3 )
               {

               case 1:
               {
                  a -= (l+e-b-a+d*f-f+f-h-h*k)%100;
                  l -= (l*h+m+h-j)%100;
                  l -= (i-i-g)%100;
                  m -= (f+h*l+j-f+f+g-g-b+i+d*m)%100;
               }
               break;

               case 2:
               {
                  j  = (e+i-a)%100;
                  c += (d-n-e-l-n*k+k+a*l)%100;
                  c -= (c-m+b+a-n-a+c-f)%100;
                  g  = (n+l*m+n-n*g+d-g*a-d-d+d-i)%100;
                  b += (k+h+e*h*c-f+m+j-l-g)%100;
                  i += (g*b*n*g+g)%100;
               }
               break;

               default:
               {
                  k += (f+j-l-e+m)%100;
                  j -= (c-l+h+f-n-i-m*g-g)%100;
                  e += (i+i+a+a+j-a-m*b-e-f)%100;
                  l -= (e+e+j+b+d*k-k+c-n+i*k+e*b)%100;
                  h -= (m-l)%100;
               }
               }

               if( ++IFcnt[23]%10 )
               {
                  b += (j-m*n-i*i+c+k+e-e)%100;
                  k -= (l-k*m+d-a*a-k)%100;
                  c -= (a*f+m-d)%100;
               }
               if( ++IFEcnt[30]%2 )
               {
                  a += (l-c+e)%100;
                  l  = (d*k+d*f-b-d*i-j-h)%100;
                  m += (l-d*l-k-l+h+a*g-n+m-j-n+l-l)%100;
                  m -= (l-g*i-f-l-d-j-a*h-h-j+f)%100;
               }
               else
               {
                  b += (c+e-g*k-l+h+a+b*b*m+l+n+e*f)%100;
                  a += (e*d-h+k-a+k-e*h)%100;
                  f += (b-b+n+l+a)%100;
                  d += (f-d+m-e*f+c)%100;
                  c -= (k+a-l+a-g)%100;
               }
               f += (a-n+b+n-m-b+k-a-c+j-m+c)%100;
               a += (a+j+m+h+n+d+b-i-a-k*n-j)%100;
            }
            d -= (k+j-f-h+e+c*f-f+h-i-h+m-b*n)%100;
            m -= (b-e+i-h*c-e*m+d*j*e)%100;
         } while( ++DOcnt[29]%5 );
         b += (d-a-l+n*f-c-i)%100;
         a += (b-h+m-a+n-f+l+j-h-e)%100;
         d  = (b-m+f+c+d*n+m*k-n+l+n+e)%100;
         h -= (e+n*b-e+h)%100;
      }
      k += (f+d*e+i+n)%100;
   }
   m += (m*a)%100;
   h -= (l-k)%100;
   j += (n*n*a-a-g-k+c*k+a-n-d)%100;
   i  = (b*a)%100;
   i -= (n*a-b-m)%100;
   b -= (a*e-i+g*c*a)%100;
   b += (a*m-l+m-c-f-d-c-f+i)%100;
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
                  h += (j+k*e*j+j+l+l-d-c)%100;
                  j -= (h-e*h*b-j+m+h+i+a-m-f-e*k)%100;
                  f  = (f-n-k-j+i+a-m+b*n)%100;
                  l -= (f-m-l-h+a+m-c*b+j)%100;
                  k -= (b-f-g-a)%100;
                  e += (l+m*g-n+d+c+c+a-k*l-e+m*k)%100;
               }
               else
               {
                  h += (b+j*l+e-l-c-d+e*c+a)%100;
                  b += (k-l*c+e+g)%100;
                  k -= (b*b-f)%100;
                  l  = (f*e)%100;
               }
               while( ++WHILEcnt[31]%5 )
               {
                  l -= (d+a-e+c-a-e-a*d-k*n+k*f*m)%100;
                  k += (j+l*j-i+e+m)%100;
                  k -= (k-k-i*c+f+n-j+c+a+g)%100;
                  k += (a+b-g+g-d-m-a+a+f+g*a-d-n)%100;
                  a -= (j-l+c-j+e)%100;
               }
               do
               {
                  k -= (g-f*f*h-k+h-j)%100;
                  g += (h*c+f*f*m+a-h+k+n+a+e)%100;
                  n += (b-n+d-d-m)%100;
               } while( ++DOcnt[32]%5 );
               if( ++IFcnt[24]%10 )
               {
                  i -= (k+l+j*a*k-f*l+m-h-m)%100;
                  k += (j+i+n*n+e-m-c+d-f-e-m)%100;
                  h += (m*a-f+l-l-f+g+h+i+n*f-n)%100;
                  b -= (b+n+b-e-d*l)%100;
                  i += (h+i*f+l+f-f-k+l+b*h-m)%100;
               }
               e -= (d-k-n)%100;
            }
            for( ; ++FORcnt[48]%5 ; )
            {
               
               switch( ++SWcnt[16]%3 )
               {

               case 1:
               {
                  k -= (n-d+b+h-k*i+i+b-i+n+a-k+d)%100;
                  j -= (i+f+c+f-h+e+j-d-n+n)%100;
                  b += (i-h+m-c-l-k+k-d-m+b*b)%100;
                  g += (m+l*j-n+i+a+k+e+b+b+b+k-n)%100;
                  c -= (l*a-g+b-e+h+d*i*a*l+i-j)%100;
                  g  = (k-i)%100;
               }
               break;

               case 2:
               {
                  f -= (m+k-l+a-e+i+a-c+l+n)%100;
                  i += (f-e-l)%100;
                  m += (j-c+k+e*b*b+k)%100;
                  a -= (e*m)%100;
                  h += (f-f*m+f)%100;
               }
               break;

               default:
               {
                  l -= (n*m*k*n+a-g+h*g*d*f)%100;
                  m += (g+k+d+g-m-a+n+l-e-k-f+g+b)%100;
                  k -= (d+b*b-m-i+h-l*n-j-i-k*h)%100;
                  j -= (b-l*i+a+c-d-f+i+d-h+l)%100;
                  b += (a-j-m+e-m*d+h+m)%100;
               }
               }

               if( ++IFEcnt[33]%2 )
               {
                  g += (e+b-m+g+i*h*k)%100;
                  a -= (i-m-e-d-e-h-a+j*f-c*k+g)%100;
                  g += (g+j+b-n+n*d*i+m+a*l-f-f-m)%100;
                  e -= (j+a*d+j-l-g*g+f+f+c)%100;
                  e -= (k+h-j+e)%100;
                  l -= (a*m*b+n-n+b-k-j+d+i+i+c+a-i)%100;
               }
               else
               {
                  j -= (a-k-i-e+n+c*k*j*g+j-m*i*k)%100;
                  b -= (i+n-b+k-h*i)%100;
                  a += (b-l+b+b)%100;
                  j += (c+b-m-c*j+d-j)%100;
               }
               while( ++WHILEcnt[32]%5 )
               {
                  g -= (d-k-d-a+b+l+c)%100;
                  h -= (a+m)%100;
                  j += (e*l)%100;
                  e += (j*n*f-l-e*m+a+n+a+b)%100;
                  d += (j-d+a*j*i-g+b-m+g)%100;
               }
               e -= (h+j-n+f-l*g+h+i+f*k)%100;
            }
         }
      } while( ++DOcnt[31]%5 );
      a += (e-l*h-n+j-m-a*n+a-g+c-b+l)%100;
      b -= (n*i+i*g-m+b*f*l)%100;
      h  = (f-l+d-j+i-n*m+d)%100;
      k -= (l+n*j*m-i)%100;
   }
   h += (a+n+f)%100;
   e += (i+l-g+j-h+l+n+l)%100;
   j -= (f-f-h-l-j+f*h-l+i-c-m)%100;
   m -= (g-e-g+g*d*i+l-b+a-g-e*d-e-k)%100;
   l += (i+h*l-i+i-l+n-h-a*c)%100;
   e -= (d-g-m-a+a-d*i)%100;
   g += (c+j+n+f+e-n+g+h+l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F16(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      for( ; ++FORcnt[52]%5 ; )
      {
         if( ++IFcnt[26]%10 )
         {
            for( ; ++FORcnt[51]%5 ; )
            {
               if( ++IFEcnt[34]%2 )
               {
                  b -= (a*k+i-h)%100;
               }
               else
               {
                  m += (j+b-e+j+n-f+d+b-k+g-l*n+f*g)%100;
                  k += (b*h)%100;
                  l  = (l-h+m*n*n+a*c-k-d*i-e-m-g)%100;
                  f += (f-i+b*d-k)%100;
                  i += (i+k+e*d*f)%100;
               }
               while( ++WHILEcnt[34]%5 )
               {
                  k += (c+m-h)%100;
                  i -= (d+n-g-l+h*c+e-l+a)%100;
               }
               do
               {
                  a -= (a*d-l-d+e-m)%100;
                  n -= (c-k)%100;
                  c += (b-i+a+j+e*k*h)%100;
                  k -= (m*c+k-h-n)%100;
                  m += (f*i*c-j*g*m)%100;
               } while( ++DOcnt[34]%5 );
               m  = (g*g+g-b)%100;
               for( ; ++FORcnt[50]%5 ; )
               {
                  d  = (k-f+j-a)%100;
                  c -= (b+d-i*j+h)%100;
                  j += (d*n)%100;
                  d += (e-h-c+h+h)%100;
               }
               
               switch( ++SWcnt[17]%4 )
               {

               case 1:
               {
                  d -= (i+h)%100;
                  k  = (g+a+e-d+m-i*b)%100;
                  f += (c-g+l-b-c-n-l-g+n-i+e+d*l*m)%100;
                  f  = (a-d)%100;
                  h  = (b+g+b-i-b+i)%100;
                  h -= (h+m*l*h+k+j+k+d-g)%100;
               }
               break;

               case 2:
               {
                  n -= (a-d*d*g+f+e+c-k-l-e*c-e*a-g)%100;
                  h += (l*c*e+n+e*l*h*m-k-b*a-d+m)%100;
                  h -= (h+e-c-a-i+g)%100;
                  a -= (g-l-i-l-m*a+h+a)%100;
                  n -= (e+h-h+i+k+k)%100;
               }
               break;

               case 3:
               {
                  k += (l-n*c+g)%100;
                  j -= (c-h+c-l+n-m*k+n+b*m+g-j+i)%100;
                  n += (g+f+n+n*a+e+n*a-h-a+g*h+d-e)%100;
               }
               break;

               default:
               {
                  m += (m*l-d+k+d)%100;
                  c -= (b-e+h)%100;
                  b += (i-m+h-i-k-f*n+k+d+a)%100;
                  b -= (i+g+e)%100;
                  l += (e-m+d*f)%100;
               }
               }

            }
            if( ++IFcnt[25]%10 )
            {
               if( ++IFEcnt[35]%2 )
               {
                  i -= (f+j*h*i+d+j-g-f-d-f+n)%100;
                  g += (f-i-c-m-e-d-d-n+j-n-n)%100;
                  i -= (l-m+n+a-n)%100;
                  b += (c-d)%100;
                  k += (i*i*c*i-k-n)%100;
               }
               else
               {
                  l -= (j*i*i-k-b+f-b*g-b+g*n+h*i)%100;
                  i -= (n+d-j)%100;
                  i  = (m*d-c+c*l-n+l-a*f+n+e)%100;
                  f += (l+g+f+d*n+b-i)%100;
                  g -= (i-h)%100;
                  b += (k+i-c-h*f+m-l+g+g*h+a-j)%100;
               }
               while( ++WHILEcnt[35]%5 )
               {
                  m -= (i+b*d+j+g+e+a-f-e-f-f+b)%100;
                  c -= (j+f*j+l-h-n+g-c+e-d+h+d+j)%100;
                  k += (h-l*d-l+g)%100;
                  l += (a-d+h-n*i-i+c-h+k-l-c)%100;
                  j -= (l+h-k*g-f-l+l)%100;
               }
               do
               {
                  f -= (h-l-c-c*l-k-k+i-d*h)%100;
                  e += (a+d+h+f+k+f+j+c-g)%100;
                  k -= (a+e)%100;
                  f  = (m+m*e-f*b+i+d-j-b)%100;
               } while( ++DOcnt[35]%5 );
               e -= (g+j-f+i-l-d*j+i+n-g-i+c+n+k)%100;
            }
            j += (e+b+l-f+f+c-k-e-a+l+l+j)%100;
            b  = (b-h-n+a+i+h-h)%100;
         }
         e -= (i-h+m-m*h*d+h)%100;
         k -= (k+g+c)%100;
         m -= (i-m*i*h-c*m-a*h+g)%100;
         i += (i*d-c*h-l+k-k-c+j)%100;
      }
      f -= (m+n-h)%100;
      f -= (k+b+c*g+m-l-h-e-i)%100;
   } while( ++DOcnt[33]%5 );
   n -= (g+l-f-e*j-f-f+k)%100;
   c += (g*b*l-h)%100;
   c  = (l+n-m+f+d-a-k)%100;
   n += (m-a-l+l-l+m+d)%100;
   e -= (g-l-n-k-k-m-c+m-a-m)%100;
   e += (e+e+d+e+a+j+b*l-c+n+l+n)%100;
   n += (l-f*a+a-a+n*b-g+a-e)%100;
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
            f += (c-j+i+l+a-i*f+c-h*k*j)%100;
            k  = (f+c+k+f-b+l+j+m-f+d)%100;
            a -= (k+n-l-c+h+j+g-f-m)%100;
            l += (n+n+g+f+j-g*n)%100;
            g += (d+h*j-i*f+i)%100;
            a -= (a+a-k+k-e+h)%100;
         }
         else
         {
            while( ++WHILEcnt[36]%5 )
            {
               do
               {
                  e  = (h+d*f+g+i+e+c-f*e+b-m-i*l+e)%100;
                  l += (d+j+m+m+n-n-i+b*g)%100;
                  e -= (c-b+g+b+c+e-m-h*a-b+h)%100;
                  d -= (m*a+f-i+b+i+h+n*b-e-d)%100;
               } while( ++DOcnt[36]%5 );
               if( ++IFcnt[27]%10 )
               {
                  a += (g-i+l-j-l+n-l+e-n)%100;
                  g += (n+c+b*h+m)%100;
                  a -= (j+i*f-h+j+i)%100;
                  i -= (e-b*a-b+m+b+c+b-c+n+b-i-a-d)%100;
                  i -= (h*a-b)%100;
                  k  = (j+h-e+a-m*a-e-d)%100;
               }
               n += (b-a+f+i+h+d+f-h+b+f-g)%100;
               for( ; ++FORcnt[53]%5 ; )
               {
                  h += (g+f+d+b*a+i+h-m-j-i-j*i)%100;
                  e += (f+j-i-k*e+n-c)%100;
                  i += (d-l+h+a-l*e+n+i-e-j+j+i-a-m)%100;
                  c += (d*n*b+k*m-j*k-a+a+a+c)%100;
                  a += (i-a*i*e-k-l*h*l)%100;
               }
               
               switch( ++SWcnt[18]%4 )
               {

               case 1:
               {
                  k -= (e-f-j-b+e)%100;
               }
               break;

               case 2:
               {
                  i -= (c-g-c-i-l-b*a-m+e+i-g)%100;
                  n -= (j-f-d-i)%100;
               }
               break;

               case 3:
               {
                  n += (l-d-g+i+m*i*a)%100;
                  n += (b*h*g+k+i+i*c-d-k*m+c*e)%100;
                  f  = (n+n+f+g-d-l)%100;
                  g  = (b*e-a+l-k-f-j-d-j+l+k-f*h)%100;
                  n -= (e*m-j+c+i+n-e*l-b-e+n)%100;
               }
               break;

               default:
               {
                  h -= (k+n+l-l)%100;
                  c += (k-c-e-d)%100;
                  g += (d-c-j-b+c)%100;
                  l += (k*d+l)%100;
               }
               }

            }
            if( ++IFEcnt[37]%2 )
            {
               n += (d*f-b+m-b+j-m+n+g-l+e+d+k-j)%100;
               k += (b+i+d*l+a+h-k+e-e+j*m)%100;
               m += (a-g+f)%100;
               l += (f+d-g+k)%100;
            }
            else
            {
               while( ++WHILEcnt[37]%5 )
               {
                  g  = (n-b+n-f)%100;
                  d += (c-c-k-b)%100;
                  k -= (l+h)%100;
                  d += (b*c)%100;
                  d -= (a+l*a*m+n+a)%100;
               }
               do
               {
                  g  = (g*n)%100;
                  i -= (k-e)%100;
                  n += (d+k*n+l-a+g-d*d+j*b*n+b-a+k)%100;
               } while( ++DOcnt[37]%5 );
               for( ; ++FORcnt[54]%5 ; )
               {
                  l -= (g*a+e+d+a-e-k)%100;
                  c += (j-f+n+m+h+k+k-d-d+c+h)%100;
                  a -= (e*l)%100;
                  m += (m+e-i+d+a)%100;
                  k += (l+k*f+k+j-b-l+e-l-h)%100;
               }
               if( ++IFcnt[28]%10 )
               {
                  c -= (e+j)%100;
                  h -= (f-m-c+a)%100;
                  d += (m-m+m-l-e-i-e-b+h*i-e+n)%100;
                  e += (k+k*d+c+b-m-l+a)%100;
               }
               for( ; ++FORcnt[55]%5 ; )
               {
                  n -= (c-b-d*c-i+m+k)%100;
                  k -= (i*a)%100;
                  e  = (h+k-l-j)%100;
                  l += (f+c-i-d+i-e-m)%100;
                  i  = (m+b*i-h-h+h*c-b*l)%100;
                  a += (h*c*c-m+b-j+f-g-l+m*f*j+a+j)%100;
               }
               if( ++IFEcnt[36]%2 )
               {
                  b -= (h+h+g-m-d-f+j)%100;
                  i -= (h+k)%100;
                  i += (k-c+d+m-b-d*j-b+b)%100;
                  l -= (i+g)%100;
                  m += (a+l+n-e+b+h*i*c*n-a*c-c*i*b)%100;
               }
               else
               {
                  l -= (g-k)%100;
                  n += (m-d-b+g-l)%100;
                  d -= (c+k*d+f*b-g*m+m*e+e)%100;
                  i += (j+e-d+i*a+a-j+h+c)%100;
                  m += (m-g*b)%100;
               }
            }
            k -= (c*j*j*k-k+j-f)%100;
         }
         e += (b-h-b-c-c)%100;
         f -= (j+j*b-j*k+a-n+g+j+d)%100;
         j -= (k-k+b+k-i+m+d-j*c)%100;
         i += (c+h*e-l+a+l)%100;
      }
      k += (k-k*f)%100;
      l -= (c-f)%100;
      l += (e+c-m-e-n+n+h-b*b-c)%100;
      h += (j+b+c*j+n+c*e-f+f-c+l)%100;
      h -= (j*e-b-d-a+b-a*d-g)%100;
   }
   a -= (c*m*c+l-i-n*n-b+c+f)%100;
   c -= (c+d+e+i+d*h+k*k)%100;
   i += (e-c-j-h+d+g+b*d-b-a+j*k+c*m)%100;
   m += (a*d-f-m-b-b-h-c)%100;
   h += (l-h+n+k-k+m+d-b*h*n-c+a+e)%100;
   f -= (h-l-j-b+l+h+i-l-c-j+j)%100;
   a -= (b-m*a+m-c-m+a-j-b-g)%100;
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
         h -= (k-f*n+f)%100;
         for( ; ++FORcnt[60]%5 ; )
         {
            
            switch( ++SWcnt[19]%3 )
            {

            case 1:
            {
               if( ++IFcnt[29]%10 )
               {
                  h -= (k-f+l+g-h-a+i-l+a+b*f*g-k)%100;
                  n -= (g+l*n+a-f-n-e*g*b+l)%100;
                  f -= (f-k*g)%100;
                  j -= (f-m)%100;
                  h -= (e+j+e*g)%100;
                  j  = (l+f-b-b*a)%100;
               }
               if( ++IFEcnt[39]%2 )
               {
                  e += (g-g*e-n-l-b*a-j*g+h)%100;
               }
               else
               {
                  k += (k*f+c-d+i-n)%100;
                  n  = (f*m*l+c+m+l+c+b-b)%100;
                  g -= (b+i)%100;
                  e += (k+b+l+g+e-c+g-d)%100;
                  m += (i-h+e+k+c-c-m+e+m+g+f-n+j)%100;
               }
               while( ++WHILEcnt[38]%5 )
               {
                  n -= (e*l)%100;
                  k -= (a-g-a+m-l+n*k-f)%100;
               }
               do
               {
                  g -= (i+e+m+c+h*k+n+m*j-i+n)%100;
                  d -= (b+m-h-e-g)%100;
                  i -= (d-j*a-c+k-f*f-i+j-n+e)%100;
                  e -= (e*j-j*a+c+c+g+i-l-g)%100;
                  g -= (j-h)%100;
               } while( ++DOcnt[39]%5 );
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[58]%5 ; )
               {
                  i -= (c-l+g*g*e+a*a+f-e*l+a+h+e-h)%100;
                  l -= (e-i-a+l-b+n+e+l-d)%100;
                  n += (n+f+l-j+b-i)%100;
                  n -= (h*c+b-h-g*j+e+b-a)%100;
                  h += (b+k+g+k+c*g*f+f-g+h+f+b-m)%100;
                  f += (i*n-e+f-j+k)%100;
               }
               for( ; ++FORcnt[59]%5 ; )
               {
                  m -= (m+i*h-h+f*k)%100;
                  k += (m+l+k+a+a+d+h-i)%100;
                  n  = (d+j-i-m)%100;
                  g -= (e+d+e-d+n*d+e+g)%100;
                  i -= (n+k-f*m)%100;
               }
               if( ++IFEcnt[40]%2 )
               {
                  b -= (l*f+h+h*n+l*j+c-f-f+m*e+b*h)%100;
                  b -= (g-l-m-e+k)%100;
                  c += (c+h+m+a+c+j*k-a-l-a)%100;
                  k -= (b*c+i-d+k*l*b+c)%100;
                  c -= (g*a-e*l*k+e)%100;
               }
               else
               {
                  j -= (m*e-k+m-d*i-h-c-e-n-g-b*n)%100;
                  b -= (l+l)%100;
                  d += (e-j+e-m*i+l-g-f-k+l-l-n)%100;
               }
               while( ++WHILEcnt[39]%5 )
               {
                  i -= (c-m+g-k-g+n)%100;
                  e -= (l+e-a)%100;
                  m -= (l+e+d-c+l-b+l)%100;
                  c -= (h-j-g-m+g)%100;
               }
            }
            break;

            default:
            {
               b -= (d*j-n-m-f-b*a+m)%100;
               h += (b+n-c*c-g-l*l-b-k-d*g)%100;
               g -= (c+l*n+k*c-b+k+f+k+m+a+n)%100;
               n -= (n+l+n-e-m+a*f-k)%100;
               h += (n*m-m-a-g-m-h-c)%100;
               m -= (e+a+j+h+b-n)%100;
            }
            }

            k += (a+k+b*f+e)%100;
            d -= (h+d-l*c-j*d+i-d)%100;
            h -= (i*f)%100;
            b -= (k*f*n-a-j-d-l-n-l*h+f-f)%100;
         }
         i -= (d+i+i-g*m+b+l)%100;
      } while( ++DOcnt[38]%5 );
      f += (n*d-e-f+d+k*k-l+c+i+j-d-c-m)%100;
      d += (k-m+m-l+d-c+g-h+e-l-i+d-a*n)%100;
      h -= (m+n)%100;
      n -= (l+h-i+h)%100;
   }
   l += (d-i-c*k*m-b*g-i*k-n*a-a-n)%100;
   a += (m-b-j+m-i)%100;
   h -= (e+n+l+j-g*g+k-h-c-b-l)%100;
   f -= (n*k-c+d-k)%100;
   n += (a+m*n+c+e*i-i+j)%100;
   d += (a+l+c-f+d+n-d+h+m)%100;
   j -= (c-g*a+m-j-h-n-g)%100;
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
         l  = (a+n)%100;
         for( ; ++FORcnt[64]%5 ; )
         {
            
            switch( ++SWcnt[20]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[41]%2 )
               {
                  b += (h-m-l*d*g*m-i*g+f-d-a-c+l)%100;
                  h -= (e+c+j+g-e-j)%100;
                  e += (a+l-j+c+b+n+f-b+e+k-n+h+i+b)%100;
               }
               else
               {
                  l -= (h+e*c+b*l*m)%100;
                  k += (g+c)%100;
                  f -= (c*i*e*i-l*h+n-n-n-d-i+c-d)%100;
                  i -= (g+i)%100;
                  k += (c-j-d+l+e-b+j+b-j+l+d)%100;
               }
               while( ++WHILEcnt[41]%5 )
               {
                  k -= (d-e)%100;
                  e -= (l-c-g*j+h-m+e+l+e+c-d-n*h)%100;
                  n += (j-l+i+c-k-d-e-k-b+g)%100;
                  n += (g-b)%100;
                  j += (f+d)%100;
               }
               do
               {
                  a -= (n*e+i+b+b)%100;
                  b -= (l-g-d*d-g-g*m)%100;
                  b += (c-e+i-i+j-d-n+b+b+l-n)%100;
                  b += (f+l-m*g+e*k)%100;
               } while( ++DOcnt[41]%5 );
               for( ; ++FORcnt[61]%5 ; )
               {
                  l -= (k-a-e-a-k-b-n-d-h)%100;
                  d -= (b+g*e)%100;
                  k -= (j-b+k*j+f-c*h)%100;
                  b -= (h+d-n-e-m-d+i-b+h-h*j+j+b)%100;
                  b -= (b+f-k+l+m+h+k+n*n-i*i+h)%100;
                  a -= (j+f-j-m+h-f-l+f+a+m-a+c*g)%100;
               }
               if( ++IFcnt[30]%10 )
               {
                  i -= (j+i-h)%100;
                  b += (h+b*b+g-k)%100;
                  j -= (k+f+n-f+n-c)%100;
                  l += (e-b+i+d+m*l+k*f+n+l-j+a)%100;
                  d += (b+c*b-l+n-m-c+g-f-c-k)%100;
               }
               for( ; ++FORcnt[62]%5 ; )
               {
                  c -= (k+c-h*e+m+b*b-g-n-l+m)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[42]%2 )
               {
                  b += (l-e*b*n)%100;
                  g -= (k+i*d+n-h-j-n+h-i)%100;
                  c -= (g+m+i-h-m+g-e*n-i*k)%100;
                  k += (a+d+l-l*b+c-c+b+a)%100;
               }
               else
               {
                  g  = (f+n+j+g+f)%100;
                  n  = (f+d*g-l-l*h-n-i+m+i-h)%100;
                  m -= (a*n)%100;
                  i -= (i+h-b*e-g-c+j-g+f-h-i+f)%100;
                  i += (j+b-g+l-f-f+k+c+g)%100;
               }
               while( ++WHILEcnt[42]%5 )
               {
                  l += (j+f-j-a-e*b*j-d*g-d-h+n)%100;
                  i += (e+a+c+b)%100;
                  g -= (i-d-a+n+l-j+g+i+k+a-e)%100;
                  m -= (c*g+a-h*h-c)%100;
                  h -= (n*g*e+f+l-d-k-n+f)%100;
                  h += (f*f-i+e+n*k+l-j-k+h-a-i+e)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  f -= (l+d-b+b*h*j-j+h-h+d-b+b)%100;
                  c -= (g+i+i+l-l-f+k+b)%100;
                  k += (i-m)%100;
               } while( ++DOcnt[42]%5 );
               l += (k+f-g-l-n*f+m-i*d)%100;
               for( ; ++FORcnt[63]%5 ; )
               {
                  a -= (b*m+k*n+l-n*m*e-l*a*k-g)%100;
                  d += (j*l+n+n-i*c-f)%100;
                  n += (j+i+b+h-f)%100;
                  g -= (n+m+n+n+a*i-c+c-c+i*l)%100;
                  e -= (l-c+j+c)%100;
               }
               k += (e-h-a)%100;
               l += (c*a-i-e-g-n-l-b-a-c-l+g-c+c)%100;
            }
            }

            k  = (k-n+m-a-m+l+l-f+l+i-m)%100;
            e += (b-m*e+b+k-e+j-a)%100;
            j -= (b*g)%100;
         }
         i += (c-i+c-n+h+k+i*f*k*d-m-b)%100;
         m += (m+i+j*a+i+k*b*a+f-b+h*a+l+d)%100;
         l -= (e-g*b*e-e-n-f-k-j+k)%100;
      }
      a -= (h-g-k-l+n-e)%100;
      f += (l-i-b+n-l-g)%100;
      c -= (n+e*i-g*h+a-n-j+j-i-m+m+b+i)%100;
      e -= (e-b)%100;
   } while( ++DOcnt[40]%5 );
   m += (e*m-f+m)%100;
   b += (d+a*i-b+d-n+c-f-d)%100;
   g -= (j-i+l-c*n+h*i-h)%100;
   e += (c*c-m*l+f-h*b-e-e+l+k-h)%100;
   g += (c*g)%100;
   i += (h-j-l-j+i+b-a+e-l-f-i+h*c-c)%100;
   g += (n-b+i+g*b-i-m+e*d*e-g*e)%100;
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
            g += (f*g*f+g+e-j+c-n-f+l*i+k)%100;
            m  = (l*h*i)%100;
            i += (a*n-g-a*f+l+g-f*c+a*e-b+j-m)%100;
            k += (m+g+a-k)%100;
            g -= (n*f*e-j)%100;
         }
         else
         {
            while( ++WHILEcnt[44]%5 )
            {
               do
               {
                  g -= (e*c+n+a)%100;
                  g += (g-e-l*k-d*i)%100;
                  i -= (e-b+f+b-n-n)%100;
                  a += (c+j-d+a+j+b-j*i)%100;
               } while( ++DOcnt[43]%5 );
               for( ; ++FORcnt[65]%5 ; )
               {
                  b += (n*m-i-c*h-i+b+a)%100;
                  e += (i*k+g-j*n+f-b*c)%100;
                  h += (i*h-b-e+g-k-i-i*d)%100;
                  a -= (h-m*h-d+b)%100;
                  h -= (j-i-l-i-c-d*g+j+c-i-b-k*k)%100;
                  e += (i-g+h*g*m-g+i*k)%100;
               }
               for( ; ++FORcnt[66]%5 ; )
               {
                  f += (e+b*f+e+h+e)%100;
                  k  = (n+j)%100;
                  h += (m+g*d-f+l+a-n+n*e+j+d)%100;
                  h -= (e+l-h*i+k+g+j-e*j+f-h-j-d-j)%100;
                  b += (h+d*n+l-k+a*m-g+c-f)%100;
               }
               if( ++IFEcnt[43]%2 )
               {
                  f += (e-j-l-e+g+g-h*n+e-h-d+k-j)%100;
                  g += (m+n-i-n+n+l)%100;
                  a += (i+b-h-e*h)%100;
                  b -= (g*h)%100;
                  h -= (j-l+e-g+g-a-d+h-e+g+j)%100;
               }
               else
               {
                  n += (i*a-b-l-f-m)%100;
                  n -= (j+i-a*l)%100;
                  m += (h*f-n-a-h+c*n+l)%100;
               }
               while( ++WHILEcnt[43]%5 )
               {
                  k -= (l+l-k-f-k*c+i-h*m+g+n*c*j)%100;
                  d -= (b+l+e-m-l*l+a+a+c-b-g+d)%100;
                  g  = (d*n+a+k)%100;
                  g += (f-m*a-i+k-g)%100;
               }
            }
            do
            {
               if( ++IFcnt[32]%10 )
               {
                  f  = (c+d-b+h-l-h*h-j*g+j+d)%100;
                  n += (f-g-i*n-f)%100;
                  c += (m-f+e+h+i+j-l)%100;
                  m -= (i-l+g-l)%100;
                  i += (c-n+n-h-n)%100;
               }
               f += (d+f-k+g*b)%100;
               for( ; ++FORcnt[67]%5 ; )
               {
                  a -= (g-e+k-c+d-e-c*b+f+l-f)%100;
               }
               
               switch( ++SWcnt[22]%4 )
               {

               case 1:
               {
                  m += (g*l+e)%100;
                  a -= (e-c+n+l*a+j+e+l*l+d+f-m+n+f)%100;
               }
               break;

               case 2:
               {
                  k += (h-l+b*b*i+f+k*l+n)%100;
                  f -= (d-j+n*n)%100;
                  c += (n-d+e-h+l+m+a-g*e-f+j-b)%100;
                  j += (i*f-h-m*a+a*g*e+l-g*g+e+h-l)%100;
                  k -= (a*b-j*g+n-m-j)%100;
               }
               break;

               case 3:
               {
                  e -= (a-j+e+c-d*n+e+h-e+l-j*b-c+j)%100;
                  e += (f+f-b+i-a-g*n)%100;
                  h -= (n+n)%100;
                  h -= (f+d-j+m+m-f*c+m-l-f+g)%100;
               }
               break;

               default:
               {
                  n -= (n+c)%100;
                  l -= (n+m-g*j+i+b+i*l-m*i*c-d)%100;
                  l -= (f-g*i-g-h+g-c+n-a+h-f+b*a-a)%100;
                  n -= (k*b-f+g-n-j)%100;
                  k += (h-c)%100;
                  b -= (l+m*e-j)%100;
               }
               }

               h -= (i+f)%100;
               e += (c-f)%100;
            } while( ++DOcnt[44]%5 );
            m += (f-j-m*h)%100;
            f += (a*d+e*g+h-h+a+b-i+n-k-e-c*f)%100;
            c -= (d*n)%100;
         }
         j += (n*i)%100;
         b += (h+a-i)%100;
         i += (e*a)%100;
         i -= (b+j-m*b-h*c-a-j*b)%100;
         g += (b-m+n*a+d)%100;
      }
      j -= (i+j-k)%100;
      i -= (l-m+e+a-m-f+e+c)%100;
      h -= (b+l)%100;
   }
   break;

   case 2:
   {
      j += (i+g+e-b-i*m-m*i+i+f-a)%100;
      d += (j-k+h)%100;
      k -= (g-k+g+k+m+g+k+i-e-j+m+j-c-n)%100;
   }
   break;

   case 3:
   {
      l += (a-d-m-j+d+k+g*m*j)%100;
      b += (m-a)%100;
      a += (b-h-n+k*m*l*n-e-d)%100;
      i  = (j*l)%100;
      j += (c+e-c+m-a-a+a-g-h)%100;
   }
   break;

   default:
   {
      f += (c+g-i-h-c*h+c-h*c+b*g+i*g)%100;
      n -= (g*k-b*i+n-l+c*e*n-d*k)%100;
      k += (f*i-n-h+i)%100;
      f -= (d-l+f*k-j-b)%100;
   }
   }

   m += (k+f-i-g+m+a-f-k+i-f+c+c+j-k)%100;
   h += (l-k)%100;
   a += (i-i-a-i*g-g*h-c*g+a*j+m)%100;
   k += (k-c*b*l)%100;
   e -= (k-n-j-a-i-f+k-b-e+d-f)%100;
   l  = (c*k-j-a-a*d+d)%100;
   e += (g-a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F21(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[46]%2 )
   {
      e += (j-j-e+k-e)%100;
      j += (i-c+a-j+j)%100;
      g  = (a*g+c+h-l+b*g+f-l-e*m-c*j)%100;
      n += (e-c)%100;
      i += (h+m+j-g-a*m+d*d*n*j-c+b*c)%100;
      i += (n+n*k*i*n*e+c)%100;
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
                  k += (a-f-d+a+m-c-n)%100;
                  g += (g*c+n-b+l+a-f+f+c+e+i-l-d)%100;
                  f += (d*c+j-n*a)%100;
                  k += (j-d+c+l-i-g)%100;
                  g += (e-c)%100;
                  k += (b*n-h*c-d+m*n-a-j-n+e-b)%100;
               }
               for( ; ++FORcnt[68]%5 ; )
               {
                  n += (k-e+b*m-g-h*d+e+e-k+l-f)%100;
                  h -= (f*a-c+k-e-m)%100;
                  n -= (k+k-g+h+h-a-i+k+b-f)%100;
                  g  = (k*k+b)%100;
                  m -= (c-h+l*a)%100;
               }
               if( ++IFEcnt[45]%2 )
               {
                  f -= (f+l+c*h-b*g-n+h-k+c-b+i*g)%100;
                  l -= (i+h+l*f*l*m-n-l-f+m-d-m)%100;
                  f += (i+d-j+b)%100;
                  f -= (i*g-h+m+b-f-n-d*i*j+j+a-i)%100;
                  c -= (j*e)%100;
               }
               else
               {
                  h -= (n+a*j+d)%100;
                  k -= (d*f)%100;
                  k -= (g+l-k-c*j-g-f*d+k-k*d)%100;
               }
               while( ++WHILEcnt[45]%5 )
               {
                  d  = (j+e-k+f+i+f+i+i*f+j-a)%100;
                  i += (g-d-k+c+k+b*i)%100;
                  e += (g+j-e)%100;
                  e -= (a*d*l-l-h-g)%100;
               }
            }
            do
            {
               e -= (g-l*i*e+d-n-h+g+n*e+l)%100;
               for( ; ++FORcnt[70]%5 ; )
               {
                  k += (c+e+i)%100;
                  j -= (l*m+m+e-g)%100;
                  h += (l-n-g-c-l-f-d*b+j+k-h+f-f-f)%100;
                  j -= (b-c-j+k-m*f-i*l+a*k)%100;
                  a += (f-f+h-m*i+j-n+j*b*i)%100;
               }
               
               switch( ++SWcnt[23]%4 )
               {

               case 1:
               {
                  c += (h*c-b*j-m-m-l*g+b-e)%100;
               }
               break;

               case 2:
               {
                  j += (c-m-g*b*n-c-a*l+m+l-a)%100;
                  f -= (c-i+m-m+i-n+f+d+i*j*d+g-c+n)%100;
               }
               break;

               case 3:
               {
                  n += (d-j*c-d+a+e-i-h*a-l+m)%100;
                  h += (m+j)%100;
                  j -= (j-h)%100;
                  a += (n*f-c*d+a*a+g-e+h+b)%100;
                  d += (l-f*e-h)%100;
               }
               break;

               default:
               {
                  j -= (j+n-f+c-k*a+d+a+i*c+h)%100;
                  k -= (h+j+j)%100;
                  a -= (l+j)%100;
                  f += (f+i)%100;
               }
               }

               f -= (j+b+a+b-l+m*e+b-m+c-i)%100;
               l -= (f*j+h-j+i*k+d+d)%100;
               n -= (c-g*f)%100;
            } while( ++DOcnt[46]%5 );
            m  = (k+k-k)%100;
            j += (e-h*k+l+k)%100;
            h -= (e-a+f+m+b+h-l+c*j-j+k+a+g*b)%100;
         } while( ++DOcnt[45]%5 );
         j += (g-h)%100;
         k -= (i+h-a-d-k)%100;
         j += (n+c-c-b*h-i+h-f*b)%100;
         n += (n-g+l*j*n+a+j*c+c-c-g+l*l-k)%100;
      }
      h  = (c+c*l-b-m-f+d-e-a-i+d)%100;
      b += (j-m+a-b+j-b+f+m-m)%100;
      i += (m+m-n*h-i-a-e+m)%100;
      k += (i*j-g-g*h-n+k-k*d+i-k)%100;
      g -= (k+k*f*a+j-g+a+e-g+m*g)%100;
   }
   n += (d+e+k+g-k-e*i*i-n+k-m+n+i+e)%100;
   e -= (k+n-i+j)%100;
   n += (b+j+m*m+a+k)%100;
   d += (f-f-c-m+f+e+g+g-f-f*c+d-l+f)%100;
   k -= (b*i+a+l-l+d-a-l+n-a)%100;
   l -= (c+h-i-d-e+i)%100;
   n -= (a*e-k+f*h-g+l+f*g*d-k+f)%100;
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
         j  = (g-b-j)%100;
         e += (b+k-a*f-b+k+b+f-f+i)%100;
      }
      else
      {
         while( ++WHILEcnt[48]%5 )
         {
            do
            {
               for( ; ++FORcnt[71]%5 ; )
               {
                  h -= (a-e+m+e*a+b+e+j)%100;
                  e -= (l-k-i)%100;
                  c += (g*a-b-j+a+d-d+j+g+g+k*g+h)%100;
                  a -= (h+i+c-l+b+h)%100;
                  e  = (b*f*a-g*g-h+l+e)%100;
                  n -= (f*f+n*n*i-m*c-n+e)%100;
               }
               for( ; ++FORcnt[72]%5 ; )
               {
                  c -= (g+b+g-a-h+c+j-i-e+k*m)%100;
                  g += (h*n+l-c-c-i-l-h+h)%100;
                  k -= (m-h-a+n-j-j)%100;
                  g += (n-j+c-h-l*g)%100;
                  h += (a+f)%100;
               }
               if( ++IFEcnt[47]%2 )
               {
                  d -= (i+c*n-g-d-g-i)%100;
                  h -= (k-a)%100;
                  e += (j+a)%100;
                  h -= (e-f)%100;
               }
               else
               {
                  f += (c*a-a+i+g+j-i-h*b-k)%100;
                  d += (l+a+c*c-c)%100;
                  a -= (i+h-m*j-d-l+d+d+a-l+a-c)%100;
                  n -= (k+j*a*d+h-a-n-e*k)%100;
                  g += (g-b+h)%100;
               }
               while( ++WHILEcnt[47]%5 )
               {
                  n -= (k-e+a+d+h-a+f)%100;
                  h  = (k+f-m*h+c+g+m-c+j-j-h-h-f+h)%100;
                  k -= (a-i-n-f+h-i+e)%100;
                  d -= (k-b*b+a+g-n*n-n+m+k+k+i)%100;
                  g += (h-a-e-b+n-b-n+b)%100;
                  f  = (d-c-h*n+d*c)%100;
               }
            } while( ++DOcnt[47]%5 );
            do
            {
               if( ++IFcnt[35]%10 )
               {
                  c += (a+h-h+i+n+b+l)%100;
                  h -= (k*g+m+j-a-h+m-i)%100;
                  a -= (d-m+e)%100;
               }
               c -= (b-f-a-g-j-g)%100;
               for( ; ++FORcnt[73]%5 ; )
               {
                  g += (b-d)%100;
                  l += (l-k+m-k-m-k+h+j+l+l+b-m+g*l)%100;
                  h += (f+i+h-d+c+l)%100;
                  h -= (m+e+j*n*d-b*k-g-i+d-m*m-e)%100;
                  k += (d-f*k*d*a)%100;
               }
               
               switch( ++SWcnt[24]%4 )
               {

               case 1:
               {
                  b -= (a*h+d+n-a+c*k*l+h+i-f+c)%100;
                  l -= (h*c)%100;
                  h += (d-n-l)%100;
                  k  = (b+a)%100;
               }
               break;

               case 2:
               {
                  c -= (m-a+j)%100;
                  f -= (b-i-h-c-l)%100;
                  m -= (m*k+g*h+e)%100;
                  g -= (a*j+l*l-h-b-i-b+a+i+i)%100;
                  g += (a-g+e-k-c-h+a*f)%100;
                  d -= (b-h-e-i-k*j+g)%100;
               }
               break;

               case 3:
               {
                  e  = (d+i*e*h*m+m-l-j+b-l*f)%100;
                  l -= (c+h+b-f*g+j)%100;
                  l  = (m-f+g*c-a-a)%100;
                  i -= (i-c)%100;
                  d += (h*n+a*f-c+a-b-d-e-j+c+j+h)%100;
               }
               break;

               default:
               {
                  j += (d*j)%100;
               }
               }

               d -= (n+h+k)%100;
            } while( ++DOcnt[48]%5 );
            j -= (n*l*b-d-h*d-j+k-g+c+h)%100;
            g += (c-j+k-i+m+h+l*a+k)%100;
            m  = (a-e-b+m-j-j+i-h-a+b)%100;
         }
         n  = (h+e+l-a+d-l)%100;
         i  = (e+c)%100;
      }
      j += (j+l*c+b-l-n-b+a-l)%100;
      b -= (n+g+j+i)%100;
      g -= (f-n-h+j-k-h-j+j+m+h-d+j)%100;
      g -= (e-f+a-f)%100;
   }
   f += (c*n+d+h+e*a-j*n)%100;
   e += (j-m)%100;
   f += (d-k-n-l+d-k+d+n)%100;
   n -= (g-f+h*f)%100;
   m -= (h+j)%100;
   f += (j*h-c+i*k+a*b+g+n)%100;
   h -= (g-f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F23(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[50]%2 )
   {
      a += (a-k-e-k*k+f-m+m+m)%100;
      e += (l-g)%100;
      d += (a-b*c-k-g*l+k-m)%100;
      n += (d-i*c*m+a+b-c+k)%100;
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
                  d -= (g-i-b*e*d)%100;
                  c += (m+g*n+e-b-h-g-d)%100;
                  m += (l+a)%100;
               }
               for( ; ++FORcnt[74]%5 ; )
               {
                  j += (m+c-g*a*i-c+h-m*l)%100;
                  e -= (m+j+g*m+f+g-g+l*b)%100;
                  n -= (f*d*c+m*f+m-m+i)%100;
                  h += (e*a*k)%100;
                  e += (m+b+m+b-i*n*i)%100;
               }
               if( ++IFEcnt[49]%2 )
               {
                  f -= (j+l)%100;
                  f -= (h+h+i-l-f+h)%100;
                  c += (j-j+n*k-b+l-l*i+e-h+e+e-j*e)%100;
                  a -= (d+d+f-k*h+c-c)%100;
                  k -= (k-k-a+a)%100;
                  l -= (h+k+g+h)%100;
               }
               else
               {
                  h -= (e-a)%100;
                  j += (e+g-d-d-f-l-f+c+j-b+k-h+g)%100;
                  f += (k-n+b*f+l*m-n+l*l-g-m)%100;
                  e -= (a*i-c+a+g*k+c-h)%100;
               }
               while( ++WHILEcnt[49]%5 )
               {
                  d -= (d+i)%100;
                  l -= (j+b-j+f+h-g-f)%100;
                  i -= (f+m-e-l-f+m-b+i*h)%100;
                  e -= (c+l*a-f*h-f+j-e-d)%100;
                  c  = (f*m-a-l+c+n+l+d*i-n-m)%100;
               }
               do
               {
                  n += (g-h)%100;
                  i += (e-n-i*d)%100;
                  h += (g+k-m-i*c)%100;
                  n -= (k-l+j-h-m*i+j*l*l-a-d)%100;
                  n += (d+b-c+j+h-i)%100;
               } while( ++DOcnt[50]%5 );
            }
            d += (d-d-b-l-k-m+l*l)%100;
            for( ; ++FORcnt[76]%5 ; )
            {
               
               switch( ++SWcnt[25]%3 )
               {

               case 1:
               {
                  d -= (j*d*i+i+b-d-n+c-m+m*k-n)%100;
                  n  = (c-l+c-h+k-c*n+g-a-f+l+e*b)%100;
                  l += (h+h+g+c)%100;
                  n -= (h+l-h*m-j-m*e*h)%100;
                  f -= (e-j+h-f+a-k-e+h*n+k-g-b-a)%100;
                  h -= (k-i+c-m-e)%100;
               }
               break;

               case 2:
               {
                  e -= (g-a*d+k+j-f)%100;
                  m += (i+m-g+h*d)%100;
                  g += (e+f*h+j+n-i-c-d-i+j-j)%100;
                  m  = (i*c+n+f-f-l+f+m-k-i+g-d)%100;
                  j -= (e-i+d*c+c+b+k+c-c-i*m-l)%100;
               }
               break;

               default:
               {
                  j += (i+l*i+i*g-d)%100;
                  j -= (n-c+k-m)%100;
                  a += (n-i-d+b+l-i+l+f-n)%100;
               }
               }

               if( ++IFcnt[38]%10 )
               {
                  f -= (c-k-m-h+d)%100;
                  j += (b-k*e*b+l-i-j-a+k*n-g-e+l)%100;
                  h -= (a+d-g*m+b)%100;
                  m -= (a-n*j-a*l*i-l-k-h+e*f-c-e)%100;
                  n += (c+c-n+i+h*e-k*b-j+e+h+i+c)%100;
               }
               l -= (j-b-i+k+n+k*f-m-d*e+g*f)%100;
               k  = (a+n-m+g+i)%100;
            }
            l += (f-a+d+k)%100;
            k -= (d-h)%100;
            i += (j+e+k*n-n-n+e+l*b+i*e)%100;
         } while( ++DOcnt[49]%5 );
         l -= (k+h*i+f)%100;
         c  = (m-k+n+d-c-m-c*c-e-f-c)%100;
         i += (l+d+h+k-d+g)%100;
      }
      f += (g+e)%100;
      b -= (i*h-d-i+m+f-k-m+j-m+k)%100;
      a += (j-e+a+i+a+i-h+e-e-i)%100;
      b += (m*h+n-i+d+d+d+d-j-k-c+m+f)%100;
   }
   f -= (l-l-d+e+g-a-n-d)%100;
   h -= (b+n+k*i+a-d+n+d-e)%100;
   h += (g+c-h*j-a+l)%100;
   f -= (n*k+j*d*a+f-k-c-f+j+l-f-a+c)%100;
   j  = (a+b+c*g-i-b+a*e+n-h+d-b+b-f)%100;
   f -= (c+b+m)%100;
   a += (f+f-l*e+c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F24(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[53]%2 )
   {
      j -= (a-j-c*d+l+b-d*m+m-k-f-c*i)%100;
      g += (n+j-b+d+n+g*i-f*l+e-g-d+d)%100;
      a += (i+i*e-h+h)%100;
      i += (l-g-f+b+l+i*a)%100;
      f += (g-d+g+j-e+j)%100;
      c -= (d*b-a-d-k-e-n+e)%100;
   }
   else
   {
      while( ++WHILEcnt[53]%5 )
      {
         do
         {
            for( ; ++FORcnt[78]%5 ; )
            {
               for( ; ++FORcnt[77]%5 ; )
               {
                  i -= (b-g)%100;
                  d += (j+l-d-m-g+f-d*e*l+k)%100;
                  f -= (d+b*i)%100;
                  k -= (b+j-c+a*k+g+h-l-n)%100;
                  a += (h+d-m-e*n+e+k+i+j+l*e)%100;
               }
               if( ++IFEcnt[51]%2 )
               {
                  g += (g-a*d*l*j-k+e)%100;
                  n += (d-i-d+n)%100;
                  n += (f-j-l*a-f+m-i)%100;
                  n -= (i-h*d-j*m-n*n-l-i*d)%100;
                  h  = (j*m-n-f-c+f*c+c-e-f+c)%100;
                  m += (b+m)%100;
               }
               else
               {
                  l -= (c*j*b-f*c)%100;
                  n -= (i-h+m*h-n+n+k*j-f)%100;
                  b -= (l+j)%100;
                  l += (n*d+k+j+n-c-l+h+l-d)%100;
               }
            }
         } while( ++DOcnt[51]%5 );
         while( ++WHILEcnt[52]%5 )
         {
            do
            {
               if( ++IFcnt[39]%10 )
               {
                  j -= (h-e*b-j+k)%100;
                  d -= (c*k-f*c-n*m-j+k+k)%100;
                  f -= (m-i+n-k+c-g*n+c*j-f)%100;
                  f += (g*m*d*m*e-b+h+b+h+d)%100;
                  d -= (a+f-n-k+m-c)%100;
               }
               f += (e*j+m-g-m+c*a-e+a-i)%100;
               for( ; ++FORcnt[79]%5 ; )
               {
                  h += (n-c*l-d-d*h*k*e-m-n+e-d)%100;
                  n -= (g+b+g*e+i+h+f-m*h+a-m)%100;
                  a -= (b*n+j-i-f*e-k+i+a)%100;
                  b -= (k*n)%100;
               }
            } while( ++DOcnt[52]%5 );
            
            switch( ++SWcnt[26]%4 )
            {

            case 1:
            {
               if( ++IFEcnt[52]%2 )
               {
                  a += (d+l-e*k+c-c*n-k)%100;
                  n -= (i*h*a+h-d-l-g)%100;
                  m += (l+a*d-c-n*a+f+f-a*l*n+f*e)%100;
                  k -= (a-g+m-k*i+a)%100;
                  j -= (j-c-c-d+i+e+m-n*n+m-f-a*l+a)%100;
               }
               else
               {
                  h -= (a*a)%100;
                  f -= (l-i*i-k+m-l*j-i)%100;
                  c -= (i-d+k+c-a+c+n+a)%100;
                  a += (a*f)%100;
                  m -= (b-j-f-k-d+h+m+k-g-f+g)%100;
               }
               while( ++WHILEcnt[51]%5 )
               {
                  b -= (k+c+b*l)%100;
                  g -= (g-m-i+m-a-i+d-h-k*n-i)%100;
                  e -= (g*k-h)%100;
                  a += (m-h-b-n+m+f+i+m)%100;
               }
               do
               {
                  a -= (d+g)%100;
                  i  = (j-f-l-b+c-f-h*i-i-a-e)%100;
                  g += (e+j-f*e)%100;
                  d += (g*j*a*c+h*m*e-m+k+b+a+b)%100;
                  b -= (b+m)%100;
                  k += (m+g-k-n*l+a+n*d+n+a-i+k+n-a)%100;
               } while( ++DOcnt[53]%5 );
               for( ; ++FORcnt[80]%5 ; )
               {
                  a -= (d+i-m+a+d-m+b*k-l+j+m+f-n-g)%100;
                  d -= (f-g+n*j-f-f*b+f-f-m+f)%100;
                  j += (n-m-a+i+e-h-k+m)%100;
                  i += (j-b+i+b*a-g-i-g)%100;
                  h -= (m*d-m+a-i*g+h*d+f)%100;
               }
               l  = (m+e+f+j-n+h)%100;
               d += (m-b-d-c+n+g)%100;
            }
            break;

            case 2:
            {
               m += (l*m+c)%100;
               h += (h-e+c)%100;
               n  = (d-d-b-k*k-g-n)%100;
            }
            break;

            case 3:
            {
               b -= (m+f+k*d-c-j-e-b*i-g+b-e*k*i)%100;
               m += (d+h*a)%100;
               m += (f-a)%100;
               f += (j*d+k+b-h)%100;
               g += (h*b)%100;
            }
            break;

            default:
            {
               c -= (a-a)%100;
               h -= (l-j*h-d-e)%100;
               d += (c-d)%100;
               j -= (a*f)%100;
            }
            }

            g += (b+j+m+g-f-h-j+d+e*i-h+n)%100;
            g -= (m-n-d+c+i*i+c+n-j-m-e+k)%100;
            e -= (d-d*j-c+f+m)%100;
         }
         d -= (g*i-i-c*c+l+l+k-c-f+h)%100;
         d -= (c*h+f-i*a)%100;
         i += (c-f-c+e*b-j)%100;
      }
      l += (a+h*e+g+g-l*c-j+a-j-k+a)%100;
      l -= (f-c-l+k)%100;
      b += (a*b*f+l-g*i+n)%100;
      l += (l+d+j*b-g-d+e*m+g+k)%100;
      j -= (c+j*f-n*l+n-a-i-j*n)%100;
   }
   d += (l-d-d-e*g+i)%100;
   k -= (c+h-b+n+b-i-j-j+k)%100;
   m -= (n-i+h*c*n-a-j*j*d*h-f)%100;
   a += (e+f-i+i*g*g)%100;
   h += (j*k+g-i+i+c*k+j+c)%100;
   a += (l-i-i*b)%100;
   a -= (i+f-n-l*j-a+g+k+i+k*e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F25(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[41]%10 )
   {
      for( ; ++FORcnt[82]%5 ; )
      {
         if( ++IFEcnt[55]%2 )
         {
            j -= (i-l*b+j-g+j*n*a-g-g+e-a-j+c)%100;
            l += (k-d+n+f)%100;
            j += (j*a)%100;
            j += (j+e-b+a*a)%100;
            e += (l-k-n+c-e+e*l-d+f-j-i-e*m)%100;
            j -= (d*j*f*n*e-j-a+i+i-b-e*n-k)%100;
         }
         else
         {
            while( ++WHILEcnt[54]%5 )
            {
               do
               {
                  f += (h*m-d-f*m+a)%100;
                  m -= (l-l)%100;
                  b -= (h+f+n+j*i-k-n+j*d-d-f*c+f)%100;
                  h += (h*c+j)%100;
               } while( ++DOcnt[54]%5 );
               c += (g-h+a*n+k+l+g-j+n+n)%100;
               for( ; ++FORcnt[81]%5 ; )
               {
                  d += (f-m*d*d-f)%100;
                  n += (n*k+j*e-j*m+k*b)%100;
                  h -= (d+h)%100;
                  j -= (k-h+h*m-k+d-l+a+f-b+a)%100;
                  c -= (j*f)%100;
                  l += (b+j+b-k-l+b+e+a)%100;
               }
               
               switch( ++SWcnt[27]%3 )
               {

               case 1:
               {
                  a -= (g+h-d+a+l-b*f+d+g-n+a+d*k)%100;
                  b -= (g+l+n+n-c*i*k)%100;
                  k -= (i-g-h-n+h*l-k)%100;
                  f += (c+k+e-g*j)%100;
                  b -= (a*e)%100;
               }
               break;

               case 2:
               {
                  k += (j*l-k+c-h+e-b-j+n)%100;
                  b -= (l-h+k*e-a-h*i)%100;
                  g += (n-l+i+l+m*d*i+h+c-c+d-a-h)%100;
               }
               break;

               default:
               {
                  m -= (g-k-h*n-n)%100;
                  i += (d-b*b+k*i*g)%100;
                  g -= (c-h)%100;
                  e += (a-c-f+a-m*n-d*f*c)%100;
                  b -= (m-n)%100;
               }
               }

               if( ++IFcnt[40]%10 )
               {
                  e -= (j-c+m+g-n-l+e-b+m-n)%100;
                  h += (n*l-m-l*b+j+i+b*a+f-n*m)%100;
                  j += (e*g+k)%100;
                  l += (f+e+b+m-m-a-g)%100;
               }
            }
            if( ++IFEcnt[54]%2 )
            {
               m  = (a*e)%100;
               e  = (e+c*m*k)%100;
               b -= (i+c+e)%100;
               e -= (k-l-m+c*i-l-k-e*b-n+j+h)%100;
            }
            else
            {
               while( ++WHILEcnt[55]%5 )
               {
                  e -= (f+e-i*j-a+f)%100;
                  c -= (d+n)%100;
                  d -= (m+k+f+n)%100;
                  a  = (f-f-c-b-l)%100;
                  c += (j-i*a*j+m*i)%100;
               }
               do
               {
                  n -= (l*c-c*l-b)%100;
                  c += (i+n-j*b*c-b+j+k+k-f+n-h*b+l)%100;
                  l += (h+d-m)%100;
                  m += (e+j)%100;
                  i -= (k-j*b+b-h-l)%100;
               } while( ++DOcnt[55]%5 );
               i  = (f-k*n-b-a+a+j+m*k+m*j)%100;
               h += (h*k-i+e-h+c*c+h+i-b+c*m+f)%100;
               e += (b+n-j-b+a-i+n)%100;
               f += (n+f-e)%100;
            }
         }
      }
      e -= (a*i+h+n*n+m+d+m*b-m-b+b)%100;
      n += (l+b-i+m+f*g-i)%100;
      c  = (e*i+n-e*a-h+j+g*k*g-i-i+k+n)%100;
      k -= (a-m)%100;
   }
   k += (m+b+i-f*g+k-j-d*l-k)%100;
   h += (b+e+b*h)%100;
   e -= (d-m-h)%100;
   a -= (g+m+h+n+m+e*h+e+c+m+h+d-h)%100;
   j += (l+b*g+e+n-d)%100;
   e -= (h+d)%100;
   m -= (c-f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F26(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[87]%5 ; )
   {
      for( ; ++FORcnt[86]%5 ; )
      {
         if( ++IFEcnt[57]%2 )
         {
            b -= (n-n-m-d+l+i-l+g+n-g+f-m)%100;
            g -= (c+m-i)%100;
            m += (m+n-c+c)%100;
            c += (k+m)%100;
            c -= (f*l+m-c+i+h+k-g*i+f+f-i)%100;
         }
         else
         {
            while( ++WHILEcnt[56]%5 )
            {
               do
               {
                  a += (j-n-b-j+h*g-f+h+n)%100;
                  h -= (l+b)%100;
                  n -= (k*n+k-e-c-l-b-d+m-m-h-e+j-l)%100;
                  a -= (n-j-l*f*a+k-l)%100;
                  b  = (i+a-l-l*m-l-h-n*l*m)%100;
                  l += (c-j-n-e*f-d-e-h-k*j-n-e-l)%100;
               } while( ++DOcnt[56]%5 );
               if( ++IFcnt[42]%10 )
               {
                  d -= (g+g+d+n+l+m)%100;
                  f -= (m+n-a-h-l+m+k+l+a+c-g-l*f-j)%100;
                  e -= (c-m-e-i+j+a*f+b-n*m+c)%100;
                  k -= (e-c*h-b+d+h)%100;
                  i -= (m*c-n-c*e-l+g*c-c-c-k+n+e)%100;
               }
               a -= (g-g+b-j*n+i+m-l)%100;
               for( ; ++FORcnt[83]%5 ; )
               {
                  e -= (f+m*m+n*b*j+a-n)%100;
               }
            }
            
            switch( ++SWcnt[28]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[56]%2 )
               {
                  c += (f+b-m-l-i+k-m+f)%100;
                  j -= (f-e)%100;
                  j -= (i+k*f*c)%100;
                  k += (e-c-g*f+e-a-k*k)%100;
               }
               else
               {
                  b += (i+c+g-g-l*d-c)%100;
                  h -= (m+g+h+a*h-b*e-g-c+g-a+i*a)%100;
                  a += (e+k-m-j-i*l*k-l)%100;
                  m += (n+g+k-i+l-l+k+j*l-c-c-l-n)%100;
                  m += (l+l-m-i+b*c+n)%100;
               }
               while( ++WHILEcnt[57]%5 )
               {
                  j += (a-e)%100;
                  l -= (a+g+l-b-h+h+j-a+k+m*a+m*k+k)%100;
                  k -= (c-a*a-f+d*k)%100;
                  e  = (i-a)%100;
                  e -= (k*f)%100;
                  d -= (g*i-m-d+l*l-m)%100;
               }
            }
            break;

            case 2:
            {
               do
               {
                  b += (d+l-g-k+g-k+f)%100;
                  f  = (g*b-e-i+g-a)%100;
                  l -= (d+e-h+e-m-c+l-b-a+d+l)%100;
               } while( ++DOcnt[57]%5 );
               for( ; ++FORcnt[84]%5 ; )
               {
                  d += (e+g+i-l*a*m*l+c-a-j+n-k-a-m)%100;
                  h -= (m-b*e-c+f+f*g+i+h-g+e)%100;
                  i += (m-j+j-d+e-h-d+e+m-b+n-m-d+j)%100;
                  a += (l-n-e*e+i)%100;
                  e -= (f+n+g+c-m-j-i+i*l+c)%100;
               }
               if( ++IFcnt[43]%10 )
               {
                  n -= (e+b+j+h+i-d+f+m)%100;
                  f -= (n-l)%100;
                  n += (h*l+a*b+g*a)%100;
                  l += (n*i-h+c+j+k-f-m*h-n-l-m-i+m)%100;
               }
               for( ; ++FORcnt[85]%5 ; )
               {
                  f -= (d-j+n)%100;
                  c -= (g-h)%100;
                  g += (e+j)%100;
                  h -= (l-l-h-b*l-a*g+d+k-c-e+h)%100;
                  d -= (i+b)%100;
                  a -= (e+h-m+i+m+a)%100;
               }
               g -= (n-f+j-i-a+c*i+e-l*g+m*j+f+b)%100;
            }
            break;

            default:
            {
               d += (h-f+l-c+e+h-k)%100;
               k -= (g*j)%100;
               j += (a*m+k*f+k*f+d+a+e-i+h+i-c)%100;
               b += (e-b*b+f-h-e+i-a-c+a-k+m*i)%100;
               n -= (m+j+d+b+c+c*c*b-a-h*k)%100;
            }
            }

            n += (k-j+n-n-c-g)%100;
            k -= (h+h+a+m+b-a-i+f-m+e+g)%100;
            a += (m*l-e)%100;
         }
         e += (a-a-f-b+k+h+n+d*n-h)%100;
         n += (a+i)%100;
      }
      i += (l-l-n-a*k+h*b-i+k+e*b-e-n*a)%100;
      j -= (l*j-a*m-n+m-c+j*m-m+a-m+h)%100;
      d -= (a+b+e+h-j)%100;
      g -= (f-h*j-c-d-b+e-a)%100;
   }
   h += (k+i+d+b*l+k+j-n+a-g*c)%100;
   e += (m*i*g+m*n+h-f+j*e-c-a-k)%100;
   m  = (d-g-c-l+n-n*k*l)%100;
   m += (h+e*m*j-g)%100;
   e += (c-f-n-j*m*f+f+b+l+n+h*f)%100;
   e += (n-f)%100;
   d -= (m+g+d+m*g-n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F27(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[60]%2 )
   {
      e += (d+m-d*n+f*j)%100;
      c += (a-d*f-c-f-f+l-b*b)%100;
      m += (k-j-h-h-i-e+a-h*c+g-k)%100;
      g -= (b+f-n-n-l+k+k-l*n+d+b+c)%100;
   }
   else
   {
      while( ++WHILEcnt[59]%5 )
      {
         do
         {
            e += (e-i*g+a-f-b+c*k-d*f+g)%100;
            for( ; ++FORcnt[88]%5 ; )
            {
               
               switch( ++SWcnt[29]%3 )
               {

               case 1:
               {
                  b += (b-l)%100;
                  b += (l+b-d-c)%100;
                  g += (f+k-n)%100;
                  h += (l-m+k-m-a)%100;
                  k -= (e-k-a+f*l+n-l*g-d-k*a-g+e-h)%100;
               }
               break;

               case 2:
               {
                  l -= (c*l+i*k-f+n*e)%100;
                  d -= (a*j+j-e-g-h)%100;
                  m += (l-g+d+j-e+i-b)%100;
                  a -= (f+g-i+e)%100;
               }
               break;

               default:
               {
                  g += (a+h-f*h*i*k*g-j-i+i*f*n)%100;
                  a -= (l+h-e+c+g*b-f-k-m-d+k)%100;
                  f -= (g-m-d+b+b*c)%100;
                  g -= (f+e-f+m-l-h-l-e-b+a)%100;
                  j += (d-i+m-k*j-e-c*b+n*l*l-l+m*f)%100;
                  n -= (l*b-e*i+i+k)%100;
               }
               }

               if( ++IFcnt[44]%10 )
               {
                  i  = (j-i*m+c-h+a-h+l*l-a-b+l)%100;
                  g -= (m+j*h-e+k+l-e+c-j*b)%100;
                  c += (m-m+l-d+d-c-b*g+i-e-i-d)%100;
                  e -= (d*a+j-c-b)%100;
                  f += (b+m)%100;
               }
               if( ++IFEcnt[58]%2 )
               {
                  e += (f-k+c+c+c*j+f-i)%100;
                  k += (k-h-a-g)%100;
               }
               else
               {
                  h += (f-h+g-e-d+i-k)%100;
               }
            }
            while( ++WHILEcnt[58]%5 )
            {
               do
               {
                  k -= (m-g+g+h-k+k+h*m-b+f+c+g-d-n)%100;
                  k += (a*a-i*f*k-k*d+c-m+a*d)%100;
                  e -= (a+f-a-k*b-i+d-b-k-c)%100;
                  a += (c-k+m-k+m-d-a-j+e-c+i+a+k-g)%100;
               } while( ++DOcnt[59]%5 );
               for( ; ++FORcnt[89]%5 ; )
               {
                  g += (k*l+f+c-d-i*a-c+n+d+j+c*m)%100;
                  m -= (e+k*l-d-h*i)%100;
                  j -= (d+c+a-l+l)%100;
                  b -= (b-g-m-e+n-k)%100;
                  m += (b+n*d+c-b+e+j+d-c+f+l)%100;
                  n += (f*f+f-g-d+k+c-e-c)%100;
               }
               for( ; ++FORcnt[90]%5 ; )
               {
                  k += (f+j+d-g+e*n)%100;
                  g  = (a*n*m*h-j*n-n-k+e+l-m)%100;
                  i  = (d+c+e*a-g+b-m-b*e-n*k+f)%100;
                  m += (g+d*g+m+f-i-a)%100;
                  e += (g+j*c+k+l+g-j-m*f-b*d-i*h+j)%100;
               }
               if( ++IFEcnt[59]%2 )
               {
                  f += (j-n+b-d+k-j)%100;
                  f  = (e+b-e+b+i-b+j+f+k*k)%100;
                  l += (e-c*e+a*c*n*g+k*e+l)%100;
                  a -= (a+m+j+n+e+k-e-l)%100;
                  n -= (g+i+l-g+g+n-a-e*b)%100;
               }
               else
               {
                  h += (j-d)%100;
                  b -= (m*n*d-k*e+f*b+l-l*c-j)%100;
                  d += (k-m*k*k*j-m-c+n)%100;
               }
               e -= (e-d*i)%100;
            }
            k  = (h-l*g)%100;
            n  = (n-h-i*g-g-c-n+n-b-a*m+g*d-a)%100;
         } while( ++DOcnt[58]%5 );
         f += (i+m+i-l*e-f-k+h)%100;
         l -= (m-m)%100;
         g += (b-f-i-e)%100;
         b += (j-j-j*l-k)%100;
         d += (i*j-l+k-a-a-l*d+c-e-n*m)%100;
      }
      g -= (l+k+d+h+n+e-g+c*m+l-d+d-d*i)%100;
      h += (n+m-c-j+a+c+d-g*j+b-h-l)%100;
      f -= (b+i)%100;
   }
   e -= (i+d+h+b-c-n+d+k+e)%100;
   m += (b-g-j+e-g+g+n-n)%100;
   k -= (m+l)%100;
   e += (n+c-h+k+c-g-a+e+c)%100;
   j -= (m-d-f)%100;
   f += (m*b+k+d-h+l+e*c-f-l)%100;
   d -= (d*k*g-b)%100;
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
            m += (a+i-k-d+d)%100;
            for( ; ++FORcnt[91]%5 ; )
            {
               
               switch( ++SWcnt[30]%3 )
               {

               case 1:
               {
                  k -= (e*b-c+m+h-m*f+h-j)%100;
                  n += (g-l-a-f*h-h*j*b)%100;
                  c  = (n-m*g+e-a+g-a-c+n+n-e-m)%100;
                  l -= (j-e-j-e-c-b-g*b+a-c-d+n)%100;
                  m += (a+i-d*h-i+h-l*n-e)%100;
                  c -= (c-i-i+a+i-g+b*f+k-d*d-c)%100;
               }
               break;

               case 2:
               {
                  a -= (a-e*n+l-e+g+e-c+h-g*g*a)%100;
                  m -= (d-j-e+a-n+j+j-e+f+a+c)%100;
                  l += (j+m*b*m*b+e)%100;
                  m -= (b+e+g+l-e-m-e-g)%100;
                  g += (h+e*h+c)%100;
               }
               break;

               default:
               {
                  j -= (g+l-g+i-l-h-n+c+n+d-a)%100;
                  k += (n+m-m-n-b-a+n-c+d-j-j+m)%100;
                  n -= (c+j-e+d+g-k-k+b*m*f)%100;
               }
               }

               if( ++IFEcnt[61]%2 )
               {
                  f -= (e-c+l-d+k+m+l+j*i*f*i+m)%100;
                  k += (h-l+a*n-d*i+l+k)%100;
                  h -= (c-i-g*l-l+f-g+b*n+c+a+g)%100;
                  m += (h+n+d*l*n+k)%100;
               }
               else
               {
                  b += (j-h-n+i-k)%100;
                  i -= (k*d-j+e*h+g+b-f+f-j+l+l-g)%100;
                  a  = (f-d-k*h-d*i+k-h+f-g)%100;
                  k += (b-c*n-d)%100;
                  b -= (k+h-b)%100;
               }
               while( ++WHILEcnt[60]%5 )
               {
                  h -= (j-g+g*a+f+n-k+n*k+a+h-a-c-k)%100;
                  d -= (f-f-h+b+h-a*h+f*m-n)%100;
                  j += (n-j)%100;
                  n += (i*d+a-j-f+i-h+n+n+m+a+j)%100;
                  i += (n+m-m*e-g*j+m*e)%100;
                  m -= (l+b*g+f-f-n+j+n)%100;
               }
               do
               {
                  c -= (m-a+h-a+l-m)%100;
                  k += (n*a)%100;
                  l -= (e*h+d+f*g-g+m*h*n+m*c*a+g+k)%100;
                  k -= (k-i-k+d-e+b+c)%100;
                  f += (n+d*a-m+g)%100;
               } while( ++DOcnt[61]%5 );
            }
            for( ; ++FORcnt[92]%5 ; )
            {
               if( ++IFcnt[45]%10 )
               {
                  d -= (m-g-a-n+n-d)%100;
                  j  = (d+g*n)%100;
               }
            }
            for( ; ++FORcnt[93]%5 ; )
            {
               if( ++IFEcnt[62]%2 )
               {
                  c -= (d+c+l*c+a-g*d)%100;
                  l += (l-d)%100;
                  h += (j-n-j-n+k-j+j)%100;
                  f -= (k-c-n+k+l+f+h+b+j-m+g-b-a)%100;
                  d += (f+j+e-k-k+g-h+n-n+n*f-i)%100;
                  h -= (l*i-h-j+c*j-m+d+l*n*g)%100;
               }
               else
               {
                  n += (f+a+b-e+m+a*k*c-f*c-m*b-l)%100;
                  j += (d-n-b-k-e*f-d-d*m+a-h+a)%100;
                  b += (l-l+j+k-i-a-m*k-f-a+n-k)%100;
                  c -= (f+g*k-l-n-d-k-m*h+f+a)%100;
               }
               while( ++WHILEcnt[61]%5 )
               {
                  n += (l-g+b*d-f*a+d*i*m+n-k+b+i)%100;
                  d -= (c-c*g+e*a)%100;
                  h -= (d+h*n+l+n-d+g+e-a*c-j-k+h)%100;
                  b  = (f-g+n*l*g+m*b+m+n-c+c-m+b)%100;
                  j -= (h-m-g-d+g+i-e-m+e-k-h)%100;
               }
               h -= (f-a*f-k+h+g+m-k)%100;
               l -= (j-m-e+d+e-d+d*n+g+i+h-j)%100;
               j -= (j-c)%100;
            }
            i  = (k+d*f+j-k-a+c*a+m)%100;
         }
         k -= (j-j)%100;
         g += (i+g*b-g+m+n+g+d*b)%100;
         a -= (e*c+g+h+c-a-b-c*b-h-h)%100;
         f -= (e+g*c-n-b-a-k)%100;
      } while( ++DOcnt[60]%5 );
      j += (a+j-m)%100;
      a += (h*f-n+k+c+k+j-a+j+f)%100;
      h  = (d+j-g)%100;
      f -= (f-h-n)%100;
      n -= (c*e+l)%100;
   }
   m -= (f+j+f-l-i-a-b)%100;
   f -= (n+f-d+h)%100;
   n -= (k+b*i-k-k-f+l)%100;
   m -= (b+h+d-c*a-h-m-a+c-d)%100;
   k += (i+b)%100;
   f += (l-f)%100;
   m += (d*a+e+i-b-n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F29(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      e -= (m*a)%100;
      for( ; ++FORcnt[97]%5 ; )
      {
         
         switch( ++SWcnt[31]%3 )
         {

         case 1:
         {
            if( ++IFcnt[47]%10 )
            {
               if( ++IFEcnt[63]%2 )
               {
                  k += (e+n)%100;
                  a -= (k+l*j+a+g+b)%100;
                  b -= (g+n+m+l+l+l+n*k+l)%100;
                  n -= (e*g+f*h-i+i*e+b-m+m+g)%100;
                  k += (a-f-f+c+c)%100;
               }
               else
               {
                  d += (e+a+a*m+n-l*b*f*m+l)%100;
                  m -= (n+a*c)%100;
                  b += (a*k)%100;
                  k -= (i+l-i*c+l+b-e-l-e)%100;
                  h -= (f-b+k+f-a+g+a*i+c-m)%100;
               }
               while( ++WHILEcnt[63]%5 )
               {
                  m  = (g+m+l*l+l+i-h)%100;
                  b -= (m+h-a-i+g+m-h)%100;
                  l -= (e+c-d+l+n-h+c+j-a-b*e*a)%100;
                  e -= (j*l+a+e-b-h+k)%100;
               }
               do
               {
                  l += (f-i-i)%100;
                  n += (a+j-j*d+b-f-a+k+h+m-m+j)%100;
                  m += (n-m+i+e-g*n*f)%100;
                  n += (a-h+h-a*f-a-h+k-g-i)%100;
                  c += (i-k*i)%100;
                  k += (l-c-e-k+m*g-l+c-g+f-f)%100;
               } while( ++DOcnt[63]%5 );
               for( ; ++FORcnt[94]%5 ; )
               {
                  i -= (d*l-j)%100;
                  h -= (n*d-f-l-a+m-e+b-c+e+m-m*c)%100;
                  b -= (m-f*g-i*e*d+d*d-c)%100;
                  i -= (e-n-f-e*i-m*k)%100;
                  b += (m*e+n-i-d-l*n*g+g-m*n*n+b)%100;
               }
               for( ; ++FORcnt[95]%5 ; )
               {
                  a -= (m+g)%100;
                  j += (d*f)%100;
                  k += (g+k+l+h-f+k*a+m-f*g+i+n-d)%100;
               }
               if( ++IFEcnt[64]%2 )
               {
                  h += (c+j-g+c+k+n-j+g-j+f+g+g+k-g)%100;
                  e -= (d*i+l*a+i-e+l)%100;
                  m -= (g-c+g+n+a*n-d-e*h+i-n)%100;
                  l += (a*c)%100;
               }
               else
               {
                  h += (d*f+f+f)%100;
                  i -= (d-h-a+h+m-c-a*i+l+i-e)%100;
                  n -= (a-b-k*c-f*g-c*c-b-e+f-f-m)%100;
                  m  = (l*h)%100;
                  g += (m+a-a-c+a-b+a)%100;
               }
            }
            while( ++WHILEcnt[64]%5 )
            {
               do
               {
                  f += (m-f*d-c*l+l-a+e*n-i+j*i*c)%100;
                  j += (b-g+a+a+k-c+m+c*c-i+a*e+m)%100;
                  b -= (a-i-f-i-h)%100;
                  h -= (f-a+i-l+j+d-i+n*i+m-i)%100;
                  h  = (j+m)%100;
               } while( ++DOcnt[64]%5 );
               if( ++IFcnt[48]%10 )
               {
                  h += (n*b*n-c-d-h-h+h+m)%100;
               }
               n -= (m+a+k*n-a+h+n-e-l+i-c-g)%100;
               for( ; ++FORcnt[96]%5 ; )
               {
                  l -= (g+g+m+m*i+l*i*d*f-g*l)%100;
                  b += (f*j*c-d-l+d*b)%100;
               }
               
               switch( ++SWcnt[32]%3 )
               {

               case 1:
               {
                  i += (n-f-g+l+c)%100;
                  j -= (c-b)%100;
                  m -= (f-m-j+f*b+n-f-l+a-b-b*h-c+m)%100;
                  k += (e+d-f-k-b-j+k+i-m+d+n+n+c-b)%100;
                  f -= (c*l)%100;
               }
               break;

               case 2:
               {
                  i -= (k*b-l-n-m*c)%100;
                  n -= (m*i+i+a+b+d-f*h-l)%100;
                  m += (l*f+k+e+k+l+b-l-i*a*d)%100;
                  j -= (a-a+n+n+k*a+c-m-n+e*b*e)%100;
               }
               break;

               default:
               {
                  m -= (g-l-d-e-i*e-d*b*f-m)%100;
                  d -= (g*k*n)%100;
                  g -= (m*b+e+l-f+g+g+j)%100;
                  b -= (i-j-j)%100;
                  g += (c*b+e*c-c+k-m*m-i-n-l+a)%100;
                  m -= (a-k)%100;
               }
               }

               l  = (j+f+m-c-m*h-m*j+e)%100;
            }
            n += (h-m*c+a*n*e*n+l-l)%100;
            b -= (n+d*f*h-n*k-k+e+f-k*d)%100;
         }
         break;

         case 2:
         {
            j -= (f-c+b-g+e*d-c+d*e+j*g*e)%100;
            i -= (e+k-g-j*l+d+f+k)%100;
            h += (i*b*i-c-g+m-n-d-e+c-g)%100;
            b -= (l+l-c-g-k-m*c+b*e+l*d)%100;
            d -= (g-f-k-l+f+a+c*d-c)%100;
         }
         break;

         default:
         {
            c += (d*j+f)%100;
            l -= (i-m+a+c*i*i+e-k-a-e*g-h)%100;
            f -= (g+e+k)%100;
         }
         }

         j -= (j+k-f-m)%100;
         k -= (b*j)%100;
         b += (a*a)%100;
         c += (l*l*c-c+i+j+b+g-c-b*l-f+b*d)%100;
      }
      k -= (j*k)%100;
   } while( ++DOcnt[62]%5 );
   l += (c+m-k-d*e-c+g+f+f-m*k-j-c+h)%100;
   m += (d+d+k-a+l+m+l+f-h+f-m*c-g)%100;
   i += (i+d*k-f*n+b-h+g-m+g+a-l-h+k)%100;
   j  = (g-a+d-f-j+d-c-f+g+c-a+i)%100;
   a += (h+m-k+l+k-m-l)%100;
   j  = (f+d*g-h-d+i+g-f)%100;
   a += (i-c-h+e*l+k*g-l+g+h*f+h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F30(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[66]%2 )
   {
      m -= (c+g*h-c+k-m-f-e*a*m+m-j)%100;
      l -= (i+n-k*b+b)%100;
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
                  g += (c+c+m-k-a-n+k+e*g-n+j)%100;
                  b -= (j-m-j+m-f*l)%100;
                  j -= (m*b-g*a*d*i-f+h*h*d+l+j+e+i)%100;
                  i -= (e+h)%100;
                  n += (j*n+f-g+j-i*b-k+a*n-d)%100;
               }
               for( ; ++FORcnt[98]%5 ; )
               {
                  m  = (l-g-f+b-b*d-a+h+l-f+n+b)%100;
                  a -= (j-l-b+c+k-g-i-b+l-c-g*i+e)%100;
                  l += (e-k)%100;
                  i += (i-e-d+l+j+a+i-f-j-l-a-c)%100;
               }
               if( ++IFEcnt[65]%2 )
               {
                  i  = (k+m)%100;
                  c += (d-i-f+g*l)%100;
                  a -= (d-e)%100;
                  c += (d+a-m*n+n+c)%100;
                  h += (e-n-d+n*l+f)%100;
               }
               else
               {
                  m += (i+i)%100;
                  l -= (n-l-b+e+e-i*m-m-e+d)%100;
                  c -= (g-n)%100;
                  k -= (n-d*n-g-n)%100;
                  m -= (m*n+d*d)%100;
                  g -= (i-j*k+d+l-c-a*m+d+j+h)%100;
               }
               while( ++WHILEcnt[65]%5 )
               {
                  n -= (c+g)%100;
                  m += (g+c)%100;
                  e -= (d+d*h-e-m+d)%100;
               }
               do
               {
                  g -= (c-l+e+a+g)%100;
                  b += (h-i+j-k-j*e*l)%100;
                  c += (b*e+e)%100;
                  j += (j+d-k+a*e*n-f-d+k)%100;
                  i -= (d-b-a-n-n+j)%100;
               } while( ++DOcnt[66]%5 );
            }
            j += (f-f+g-h-a+e)%100;
            for( ; ++FORcnt[100]%5 ; )
            {
               
               switch( ++SWcnt[33]%3 )
               {

               case 1:
               {
                  k  = (i+f+e-m+g*h*d+m-i-a)%100;
                  i -= (d*n-m+f-j-j-a-e*i-n*d-e+e)%100;
                  b += (h-i-c+k-j*d+j+n)%100;
                  e += (m+n*a-i+g*e-m-l*h+c-g-f*k)%100;
                  a  = (e-i+k-j-c-h-n*j+c*b+d-j*d+e)%100;
                  d += (c-f)%100;
               }
               break;

               case 2:
               {
                  e -= (j*l+g+h+j+n-k+k-l+e-f-d)%100;
                  c -= (i+i*m+m-i+b+j+d-e-k*c)%100;
                  m += (m+h+a*i-c+h+e-j+b+b*i*g-b)%100;
                  c -= (e-n-m-m+b+i+n+g+j*g-m-a+f*l)%100;
                  c += (l-f+d)%100;
               }
               break;

               default:
               {
                  m += (j+g*g-m-k-a*h-a)%100;
               }
               }

               c += (k+n*h-m+n)%100;
               d -= (h-c+a-f-f*b-c+c+k-l+j)%100;
               f += (b-c-h+j*g+d+f-k-b+l-i-j)%100;
            }
            j  = (l-c+i*n*f-l*h-b)%100;
            n -= (m+j+i-d)%100;
            h += (i+k+k+b-l*b+m+k*l+f-n)%100;
         } while( ++DOcnt[65]%5 );
         d += (g+i)%100;
         f -= (f*d)%100;
         k += (m+f+c+c+g*n)%100;
      }
      d += (k-k-m)%100;
      n += (k+m-f+i+d-l-m-c-d+l*f)%100;
      b += (e*j+g*i*f*h)%100;
      l += (i-c-l+n-k+a)%100;
   }
   m -= (n-e*l-b-g+g*h+h*g+h)%100;
   h -= (i-c+g*j+a-n+g+m+e+f-b+e-b)%100;
   g -= (j-k*a+l+h+c+g*c+e+l-j+g+n-l)%100;
   k -= (b*j+h+f+f-m*k-l+j+n+l+b-f)%100;
   m  = (i+b)%100;
   f -= (e-n*i-h+b*i+k)%100;
   k -= (m-i+g+k-m)%100;
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
         f -= (b-g+c-g+d+h+e)%100;
         e += (e*m-b*m+j+m+b+g)%100;
         l -= (c-l)%100;
         e  = (c+j+d-e+n-k)%100;
         l += (b-m-m-j-d*g+c+h+e-d*j-f+m-g)%100;
      }
      else
      {
         while( ++WHILEcnt[68]%5 )
         {
            do
            {
               for( ; ++FORcnt[101]%5 ; )
               {
                  e -= (l-d+c+j+n+b-j-d)%100;
                  c += (m*i+e-k*k+g-c+m)%100;
                  m  = (i+m+a-l*e-d+f*g+g)%100;
               }
               for( ; ++FORcnt[102]%5 ; )
               {
                  g -= (c-a)%100;
                  g -= (c-f*j+k+d*m+l-k+l-g*a)%100;
                  c -= (k-n+g*i+e)%100;
                  d -= (j-a*e-g-k+e*m-f)%100;
                  h -= (e-m-j-l+e*g+b*b)%100;
               }
               if( ++IFEcnt[67]%2 )
               {
                  d += (e+n+f*g*a-b-e-f+b+m-j)%100;
                  i += (l*d)%100;
                  d -= (f*n*j+m-l+e*k+n+f*k+j*i)%100;
                  c -= (j-a-g*h-d+m-k*i-j*h)%100;
                  c += (k-b+a*k-h-k-d)%100;
                  f += (c+g-c+m*j-a)%100;
               }
               else
               {
                  i += (h-h*g-e-c+m)%100;
                  g += (k-f+f+g)%100;
                  a += (e+l-n)%100;
                  a -= (h*b-l-i+k*d+l*j+i-c)%100;
               }
               while( ++WHILEcnt[67]%5 )
               {
                  k += (i+k*a+m*k-b+d+i+h*m+h+f)%100;
                  m += (h+j-c*j+k-j+d-c+k*c+f)%100;
                  h += (l-d-k-n+j-e)%100;
                  e += (k*i+l)%100;
                  h -= (a-k+k+i+a+d*f)%100;
               }
               do
               {
                  d += (h-e-i-i-j-b)%100;
                  j += (m+h+l-b+b)%100;
                  d += (d-k+b+f-k+b+f+k-l+e)%100;
                  a -= (e-n-m-j*j*c*j+f)%100;
                  h += (f+k*g-a-c-d)%100;
               } while( ++DOcnt[68]%5 );
            } while( ++DOcnt[67]%5 );
            if( ++IFcnt[50]%10 )
            {
               j -= (f-m+l*g)%100;
               for( ; ++FORcnt[103]%5 ; )
               {
                  m += (f-g*c+h*l*b*a*f+m+d-f+a)%100;
                  e -= (k+c+l+f)%100;
                  n -= (b+c*f-i-h)%100;
                  m += (c+g)%100;
                  i += (f+d)%100;
                  g -= (c+b-k-m+h*a+g+b-j)%100;
               }
               
               switch( ++SWcnt[34]%3 )
               {

               case 1:
               {
                  h += (n*m+b)%100;
                  n -= (n*a-f)%100;
                  b += (c+b*c*a+c-f-k*n*h+i)%100;
                  f -= (a-c*i*m+l)%100;
                  m += (d-c)%100;
               }
               break;

               case 2:
               {
                  k += (h+a*d-l-f*k+h-c-n-g*b)%100;
                  n += (c*c*e)%100;
                  j  = (l*d+i-b+f*c*b-k+m-g+i)%100;
               }
               break;

               default:
               {
                  c += (f+i+c+i+e-e-h+j)%100;
                  l += (a-f*j*h*d-k-h+d)%100;
                  m -= (h*k-f)%100;
                  g += (f-l+i-g-k)%100;
                  c -= (e-n-k*g*l+c*j-e*e+h-b+l-e-e)%100;
               }
               }

               if( ++IFEcnt[68]%2 )
               {
                  j  = (g+b)%100;
                  l += (k+a*b*i+m+e*e)%100;
                  g -= (h*h*k-l+n-j-b-c+n)%100;
                  h += (k+f+e)%100;
                  i += (c-n-f-n-e-c+g-c*n+h-j+c*f-d)%100;
                  a += (h-e*a)%100;
               }
               else
               {
                  i -= (g+j)%100;
                  g  = (g+h-m*j*n-g*k-n)%100;
                  g += (b-m+l+l+b+m-g+n)%100;
                  g  = (g+j*l+i+i-b*j)%100;
               }
            }
            e += (j+g+c*k+f-j-e*f+n*c*l+c-m)%100;
            c -= (m-h-n-d*l-b-e*k+m*l-b+j-a)%100;
            e += (l*k+n*f-l)%100;
            b += (f+j-m-c-g+a*c+j+j+j)%100;
         }
         m += (i+b)%100;
         f += (k*n)%100;
         m  = (k-g)%100;
      }
      i += (e-k+g-n-h+m-e-n+k-b+f-g-m*e)%100;
      f -= (d-h+h+j-c+l*i*j)%100;
      c -= (a-h*n+n*d*j+c-b+e)%100;
      g -= (i-j+a+b+h-j-b+h-n-k)%100;
   }
   b += (h+e-h-h+h+a*e+m-h-n-n-i-c)%100;
   i -= (h-a)%100;
   n += (h-i*n+m*d*i+n)%100;
   h += (b+l+f-h*c-i+l*h-j*f)%100;
   l += (d+c-a-l-c*b+e)%100;
   l -= (a-d+k)%100;
   l -= (j-h+f-c-c+m+n-d-m+l+l+a+e)%100;
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
                  d -= (d*h)%100;
                  i += (k+b+b-i+m+a-g-a+g+a+b+a-i)%100;
                  f  = (k*i-i+j+b+e+e*h)%100;
                  g -= (k*b-l*m*d-e+d)%100;
                  b += (g-j+b*d*f-m*f-e+a-k*d)%100;
                  m -= (b*n*g+h*e)%100;
               }
               if( ++IFEcnt[70]%2 )
               {
                  b += (j-f+e-j-j+j*d+n-d*c-c+i*i+c)%100;
                  a -= (b+h+d-k)%100;
                  e += (n-j+f-n-c-k+m-b)%100;
               }
               else
               {
                  c -= (d*h-c+k*c-l*d+b*g)%100;
                  e += (b*e+k-m-m*n-c*j*b-d)%100;
                  e -= (h-f)%100;
                  h -= (m*b+d+b)%100;
                  h -= (m+g-l+c+h+a+h-b+m)%100;
               }
               while( ++WHILEcnt[69]%5 )
               {
                  h  = (b-d+f+c*k-m*m+n-g*b)%100;
                  e -= (d-l+m+l+b-e-f+l-h+c*n*d*m+k)%100;
                  d -= (i-m*i-c)%100;
                  l += (l+a*g)%100;
                  j += (d+a*a-i+h+g+n)%100;
               }
               do
               {
                  e -= (n+f-b-l+c)%100;
                  d -= (e-i+g+b+l-b-f+c+a*j-m+a+l)%100;
                  j += (b+d-l-m*f+c)%100;
                  f -= (d+d-e-g+m)%100;
               } while( ++DOcnt[70]%5 );
            }
            n += (k-f+n)%100;
            for( ; ++FORcnt[105]%5 ; )
            {
               
               switch( ++SWcnt[35]%3 )
               {

               case 1:
               {
                  f += (n*h+g+f-m+e-n)%100;
                  h += (j+g)%100;
                  b += (h+b+h*n+c-g-e+l+h-l-c+k+e+g)%100;
                  d -= (k-i+m-e+a-l-e+j*e-l-c-n-g)%100;
                  b -= (a*l+d-e*b*h+e*e+m+f)%100;
               }
               break;

               case 2:
               {
                  f += (c*k+b+c+e-i+k-f)%100;
                  e  = (g+n-e-d+e*f-i)%100;
                  i -= (g-f+k*a-m+d-c)%100;
                  a  = (c+b-a-c-f*c-n)%100;
                  k += (g+h-b-j-m+k-b)%100;
               }
               break;

               default:
               {
                  f += (f-j-b+a*c-m-a+f+e-e+i+h+k+g)%100;
                  h -= (n*a)%100;
                  b  = (f+c+e-f)%100;
                  n  = (g+f-j+b-d-j-e-g*m-e+c-c-b)%100;
               }
               }

               if( ++IFcnt[53]%10 )
               {
                  g -= (i*m)%100;
                  c -= (i+a-n-g-i+k*b-e+l-g+i+i)%100;
                  a -= (a-c-f*n-j+l+e*m+k)%100;
                  c += (i+e-g+f-b-b-m+c+f)%100;
                  a += (h-g+g-a+e-n*d-m+h)%100;
                  m  = (j-m+a+k-d-i+d-i*i)%100;
               }
               if( ++IFEcnt[71]%2 )
               {
                  h += (g+i*h+c*k+c-j-g-d+k+l+e)%100;
                  c += (l-m-h)%100;
                  i += (k-f+k-g*g)%100;
               }
               else
               {
                  h += (b+c+h-m-d-k*g*d-h)%100;
                  n  = (e-m+j+m*b-k+h-h+f-g-j+b)%100;
                  d  = (a*l)%100;
                  j += (g-c)%100;
                  e += (i*j+b)%100;
               }
               l += (j*j*d*a-e*l+a+d*l+i*b+e+d)%100;
               d += (l+e)%100;
               k += (b*g+j*b-k+m*f)%100;
            }
            l -= (i-n*e-a-b+d+b*f-e)%100;
            b += (c+j-l-a*l+n+f*d)%100;
         }
         e -= (e-n*b-c-e*i*a+b+k*n)%100;
      } while( ++DOcnt[69]%5 );
   }
   f -= (m*a+l+h+h-a*a*k-j-f-m+i)%100;
   h -= (l+f+k*l)%100;
   g  = (a+b)%100;
   b -= (j+i+g+f*e+j-d-m+h)%100;
   g += (f+c-j*c-i-k)%100;
   c  = (f-c)%100;
   g += (g-h+n-d*h-j-c*g+m+e-d+n)%100;
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
                  d  = (i+a+n+e+l-b+l)%100;
                  l -= (j-b-g+n-m+i+f+a)%100;
               }
               else
               {
                  m += (k-c-d-a+g+c+c*n+e)%100;
               }
               while( ++WHILEcnt[71]%5 )
               {
                  i += (m*j*f-j+j-n-f+f-h+k-f+j)%100;
                  e += (f+i-n-c+n)%100;
                  b += (i*j*n+i+a+n+g-f-i+b+h)%100;
                  e -= (i*n+f-b-j+n*g+l-e)%100;
                  h += (n-k+l+n+a+f+m)%100;
               }
               do
               {
                  j -= (h+e+d*e+n-k*e+b+d-g-m+l-f+k)%100;
                  l += (n+e+n-b+j+e+j-l-j-i)%100;
                  k -= (h-a)%100;
                  j -= (a*e-d-n*c)%100;
               } while( ++DOcnt[72]%5 );
               if( ++IFcnt[54]%10 )
               {
                  f += (j-j*m*n-m+h-f)%100;
                  k -= (f+d-m*l)%100;
                  h  = (g*j-d+h-e*c*h+c*a-f-h-a)%100;
                  k  = (d+e+l*d+e-d-k+h-l+g+c+g)%100;
                  i += (d-d+m+a+k+b)%100;
                  n -= (m+m)%100;
               }
               h -= (f-a-g-c-g-h+e+e+b+i-e+e)%100;
            }
            for( ; ++FORcnt[108]%5 ; )
            {
               
               switch( ++SWcnt[36]%4 )
               {

               case 1:
               {
                  j += (e*j+b+i*f-e*j+b+b-c+h*l+k)%100;
                  b += (i+e-i*j+k-j+d+a*b*b-l)%100;
                  b  = (g-c-j+c)%100;
               }
               break;

               case 2:
               {
                  i  = (h+c*l*l+d+j+i+c+m+m+i*a+m)%100;
                  m += (g-m+g-f)%100;
                  j += (f*k+b*f-j-f-c+i*h)%100;
                  k += (c-h-l+l+h+g-m+i*i+a-d-d+f)%100;
                  d += (l-g)%100;
               }
               break;

               case 3:
               {
                  h -= (n*k+d-k-n+n-i)%100;
                  f += (h+e+h*m+f-c)%100;
                  m += (f*b*l-f+e-k)%100;
                  h += (h+k+l*j-f*e+f+d*l-m+b)%100;
               }
               break;

               default:
               {
                  n += (j-g-g-e-c+c)%100;
                  n -= (m+n*d-d*d*f+k)%100;
                  l -= (a+m-k-n-k+a*k)%100;
                  j += (f+d-f-m+e-f+g+i+h)%100;
                  c -= (b+g)%100;
                  j -= (m-m+l-e-l*h*a)%100;
               }
               }

               if( ++IFEcnt[73]%2 )
               {
                  e += (f+e+k-m+n-m+n+m-a)%100;
                  j  = (f-e)%100;
                  h  = (j-l+d+l)%100;
                  j -= (m+b-n*k-c*g*d-j*n+n+j+c-k-a)%100;
                  j += (c-i+a*k)%100;
               }
               else
               {
                  j -= (c-h-b+l-k*d-d+i*f+f+d+l+h)%100;
                  h -= (i*d-b-f*h+b+b+f-d+a)%100;
                  k  = (k-l*k)%100;
                  k += (n-i*b+i+k*b+k*k*h)%100;
                  i -= (e+l-n-a+d)%100;
               }
               while( ++WHILEcnt[72]%5 )
               {
                  j -= (h-a*i+k+k+f)%100;
                  a -= (g+j+j-m+m+d*e+b)%100;
                  h += (m*n*e-l-k+g-l-d+i*e)%100;
                  h += (b+n+c-k-g+j+d+h-e*i+f-c+a+i)%100;
               }
               do
               {
                  a += (l+c+g-k)%100;
                  m += (b+d-m)%100;
                  n -= (k-e+k)%100;
                  n += (i*m-j+a)%100;
                  h -= (f-b)%100;
                  m -= (a+l*b-j+e-c+m)%100;
               } while( ++DOcnt[73]%5 );
               m += (n*m)%100;
            }
            k += (j*a+i*k-g-j-a-j-i)%100;
            h -= (i*l*d)%100;
            j -= (b-a)%100;
            l -= (h+m-m-m-g+j-l*d-m-k*i-a)%100;
         }
         b  = (f-i)%100;
         e -= (g+n)%100;
         a += (j-c-g*f-b+a-e-m)%100;
      } while( ++DOcnt[71]%5 );
      b -= (m*k+d)%100;
      l -= (e*c-h+a-e-b+f*g+d-f-i)%100;
      f += (i+a-j+g-h+c-c-e+j-d-g+c)%100;
      j -= (i-d-m+f-c)%100;
   }
   i += (m+c-f+i+f-l*c-d-l+m)%100;
   a += (m-k+j*i+g-a-h+f+k-b-l)%100;
   l += (n-c*i*h*l+k-f+k+m)%100;
   f  = (a-b-f+n-l-c+g-h+n-g)%100;
   b += (k+m-k+j*g-i)%100;
   h -= (f+i-l+e)%100;
   g += (d*e+f+n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F34(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[114]%5 ; )
   {
      if( ++IFcnt[56]%10 )
      {
         for( ; ++FORcnt[113]%5 ; )
         {
            if( ++IFEcnt[74]%2 )
            {
               
               switch( ++SWcnt[37]%3 )
               {

               case 1:
               {
                  m -= (m-l+c+g)%100;
                  i  = (l*a-n-b+n+k+m)%100;
                  c += (b+f-i-n+c+j-d-e-c)%100;
                  l += (c*b)%100;
                  m -= (h-i*g+j+j+h*n+a-h+l-d-e)%100;
               }
               break;

               case 2:
               {
                  f += (c+l+b+n+k-e-a-a*m-k)%100;
                  b += (g*e-f-f+f+f-i-m-c)%100;
                  k  = (k*h-c-a-a+g-d+g)%100;
                  g -= (m-n*c)%100;
               }
               break;

               default:
               {
                  l -= (e+a-c+b*c)%100;
                  c -= (e+i)%100;
                  b += (d+j+i)%100;
                  g  = (h+h-c*a-k+i+c+l*d*e-m+n-f)%100;
                  g -= (l*l)%100;
                  e += (h+g-d+f*f*b+k-h*g+b)%100;
               }
               }

               if( ++IFcnt[55]%10 )
               {
                  g += (a-m*a*m+c+d+f-c)%100;
                  h -= (h*f+g-m+l*c+m+d)%100;
                  b -= (h*j)%100;
                  m -= (i-j-h)%100;
                  c += (b-a-b+a-k-g+d-m-h)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[74]%5 )
               {
                  m -= (h*b*l+e*b*j+f*d*k+i-i-i-l*j)%100;
                  c += (j-j*i-m)%100;
                  f -= (n-g+k-f+m-a+h+l*b+n+n)%100;
                  h -= (m-k+n*h-d)%100;
                  g -= (l+a-d-b+n+h-i+a-h-f)%100;
                  g  = (l*h-a+h+m*c+g-a)%100;
               }
               do
               {
                  h += (b+m-j+b)%100;
                  a  = (h-c+n+f*j)%100;
                  i -= (g-b-b-a*f+j-n*a+b-m*e-l-n-g)%100;
                  j -= (g+g-j*n+l)%100;
                  g -= (f+k-g-i-m+a)%100;
               } while( ++DOcnt[74]%5 );
               e  = (b-h-k+i*k*a)%100;
               for( ; ++FORcnt[110]%5 ; )
               {
                  d += (e+e+h+c-k-k)%100;
               }
            }
            if( ++IFEcnt[75]%2 )
            {
               for( ; ++FORcnt[112]%5 ; )
               {
                  f -= (b*k)%100;
                  k -= (n-l+l*g-m)%100;
                  g -= (c-c+a+i-f+e-d-n)%100;
                  l -= (f+j+k-f+a*h*d+a-j*n*n-a-f-d)%100;
                  n -= (k-i-i+g-g)%100;
               }
               h -= (f+g*e+h+f-a+h-h)%100;
               i += (e-b*h-e*e-k+f+f)%100;
               f -= (n+i-k)%100;
               n -= (c+m-j+d+n*n-n*d)%100;
            }
            else
            {
               while( ++WHILEcnt[75]%5 )
               {
                  m -= (g+b*m+n-m+j+j-m-h*j+b-m-l)%100;
                  c -= (b+f+e)%100;
                  c -= (m+b-n+b)%100;
                  e += (e+d+h+b+l+d+b+a*e)%100;
                  c -= (i+n*k*f+n-a-m-d-j+g*d+e)%100;
               }
               do
               {
                  b += (i+n*m+f-k+n)%100;
                  n += (j-d+m*m-d-n-n)%100;
                  c  = (g*n-n)%100;
                  i += (n-i+j-k-h-e*e+f-e+n+d*l-b)%100;
               } while( ++DOcnt[75]%5 );
               for( ; ++FORcnt[111]%5 ; )
               {
                  i += (k+l+c-f-j-g+h+n-m+b*f*f+a+g)%100;
                  g -= (m-n-n-l-a+h+b)%100;
                  k += (f-h+g*k-e*f+h-d+h)%100;
                  i += (f*g+n)%100;
                  b -= (h-g-m-a+c-m*l-f-n+d+f*j)%100;
                  g  = (g*b-j)%100;
               }
            }
            m -= (l-i+c+c*k)%100;
            i -= (b-g*g)%100;
            i += (a+b-h-k)%100;
         }
         h -= (b+b+i-g*d+a-b-k)%100;
         l += (i+l+h+b-j+h+d+c+a+k)%100;
      }
      g  = (b-k-c+j-c-f+i-n)%100;
      f += (e-e-a+k*a)%100;
      f += (k+a+l*l-i+e+j-n*k+j-g)%100;
      n  = (e-m-l-d+i+a*l*f*c*m-c-g)%100;
   }
   c += (h*j*a-n+c+d-n+k-a+n+i)%100;
   g -= (e-k+g*a+d)%100;
   b  = (k+b+k+f+l+a*j+f+f+e-k-h-f)%100;
   e -= (f+n-m-i-i-a)%100;
   m += (m+k*f-g)%100;
   i -= (i+j-a-m-g-j-h-k-j-g+b-i-i)%100;
   d += (f-k+h-g-k-i-j-l-k*e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F35(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[78]%2 )
   {
      n -= (c+j-k*j-a-i+n+a-l+j+g)%100;
      k  = (j+a*b+a-a*h*e+a*m+g-n)%100;
      g -= (j+l+h+k-n-e+b)%100;
      a -= (n+a)%100;
      l -= (n*c)%100;
   }
   else
   {
      while( ++WHILEcnt[78]%5 )
      {
         do
         {
            if( ++IFcnt[57]%10 )
            {
               b += (l*h-g+j+a+a-f)%100;
               for( ; ++FORcnt[115]%5 ; )
               {
                  k -= (i*l-g-l*i*a)%100;
                  b += (h*c-k+i-h+k+f+k+j+j-c*c+j*l)%100;
                  e -= (i*m+c+a+h+l-m*c+n+c-m+b)%100;
                  h += (m-n*b-j*m*k-b-k+b+j+f-n)%100;
                  g += (e-d+g+e+i-b*m+g*h)%100;
               }
               
               switch( ++SWcnt[38]%3 )
               {

               case 1:
               {
                  a -= (c*c-a*i+c+j-c+g)%100;
                  k += (n*b+b-b*c)%100;
                  i += (j-l+b-h-j-d+c+e+k+g*m*i+m+i)%100;
                  h += (m-d+k)%100;
               }
               break;

               case 2:
               {
                  n  = (k-l+d-e*c)%100;
                  l -= (f*c*i*k-m+b+a-m-b+g+n*a+h*i)%100;
                  m += (n-k*c-n)%100;
                  d -= (l-j-e-k+g)%100;
                  h -= (d*l+n+j*a+g+e)%100;
                  l += (i-h-g*c-k+k-m*i+k+m-d-i-h)%100;
               }
               break;

               default:
               {
                  m += (l+a)%100;
                  j += (a-b+j-e)%100;
                  n += (g*f-e)%100;
                  f  = (f+h)%100;
                  i += (k-m*d-j-g-c+d-l-a+k+c*b+d*h)%100;
               }
               }

            }
            if( ++IFEcnt[77]%2 )
            {
               do
               {
                  c += (a*j-c+h-m+j+h)%100;
                  f += (c-b*b*n*h+n-c+n-b-j*c)%100;
                  h -= (j+m+b-d-h+n-a*e)%100;
                  l -= (i-f+j+h+c+k+n*n)%100;
               } while( ++DOcnt[77]%5 );
               for( ; ++FORcnt[116]%5 ; )
               {
                  k += (c-k+c-n)%100;
                  h -= (j+n*e+g+e*f)%100;
                  a -= (h*l+i-i-i+f-d*f-a)%100;
                  n -= (b+i*n-l)%100;
                  m -= (e+n*f+i)%100;
                  l -= (e*l+g+a+i-k-k+b*f*l-i-n)%100;
               }
               if( ++IFcnt[58]%10 )
               {
                  k -= (d+n+i+n+m-i-n)%100;
                  k += (j+n-m*k+j+k*l*c+n*e+g-l)%100;
                  e -= (b-h+h*e)%100;
                  n  = (i*m+f)%100;
                  j += (a-e-l)%100;
               }
               for( ; ++FORcnt[117]%5 ; )
               {
                  n += (f+g)%100;
                  c += (i-i-b+f*h-l)%100;
                  c += (i-f)%100;
               }
               if( ++IFEcnt[76]%2 )
               {
                  d -= (c-i+m+n-h-i*c*d+n*i+a-a-g*c)%100;
                  k -= (j*k)%100;
                  m  = (h*k+e-i+c+l)%100;
                  n -= (d-e-f+n+b*g+f-m-n*j+b+l)%100;
               }
               else
               {
                  f += (a+n+d+m*a)%100;
                  j  = (l-d*i-k+c)%100;
                  k += (k-l-g-n+d-h*c-g+m-l)%100;
                  g -= (j-i)%100;
                  m -= (m+d-n-h+a-j-a+a-d+i*d)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[76]%5 )
               {
                  d -= (n-d)%100;
                  n -= (h-d-h-j-k-j)%100;
               }
            }
            while( ++WHILEcnt[77]%5 )
            {
               do
               {
                  f -= (b*e)%100;
                  a += (b-b+g+f+b-b)%100;
                  f -= (n-l-b-a)%100;
                  b += (c*k*a-i-g-n*h+e-k+a-f-h-f)%100;
                  l  = (j*a-h*g-c+a-b-l+k)%100;
               } while( ++DOcnt[78]%5 );
               k -= (c-j-g*m+n)%100;
               l -= (i*k-h-l-d)%100;
               h += (f-j-n-h+h-n-a*d)%100;
               n += (g+d)%100;
               l += (k+e+m-e+g+g+l-k)%100;
            }
            k += (m-c-f)%100;
            l += (n+d)%100;
         } while( ++DOcnt[76]%5 );
         l += (c-n*l-l+l+i-i-d-k)%100;
         b += (g+i-e+h-c*b*d*h-a*f*l*e*k+m)%100;
         j -= (e+n+k+e*c*i*d-h+g+m-k-d+n-a)%100;
         f -= (h+k-d+l*b*i-e+k+k+h+e-h-e+n)%100;
         l += (h+k*l-k*c)%100;
      }
      h  = (a+k+e-g+n+l+a*g+n-l*a+c-n+d)%100;
      g -= (i+a)%100;
      m += (k-k-m-m-b+m*d+l-l+h-i)%100;
   }
   b += (i*a+a-d-k*g-k+c-m+l+f)%100;
   c += (c+b-d+k-f-a+g-f-g*l*n+i-n)%100;
   l += (m*l*e)%100;
   f -= (n*d-j+d-b-d+l*a-b)%100;
   i += (i-l+m-k*g+c-l-i-e)%100;
   j -= (f+b+d-d+d*d+h+a*g*f)%100;
   b += (n+i+e-e+i+n-k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F36(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[39]%3 )
   {

   case 1:
   {
      for( ; ++FORcnt[121]%5 ; )
      {
         k += (h-b*g-k*b+n+k-n*j+f-f)%100;
         if( ++IFcnt[60]%10 )
         {
            if( ++IFEcnt[80]%2 )
            {
               for( ; ++FORcnt[119]%5 ; )
               {
                  i -= (d-h+h+n+k*i-c*f*k+d+l*e)%100;
               }
               if( ++IFEcnt[79]%2 )
               {
                  f -= (b+n-l+j-d*g-a-a-i+f+b*b-j-g)%100;
                  b += (j+i-j-b+b-h-g-e-f+l)%100;
                  l += (b*k+j*k-g+b*e*j+h+g)%100;
                  m -= (m*a)%100;
                  n += (c*g*k-c+c-b*j+f)%100;
               }
               else
               {
                  a  = (c+j-n*a+i-n+h-k+d*i)%100;
                  k -= (d*h+m-k-k+n-n-h+e*f+m-h+e)%100;
               }
               while( ++WHILEcnt[80]%5 )
               {
                  g += (c*l+h-a*c+c*i*h-b+b+l)%100;
                  d  = (n-b+b+a-n-f+a+f*h-i)%100;
                  n -= (i-b*a-k-n-d*l-f-a-c)%100;
                  m += (j-d*l*d-l-h+f+j*c+e)%100;
               }
               do
               {
                  k -= (l+k+i+c+c-e-f*a-n+c-l+l)%100;
                  h += (d-n*j-c+b+c-c*h-i)%100;
                  k -= (f+e)%100;
                  j += (h+c-g-m-f+m+e-f+a*i+d+e)%100;
                  j  = (k-g)%100;
                  j -= (i+c*m+h-g)%100;
               } while( ++DOcnt[80]%5 );
               if( ++IFcnt[59]%10 )
               {
                  a -= (h+a+g)%100;
                  e += (f+g*l*d-n-i-k)%100;
                  k -= (d+i*j*b+h-a+k-n-e-k+j+m+n)%100;
                  g -= (g+g)%100;
                  h -= (h-h-m+h+j+l-f-d-l-h+j*m+a-j)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[79]%5 )
               {
                  m  = (m+e-e+i+j+b-c+i-l+g*d-m)%100;
                  a += (k-m-m)%100;
                  m  = (i*g+g+c+c+d-i*k+i-g+m)%100;
                  e -= (e-c*l-k-n+n+i+m*e+b+l)%100;
                  k -= (e+a-h-d*j+l*e+k-a+f*b+c)%100;
               }
               do
               {
                  b -= (l-a+d-c*h-j+n+i*f+n-e*k*b*c)%100;
                  e += (k-a-d-c)%100;
                  f -= (f+j-d)%100;
                  a += (e-i-h-c+e)%100;
               } while( ++DOcnt[79]%5 );
               for( ; ++FORcnt[118]%5 ; )
               {
                  b += (f+j+d*g+n*c*n+g+d-f*f)%100;
                  f += (b-j)%100;
                  f -= (i+i*m+n+j-j+m)%100;
                  b -= (j-g-i-c-i-j-g-i-f-h+g-g+d)%100;
                  c  = (j-m-m*e-e-b+c*k-g+d*d-h-e-c)%100;
                  m -= (n-n*m*b-l-e+g+h)%100;
               }
            }
            n += (c*l+j*g+a)%100;
            for( ; ++FORcnt[120]%5 ; )
            {
               
               switch( ++SWcnt[40]%3 )
               {

               case 1:
               {
                  i += (g-b+b)%100;
                  n  = (k*g)%100;
                  g += (i*d*l*n*e-i*e*f)%100;
                  h  = (n*k+h-a-l-h*k-m-e-k)%100;
                  d -= (n-k-m+m)%100;
               }
               break;

               case 2:
               {
                  k -= (l*c+h-l*n-b)%100;
                  a -= (f+e+m-c)%100;
                  g -= (g+i-j)%100;
                  c += (k*e-l+l+j+b)%100;
               }
               break;

               default:
               {
                  k += (l-f+a-k*j+f-k+e-a)%100;
                  j -= (b*j)%100;
                  h -= (a-d+f-k*c+k-f+d)%100;
                  a += (c*f-f-h+d-f*k+l+j+g*i)%100;
                  h -= (f+g-n-m)%100;
                  m -= (k-c+h+n-g*k-l+h+b*g-f*e+m)%100;
               }
               }

               b -= (a-e)%100;
               j += (a-n*m-e-g*c+i+n+b)%100;
            }
            m -= (a-i+f*k-f-n)%100;
            i += (i-n+b+c+e-k)%100;
         }
         l -= (n-i+e+c+k*d*d-l)%100;
         k -= (g-h-n+b+b-h)%100;
         n += (h+f+j*j-h+f+i*i*n-g)%100;
         d -= (j+h+c+k-n+k-d+j*c-n+k+g-e)%100;
      }
      f += (h*d-k+f*g)%100;
      c  = (m*l*m+f-k-j*f-f-k-l*k+d)%100;
      g -= (m-g)%100;
   }
   break;

   case 2:
   {
      e += (f+c-n-m+f*a-f+h+e+c-b)%100;
      a += (f+f*b-d+k+m+k+l-b+n)%100;
      m -= (a+h+k)%100;
      i -= (n-n+h*f+g-d+j+c-g)%100;
      f  = (d-l-n+n-i-j-b*e*c+g+a)%100;
   }
   break;

   default:
   {
      l  = (f-f-c-b*k+h+e+n*m-g+k+f+i)%100;
      k -= (f+g+m*n*k+f-g-g*m-j*g*k+h)%100;
      g += (h-f+j*m*m+b+n*h-c+f+l-g*c-n)%100;
      b += (i-c*h+f*k+b+i+g*b-j)%100;
      c -= (g-l-j*h-d*h-b+n-a+d+a*b*d-g)%100;
   }
   }

   i -= (c-b+n)%100;
   d -= (h+l)%100;
   m  = (j+c-b-m+l*c)%100;
   n += (c+d)%100;
   h -= (a*b-d-g*d-n+l+e+m)%100;
   g -= (f*g-a)%100;
   i += (b+g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F37(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[82]%2 )
   {
      a += (e-j-d+a-e-g+h*a+b)%100;
      d -= (i+g*f+e+g*k-j+n-j+a+k+d+m)%100;
      b += (g-e+c-c+i*l-b-j+b*l)%100;
   }
   else
   {
      while( ++WHILEcnt[82]%5 )
      {
         do
         {
            for( ; ++FORcnt[123]%5 ; )
            {
               if( ++IFcnt[61]%10 )
               {
                  m += (n-k+j-e*f-c-j+h)%100;
                  f -= (e-b*h+d+n)%100;
                  n  = (g+j-d+n-h-b-m*l)%100;
                  k -= (d+k*b)%100;
                  b += (j-i)%100;
               }
               for( ; ++FORcnt[122]%5 ; )
               {
                  m -= (a-d)%100;
                  j -= (e+i)%100;
                  a += (b+f+j*b-l)%100;
                  f  = (m-l)%100;
               }
               if( ++IFEcnt[81]%2 )
               {
                  h  = (f+l)%100;
                  j -= (i-d+d)%100;
                  m -= (g+a*h+k+e)%100;
                  k -= (d-l+l)%100;
                  c += (k+m-c-h*m-h-a-g*b+j)%100;
               }
               else
               {
                  d -= (h*i*i)%100;
                  j += (a-g*b+c-e+d)%100;
                  d += (b-l+k-b-h-e)%100;
                  c += (a*b)%100;
                  n += (f+l-j+f+c-e+g+k+g-f-c*e)%100;
                  g  = (b-j+f+m*d+h*k+g-d-i-f-k-g-b)%100;
               }
            }
            while( ++WHILEcnt[81]%5 )
            {
               do
               {
                  k  = (m+b*m+m+n-c)%100;
                  g += (l*n+e-a+l-g+m+f+e*e+m*k)%100;
               } while( ++DOcnt[82]%5 );
            }
            i  = (a+n-k*j)%100;
            for( ; ++FORcnt[124]%5 ; )
            {
               
               switch( ++SWcnt[41]%3 )
               {

               case 1:
               {
                  d -= (k+f*d+j-g+a+g*j-a+g+a-i*l+g)%100;
                  c += (c*a*g*d*m-c*h-j)%100;
                  c -= (e+j-h-c+j+g*d+a-g*e-e+m-j)%100;
                  k -= (j+k*a+i+g*h+e+a*c+a-i)%100;
               }
               break;

               case 2:
               {
                  d += (f-c+m)%100;
                  h += (c*e+g+e+b+n+h+e*l*f-k-k-c)%100;
                  c -= (c-n+d+n-n)%100;
                  n -= (b-j+i-c*n-l+k-l*i-a+h-m)%100;
                  n += (h-i*b+g-a*d+n-n+m-n+n*j*e+f)%100;
                  c += (a*h*d)%100;
               }
               break;

               default:
               {
                  e += (g-h*n+f)%100;
                  l -= (n*k+m-f*d*m+c-g-h+i-n-c)%100;
                  k += (l*l)%100;
                  l  = (i+n-a*k+i+e+l+f*k-j+c)%100;
                  l -= (e*a*i*h+h-d+m)%100;
               }
               }

               d -= (l+g+f+d)%100;
               g += (h+n+n*d)%100;
               f += (h-i*m-d-b-m*b*g)%100;
               k += (g-k+a+n*f-j*d-c+d*a*m*c*j)%100;
            }
            h -= (g*j-g-h-k)%100;
         } while( ++DOcnt[81]%5 );
         a -= (m-h+l+f-e+h-f*f*n-l+i+f-l)%100;
         h -= (f+k+m-n*d*l-g+m-g*g+i*m-b*e)%100;
         k  = (d+f-i-e*b-e+l*l-j)%100;
         f += (n-a*e+e+e)%100;
         i += (h+g*l-h-k-e+b)%100;
      }
      f -= (h*m+d+f-d-j*f)%100;
      a -= (i*g-a)%100;
      n -= (n+g)%100;
   }
   j -= (i+e+k)%100;
   c -= (b+i)%100;
   i -= (f-c*f-a+g-n*d-a-h)%100;
   g -= (m-f+i+m-d+i*i-h*g-h*n)%100;
   n -= (g-b-k*n+l-d-m)%100;
   h -= (k-i*c-a+l+l-g-e-l+m-g-k-c)%100;
   l -= (g-m-e-c-d+b-c+d+f*e+h-b-k-d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<91; I++) IFcnt[I]   =0;
   for(I=0; I<121; I++) IFEcnt[I]  =0;
   for(I=0; I<60; I++) SWcnt[I]   =0;
   for(I=0; I<121; I++) WHILEcnt[I]=0;
   for(I=0; I<121; I++) DOcnt[I]   =0;
   for(I=0; I<182; I++) FORcnt[I]  =0;
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

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      if( ++IFcnt[62]%10 )
      {
         if( ++IFEcnt[83]%2 )
         {
            h -= (m+k-e+j*b)%100;
            m -= (l*f-b-a-d-l-b-i*g-b)%100;
            c -= (b-j+a)%100;
            k -= (a+e)%100;
            j -= (k+j-h)%100;
            a += (g+f+n+c)%100;
         }
         else
         {
            n -= (h+m-g-l+g+m+c+b)%100;
            a -= (d-i+j-c-c-i*k+l-m-g*b-g+b)%100;
            k += (a+m*i+n*h-c-m+l)%100;
            k -= (f+l-i-g+a-f)%100;
         }
         m -= (m+d*k-i-n*l-l+n-a+h-c+d+i*j)%100;
         g -= (l-a*g*e-h+e-i*f*m+l+d-n)%100;
         f += (e+l-b-j-d)%100;
         e -= (j+e-i-b+k+f)%100;
      }
      f -= (h-g-e*f-i-j-d-e*k)%100;
      g += (l+l+i-n+c+c)%100;
      m -= (d+a-n*l*k-m)%100;
      b -= (g*m-f*e+g+e-a-h)%100;
      b -= (d+m+e*i+f-l-j-b-c-a+e)%100;
      e += (m+j*e-c-j-e+d)%100;
      i -= (l*d+g+n-b-h-l)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<63; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 63 << "   Dynamic = " << sum ;
   for(I=sum=0; I<84; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 84 << "   Dynamic = " << sum ;
   for(I=sum=0; I<42; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 42 << "   Dynamic = " << sum ;
   for(I=sum=0; I<83; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 83 << "   Dynamic = " << sum ;
   for(I=sum=0; I<83; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 83 << "   Dynamic = " << sum ;
   for(I=sum=0; I<125; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 125 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}