#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[14],IFEcnt[19],SWcnt[9],WHILEcnt[19],DOcnt[19],FORcnt[28];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         m -= (b*g-f-a-a-a*c+j-f*l*i-k)%100;
         n += (i-j+b-b-h-j+h-h+m*i+c-n)%100;
         j -= (f+k-f*j*f+b+d*j*e-m-l+j+n)%100;
         k += (e+f*g+f-e+j+f-n-f*m)%100;
         i += (e*i+n+n+h+j*c*h+c*i-k*j)%100;
         c -= (h-m+e)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  k += (g+c+k+j+g)%100;
                  e += (c+a+f*c+f-n*j+g-k-f+g-c-h-l)%100;
                  n += (b+f-f+i-m*k-l+m)%100;
               }
               l -= (i+n+k+c*h+l)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  j -= (a-k-j)%100;
                  k += (h-d*m-n-k+c-n-n+h+n+a-d-b*j)%100;
                  n += (j+j)%100;
                  a += (m+m*n-g+e+k-g*c+d*n-i-f+m-d)%100;
                  k -= (f+g*c*k+e*i+d+n-n*j*j-g)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  g -= (a+k+i-j+c-d*g+b-m+g-k-a)%100;
                  d += (j-k-d-g-j*g+d+b-j-a-e+n)%100;
                  i += (i*i*b-i-f*h-j)%100;
                  e += (f+e)%100;
               }
               break;

               case 2:
               {
                  j -= (d-k-b+i*a*b-j+h-i+i-g+n-f)%100;
                  f  = (h+g-i)%100;
                  a += (g-b-d+a+k+b)%100;
                  n -= (c+a+n+j+k*e+n+d-a-b*n*e)%100;
                  m -= (i+l+d*c+f-m+n)%100;
                  b -= (e-a*m*i+j-l)%100;
               }
               break;

               default:
               {
                  l -= (e+d+h)%100;
                  g += (f+k+i*k-e)%100;
                  m -= (i+c)%100;
                  n -= (c*n+j+g-g*g+b+c-j+j)%100;
                  f -= (n*e+g-m-b+g)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  j += (l-m)%100;
                  i += (g-l*j*a*i-b-f)%100;
               }
               else
               {
                  j -= (f+f)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  b += (m-c*g-i*b+n-d-h+g-f)%100;
                  e  = (l-a-j-a-g-g-k+d+h+h)%100;
                  m += (k+e-f-c*l+f*m+a+i)%100;
                  h += (m+e+i)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  i += (c-n)%100;
                  b -= (m-i)%100;
                  h += (k+a)%100;
                  a -= (i+m-f-d-i*g+k*m+f)%100;
                  k += (d-f-g*a-e+k-m+j-i-f+m*i+h)%100;
                  d -= (c+c)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  k += (b-e+d-c*g+l+d+f+g-g-e*n)%100;
                  n -= (j*i+h*l-f-g)%100;
                  l -= (f-b)%100;
                  b -= (a+d*i)%100;
                  c += (h-e*j+g+g*c*a-j-m+c-d+h+h+n)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  g -= (b+c-l-i+g)%100;
                  e  = (f-n-l)%100;
                  e -= (b*g-g)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  l += (h*b-d+a*f+k*g-a-b+f-f+l+c+f)%100;
                  a -= (f-b*c+i*b+m+a+l+k+d-k+e)%100;
                  f += (d-c-f+g-d+b-e+i-c-e)%100;
                  k += (c-g*m+n+h-g+n-c+b*g-j-c-j+f)%100;
               }
               else
               {
                  i += (h+e+n-l)%100;
                  a -= (c+k)%100;
                  n += (f+i-m+i-b-m+d+j+b)%100;
                  b += (j+n+l-a-k-h)%100;
                  j -= (m+m*f)%100;
               }
            }
            j += (f+h+e-m-k*e-b+e)%100;
            k  = (j-b)%100;
            j += (i-m)%100;
            b += (n+m-f-c+i+f-c)%100;
         }
         f -= (i-e+d-n-b+j+d*l+j+b-n-g+m-g)%100;
         k += (d*g-c*f-a-d)%100;
         l -= (m-j+j*l+a+n-d+c*e*k-l+l-c*m)%100;
      }
      l -= (j-l-e*m+h*m+j-g+i*h+j*j-b)%100;
      h += (g-i-k+j+c)%100;
      l -= (g*k*c+j)%100;
      b += (e+i*n-g-b*d+d*b)%100;
   }
   e -= (a*c*d*i+e*n+i*b+e*k+d*g-a+h)%100;
   i -= (k*b+l+m-f+e-f-n-a-c*l-e)%100;
   j += (j-e-n+i*a*l+k-h+n)%100;
   j -= (e-k+g-l)%100;
   m += (n*m-e+m-b+e-a+l)%100;
   d += (i-m-k+j-b+b*g+n+e-m+e+n+b)%100;
   k -= (l+b)%100;
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
         f += (l*j-l-a-j-f*l-i*j*c*h*k-e*m)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%3 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  a += (d-l-a+m)%100;
                  b += (f*b+e+l-m+b+m-a+m-e)%100;
                  i -= (b-a-n*n*a-n)%100;
                  a += (a*j*m+h-f+i+k-e+m)%100;
                  f += (d-g-k-f+j*h-f-d-d+e)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  c -= (d-b+h-f+f+f-i*a-d+g+m+e+f*h)%100;
                  n += (l-f+i+b-d)%100;
                  b += (h+f-d+a-n-l+c+c+m*j-j-g)%100;
                  a -= (h+n-f+b+c)%100;
                  c += (b-l)%100;
               }
               else
               {
                  d -= (m+g+h-m-h)%100;
                  l -= (n*n-k-g-c+e+g+h*g*d)%100;
                  h -= (b+k*l-i*j-h+f*m)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  e += (j-a+l+j+n-e-j-l-a*a+g*a)%100;
                  l += (m-a+f+g)%100;
                  a -= (h-l*j-b-l-g-f-g*l-m)%100;
                  d += (j-b-m+d-k+i-l+k-b*m+h+j)%100;
               }
               do
               {
                  e -= (j*c+m-g*h+i)%100;
                  e += (k+a)%100;
                  m += (d*h-n+j*g-l+n-g-n*d-e)%100;
                  k -= (m+h+l-j+e-j*l-h)%100;
                  j -= (d*j+n-l-h+h-c+n+a-d)%100;
                  n += (b*n-i*k*b*l-c+n+f*n)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  f += (g+m+n-m-d-h-j*c-n+n-n+c)%100;
                  f += (l*j+n-n)%100;
                  i -= (e+c+h-b-d-h-i*l-l+c+c*g+e)%100;
                  j -= (m-e+g*c+n)%100;
                  g  = (c-b-l*h+k*l-f-e)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  a -= (d-i-f+f-i+c+g+g)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  h -= (n+g+c+d-n-c-b+a+i+j+i-n)%100;
                  g -= (c*k+f+c-h+l-e-c+e-b*a)%100;
                  i += (l-b+a-a-i+l+d+h+k+a)%100;
                  c -= (a*i-g-h*c+l-n-m-i-k*d-j+n)%100;
               }
               else
               {
                  m += (m+j-k+k-k*b+m)%100;
                  f  = (n*m)%100;
                  i -= (f+f*d-m-g)%100;
                  l += (h*c*d-f+g+m*n+e+m)%100;
                  h -= (f+l+m-n)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  e += (h*d+b+n-d)%100;
                  j += (h-h*l+m+f+a+c+g-g-e+e-g*n+i)%100;
                  h += (d-a+a+n-f-d+h+a+g+g+c)%100;
                  a -= (i+m)%100;
                  b -= (k+c*i-c+g-n-b-c+d+l+h+m-i*i)%100;
                  e += (h*m*m+n-c+m-l-f+i+n-f)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  e += (j-j-d-c+b-m+e*l*j*l+a-j-k)%100;
                  g -= (a-d+e+j-f*k+l*f-a+a-n+l-h)%100;
                  n -= (j+m-n-l-j*n+c)%100;
               } while( ++DOcnt[4]%5 );
               d -= (e*d+c+n)%100;
               f -= (a-k-h*d-g+k)%100;
               c -= (a-i-f+l-m+f-a+g)%100;
               a -= (k+f-m*j*c-c*d-c)%100;
            }
            }

            a += (i+m)%100;
            l += (h+a-c-j-e+a)%100;
            l -= (m-b-k)%100;
         }
         c += (l+g*g-e+g)%100;
         d  = (d-d+c*j+n)%100;
         j  = (d+m+d-d+k+j-f-h-h-i+b)%100;
      } while( ++DOcnt[2]%5 );
      h -= (g*m-k+f-f)%100;
      f -= (m*g*f)%100;
      c += (e*g-f+k*a-g)%100;
      h -= (f*a*e*b+n*i-g-e+m*n*l+a+e-f)%100;
   }
   b -= (a+h-d-a-f-d+f-j-h+k-d-k+h+f)%100;
   f -= (l-j)%100;
   i += (k+a-h*f+m*e+d+b)%100;
   a += (i+b+m+d+h-m+k+b+j)%100;
   c -= (g-g+a+c+f+c*g-f-b-c+g+m-g-i)%100;
   j  = (j+n*h+c+k+n+b*m)%100;
   n += (n+n-a+i+f-e-d+n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[5]%10 )
   {
      i += (a*j+m-l-m-h-j+g-g+g)%100;
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
                  h += (a+h-j+d+c*j+a-k+c+j-a-d-d)%100;
                  d -= (f+g+n+m+n)%100;
                  h += (f-l)%100;
                  d += (i+g)%100;
                  k += (c-i)%100;
                  l += (j-d-g)%100;
               }
               else
               {
                  e += (d-h-i-m-f+l-h-e*c-k)%100;
                  e += (k-h-k-g-n*d*n*i*n+n-j+c+a-d)%100;
                  j -= (a+k+a-h-d+c*g+m-n-f+l*j)%100;
                  k += (a-i+g)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  f -= (a-d-g+l+i+a+k)%100;
                  l -= (c+f*b-d*n+a+g*i-f-a+h)%100;
                  m -= (i+b-j)%100;
                  d += (d-d+d+j-m-i*n)%100;
                  g -= (i-b+d-b*a*d*h+k)%100;
               }
               do
               {
                  c += (h-f-m-l-e-f-m-d-g)%100;
               } while( ++DOcnt[6]%5 );
               d += (c-a+i*m-l+f-e*d+f-m-j)%100;
               for( ; ++FORcnt[9]%5 ; )
               {
                  g += (k+n)%100;
                  i += (d*e+j-h)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  m -= (n*l-j+j)%100;
                  k  = (m-g-a)%100;
                  i -= (j*c-a*j)%100;
                  l -= (n+h+b+m*f-d+k*h-n*k-d+g-m)%100;
                  n += (l-c-g+a+m*k*j*d+l+d*g)%100;
               }
               do
               {
                  b += (b-e+h*g+d-d+i-n-l-f)%100;
                  k += (n+d*d+j*h*d*d-m)%100;
                  l -= (m+j)%100;
                  m += (m-f)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  f -= (e-m*m-c*l-j)%100;
                  m -= (e-l-f*k)%100;
                  k += (h-a-g+e+i*g-l+d-h+i*n-a-k*a)%100;
                  d -= (g*f-b+f-c*n*i)%100;
                  m -= (h*g+c)%100;
                  b -= (i*d)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  j += (l+d-h+e)%100;
                  e -= (i+k-c)%100;
                  l += (k+b*n-i+d+i+n+k*l+i-j)%100;
                  b  = (i+a+m-n+n-g*l+n-m-a)%100;
                  l += (j+e*i-k-h-l+n+d-n*b+a-d)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  l -= (j*d)%100;
                  j -= (h-l-m*j+d*h*a*b+d)%100;
                  g -= (a*d)%100;
               }
            }
            
            switch( ++SWcnt[3]%3 )
            {

            case 1:
            {
               if( ++IFcnt[4]%10 )
               {
                  a += (d+k+a-g*c+i+g-d-d)%100;
                  d += (j+d+a+m+k*k*f-i+b-b)%100;
                  a -= (f+d-m*f)%100;
                  a += (i+k*a-j-a+d+e+e-j+a-d-j*g)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  j -= (l+a)%100;
                  g -= (b+g)%100;
                  e -= (h*e-i-e)%100;
                  l -= (h+d-e*g-h+d)%100;
                  m += (k*b-i+n*l-n+h)%100;
               }
               else
               {
                  i -= (h-n-j+e+b+k-g*m*n+d)%100;
                  j += (k+m*a)%100;
                  c -= (f+f+a*i-e+h*e+a*h-d+f+a)%100;
                  b  = (g-h+n+h*k*c)%100;
                  m  = (k+m-c+g+k-g-l-a)%100;
                  g += (d+i)%100;
               }
               b -= (m+h+m*g+d*i+e+k+b+e+n+b+l-f)%100;
               f  = (m-f+k-g-k-n*f)%100;
               m += (m+a-e+c*f+m*h+g+a*e-b+b)%100;
            }
            break;

            case 2:
            {
               b -= (l+d+i+h+i*b+h+k*a*b)%100;
               j -= (j+b)%100;
               h += (b-n*m-j-j+d+m+l+j)%100;
            }
            break;

            default:
            {
               i += (i*n+c+l+h+j+e-j*g+d*n)%100;
               k += (l*m-k-m-d+e-j)%100;
               k  = (c*m+i*d+g)%100;
               j -= (f*b-i+k+n-i-h*e-n*l*c-b)%100;
               k  = (m+a*d)%100;
            }
            }

            e -= (m+j-m)%100;
            f -= (m-d*e)%100;
            k -= (i*e-j*m-g+j*a+h-m-b)%100;
            g += (a+e*b-e*m-e*a+g+h-a*d*i+h*f)%100;
         }
         break;

         case 2:
         {
            f += (a+k)%100;
            i += (n-f+n+n)%100;
            h -= (c+a+n-n-g*i)%100;
            a -= (c+c-f-l-n-n+f-e-h+i*f)%100;
         }
         break;

         default:
         {
            g -= (g-j+n+d+i+a+c)%100;
            h += (i+g)%100;
            c += (n+h-j-d-d+b+a-j*h-f*b)%100;
            d  = (j-a-h+k*l+d+a+e+g+j+a)%100;
            i -= (j+h+c*h+j-g)%100;
            i -= (i*g*f*f-c)%100;
         }
         }

         e += (h-a*a-c)%100;
         l -= (g-i-l+g+j+n-h)%100;
         b  = (f*j-f)%100;
      }
      c += (i-n*l-j+b+j-a-c+h+c-l)%100;
      m -= (m+e+e*g-e*k+h-j*l+h*f+m-d)%100;
      i += (d+b+n*g+d-n-e*c)%100;
   }
   l -= (j*b)%100;
   n -= (h+b-i+n+e-f+f)%100;
   a += (n+c+m-n*g+j+m-h*m-g-l*a*b)%100;
   h -= (f-d+m-d)%100;
   f -= (d+h+i-i-m-a*j+k+j-l-a-g+j)%100;
   g -= (i-k+b-i-a+e+c-d+j-a+j+f+i+f)%100;
   a += (g+k-n+c-l-n)%100;
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
                  c  = (f*d+d*g+m*g+g)%100;
                  n += (n*d+j-d)%100;
                  g += (j+i+e*j-a+j*h-e+g)%100;
               }
               else
               {
                  f += (f*i+l+e-g*m+b-f)%100;
                  n += (k+j)%100;
                  d -= (c+l)%100;
                  i  = (i+f-b+a+j+b)%100;
                  l -= (c+j)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  b -= (f-f-b-k*h*j-b+n+d-g-n+j-e-h)%100;
                  i += (b-a)%100;
                  l += (g+e-i-m*i+i)%100;
                  g -= (n-a+c+c+h)%100;
                  b -= (d*f+a*d+a+b)%100;
               }
               do
               {
                  e -= (m+l-f*f+n+e-e-g-d+a)%100;
                  b  = (b-a+e-m+i-j*c-i*d-i-g)%100;
                  c -= (e+e)%100;
                  i -= (e-d*i-g)%100;
               } while( ++DOcnt[8]%5 );
               if( ++IFcnt[6]%10 )
               {
                  j  = (f+l)%100;
                  j -= (g+m-i+e-n*l)%100;
                  k -= (e+h)%100;
                  m -= (e*n+h*f+c-b+h*j)%100;
                  e -= (n*c*f+k+l+d+c-j-c+k+a+d+g)%100;
                  d -= (n-i-d*a-b-j-c*e-a+e-a*d)%100;
               }
               l += (d*e-f+g-d-e+l*n-k+m-f-k)%100;
               for( ; ++FORcnt[11]%5 ; )
               {
                  n += (b*e)%100;
                  f += (n*a+l-l*c+e)%100;
                  m += (e-a)%100;
                  c -= (d+c+g*j+l-m+c*k)%100;
                  l -= (a+c-l*j-i-g+e+h+l+h+b)%100;
               }
            }
            
            switch( ++SWcnt[4]%3 )
            {

            case 1:
            {
               b -= (g*k*l-m+i+g-j)%100;
            }
            break;

            case 2:
            {
               j += (i*e+h-m+k+l*a-g*i)%100;
               l -= (e-h+l-i-g*d+h*b+i-d+k-c+c+m)%100;
            }
            break;

            default:
            {
               h -= (a+j*a-c+i)%100;
               n += (i*l+l*f+m)%100;
               m  = (i*f*n*n+k+a)%100;
               k -= (i-f-m-a*m+d-n)%100;
               j -= (b*c-h)%100;
            }
            }

            l += (i+k-m+g+h+l)%100;
            d += (h+g*e*b-m)%100;
         }
         g -= (m*a*h-l-m-a-b+e+i+d+d*e+k+c)%100;
         b -= (k*f+n-j)%100;
         b  = (h-j+i+j+a+b-g*l+c)%100;
         m -= (m+g-l-c)%100;
      } while( ++DOcnt[7]%5 );
      a -= (b-j-k+m+d+e-f*b+k-k-i)%100;
      g += (f-f-k+m+m+c+l+m*d-n+f*l-a+d)%100;
      n -= (g+g*n-h-g+l+e*n-j-k-k)%100;
      n += (n+i*a+g+a)%100;
   }
   d += (c+g+i-b-k*j+n-a-b-c)%100;
   a -= (h+e+a-m-l)%100;
   c -= (k+m-k-b+n+g*g-i-b-f+i)%100;
   b += (g-i)%100;
   m -= (l+e-k)%100;
   g += (e-i*j+f+e*j+g-b+j-i+a-a-c)%100;
   g -= (i-e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[11]%2 )
   {
      m += (j+j+e-n-m*l+g*m+h-g)%100;
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
                  l += (e-h+c-b+n*i+b-m-f*h*f-c)%100;
                  l -= (f+b-g+f+m-l*b+e-j+m-n*n-l)%100;
                  i  = (l+k+k+b+b-c-c-n-f)%100;
                  b += (h-n+e-e+h+h-g+d-n*e-l+j+j)%100;
                  i += (d-e-b+a-b-d*d-n)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  e += (d*f-i*n)%100;
                  k += (h+f+b+m+e+c-g-c-a)%100;
                  g -= (k*b-h-g-c-g-f+b*n)%100;
                  n += (e-m+n+i)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  d += (g+h-k-d-m+e+g*d-b-j+g+n+h)%100;
                  i += (f*j-j*a+a+a)%100;
                  j -= (m+c-m-m*k-l+n+l+j-f-i)%100;
                  e -= (k+c)%100;
                  b += (b+j-h*m-j+f*f*m)%100;
               }
               else
               {
                  f -= (e+m-n-i+j*m*i*d-i*j-i)%100;
                  c -= (j+n-e+k*g-m-a)%100;
                  i -= (n+b)%100;
                  l -= (e-f)%100;
                  k += (l+f-n+n-h+n-c+i+c-m*h)%100;
                  l += (k-l*i+d*m-h-m-m-b*a+f+c+k)%100;
               }
            }
            while( ++WHILEcnt[9]%5 )
            {
               do
               {
                  m += (e-n+l-b+h+m+d-j-k-k-d-j)%100;
                  b += (b-b-l-j+e-j*l*c+d+h*h-n+f+f)%100;
                  f += (j+m-n*b+j+k*j-f*l-k+n-d)%100;
                  k -= (b-g*b+m+e+l-k-i+b*a*k+m*b)%100;
               } while( ++DOcnt[10]%5 );
               c -= (m+n+h*h)%100;
               for( ; ++FORcnt[16]%5 ; )
               {
                  e += (i-k-n-h-g-g*f+f*b-h*j+d+n+m)%100;
                  d += (k+h-e+n+g-e-d-c)%100;
                  a += (f+k*j+i+c+b-d)%100;
                  f -= (m-l-h-c-j-e+l)%100;
                  j += (g+a)%100;
                  c -= (c-f-f-c*e+k+b-b)%100;
               }
               
               switch( ++SWcnt[5]%3 )
               {

               case 1:
               {
                  d += (h+c+d-m-l-i+n*f*j+h+h-n+m+k)%100;
                  i += (n-h+m+a+i+i*d+m*m+e+j+n+d)%100;
                  m += (c+h-h*l+e+i+b)%100;
                  g  = (k-k-h)%100;
                  n += (k*m)%100;
               }
               break;

               case 2:
               {
                  i += (g-a+m*f*f)%100;
                  k += (c+f*d*l-l+l+i+j-c*c-l+l*m)%100;
                  k -= (j+d+e-f+a-e*l*i-j+b*g)%100;
               }
               break;

               default:
               {
                  m += (h-m-k+m-a*b-m+g+m-a)%100;
                  h += (i+i+c-h-i+a+m+m-b+i+g+m+l)%100;
                  g += (h+i*h-k+f+a)%100;
                  g -= (g+h*c)%100;
                  j += (g-e+m+b*c*e+b-b)%100;
               }
               }

               if( ++IFcnt[8]%10 )
               {
                  i += (j*a)%100;
                  d -= (d+j-c-e+n+c+g-n+e*d+j-h-f-a)%100;
                  c += (j-m+l+k+h+f-k-i+e+n)%100;
                  m -= (j-g-i*l)%100;
               }
            }
            if( ++IFEcnt[10]%2 )
            {
               k += (i+n+j)%100;
               a += (d-n+n-f+g*c-j+b+h+e)%100;
               a += (d-a*d+j+g+h)%100;
               d -= (g+h)%100;
               k += (a-e+m*l+l-a-d+a)%100;
            }
            else
            {
               b  = (n-n-b+a-l*i+f-a*n-l-g)%100;
               m += (j-f)%100;
               d -= (l+c*i-d-f*d+g)%100;
               c -= (j+e-j+h+a-g+k)%100;
               a += (k-j+n-a+e-d-c*e*j-a-l*a-a)%100;
               m += (n+k*n*j+g+k+c-k+b-k+l-n-f*i)%100;
            }
            j += (f+n-f)%100;
            a -= (k+k-m-e*h-k-g-i-d-k-m*e+e*j)%100;
         } while( ++DOcnt[9]%5 );
         m -= (c+j+j+e)%100;
         g += (g*f-a+k+c)%100;
         l -= (n-n+g-c-d-f)%100;
         n -= (k*i)%100;
         l += (n*g)%100;
      }
      h -= (a-a+k+e)%100;
      b -= (a+f*n+i-b*b-k-n+f+b)%100;
      l += (n-a+m)%100;
   }
   n -= (n*a-e*b+d-j+g-b*g-d*a*f+l-k)%100;
   i -= (i+a+b-j+c-n)%100;
   f += (b-a-i-e-i+m+a*h-a-m*a)%100;
   b += (l+m*f*j+b*i*b-l+f+e*j+a)%100;
   b -= (l-h)%100;
   c += (b*k*i-h-k-k+d+k-i+d+m-f)%100;
   e += (c-k-i-d+c*n*e-e+m+m-n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<14; I++) IFcnt[I]   =0;
   for(I=0; I<19; I++) IFEcnt[I]  =0;
   for(I=0; I<9; I++) SWcnt[I]   =0;
   for(I=0; I<19; I++) WHILEcnt[I]=0;
   for(I=0; I<19; I++) DOcnt[I]   =0;
   for(I=0; I<28; I++) FORcnt[I]  =0;
   long int sum=0;

   sum += F1( ) ;
   sum += F2( ) ;
   sum += F3( ) ;
   sum += F4( ) ;
   sum += F5( ) ;

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      while( ++WHILEcnt[12]%5 )
      {
         do
         {
            for( ; ++FORcnt[18]%5 ; )
            {
               for( ; ++FORcnt[17]%5 ; )
               {
                  g += (b-j*a)%100;
                  d -= (i*l)%100;
                  f -= (k-l-g-b+d*h*j+b-k-d-n-j+k)%100;
                  e -= (k-m-b-e+d-f+g*d+l-d+j+e)%100;
                  b -= (b-k+j*h+g)%100;
                  h += (a-c-b-f*c-k)%100;
               }
               if( ++IFEcnt[12]%2 )
               {
                  m += (n+f*b*l-n+f+b+h)%100;
                  a += (g*h)%100;
                  l += (l+i+n+j-c+a+k)%100;
               }
               else
               {
                  n -= (k+a+k-j*j-n)%100;
                  b += (g-d+n)%100;
                  k += (c-i*g+j)%100;
                  f += (e+b+a+i-h+h*g-j+a+g-c*b+g)%100;
                  n -= (l+k+n*g+d+k+f*k*n-a-j)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  f  = (i*h-k+i-e+n*n-b)%100;
                  j -= (l+c-c+d-n-e*f-n)%100;
                  b -= (h+i-l+k-m-j-n*e*j*e+h*b+f)%100;
                  n -= (b-n)%100;
                  j -= (e-f-d+h*g+e+j)%100;
               }
               do
               {
                  h += (j+m)%100;
                  a -= (d-a+e*j-j)%100;
                  g += (d+k-e+f-e*n+f-f+l-d-b-i)%100;
                  a  = (k+a-m)%100;
               } while( ++DOcnt[12]%5 );
            }
            f += (i*f-e+j-g-i-k+f+e+e+i-l)%100;
            b += (h*b)%100;
            f -= (a*h+c+n-a-b)%100;
            h += (e-c+l+c+i*f-f-l+g-a)%100;
         } while( ++DOcnt[11]%5 );
         g += (j-m)%100;
      }
      f += (a+h*k-c+l+g*l+d-b+m)%100;
      n += (d+i+k-d-b+h)%100;
      k -= (i-j-g+a-e-b+k+n-f*m+g+l-g)%100;
      j  = (c-a-n-k-a+n-k*d+m-j-e*n+a-k)%100;
      f  = (b-d+j+l*h)%100;
      b -= (k+b)%100;
      d  = (j+f-a-d)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<9; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 9 << "   Dynamic = " << sum ;
   for(I=sum=0; I<13; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 13 << "   Dynamic = " << sum ;
   for(I=sum=0; I<6; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 6 << "   Dynamic = " << sum ;
   for(I=sum=0; I<13; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 13 << "   Dynamic = " << sum ;
   for(I=sum=0; I<13; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 13 << "   Dynamic = " << sum ;
   for(I=sum=0; I<19; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 19 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}