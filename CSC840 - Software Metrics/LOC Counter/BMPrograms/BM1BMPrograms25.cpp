#include <iostream>
using namespace std;

#include<time.h>

int IFcnt[120],IFEcnt[160],SWcnt[80],WHILEcnt[160],DOcnt[160],FORcnt[240];

int F1(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[3]%5 ; )
   {
      if( ++IFEcnt[2]%2 )
      {
         k += (l*l*m*c-c+n-f+a-k+j)%100;
         h += (c+j+i+h+a-l-d)%100;
         m += (c-c+g*l-d+d*b)%100;
         h  = (i+b)%100;
         g += (i+a+b-g-h+a*h+b+i+l)%100;
         a += (m+a+i-h+h+c-n-e+e*d+n+j-h)%100;
      }
      else
      {
         while( ++WHILEcnt[1]%5 )
         {
            do
            {
               if( ++IFcnt[0]%10 )
               {
                  e += (f+b)%100;
                  b += (d*b+k-a+f-i-b+h-l+k)%100;
                  h -= (c-h+b+i*n+f*d-n-f-c*d+l*h*b)%100;
               }
               a -= (h-h)%100;
               for( ; ++FORcnt[0]%5 ; )
               {
                  f -= (g-k+a+m*f-i-n-b-c*i)%100;
                  i  = (i+m-m*h-d-f-i*d*g+j-n+b+e)%100;
                  g += (m+l-c-l-e+g-h+i-e-m-c+e-k-j)%100;
                  a -= (n+g+a*a+k-g-d+b-h+b-k-l)%100;
                  l -= (k+d)%100;
               }
               
               switch( ++SWcnt[0]%3 )
               {

               case 1:
               {
                  a -= (j-e+n+c+k-n+f*i*n)%100;
                  j += (h-b-e-j+a*d+c-m+h+a+n+i+b)%100;
                  e -= (c+f-j+l+h+e-i-a+c*c)%100;
                  l += (c+a+f*f-n)%100;
               }
               break;

               case 2:
               {
                  n -= (a-j-h*f-f-k+g-a+d+k*k-l)%100;
                  c -= (n-b*h-b-b-j+l*b-b*i+a)%100;
                  k  = (d-c-k-e)%100;
                  h += (a-g-d*d+j+m)%100;
                  c -= (m*g*f-i*a+h*c+f*g*j+l+i-g-l)%100;
                  i -= (d-j-e+j+k*d+n+h-e*e+n)%100;
               }
               break;

               default:
               {
                  m += (l+m)%100;
                  n += (b+g-b-b*a*a+a-d)%100;
                  f += (n+a-g*c+e+l-h*g+c+c+f*h)%100;
                  l -= (e-k-j*c-b+i-j+l*i+m*a+m)%100;
                  m -= (f-d*f-g*f*g*c+d-f+d+g-l-l)%100;
               }
               }

               if( ++IFEcnt[0]%2 )
               {
                  n += (h*g*g+i+m-i-g-m*b*k-e)%100;
                  c  = (h*c-k+h*c)%100;
               }
               else
               {
                  n -= (g+l+c*j*e-d+e*h+g+b+g+j)%100;
               }
            } while( ++DOcnt[0]%5 );
            while( ++WHILEcnt[0]%5 )
            {
               do
               {
                  c -= (l-a-a+f-k*l-g-n-m+i+n+j+c+a)%100;
                  m -= (h*f-h*k-l-d+i+d+m-b*i)%100;
                  l -= (f+j-f*g)%100;
                  g += (b+n-f+k+l-i)%100;
               } while( ++DOcnt[1]%5 );
               for( ; ++FORcnt[1]%5 ; )
               {
                  m += (h-h*c-h-l-m-n+k-e+c+k-a)%100;
                  g += (c+n+k)%100;
                  b += (e+c*b-f-a*h+j*b+f+k-f-f)%100;
                  a += (m-l-k+a+j+m-k*m+k-b*f+m+e+m)%100;
                  l += (e*m-a+c*b-e-b-d+j+k-c)%100;
                  l -= (c+c+c+h*m-h)%100;
               }
               if( ++IFcnt[1]%10 )
               {
                  m -= (c+d+f-i)%100;
                  b += (g+n-g-m-m*a+n+m+l*i)%100;
                  a += (d+j+n+g-e)%100;
                  a -= (b*h+a-j)%100;
                  e += (c+h)%100;
               }
               for( ; ++FORcnt[2]%5 ; )
               {
                  c += (m-j-i+m-j+a-h*c+d+b+j-g*n)%100;
                  n += (l+j-j-i+f-f-l-j-n+n-e*d+m)%100;
                  i += (m-m*e-a+e-a-d-d)%100;
               }
               if( ++IFEcnt[1]%2 )
               {
                  h  = (j+l)%100;
                  l -= (c+k+d*g+k+l+e+m+g-h)%100;
                  j -= (n-e)%100;
                  l -= (a+l+j-a-m+j*l+g)%100;
               }
               else
               {
                  g += (c+a+c-a-m)%100;
                  g -= (n-a-j*g+b-n+e*j-l-g)%100;
                  h += (g-i+m-a+h+b-m)%100;
                  d  = (e-j-g-j*h*k-g-k-m+n)%100;
                  l += (h-n+b*m)%100;
               }
            }
            h  = (e*d-b-l)%100;
            n -= (g+a+d)%100;
            b -= (d-m-c+d+c*l-a-m+i+k*d-m-a*j)%100;
            m += (b*g-h+b+c*h+e+d*n-g-g+a+c+l)%100;
         }
         l += (l-g-n-g*h*l*h*l+f)%100;
         m -= (f+k)%100;
         f -= (d+b+m*d*n*h+n-k-a-b+a-k+h*i)%100;
      }
      j -= (m+i+b+j-l+i-f)%100;
      n += (g-c-k+m-f+m-a-i+n+f-d-g)%100;
      c -= (j-b+h+l+j-c+j-m-a-c-m-e)%100;
      i  = (h*e-b-c-h*l*h*c*a+b-c+c)%100;
   }
   d -= (l+k*f)%100;
   m -= (g*k-k)%100;
   i += (c-a)%100;
   c -= (m+g+a*n-c+n-j*c-l-l+j-i+e*b)%100;
   m += (a*h-h+g)%100;
   j  = (g+g+j-j+g*i*n-m)%100;
   a += (f+i-k-f*c+a*c-j-b-a-f+i*j*j)%100;
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
         f -= (g-e*m+e-b-f+m+a-b+k+l+i)%100;
         for( ; ++FORcnt[6]%5 ; )
         {
            
            switch( ++SWcnt[1]%3 )
            {

            case 1:
            {
               if( ++IFcnt[2]%10 )
               {
                  j -= (k+h*d-d-m*n)%100;
                  c -= (l-l)%100;
                  i += (m+k-g+j+d-k+f*m+k)%100;
                  m -= (c-n+f-g*f+j+e-k+n)%100;
                  a += (b-b+c*f-d+l-n*m-g*l-m+d+c-g)%100;
               }
               if( ++IFEcnt[3]%2 )
               {
                  b += (b-l+f-m-d+f*g-n*c+b)%100;
                  f -= (h+a*j+d-j*h+n)%100;
                  n -= (i-l+e+k)%100;
                  i  = (d-h+m-k-m+i*l)%100;
                  d += (n-h+a-n-d-e-f+k)%100;
               }
               else
               {
                  n += (b-b+k-k)%100;
                  n += (j+g*e+a-c*l*j)%100;
                  l += (k+m-j+g+l*l-k+j+h-a-f-n+g)%100;
               }
               while( ++WHILEcnt[2]%5 )
               {
                  l -= (d-a+h+n-j*f+c-j)%100;
                  e  = (n*a*h*m-g-b)%100;
                  k  = (h*a-k-i-l*b-n+d-a-m+d)%100;
                  k += (m+j-b-g-n-a-c+m-c+e+a+k)%100;
               }
               do
               {
                  c += (g+l)%100;
                  m += (c*f*g-d-b-b+l*g+c*j+b*k)%100;
                  b += (k+i+h-m+k-c+a-g)%100;
                  m -= (n-a-j-n+c-i*k-a)%100;
                  d += (j+f+m+g-k+f-i+l+k+b*a-m)%100;
                  k -= (d-b+a+d)%100;
               } while( ++DOcnt[3]%5 );
               for( ; ++FORcnt[4]%5 ; )
               {
                  k += (h+f-e+d-m*e+n*h+c-g-c-d-b)%100;
                  i -= (k*h-d)%100;
                  k += (n-g+d+g-a+j-a)%100;
                  b += (g-f-k-i*d-a+i*g-g-j-c)%100;
                  m += (g+m-b-a+h*m-n*m*l)%100;
               }
               for( ; ++FORcnt[5]%5 ; )
               {
                  k += (i*j+g+l-h*d-l*k)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[4]%2 )
               {
                  f -= (n-i-i*b+j+c-k-n)%100;
                  n += (d-m*c*k-d+b-c+a+h-k)%100;
                  e  = (i-e)%100;
                  f -= (n+h-b-e+a+m-b+c+m+h+h-b-h)%100;
               }
               else
               {
                  h += (d-n-g+c-m+a+b)%100;
                  h += (f-k*e*l-h-n+m+c+d-l-f*i)%100;
                  j += (b+m-g+d*b+h)%100;
                  j -= (f+i-k+g-f+l-i+e-h*b-l-c)%100;
                  i  = (d+n*k-h+i+h-i+g-j)%100;
               }
               while( ++WHILEcnt[3]%5 )
               {
                  g += (j+k+b+a+l+a-n+e+m+j-b)%100;
                  d += (b-c-f-c+a-c*c-k+c+i-k+l)%100;
                  b  = (h-a)%100;
                  g -= (i-h+i+e-n)%100;
                  h -= (i-f-a-l+f+m*a-n-j-f+d+b)%100;
                  k += (j*d+b+b+l+l*e+e-a-j+g-e)%100;
               }
            }
            break;

            default:
            {
               do
               {
                  a  = (d*b-j+k-i-a+n+k-l-n+k-e*a-m)%100;
                  k -= (h-e+l+g-d+j-n+l+a*a+b*l)%100;
                  k -= (l-g)%100;
               } while( ++DOcnt[4]%5 );
               c += (l+c*i-n*k-n*l-i*g+h*e)%100;
               j -= (m-h-f-a+i-e+b)%100;
               k += (a*k*i-n+c+c)%100;
               k -= (b*j+a-h+e-e)%100;
            }
            }

            b -= (b-f-h*g-d+m*f-k)%100;
            j -= (l+d)%100;
            m += (d+l-a-l+c+j-f)%100;
         }
         g += (f+n+l-l*a-i-l-j-d+l+l)%100;
         g -= (g-a-g+k-l*g-m-e+e*j-i-a+n)%100;
         f  = (a+h+g+n-e-e-n-n*n-e+m)%100;
      } while( ++DOcnt[2]%5 );
      f -= (m*d-n-j*j-l+i-n-k)%100;
      b -= (h+l+l-a-n+d+b-d)%100;
      e -= (c*n*l-j-n+j)%100;
      d -= (m*f*m-a-m-f-n*a*j-j-e)%100;
   }
   m += (e*m*d+g*g-m)%100;
   a -= (i-j-l-d-n+d*h-h+f)%100;
   j += (n-b-c-e-f-j+a+b-j+m-c+k+a-k)%100;
   l  = (e*b+k*c+c)%100;
   j += (h*n+b)%100;
   e -= (g-c-n*l+i-b*m-d*l+c+n+d)%100;
   g += (a*d-c*g-a-a-h-e*m-g+a+g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F3(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[5]%10 )
   {
      c += (l+a+c+m+n+e+h+n+f*k)%100;
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
                  a -= (e*k+f-e-c-m-j+l)%100;
                  l += (n+k*j*h*a-k+c+d+i-d+m+j+d+m)%100;
                  g += (c-h-l+j)%100;
                  g -= (i+f-m-a*l)%100;
                  c -= (j*j-m-l-g*a+i+e)%100;
                  a -= (c-g-m+n-h-j)%100;
               }
               else
               {
                  j += (b+f-d-n-d)%100;
                  b -= (n-d)%100;
                  i -= (c-a*l+d+m+d*b+j)%100;
                  c -= (c+i+a-i*k-m-c+l+k)%100;
               }
               while( ++WHILEcnt[6]%5 )
               {
                  a -= (m+a)%100;
                  g += (m+n-i+i-b*i-d-h+d)%100;
                  f -= (h-n*l-e+h+g+i-k-l-e*j-j)%100;
                  k -= (f*k-n*g+l*e+l-m+j+e)%100;
                  h += (c-c+a+j+h+c)%100;
               }
               do
               {
                  l += (m+l+e-a*i-a+l-d+h-j+n-c)%100;
               } while( ++DOcnt[6]%5 );
               h -= (l*h*e+n*k)%100;
               for( ; ++FORcnt[9]%5 ; )
               {
                  g += (l+g)%100;
                  f += (l+h*d-f-j*k)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[5]%5 )
               {
                  d -= (f+m*k-l*m-i-g-a+k*a-a+g)%100;
                  l += (c-f+f*g*c+g*j+l*c+i*d+h)%100;
                  j -= (h+d-h*h+l)%100;
                  g  = (g*m+n-e+n+j-f-f-c*d-j+i-e)%100;
                  b  = (m*l)%100;
               }
               do
               {
                  f += (m-m+c-f+e-f+f-k*k+m*e+k)%100;
                  g += (b-a*e-a+n+b-m*c+m+l+l-i-j-i)%100;
                  n -= (c+g+d*e)%100;
                  f -= (m-f+f*h+k-b-g*c-i*h)%100;
               } while( ++DOcnt[5]%5 );
               for( ; ++FORcnt[7]%5 ; )
               {
                  b  = (i+k-l+b+g+c)%100;
                  b -= (b+j)%100;
                  j += (c-g-k-e+m+k-a+d)%100;
                  j -= (g+k-h+j*i+m+g+g*d*b+c-d)%100;
                  c += (g+k)%100;
                  m += (n*f-n-e-f+d*l*g+h+b+j*h-g)%100;
               }
               if( ++IFcnt[3]%10 )
               {
                  l -= (e-d*l+l+c-b+m*d*n*m+k)%100;
                  n -= (k+b+n)%100;
                  a += (m-g-i+g-b+k-i+e-a-n*f-n)%100;
                  a -= (d*g-j-e-b-l+k+b*i+m*m*i+l)%100;
                  j -= (c-d+i*n-b+c+m+l-j-c)%100;
               }
               for( ; ++FORcnt[8]%5 ; )
               {
                  a += (c+j+f)%100;
                  j -= (g-e)%100;
                  h -= (j-e*j)%100;
               }
            }
            
            switch( ++SWcnt[3]%4 )
            {

            case 1:
            {
               if( ++IFcnt[4]%10 )
               {
                  c -= (j+h-a-h-i*k*a-e+g*h+j*a+l*k)%100;
                  c += (b+j+m)%100;
                  g += (d*n*c-j+m-b+c+f)%100;
                  k -= (k*f-h*d*k+j*b-g)%100;
               }
               if( ++IFEcnt[7]%2 )
               {
                  j -= (j-g)%100;
                  c += (e+h*g-e-l-l+m+b+m)%100;
                  a  = (m+c-e+n)%100;
                  m += (b-n+d-g+c-i*b-k+d*h+m+n-l-a)%100;
                  n -= (d+b*d*l+k-b+d+f-c*a*e-j)%100;
               }
               else
               {
                  i += (e*e-l-m)%100;
                  h += (k*m*c*k-j+i)%100;
                  n += (c+h-e-e-a+b-f+f)%100;
                  m += (b-l-i-b+h-l*n-c+f*a+n+m-e)%100;
                  l -= (h*k+h-c-a)%100;
                  e += (l+f+a*l+n*k+g)%100;
               }
               g += (k*a+m+n+h+j*c*b*f+k*k*b-b-m)%100;
               e -= (m+n-b)%100;
               j += (b-m+h-n)%100;
            }
            break;

            case 2:
            {
               h -= (g*g*n)%100;
               a += (f*h+d+d+c-c)%100;
               l  = (g+m*l*d-h+c*m+d)%100;
            }
            break;

            case 3:
            {
               g -= (f+j+n-f-l*e*n+j-k)%100;
               a += (d-m-d+b-e*i-m-j-d+a+l-a-h+b)%100;
               g -= (j*i-l)%100;
               d -= (h+j-d-d-g+f+e+e)%100;
               g += (n+n+b+m-g-h-c*e+n-k-b+a*l)%100;
            }
            break;

            default:
            {
               i += (k+i+a-l+n-k-k-i+f*n*b+l+k*e)%100;
               f -= (k*h+i+n+g*b+e)%100;
               c -= (g-c+i-i)%100;
               a -= (i+f*l-k*d-l+k-b-g-l+d)%100;
            }
            }

            h  = (l+d-n-h-g)%100;
            l -= (k-c-k-h-e*h-a-d*d-h-i+l)%100;
            m -= (j+c-j-f+n+l)%100;
            k -= (g-d-i*e)%100;
         }
         break;

         case 2:
         {
            j += (b+l*k+d-d+g+d-c+j-a+f)%100;
            j  = (c-a-f-c*m-c+b-j+g+d+h*n-g+f)%100;
            c += (a-j-i+l*a-m*f+f+m-c+d*i+d+c)%100;
            e -= (m*l*h-a-d)%100;
            c += (m+k+l+f)%100;
            l -= (m+b+h*b-i-a-e)%100;
         }
         break;

         case 3:
         {
            e += (f-g-m+b+n+g-a+d-b-g)%100;
            f -= (g+j+k-j*d+k+a-a-f-i+g+b-c+f)%100;
            g += (g-e+f-g)%100;
            l += (g-e-a-c+d-b+j*c-c-k+l*d)%100;
            i += (b-m-m*m+e+n)%100;
         }
         break;

         default:
         {
            i -= (e*k*g-j*d-a+e-a+i+m*i)%100;
            j += (n-c*n+g+h-i*l)%100;
            e += (c+i-b+l-f+e-l-j-c+f+f-c)%100;
            m -= (j+l*j-a+g*m-g+c-k)%100;
            l += (c-c*k+d-f-i-n*k-k)%100;
         }
         }

         h += (c*n+m+g)%100;
         i -= (n-f*b*d*b*b-i+c*g-b)%100;
         c += (g+e+b+f-n*f+b-f)%100;
      }
      c -= (d-n-i-j*d+n+c-f*d+b*e+l-c-g)%100;
      g -= (g-k)%100;
      b -= (b-i-h-k*a-c)%100;
   }
   n -= (j*h-n+e)%100;
   d  = (m*j)%100;
   c -= (l*i-k-l+n-h+d-n*i*b+g+f*g+f)%100;
   g += (k*n-m+n*a+i*j-d+i-j*k)%100;
   e += (c+m+c+n-i)%100;
   e  = (c+i*h*b*l-e+h*d+h-c-d-h+k)%100;
   a  = (f-c-k+k*g+c+e*d-h-n+e+b+k)%100;
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
         for( ; ++FORcnt[12]%5 ; )
         {
            for( ; ++FORcnt[11]%5 ; )
            {
               if( ++IFEcnt[8]%2 )
               {
                  b -= (b+b-h-h-m*n)%100;
                  c += (a*b)%100;
                  h -= (b+f-d*h+h+k-n-g)%100;
                  l  = (h*f)%100;
               }
               else
               {
                  l += (d-l+d)%100;
                  n += (j-j-h+f+d*i)%100;
                  i += (a+f-h-f-d-j-g+g-g-g-m*b+g)%100;
                  l  = (c+h-j+j+n*i+g-h-a*l+h+f)%100;
                  h += (d-n)%100;
               }
               while( ++WHILEcnt[7]%5 )
               {
                  l -= (j-b+i+e-n+i*d+d-f-b+l)%100;
                  m += (g-n+a)%100;
                  n -= (c*m-g-c*g+a+f+h)%100;
                  j  = (n-n*h*k+b-m-l-g+g+k)%100;
                  f -= (f-d*e)%100;
                  l -= (d-i-i-m+e+e)%100;
               }
               do
               {
                  k -= (l+n+a+l+a)%100;
                  n += (l-l+n+f-a*d+l-e*c)%100;
                  d  = (b-l+l+b)%100;
                  b  = (m+n+j+h+i+n+g+n+a+a+g-b)%100;
                  m -= (l-b*e+n)%100;
               } while( ++DOcnt[8]%5 );
            }
            if( ++IFcnt[6]%10 )
            {
               d += (c-b-c-f-f+b+d+f-g+j-g+m-n)%100;
            }
            e += (j+e*h*n-m+d-c-f+j*f+d-e+g-i)%100;
            a += (g+i*m+c-m-d+l-i+m-b+a*b+c)%100;
            e -= (j+a-d-b-c+g)%100;
         }
         c -= (n+l+k-b)%100;
         i += (d+m+l+h+i-g+l-b+g)%100;
         a += (c-l*d*n-h+e-c-j-n+k*c+m)%100;
         g -= (d+b+f+h-h+a-k-l-k+e+h)%100;
         g += (d-g-m)%100;
      } while( ++DOcnt[7]%5 );
      i += (k*f+m-n+l-d+l+b*n-n-n*m*i)%100;
      a += (k*e-n-f-g-i-b-m-e+h)%100;
      h  = (m*j-c-c-b+e+d-n-j)%100;
   }
   m -= (j*a*a-e*f*k+j+k-i+a-m+l+e)%100;
   c -= (a-f)%100;
   f += (h+i-e+f+e+d+j+m)%100;
   l  = (g-m-f-i+b-d-m*b*n)%100;
   a += (k-b+f+a*b-l+h*l+j+e-c)%100;
   b -= (i-l+b-i*i*e+i*f-k+h+a-c)%100;
   k -= (m-f*n*e+j+k-b+l*h-e-b-n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F5(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[16]%5 ; )
   {
      
      switch( ++SWcnt[4]%3 )
      {

      case 1:
      {
         if( ++IFEcnt[10]%2 )
         {
            b -= (d+a+g-g-e-g-a)%100;
            a -= (a-h)%100;
            d += (f+a-f+f)%100;
            m -= (j+n)%100;
            m  = (c-f+e-c+g-a-l*l-n+a)%100;
            f += (a+i-d-g*l-n+a+g+n)%100;
         }
         else
         {
            while( ++WHILEcnt[10]%5 )
            {
               do
               {
                  j -= (a*e)%100;
                  n  = (m+c+n-j+c+k+j+m+e*b)%100;
                  n -= (k*i)%100;
                  g -= (f-j*e*h+e*i+f+f)%100;
                  a -= (e+j*c)%100;
               } while( ++DOcnt[9]%5 );
               for( ; ++FORcnt[13]%5 ; )
               {
                  i -= (k*l*m*i*f)%100;
                  i += (c*n+m+n*a+a-l+a)%100;
                  m -= (b-d-f-i+l-g-g-e+l*d-e)%100;
               }
               if( ++IFcnt[7]%10 )
               {
                  h += (d*k*m*i)%100;
                  d -= (i+a-g-n*i+h+m)%100;
                  b -= (i-g+a-f*g-g+c-j*l*h-n+k*b-m)%100;
                  b += (j*h-e+j-c)%100;
                  c += (e-i)%100;
               }
               for( ; ++FORcnt[14]%5 ; )
               {
                  b += (m+b*h+c-b-j+e-a*d)%100;
                  d += (d*f+b*i-e)%100;
                  c -= (c-e-g-n-k+h-h-l-c+b-m+a)%100;
                  h -= (n+e*b+m*h+e+h)%100;
               }
               if( ++IFEcnt[9]%2 )
               {
                  l -= (h-e+b-i*b+j+h+j*g-i-a*n-a-e)%100;
                  b += (a+d+n-n+l*m-f+n)%100;
                  m -= (b+f+d*n-h+f-i-i-m*i+e*b)%100;
                  j += (i+h-f*f*j-m*n-h-j+l*k)%100;
                  i += (e+d)%100;
               }
               else
               {
                  i += (i+j-c+h+e*l+i-n)%100;
                  h += (e+f+h+c-b-n-h-g+j+j-f-l-e)%100;
                  n -= (j-i-b)%100;
                  j -= (k+m+b-a-g-d)%100;
                  j  = (e+m*d-f)%100;
                  c -= (e*f*d-d-m+k*j+m+j*h+g)%100;
               }
               while( ++WHILEcnt[9]%5 )
               {
                  g += (h+k+j*f+i+d-d+h-g*d+f+f+d)%100;
                  j += (n+f-m+c-g-a+k+k)%100;
                  h += (f+j+g-k+b*f*h*h-j)%100;
                  c -= (a+j+n-h-m)%100;
                  n -= (c+l-l-n-k)%100;
               }
            }
            do
            {
               c += (j+n-i+g-h-d-b+e*e-f-m+g*n)%100;
               for( ; ++FORcnt[15]%5 ; )
               {
                  g += (k+f-g*l-l-a-d-e*c)%100;
                  l += (f+c+e-h+i-i-l+b+h)%100;
                  h += (f-d)%100;
                  f += (k-f*n+l-d+l-f+g-m-b-e+g)%100;
                  d += (j-h+k+i-k-m)%100;
                  e -= (e*d+a+n+g+n+j-j*i+b-j+h)%100;
               }
               
               switch( ++SWcnt[5]%3 )
               {

               case 1:
               {
                  a -= (g-f+k*f+m*d+g*b+l-a*m*l)%100;
                  l -= (b-k)%100;
                  c -= (j*d+h-g+k-j-b-j+i*g*j-d*b+c)%100;
                  d -= (i+b+d)%100;
                  l -= (k-m-k*b+k+g-g-l-f-a)%100;
               }
               break;

               case 2:
               {
                  e -= (h+k+a+m-d-j-d*g+e+l)%100;
                  f  = (c*g-d-j+a+k-n-n+k*c+n+b*l-g)%100;
                  b -= (l*f+g+d)%100;
               }
               break;

               default:
               {
                  h += (i*m*a+h-k-c-k-m*n+i+k*e+i)%100;
                  j += (a*c*h*g+n-f-f*n-a)%100;
                  b -= (m-n-k+c-j*e+f-g)%100;
                  g += (m-e+i-d)%100;
                  m -= (e*b)%100;
               }
               }

               if( ++IFcnt[8]%10 )
               {
                  n += (n-j-d+l*l-d)%100;
                  a += (j+n-g*g+d-l*b-i+l-g)%100;
                  i += (m+n+n-l+i-n-d+n)%100;
                  h += (i+f+h+n+j)%100;
               }
            } while( ++DOcnt[10]%5 );
            f += (e-c+n+c*d-k*e-c+m+e+l+h)%100;
            c -= (l*n*n-l+a*l-i-c)%100;
         }
         g += (i+m+l+e-l*m-b-k+d-g-g*h*b+b)%100;
         i -= (j-i+b*l+i+g-k)%100;
         m += (l+m+l)%100;
         i -= (j-i+e-f+h)%100;
      }
      break;

      case 2:
      {
         m += (b+m-n+l*e-e+d-m*d-m-d)%100;
         e += (l+d)%100;
         h -= (m*g-l-i-c+g)%100;
         b -= (d+n-d+c*m-m+f+h-f+k)%100;
         b -= (h-g)%100;
      }
      break;

      default:
      {
         n += (m+h-d+k-e-d)%100;
      }
      }

      k += (n+j)%100;
   }
   d += (j+c-l*m*e*n+b)%100;
   g += (a-m-f-d*j-a-f+m-n+c)%100;
   j -= (j-a+g+h-l)%100;
   h -= (f-b*b-j-f-i+a+b*m+a+n-j)%100;
   i -= (c+b+l-n-b*b+e+l+j*i+h+d)%100;
   j += (k*a)%100;
   a += (g-a+c+c-g*j-h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F6(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[13]%2 )
   {
      g += (f+n)%100;
      j -= (m*k+g*c+e+i*j+g)%100;
      l -= (i*b*b*h*e+n*a+c*a+h)%100;
      l -= (a*n+m+d)%100;
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
                  d += (c+g+f+h+f-i+g+m)%100;
                  f -= (j-n)%100;
                  n -= (l-a+d*g-k-d-k+h+l-j*b+n*a)%100;
                  k += (k-j+l*c*n+k)%100;
                  d += (b-c*i-l-k-a-h+c)%100;
               }
               if( ++IFEcnt[11]%2 )
               {
                  f  = (k*j*d+l-n*j)%100;
                  e += (e-i+h-g+l-n*d)%100;
                  l += (a-n-d-k-l-f+i-m+c-c*j-l-m+g)%100;
                  g += (g+h-e+f+k-g+g-d*b+i)%100;
                  j -= (b+g+c+d*n*m)%100;
               }
               else
               {
                  j += (j*g)%100;
                  l -= (e*a*j-c*f+c-e)%100;
                  k  = (i-n*g)%100;
               }
               while( ++WHILEcnt[11]%5 )
               {
                  a -= (f+j*h+m*e+i-l-i*h)%100;
                  a -= (i+i+j*f+a+m*h+n*j+l+c-l+n)%100;
                  n += (j+i-k*b)%100;
                  l += (h+g-g+f*i)%100;
               }
               do
               {
                  m += (h-g-i*k-g-j+c+c-j*a-f)%100;
                  l -= (k+j-f*h*b+a-g+d+j+l-l+k+n*l)%100;
                  i -= (g+k)%100;
                  d -= (f-i)%100;
                  m  = (n-c)%100;
                  j -= (l-g-c)%100;
               } while( ++DOcnt[12]%5 );
               if( ++IFcnt[9]%10 )
               {
                  n += (b+n-m-l-b+k+h*e*b+g)%100;
                  i += (a-d-h+c*b*h-f+e+c+b-k+h)%100;
                  b += (g+b-n)%100;
                  g += (d+b-l-c-i+c+i-e-k+i-f-h+h)%100;
                  b += (n+a-n-n-d)%100;
               }
               f += (l*m+m+i+i-h-g+n)%100;
            }
            for( ; ++FORcnt[19]%5 ; )
            {
               
               switch( ++SWcnt[6]%3 )
               {

               case 1:
               {
                  h += (c-j+j*j+a+m-k*m-e+l+k)%100;
                  a -= (j+d+l+g-d+g)%100;
                  a -= (j-j+m+n-a-a-l+i-b+j*n-f+b+k)%100;
                  f -= (f*l*n-b*g-i+d+k*h*i+j+d-a)%100;
               }
               break;

               case 2:
               {
                  g -= (m-h+i-g)%100;
                  k += (d+j)%100;
                  n -= (d*f-m+j+b+d*a-f+m+c+l-i+k-l)%100;
                  h += (j*g)%100;
                  h += (l-k+m)%100;
                  l -= (d*j-c-a+m-m-a*k-i+c+f+d+h*c)%100;
               }
               break;

               default:
               {
                  d -= (h-g*n*k-a-g+b-g+l-a)%100;
                  n += (m-j*g-d*l-d-a-n+m+g-k+i+c)%100;
                  h += (n+m)%100;
                  j += (m+e)%100;
                  f  = (c+k*m+a*d-k*j+h*n-g+n*b)%100;
               }
               }

               if( ++IFEcnt[12]%2 )
               {
                  m += (j+c+m*d+b)%100;
                  n -= (a-m-d+c)%100;
                  j  = (l*d-a*m-c-i)%100;
                  j -= (d+a-d+n-h)%100;
                  l -= (c*g+b+i+k*j+m+a+h)%100;
               }
               else
               {
                  m += (c+l)%100;
                  k -= (c+a-n-e+b+g+h-f-f-n)%100;
                  n += (m-m+e+d*a+c+c+h+d-a+l-b-m)%100;
               }
               a -= (k*k)%100;
               c -= (l+i+d)%100;
               d -= (e+e+e+h+f)%100;
            }
            l -= (h+m)%100;
            c += (f+a*a-b+a-i-b+k+f+n)%100;
         } while( ++DOcnt[11]%5 );
         l -= (l-b+h+l+a-b-c-b-k-b+m)%100;
         g -= (b*c)%100;
         c += (b-l-a*c+l-k-a-d*a-c+a-i)%100;
         j -= (a*f+m+l-g-b*b)%100;
      }
      i  = (f*k+g+b*i*k+c*m*c-e)%100;
   }
   d -= (m+h-k+g+m+h-l+k+b-b)%100;
   g += (l-e-g*j+g-g+a*f*h-b+i)%100;
   h += (i+e)%100;
   l -= (h+l-n-l*i-e)%100;
   a -= (h*d+f-a+f+f-e*a+j-i-m-g+h)%100;
   a -= (d*l*k+c+h*f-g+k)%100;
   f  = (f*l)%100;
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
         for( ; ++FORcnt[21]%5 ; )
         {
            if( ++IFcnt[10]%10 )
            {
               for( ; ++FORcnt[20]%5 ; )
               {
                  l -= (g+d)%100;
                  c -= (b+e+g+n+j+f-f-c*m+h-b+l*k)%100;
                  c -= (h+m+f-c+f*d+b*b*n-d+a)%100;
                  f -= (m-f-h*h-i-e-n-j+a+d-d-b*a)%100;
                  m += (d+i+b+g+i*l)%100;
               }
               if( ++IFEcnt[14]%2 )
               {
                  h += (n*l+l+c-f+a*n-g+h+f-n-e)%100;
                  b -= (f*k+l-h-d-l+h)%100;
                  k -= (j+l)%100;
                  g += (n-g+n+i+d-c-g)%100;
                  e -= (g-j+m-n-k+h*k)%100;
                  g += (a-l-f-a+e-i-d-f+g+f+k-m-d*m)%100;
               }
               else
               {
                  n += (d*f+h-g)%100;
                  f -= (i-i)%100;
                  m -= (l*k*e+c*m-l)%100;
                  c -= (l-m*f-j+l)%100;
               }
            }
         }
         while( ++WHILEcnt[14]%5 )
         {
            do
            {
               a += (e-j+i+e+l+f-b-l-g)%100;
               for( ; ++FORcnt[22]%5 ; )
               {
                  l -= (c+c*i+a*h-l+a-a-a)%100;
                  m  = (j*c)%100;
                  n -= (e-h)%100;
                  h -= (h+l*f+b-m*b-m-j-b-e+c*k)%100;
                  b -= (g-f-h-l-d+k-i+c-f)%100;
               }
               
               switch( ++SWcnt[7]%3 )
               {

               case 1:
               {
                  e += (e+c-n-k*c-b)%100;
                  l += (l+j)%100;
                  j -= (e+e-m-j+b+l+n+c-m-l+d+b-j)%100;
                  h += (n+i*k*l-c+e*b)%100;
               }
               break;

               case 2:
               {
                  b -= (m+i)%100;
                  b += (m+n-f-f-g*m)%100;
                  m  = (m+c+j)%100;
                  b += (m+b)%100;
                  l -= (e*a)%100;
                  i += (a+n+i+h)%100;
               }
               break;

               default:
               {
                  a  = (l-h-m+m+e)%100;
                  g += (j+d+h-i-a+e-c)%100;
                  n -= (h*h+j-m+c-h+e*k+f+i)%100;
                  i += (n+i+k*b-n*e+h*h-d)%100;
                  h  = (c+f*n-g-a+d*l+a-d*e-h*l-g+n)%100;
               }
               }

            } while( ++DOcnt[14]%5 );
            if( ++IFcnt[11]%10 )
            {
               if( ++IFEcnt[15]%2 )
               {
                  b += (m+l+k-k-k+f-d+g+d+j-m+k-c-k)%100;
                  a -= (a-c*f*n-m*e-m*c+h+a+h+m+n)%100;
                  b -= (g*a-n*m-j+g-e-e)%100;
                  i += (j-e+l+n*n-a)%100;
                  k -= (c*c+e-l-f+m*i+a-a-n-j+b-c-i)%100;
                  l += (g+k+g-h*f+b-i+j)%100;
               }
               else
               {
                  a -= (m*g+a-i+g*m-l+a+m+h+j+m-j+h)%100;
                  h += (g+l)%100;
                  k -= (h+c-e-b-m-l-a)%100;
                  g -= (c*c*h+d-d-m)%100;
               }
               while( ++WHILEcnt[13]%5 )
               {
                  b -= (n-m)%100;
                  n  = (m+l-l+d*m+d+e)%100;
                  c += (h+k+h-f+j*n-b+k-c-h+f)%100;
                  d += (e+e-i+h-e+h*i+j-i-j-m)%100;
                  i += (i+i)%100;
               }
               h -= (d*m+g*l+f+c)%100;
               l += (b-d-g-k+m-g*e*h-e)%100;
               d += (i-g*e+j+i-k)%100;
            }
            h += (j+a+f)%100;
            m += (a+a)%100;
            d -= (b-m)%100;
         }
         n += (g+d)%100;
         f -= (f*l+l+b-f-d-d*a*n)%100;
         l -= (h+c)%100;
      } while( ++DOcnt[13]%5 );
      n += (g-m-f+d-b+i-j+n+e+d+l)%100;
      m += (e+g*m-a+a-g*f)%100;
      b -= (e+i)%100;
      b -= (l+g+d)%100;
      i += (f+a-f+c+d)%100;
   }
   g -= (e*f-b-b+n+b)%100;
   i += (j+j+f+h+m*a*a*b+e+h-j-a-d)%100;
   n -= (a-d+k+a*a+e+b-i+h*f+f-f*g-l)%100;
   i += (a*f-a-b-k-i)%100;
   h -= (b-i+a+m-a-j*k-i+d-b)%100;
   n -= (l*c*m-n+f)%100;
   j -= (h-d-h-c-l+d-h-k+h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F8(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      for( ; ++FORcnt[26]%5 ; )
      {
         for( ; ++FORcnt[25]%5 ; )
         {
            if( ++IFEcnt[17]%2 )
            {
               if( ++IFEcnt[16]%2 )
               {
                  c -= (l-j-j-b*c+n*m+i-d*m+l+m-j+d)%100;
                  d -= (e+f-i-d+g+f+k)%100;
                  e -= (d*e*j+g+f+g*j+f+k+e)%100;
                  k += (c+f-c+a-g-a-a-g)%100;
               }
               else
               {
                  e += (l+i*m+m+a-f-n-k-g-b-h+m)%100;
                  b -= (e-a+n-l-i*k-a)%100;
                  i -= (n*c-c+a*c*m*b-i-k-f)%100;
                  j -= (m-n-l-l-i-f+m-i-m+a)%100;
                  c -= (n-c*e+l*e-k*l+a+b-h-c+m)%100;
               }
               while( ++WHILEcnt[17]%5 )
               {
                  h -= (f*h-k-c+n-k+m*l*n-h*m-f+f)%100;
                  g -= (g*d-d-l+l+l-l+d)%100;
                  k += (e*e)%100;
                  d += (b*l-a+j-h+k-k-e-f-n)%100;
                  k += (k-h+b)%100;
                  d += (b+e+k)%100;
               }
               do
               {
                  b -= (m-c+n+m-b+d+h-e+f-g+b-l)%100;
                  j += (e+a)%100;
                  d += (i-j-i-b+b+m*b+a*n)%100;
                  d -= (f*h*e)%100;
                  i += (g+g-i-e+n+n+f*d-l-a+k+j+b+j)%100;
               } while( ++DOcnt[17]%5 );
            }
            else
            {
               while( ++WHILEcnt[16]%5 )
               {
                  n += (n*a)%100;
                  j -= (c*a)%100;
                  g -= (i+m-b)%100;
                  k -= (a+j-e*j+f+n*f+m-g-k-c)%100;
                  m -= (n+e-k-d+d+m*h-n+j+n*i*h-c+c)%100;
               }
               do
               {
                  l += (k-e-n+k-a*l-h*j-d)%100;
               } while( ++DOcnt[16]%5 );
               if( ++IFcnt[12]%10 )
               {
                  n += (a+n-j+l+e-a-j-b-d)%100;
                  f += (n+h+n-a+c)%100;
               }
               h += (m*d+n+m*a+j-d-b-g-i*k-b-l)%100;
               for( ; ++FORcnt[23]%5 ; )
               {
                  a -= (h+c+j-j-a)%100;
                  d += (l+g+h+b*d-h+a*h+c-h+h)%100;
                  e  = (b-b+k-b-c)%100;
                  k  = (j+f-b)%100;
                  l  = (f+l*d-l+g)%100;
               }
               
               switch( ++SWcnt[8]%3 )
               {

               case 1:
               {
                  m += (i-d*a+i+n+j+a+a*e*d-j*a-b)%100;
                  f  = (j-j)%100;
                  g -= (h+b-f*i*l+k*i)%100;
                  m += (i+a)%100;
               }
               break;

               case 2:
               {
                  c += (j-j*a-h+c*k)%100;
                  a -= (a-i+l+e+g-b+b)%100;
                  n += (e+k+j-h-c)%100;
                  a += (c-l-n-j+e+f*k*e)%100;
                  a += (j+c-a-d+e+f+f+g-h+e-l-n)%100;
                  c += (b-m)%100;
               }
               break;

               default:
               {
                  k += (m+d-n-c-d-a+d-l+m+b+b*j+g+l)%100;
                  j += (n-n+e+m-i+e+e+m)%100;
                  k -= (f-b+a-j-n+b*g-c-i-g*i+k-n-k)%100;
                  g -= (d*a-c-j+a+l*m)%100;
                  n += (b-c+h-k+e-g-g+h+a)%100;
               }
               }

            }
            for( ; ++FORcnt[24]%5 ; )
            {
               c += (a*a-a+j+a)%100;
               b -= (l-m-h)%100;
               j -= (c+f-g-b-i*a+j+c-f-k-l*h+h+m)%100;
               k += (j-f)%100;
               e -= (e*l+n-h-f*c*l-n*b)%100;
            }
            j -= (a*n*k-c-a+c+k-g-j-d)%100;
            d += (j+m-k+k+h+l+g-l-k-n*c)%100;
         }
         h -= (l*j)%100;
         j += (b-b*g+b*d+i-d-n+d)%100;
         h += (k+h+e)%100;
         e += (n-d-m-c-n+l*c-f+h)%100;
      }
      h += (g-n-n+d-b-f-n+e*g*d+h*l+h)%100;
      e -= (h+n*g-b*k+l)%100;
   } while( ++DOcnt[15]%5 );
   h += (c+f-f+l-d-l+g+j-h*m+j*g-j)%100;
   h -= (j-c-d+i)%100;
   i += (j*g*k-h-g-c)%100;
   e += (k+h*j*k-l-f-h*i+b*g+b+b)%100;
   k -= (j+f-l-c*a+i*e*h*d+g*n-e-c-k)%100;
   k -= (g*h-a*f*f-i+m+b*m+e+h-l)%100;
   h += (n-n-m)%100;
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
            e -= (f-l-j+i)%100;
            f += (f+b-l+l)%100;
            b -= (b-c+j-n-g-m+d+c+j+d+n-f+m)%100;
            e -= (n+i+j-b-g-e-k)%100;
            k += (c+n*l+n-m*l-n+j-b+c+d*c)%100;
         }
         else
         {
            while( ++WHILEcnt[18]%5 )
            {
               do
               {
                  c  = (f-n+d*d+n*l+c*a)%100;
                  h += (j+m*b-n-e)%100;
                  c += (h-b*m*a+h+j-j*m-m)%100;
                  h  = (h*g-n*h+i*e-c+h-a*b-e*n*e)%100;
                  b -= (d-e-i*f)%100;
               } while( ++DOcnt[18]%5 );
               b += (d-b+d+a-j+d+j-k-i-c+a-f*g)%100;
               for( ; ++FORcnt[27]%5 ; )
               {
                  a -= (i+b*i-h+g-a+g+m+c*h+h*g)%100;
                  h -= (g*g+m-k*j-l-b-g+j-k-l)%100;
                  l -= (f-h-i-l+k-a)%100;
                  j += (n+k-k*l+c+c-b+f*j-i*n)%100;
               }
            }
            
            switch( ++SWcnt[9]%3 )
            {

            case 1:
            {
               if( ++IFcnt[13]%10 )
               {
                  c -= (h-a-c+k+l-i+c-f-l)%100;
                  d -= (m+k*k-a*c*b+b+j*l-g-k+g*h)%100;
                  h -= (d+m+f*c-n-h-d+f+m*n+d-j-h)%100;
                  j  = (c+c-e*e+d+c+c*h+i-e+n-m)%100;
                  i += (k-l*b+j-i+d)%100;
               }
               if( ++IFEcnt[18]%2 )
               {
                  n -= (f+c+h*e-i-l-h+g+h*h)%100;
                  c += (h+g)%100;
               }
               else
               {
                  g += (a+f+m*i*f+b+i-m+b-d*f)%100;
               }
               while( ++WHILEcnt[19]%5 )
               {
                  i += (i*k+e-f+i-g*h+a+n*e+a)%100;
                  i += (i+h*a-c+d-n+c-a*j+e)%100;
                  n += (n+d+g+c-e*b)%100;
                  f += (l*b+g+a+n-h*d-i)%100;
                  m -= (l+d+i-e+b-f*e-g-d+n)%100;
               }
               do
               {
                  e += (j-b*l-d-m-m+b-m+e-i)%100;
                  f += (b+k-f-e-j+a+d-i*c-f)%100;
                  a += (c-f+g+h*g+l*m-b+l+e+l)%100;
                  d -= (m*h+b)%100;
               } while( ++DOcnt[19]%5 );
               for( ; ++FORcnt[28]%5 ; )
               {
                  c -= (c+k)%100;
                  g  = (j-j+n+i)%100;
                  j -= (c-m*c*g-g+n*a+c-g*e*f+n-f)%100;
                  l -= (l-c-f+j+h)%100;
                  k += (j*n*k*b-d+n-j+i*e-f+a-b)%100;
                  g += (j+g-m-l-c-a+m+k)%100;
               }
               for( ; ++FORcnt[29]%5 ; )
               {
                  g  = (a-b*f-l+f+d-i-n+a+g+b-c)%100;
                  k += (n-j-a+m*m*n-l+l-m-c+d-a)%100;
                  f -= (c+n+j-m-n-l)%100;
                  h += (i*b-m-m*f-i+l-d-n+a)%100;
                  k -= (k*l+b+h+n-a*n+g)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[19]%2 )
               {
                  i -= (h*d-e-l-m*k+i*a+h*k+f)%100;
                  b += (h*f+f*j-g+l-h+j-m+c*m)%100;
                  d += (b-k+j)%100;
                  j += (a+a)%100;
               }
               else
               {
                  g += (h+f)%100;
                  h -= (k-a-e+e-n+b)%100;
                  c -= (f-c+d)%100;
                  m += (e*d-l+e+a*m*e*h*j-k*l)%100;
                  h -= (n+g+n+g*l-l)%100;
               }
               while( ++WHILEcnt[20]%5 )
               {
                  j -= (n*f*l+j-h+d*f+k+i+l-h+d+h)%100;
                  f += (b+b)%100;
                  l -= (i-m*n*b+m-g)%100;
                  a -= (j+b+m+b+e-a-f-l)%100;
                  n  = (l+i*b-n-a)%100;
                  b += (h*a+d)%100;
               }
               n += (d+k*d-l+e)%100;
            }
            break;

            default:
            {
               m -= (h-f-d+j+k+f*g+m-i*d*a+f-l*g)%100;
               k -= (b-f)%100;
               b -= (i-g+n)%100;
               e -= (i+a+k*a-i+n-c-b*m+c+j-b+j)%100;
               e -= (d-h-c+a)%100;
            }
            }

            m += (h+h+b+g-m-h-n*d+l+g-n+f-d+i)%100;
            k += (h-c-g+g-g+l*h-e+j+n+l)%100;
            d -= (f+c+n+d-k)%100;
         }
         j -= (l-l-b*a-f*h-h*c+f*n)%100;
         j -= (d+g*l*m*l-g+m+a-d-c+e-k)%100;
         b += (c+g-a-c+m-j+c+c-g-e-l-j-k-l)%100;
         d += (a-m*m+m*d+a+l*d-l-c-i-g*f)%100;
         f -= (k+f)%100;
      }
      j -= (l-l+e*c-h)%100;
      c  = (h*i-m-e-n-c+b+c-d*n+n-d)%100;
      e -= (j-k-e+c-f-i+b*a)%100;
   }
   f += (h+f*g-c+c)%100;
   n -= (f+h*c*g+d*f-f+i+n+n)%100;
   b += (i+l*g-l+i+f)%100;
   j += (e+k+c+m*j-n-k-d)%100;
   l -= (j-a-f*a-n-f-b+b)%100;
   b -= (l-f)%100;
   h += (a-k*i*h)%100;
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
         d -= (l-a+j+m*m+g*h*g-f-c-f*c)%100;
         for( ; ++FORcnt[33]%5 ; )
         {
            
            switch( ++SWcnt[10]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[21]%2 )
               {
                  n += (e*c+f-h+g+c)%100;
                  d += (m+i-j-l-l+l-g*m+n*h)%100;
                  i += (f*i*d-c+i+h-j-j-m)%100;
                  c -= (b+i-n+m-l+d)%100;
               }
               else
               {
                  c += (i*l)%100;
                  m += (l-l+n*k-e+h-n*k*f-h*m-f-j)%100;
                  c += (d-h-n-d-n+a-c-f-k+b-b+h)%100;
                  h -= (k+k-g-a-f*l+d-d-i)%100;
                  g += (n+d)%100;
               }
               while( ++WHILEcnt[21]%5 )
               {
                  d += (k+a+g)%100;
                  m -= (k-j-f+d*f-n+i+a*g+f+f-g-m)%100;
                  b += (m+k*b-n+f*h*e+f+i-g-i-g*d+g)%100;
                  h  = (c-b)%100;
                  g -= (f*c+n-g+e+d-k+b-j+e)%100;
                  f += (g+m-a+l-k+i+m)%100;
               }
               do
               {
                  d += (n-l)%100;
                  c -= (f*b+l-j+a-n+f-f-j-m)%100;
                  m += (e-c+n+e+l-m-a-b-i+n-f*i+m)%100;
                  m -= (b-c+n-i-c+c)%100;
                  b -= (j-k-n)%100;
               } while( ++DOcnt[21]%5 );
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[31]%5 ; )
               {
                  j  = (f+e+g-g*h-f+e+g-h+m-m-b)%100;
                  m += (n*e*d+n+a+e*l-m)%100;
               }
            }
            break;

            default:
            {
               if( ++IFcnt[15]%10 )
               {
                  m -= (n*k-h+m+i-h+m*d*j-a-k)%100;
                  l -= (k+k-k*l+j+i+e+c+f+g-c)%100;
                  g += (h+e+i*j+g+h-a)%100;
                  m += (n*b-c+k+l-n+i+b*f-n*f)%100;
               }
               for( ; ++FORcnt[32]%5 ; )
               {
                  e -= (l-e+c-e+b+f+h-f-g+c-k)%100;
                  i  = (a-j-i+a-b)%100;
                  c -= (d-e)%100;
                  l -= (k+b*n+m-k*n)%100;
                  n += (d+h-j)%100;
                  e -= (k*g*g+k*a+f-j-a+n+c*a+l)%100;
               }
               if( ++IFEcnt[22]%2 )
               {
                  j += (c*a+e*a-d+l)%100;
                  l += (d-i+m+d+n-f+h+k-d+n+m+c+h-b)%100;
                  k -= (a*l+k+e-n-m-d+j-h-h*a-f)%100;
               }
               else
               {
                  c += (n-l-m-l-m+n*g)%100;
                  l += (j+m-b+e)%100;
                  b -= (e+d*d*l-c+e*e-g+d-i+f+m)%100;
                  f  = (a+n*j-i)%100;
                  e += (k-k+n+k-g)%100;
               }
               while( ++WHILEcnt[22]%5 )
               {
                  n += (b+j+n)%100;
                  h  = (d*d+e-j+c-n+e+d-h+k)%100;
                  n -= (c+d-j*b+m*j*i+b-b+n*j+n)%100;
                  n += (k+b)%100;
                  n -= (m*h+m*m+g-f+i)%100;
               }
               m += (f+j+i+k-l)%100;
            }
            }

            i += (i-n+f+b*m-l*b)%100;
            m += (h-a-a+k-f*l-f+n+m-m)%100;
            g += (d+g+c+m+d+n)%100;
            k  = (d-f-c+i-g+h+i*k-k*l+a)%100;
         }
         d += (n+l-c+l-k-k+d*a-l+f+c-b*m*i)%100;
         j += (a+b-a+f*a)%100;
         e -= (a+e+m-b*b*m-b+j-f-k*g-j-i+m)%100;
         l += (f+n)%100;
      }
      a += (g+j)%100;
      a -= (h+b+b)%100;
      n += (h+m-d+g+f)%100;
   } while( ++DOcnt[20]%5 );
   g -= (k-m*j-j+f-d+m+g+i+b)%100;
   l += (f+j-b+j-b+n-c-n-d-l)%100;
   d += (f*i+i-a+g)%100;
   e -= (b*n+k-e+b-k-f+b+a+l-h)%100;
   m  = (d-b*d-f+i-n*b*b+b+a+m)%100;
   f += (g*i*n-j*g)%100;
   i += (l*a+d+m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F11(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      m -= (m+e)%100;
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
                  l -= (d+e+d+d)%100;
                  i += (b-f-h*a+l+j+k-j*j*g-i+h+g-f)%100;
                  e += (i-b-m-j+h)%100;
                  f -= (c-i-d+g*j-j)%100;
                  d += (k+m)%100;
                  b += (c+d*i-n*a-m+d+n+h-d-d+k-a)%100;
               }
               else
               {
                  m += (a+a-n*n)%100;
                  m -= (h+j+k*l-i*b+a-g-h-m+d+g+h+d)%100;
                  l += (n*g-l*a-e+m+e)%100;
                  g += (n+h-h-c-b+j+g+i+k+c-j+c-b+k)%100;
               }
               while( ++WHILEcnt[23]%5 )
               {
                  a += (h+c+d)%100;
                  j -= (a-n-g)%100;
                  h -= (i-i-m-n-h+n*b)%100;
                  n += (k-c)%100;
                  d += (e+e)%100;
               }
               do
               {
                  f += (m*c*m+g+f-l+n+a+j-c+l-e)%100;
                  m += (m*l+f-g+n-i*i-d)%100;
                  a += (f+e*d+m+k-e*c*m*k*k*l-e)%100;
               } while( ++DOcnt[23]%5 );
               for( ; ++FORcnt[34]%5 ; )
               {
                  h += (i+b-h*k*m)%100;
                  n -= (l+h+h+h-d+g)%100;
                  c += (d+n-f+j-k+n-a*g+b-n-e)%100;
                  g -= (k-l+a+l*e+i-l*j*c-f*j)%100;
                  a += (k-l-j+i*m-g*a-k-c)%100;
               }
               for( ; ++FORcnt[35]%5 ; )
               {
                  d -= (c+e-f-g-j-a*m)%100;
                  m -= (a-k-f+f+g+e-h+h)%100;
                  e -= (i*h+k*l+j+d-m*l+b-a+d)%100;
                  b += (b+g-m-j*h*a*f+e-e-m*g*b)%100;
               }
            }
            if( ++IFEcnt[24]%2 )
            {
               i += (f-j+i*m+g+k+h-m+e-j*h-d*d)%100;
               e += (f+h-m+g-g*b)%100;
               n -= (j*n+j+c*n-m+d)%100;
            }
            else
            {
               while( ++WHILEcnt[24]%5 )
               {
                  i += (h*i-e*d-f+e)%100;
                  a += (m+a*f)%100;
                  n += (n-b*e-i-f-b-i-f-a*e+m+n*l-b)%100;
                  m -= (a-b*a+j*h-i+j+k+j-d+b+n-n)%100;
                  l -= (n+b+b-j-a*c-m*j-i*j-g+d+d)%100;
               }
               do
               {
                  b -= (f*i)%100;
               } while( ++DOcnt[24]%5 );
               if( ++IFcnt[18]%10 )
               {
                  a += (k+e+j+m-k-c-n)%100;
                  d += (j+e+m+b-a+i*e+f*a*k)%100;
               }
               i -= (h-j-a-k)%100;
               for( ; ++FORcnt[36]%5 ; )
               {
                  d -= (i+j-i)%100;
                  g -= (n*m*e+k-d*d+l-e+h+b-e+c-h)%100;
                  n += (h*j+a-j-l+j-c*k+h*l+g)%100;
                  g -= (i+m*j+e+j+d-m*k)%100;
                  d -= (k-i+f-e)%100;
               }
               
               switch( ++SWcnt[12]%3 )
               {

               case 1:
               {
                  j += (e-f-c-m*n*a+i-d-b*n+b-j)%100;
                  k += (l+a*i+k-g+h*c)%100;
                  f += (g*g+m+g*i+n+j*c-i*j*b-e+g)%100;
                  i -= (l+m+n)%100;
               }
               break;

               case 2:
               {
                  g -= (d+k)%100;
                  c -= (a+j-n)%100;
                  c -= (b*f+h+e-f-n+e+n-e)%100;
                  e -= (n-l)%100;
                  b += (a+j*l-m)%100;
                  i += (j-i+l*j+a*h-n+g-h-f-a*k+h*d)%100;
               }
               break;

               default:
               {
                  i += (j*k)%100;
                  b += (j-a)%100;
                  g += (b+b+a-c*l+c*h*i+k)%100;
                  g += (c+l*n+m+b-a)%100;
                  j += (f*g)%100;
               }
               }

            }
            i += (h+n+e)%100;
            c += (i-d+n-k+k-d+a+l-e)%100;
            k += (c-d-e*i+g-a*m-n+f*j-m*c-a)%100;
         }
         break;

         case 2:
         {
            f -= (j-n+e-g*e)%100;
            a += (m-a+i-a-i*b-f*e*l+c)%100;
            a += (f*h+j*a*f+d-j-c)%100;
            f -= (i*b+f+n)%100;
            f += (j+f+i-d-l-e-e+c*g)%100;
         }
         break;

         default:
         {
            k -= (g+i-n*m-l+h)%100;
            e -= (k+e)%100;
            b -= (e+n-i*j-d-l*l-l+h+c+n-a+i)%100;
            a -= (j+k)%100;
         }
         }

         a -= (b+m-b+e*e+i-m+f-f+i+f)%100;
         a += (e+a*m*d*f-f+a-l)%100;
         l += (n-m+b+d)%100;
         n += (e+f+n+k-c+g-j-i+l)%100;
         f -= (b-i-n+k+h*m+b+c-m+h*i-b*l)%100;
      }
      c += (a-f+m+k-a+g+l-m+i+j-h)%100;
      b -= (e-g-e+f*j*f+j+f)%100;
   } while( ++DOcnt[22]%5 );
   c  = (k*e-e*k-i-a-j)%100;
   e -= (e+j-m+i+k-b+e+g+k*m*b+b-a+n)%100;
   k -= (m+j*i)%100;
   g -= (e+i-c+h-g-l+j-j-g+h+h*e+c)%100;
   j  = (c+b)%100;
   l += (d+e-m-c+a-j-h+i+k-b)%100;
   h -= (n+c-i+g-i-e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F12(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[26]%2 )
   {
      c -= (j*e-k-g+k*k+a-m-g+m)%100;
      b -= (g-g-m-i+d-d+l*g)%100;
      d += (e+c+b+g+d)%100;
      k += (a-g-d*b-g+b-a+h*a-k)%100;
      d  = (c+n)%100;
      i += (f*e+i-k+e*h+b+d+k*b+m-f)%100;
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
                  l += (i-b-a-l*d-g+n+f-c)%100;
                  a -= (d*b+m-b+l*n-f-m+a-c-d-d+k-h)%100;
                  i -= (h-g+j-h-f)%100;
                  i -= (l+j-i+m)%100;
                  l -= (g-i-m-g)%100;
                  i -= (j+b)%100;
               }
               for( ; ++FORcnt[38]%5 ; )
               {
                  n += (n*h)%100;
                  d -= (n-i-j*i+m+b*c-f)%100;
                  e  = (f-f+n+n-e*h-b-k-a+g-i)%100;
                  c += (a-n-e+d+c+h+b+k+m+n*l-n+n)%100;
                  a += (a+c*d-f*c+h*c)%100;
               }
               if( ++IFEcnt[25]%2 )
               {
                  a += (h+n*g+g*e*l)%100;
                  m -= (b*j+f*f*j+j-k+g)%100;
                  g += (b-h+e-n+h+e*j+b*n)%100;
                  j += (h*l)%100;
                  i -= (g-d+c+b*k-k-m)%100;
               }
               else
               {
                  f  = (h+e-a*a+a+f+n+a+d-h)%100;
                  c -= (f+a-m*f-f*k+c)%100;
                  a -= (j-g-i-d-l)%100;
               }
               while( ++WHILEcnt[25]%5 )
               {
                  g += (m+i+e+m+g+d+j)%100;
                  c -= (a-h+b-g-l*a*b+d*m+m-d-c-d)%100;
                  m += (h-j*g-d)%100;
                  j -= (d-c-b+e-a+m-l+c-h+g-h-a+k)%100;
               }
            }
            do
            {
               a += (l-m+k+a+f+h)%100;
               for( ; ++FORcnt[40]%5 ; )
               {
                  d += (n-g+b+e*a-j+g-h-n*m)%100;
                  e  = (k-n+c+d+n+l+c+m+d*n*j+i-j-g)%100;
                  c  = (c+g*d)%100;
                  a += (a*a-n-f-d-m*f*k)%100;
                  n += (m+k*j+d-a-f*l+c+b*h-k-n+n)%100;
               }
               
               switch( ++SWcnt[13]%3 )
               {

               case 1:
               {
                  j += (k-e+f-i-a-f*h-c+j*d-h-m+a*e)%100;
               }
               break;

               case 2:
               {
                  n -= (i+k-i+k-m+l*e*l+h*i+h-e)%100;
                  a -= (h*c*c*e*h-b+e+i+e)%100;
               }
               break;

               default:
               {
                  n += (b-l+l+j*c-m)%100;
                  e -= (b-c*c-g*f-b+m-l-l+a)%100;
                  k -= (a+f-g-b-l+c+h-e+f)%100;
                  l += (c+a)%100;
                  c -= (m*f+f+g-c+j)%100;
               }
               }

               if( ++IFcnt[20]%10 )
               {
                  b -= (e+b+e+d-n+n-h+e-h+a-m)%100;
                  m -= (d-m+g+l+i+c+e)%100;
                  j += (l-d-i*h*c+f+c)%100;
                  f -= (j+k*f-k+a+g+j-c-m)%100;
               }
               h -= (c-n+d*d+i-l*a*f*g+i*m*d+j)%100;
               b -= (g-h-d+j*e)%100;
            } while( ++DOcnt[26]%5 );
            j += (j*m-d)%100;
            g += (b*a-m-n+c-b-c-m)%100;
            i += (c+n-a*d+j+d+l)%100;
         } while( ++DOcnt[25]%5 );
         g += (d-c+d*l-l)%100;
         a -= (f-k*k-c-h-m+i-m+a*i-d-b-j)%100;
         f -= (l-a-g+b*b+c-h+k+e)%100;
         a -= (j+f+j*j+g-g-m)%100;
      }
      k += (m+a+b)%100;
      a += (d-a*a+j-b-k*m+j+e*j-n)%100;
      n -= (b-b)%100;
      m -= (j-e+n-g*k+i-j+b-l)%100;
      c -= (h-b+c*f-f)%100;
   }
   i += (i-e*c+l+m)%100;
   e  = (k+f)%100;
   a += (f+h-i*n+c-l)%100;
   d += (b+b-h-e-i-m+m*k*e-g)%100;
   j += (k+c-a-h*j-f-b*c*e-n-i-h-m*a)%100;
   h += (f-f-a*a+f)%100;
   k -= (e+n-j*l+d-h+n+f-d+e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F13(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[29]%2 )
   {
      j += (c-a-j-n*j-k*h*k+b-c+a+n-k*b)%100;
      d -= (j+b)%100;
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
                  d -= (g+h+b+c*j)%100;
                  l += (d-d+c-m-e*n+k+h*l-e)%100;
                  a -= (k+c*e)%100;
                  b -= (e+n)%100;
                  i -= (h+l-k+e-b)%100;
                  a -= (l+b+b+d-h-m)%100;
               }
               if( ++IFEcnt[27]%2 )
               {
                  d  = (b-j)%100;
                  i -= (k-d+c+k-b*i+j-h-f)%100;
                  m  = (d-i*d-i)%100;
                  m -= (k*b-h*c+a+b*g+d-f-e+e+h+e-l)%100;
                  b -= (b+e)%100;
               }
               else
               {
                  j += (h-b+m+m-f-g*j+i+h*l-f*h)%100;
                  e -= (b-f+l-f-d+g-b-m*f+g+b*n)%100;
                  k += (f*i*k+f)%100;
                  g -= (d+n-f*k+f-e)%100;
                  k -= (e+c*a+n+a-d)%100;
               }
               while( ++WHILEcnt[27]%5 )
               {
                  j  = (f+e-a-k+i*c*k*g+d)%100;
                  b -= (l-d*j-c*k-a+l+c+i+g+n-h)%100;
                  f -= (f-l*m+b-n*c-f+b+e-d)%100;
                  i += (d+c-a+h-m*f-j)%100;
               }
               do
               {
                  l  = (d+f-l-h*j*d+g-f+n*b)%100;
                  m -= (b*j+h+i-h)%100;
                  d -= (b-b)%100;
                  g += (f-k)%100;
                  e += (a-b)%100;
                  i -= (f-a-i-k-l+c-f-c*d*i+m+g)%100;
               } while( ++DOcnt[28]%5 );
            }
            if( ++IFcnt[21]%10 )
            {
               n += (b-i+n+m)%100;
               for( ; ++FORcnt[43]%5 ; )
               {
                  c -= (e*k)%100;
                  c -= (m-f+j-n+h)%100;
                  k -= (n*d-k-h-e+a-j+l-c*k)%100;
               }
               
               switch( ++SWcnt[14]%3 )
               {

               case 1:
               {
                  g += (l+l-c-c+e+k+l-k+f*e*m+a+a)%100;
                  h -= (i-g+b+l+c*f+d)%100;
                  n -= (b-h+m+f+m+e*h+e+e+b+l*a+c*j)%100;
                  b += (i+a-k*j+h*i-e*a)%100;
                  l -= (g-m-c-m+f+a-b)%100;
               }
               break;

               case 2:
               {
                  h -= (l+b+h+j-m*j+h+h-b*l-k)%100;
                  n  = (e+d-j+i-k+h-m-h+f+b+g*n-c)%100;
                  n -= (j-n)%100;
                  m += (i+c+k+l-j*l-h+g-d*d-c*g)%100;
               }
               break;

               default:
               {
                  i += (a+b*m)%100;
                  l += (e*h+i-c+a*h+a+l*m-i)%100;
                  l -= (n-e+a*a+g+k-g*h-e*a+i*d-n+l)%100;
                  j += (d+f+n-m-g+f+j+d-d*j+d*n)%100;
                  k += (b+e-a+n*a+m+i-k)%100;
                  i -= (h-h*m-b+d-c)%100;
               }
               }

               if( ++IFEcnt[28]%2 )
               {
                  a -= (g-d+i+k-f-k+g+m+c+j-m*n*k+a)%100;
               }
               else
               {
                  f += (b-a-n-c*b)%100;
                  b += (c-f-k+a-g-l*k-j)%100;
                  c -= (b*g-m+i+d-b+k+m+b+f+f-k+i)%100;
                  l += (f*e+g)%100;
                  l -= (m+i-k+c+j+j)%100;
               }
               j += (b-g-k-i-c)%100;
            }
            f += (b*j-m-c+c+i)%100;
            a += (b-k+g+l+e)%100;
            a -= (n+h)%100;
         } while( ++DOcnt[27]%5 );
         f -= (i+j+h+n+b+g+m+c*k+j)%100;
         g  = (f-l*d+a*n+b+d-h-e+i-e)%100;
      }
      d -= (h+j)%100;
      h  = (e+i+e)%100;
      l -= (f-m*h+c+g-h-m-b)%100;
      f += (a+e+c*j+d+n*l+b+e+m)%100;
   }
   i += (k-a-h)%100;
   k += (g*e)%100;
   k += (g-k*a-d+n+f+l-d-h)%100;
   n += (l+d+i+h)%100;
   e += (d-k+d+k+a*k+l+j-k-g+l*c)%100;
   k += (e-b+l*g*i*f)%100;
   f  = (d+m+h+f-g+b-i+n+b-c+a+f+c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F14(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[31]%5 )
   {
      do
      {
         for( ; ++FORcnt[46]%5 ; )
         {
            if( ++IFcnt[22]%10 )
            {
               for( ; ++FORcnt[44]%5 ; )
               {
                  m += (k-e+g+f+d-k-j)%100;
                  e -= (g+g+f-m-f-k*i*g+n+k-g-k-a+e)%100;
                  b -= (j-c)%100;
               }
               if( ++IFEcnt[30]%2 )
               {
                  k += (b+d-i+f-b*h*n)%100;
                  i += (m+h)%100;
                  d += (d+n)%100;
                  m += (c*j-n-b+h-l)%100;
               }
               else
               {
                  k -= (h-h-f+b-k*n+c*e*b)%100;
                  d += (h+g+k-d+n*k-h*k-e-i-m)%100;
                  a += (f+a-k+j*c*a)%100;
                  g -= (d-b-j+j*c*h-h-i+f+a-e+g+d)%100;
                  c += (e-j*c+h+d+b-m+l+k-j+i+g+b*d)%100;
               }
               while( ++WHILEcnt[29]%5 )
               {
                  a += (g-n+l+b*l+m-e-i+l*i*l-g+b)%100;
                  m += (h-b-l-b*m+l+n*c-l+l)%100;
                  c  = (f*c+g)%100;
                  n += (f-l+a+k-f*g-i-h*i)%100;
                  a -= (m-d+e-m)%100;
                  e += (h+e+m*h*a*f-k+g+a+f+k)%100;
               }
               do
               {
                  m += (i-h+m-e+j-e*b)%100;
                  i += (j-h-h-a+n+a-k-k+j+b*a)%100;
                  m -= (c-k+l-l-f*n*c+d)%100;
                  n += (f-i-c*k*i*b+i-f-d+f+b*k+b)%100;
                  k -= (m+c)%100;
               } while( ++DOcnt[30]%5 );
               i += (g-a-c-e+m-k*j+k+f+i-n)%100;
            }
            for( ; ++FORcnt[45]%5 ; )
            {
               
               switch( ++SWcnt[15]%3 )
               {

               case 1:
               {
                  m -= (k-m+g+n+l+l+i+e-g-b*f)%100;
                  c += (m-a)%100;
                  i += (b+g-g+f+a+n-e-n-a+l-n-h+e*a)%100;
                  n  = (l-g-b-l*f-n*j+c)%100;
               }
               break;

               case 2:
               {
                  n += (f-h-g*f+m+d-f*b+g+e-f)%100;
                  n -= (b*j-b)%100;
                  a  = (b+a*j-k-n+b+j+c+j-l*f-n-e)%100;
                  g -= (a-a-j*b*j)%100;
                  a += (a+f-c-h+m-j-d-c+n+b)%100;
                  n -= (l*n+k+h-e-m+a*g-h-g-e-n+e)%100;
               }
               break;

               default:
               {
                  n -= (l-m-k-l+m-j)%100;
                  b -= (h+e-k+l+f*a-a*b-b-h+m)%100;
                  g -= (e-j-n*n-i)%100;
                  m  = (j+m)%100;
                  k += (g+e-g-g)%100;
               }
               }

               if( ++IFcnt[23]%10 )
               {
                  a  = (j+j-b-h*i-h-d-j*m+e-a+l-k-h)%100;
                  l += (l*i-h+k+b-i-n-i)%100;
                  b += (b+g+h*d-j*m+c)%100;
               }
               if( ++IFEcnt[31]%2 )
               {
                  e -= (h+g)%100;
                  a += (j-b-b*d)%100;
                  d += (c-c-m-m-c+d+f+g-e+b)%100;
                  e -= (i+f-f-k-e+b*k-i-f+a+h+k-d-k)%100;
               }
               else
               {
                  m  = (b+g*d-h-g-k*j-j*k*f-l)%100;
                  n += (f*g+j)%100;
                  j += (e*f-c+a-g)%100;
                  n  = (h+n)%100;
                  h -= (k+d-k-d)%100;
               }
               while( ++WHILEcnt[30]%5 )
               {
                  h -= (d+l+l+d-m*a*i+j*k*j-m)%100;
                  i  = (g+g-k+l+l+g+g)%100;
                  i += (h-n*m*e+e-h-j+i+n*n)%100;
                  d -= (b-m-i+b-f+n-c*h-g+f)%100;
                  g += (j-f*l-a+j-h+h-g+f+d*l+g)%100;
                  i -= (d+i+j*d-d+n-h+n+i-m-m*m)%100;
               }
               b += (d+f*i*g+c-g-d-h-a*b-i+e*l)%100;
            }
            f += (k+n+k*c-i*g*f*i-j-n+n+l)%100;
            a -= (m-m*h-e-e+j+c*k-k+m-j-f-b)%100;
            g -= (m+h+d-l-j*j-h*l-n)%100;
            m += (c-a+h-c+d-c*l-h*n*e-m*b)%100;
         }
         i -= (g-c)%100;
         m -= (i-j)%100;
         f -= (j+a-e+b-d-h-h+a)%100;
      } while( ++DOcnt[29]%5 );
      l -= (b*i)%100;
      l -= (d+d-k*j-j+j-c+h*i-l-e)%100;
      j -= (g-l+e+b*e+j-m+d-c*n)%100;
      e  = (d-f-g-a-m-j-c)%100;
   }
   d += (d-a+a+e+j+h-i+m-i*a+f*n)%100;
   k  = (g-n+g+k+k*a-e+l)%100;
   f  = (d-g+c+l-d+f+h+j+j-j+m)%100;
   i -= (i-n-i-b-e+n-h+i*j-i)%100;
   d -= (a+e-d-f-i+c+b+i-b+g+a*h-j)%100;
   h += (a+g+e+e-c*i-b+g)%100;
   d += (l*n+c-n+g-c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F15(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      for( ; ++FORcnt[49]%5 ; )
      {
         for( ; ++FORcnt[48]%5 ; )
         {
            if( ++IFEcnt[33]%2 )
            {
               
               switch( ++SWcnt[16]%3 )
               {

               case 1:
               {
                  a += (j+b-e+i-n+k*n-n-a*i+m+m*e)%100;
                  c += (m+a-b+l-i*e*g-f+m-h)%100;
                  g -= (m*n-h+n+f+d*i-e+k-a-l+j-d+j)%100;
                  i -= (d+g+d-m-a-d+j-m)%100;
               }
               break;

               case 2:
               {
                  b -= (n-e*m*n-m+m-i+f-f)%100;
                  b -= (f+i+g-h*f)%100;
                  m -= (n+n*h*f+d+d-d+a)%100;
                  f -= (e+l+k+h+c-j-f-n)%100;
                  h += (l+d+k)%100;
                  i  = (g*l*j*d*b+k*e)%100;
               }
               break;

               default:
               {
                  j += (h-e-b+h-k+n*f-i+c+e-j-g)%100;
                  d += (b+a)%100;
                  a -= (g-b+l)%100;
                  n += (f-d-m+b+n*e-m)%100;
                  e += (j-f+n-k)%100;
               }
               }

               if( ++IFEcnt[32]%2 )
               {
                  k -= (a-a*n-d*c+e-g*e+g)%100;
                  h += (d-i*l+j-j-g)%100;
                  n -= (l-a+n*b+f+l-m+l+f+d-i*j-m-a)%100;
                  d += (n-b-k+e+k+b+d)%100;
               }
               else
               {
                  c += (c+l*f+e-e-c)%100;
                  e -= (k-h-k+f-b+f-d+d)%100;
                  k += (j-j-a-j)%100;
                  g += (d-e+l-m-c+k+g-n-g-l+d*e-h)%100;
                  k -= (f-c-g-c-k+n)%100;
               }
               while( ++WHILEcnt[33]%5 )
               {
                  j += (g-m-e+h+b+m*j*b-j-e-h-l-g+b)%100;
                  g  = (m-a+f+g)%100;
                  n += (b*k-c-g-g*n-n)%100;
                  f += (k-n)%100;
                  e -= (h-g+a-k+a*h+j-b-k-e+g)%100;
                  f -= (i-n+l+k-k-d-a+c+g+l-k)%100;
               }
               do
               {
                  c -= (d+m+g+e+n*b+k-n+d-f+a-c)%100;
                  j += (a*i)%100;
                  d += (f+l+c+l-i+f-n)%100;
                  c += (k+l)%100;
                  j  = (g-b)%100;
               } while( ++DOcnt[33]%5 );
               j += (g-b)%100;
            }
            else
            {
               while( ++WHILEcnt[32]%5 )
               {
                  m -= (n+k*f+c+l)%100;
                  d -= (g+b*k-e)%100;
                  m += (d+i+m-l-l+f+l)%100;
                  n += (d-c-b+f+l-e+g+f*k+b)%100;
               }
               do
               {
                  g -= (j+c-k-g*b-e-d-g+f-h+a)%100;
                  n -= (e*e+l-c-e-n*k+b-i)%100;
                  j += (e*b*h+c-d+b+c+k-c-l-i+b*c)%100;
                  g  = (n*l)%100;
                  e -= (b-k+g+d+m-n+j)%100;
                  a += (n+g-k*d+h*c+l+m-g)%100;
               } while( ++DOcnt[32]%5 );
               if( ++IFcnt[24]%10 )
               {
                  b -= (k-m-b+g*m+b-l-i)%100;
                  d += (i+k-b+j*h+d-m+l-b+l*b+m+e)%100;
                  n += (k+c-n+e-h*e+k-i-a)%100;
                  g -= (n+d+l+l)%100;
                  a += (m+b+j+k+i-c+j-f+l-n+e+j*l*h)%100;
               }
               e  = (a+e-k+l+m-f*g-f)%100;
               for( ; ++FORcnt[47]%5 ; )
               {
                  d += (f+f*i*d*a*i+f-f+f*a-j+j+l)%100;
                  k += (c+n*g-h*a-h-i+h)%100;
                  g += (n+a+m-j+a*h*d+g+n+i-i-b+e-f)%100;
               }
            }
            g += (h-g+e)%100;
         }
      }
      e -= (m*n-c-f-e-b+f-h*j-e+c)%100;
      i -= (m+k*b*g)%100;
      d += (j*n+b*f+b+f*b)%100;
      d -= (f+j-i-h+c+k-g+i)%100;
   } while( ++DOcnt[31]%5 );
   f -= (g+m-f*b-d+k*g-g+l-a-h)%100;
   k -= (h+m-e+l+m+n-f*m-a-j)%100;
   n += (k-n-h+l*j-a*i*f*i*l)%100;
   i -= (j+l*b+m+b+g+l+f-b-m)%100;
   m += (f-k*i*i+j+l)%100;
   i -= (m-d)%100;
   h += (d+k*g-f-h+m*j-e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F16(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[53]%5 ; )
   {
      if( ++IFcnt[26]%10 )
      {
         for( ; ++FORcnt[52]%5 ; )
         {
            if( ++IFEcnt[35]%2 )
            {
               if( ++IFEcnt[34]%2 )
               {
                  n -= (e-e)%100;
                  a += (d+a*i-g*a*c*k+g-h)%100;
                  d += (f*j-f+d-k-g*l+a-a+k+k-b-k+d)%100;
                  e -= (f-l-k+d-a+k+f)%100;
                  l += (h-d-m-l+a*k+f)%100;
                  f -= (b-m-h+g*m-f-k+d)%100;
               }
               else
               {
                  n -= (b-l+n+e+k+k-m*a-j-j+m)%100;
                  g -= (i*e+c-b+j+a+a+m*b*g*k+h)%100;
                  h += (a*n)%100;
                  d -= (n+j+d*g-d+d-h)%100;
               }
               while( ++WHILEcnt[35]%5 )
               {
                  i -= (b+h-m-m*n-h+m-b+m-c+k+g+l-d)%100;
                  a  = (b+g+l*c*e-j-h+m+f+f+i)%100;
                  l += (n*i*l+m+f-j+g-b+k-d)%100;
                  c += (b+g-d*l-i-e+a*k+m+g+h*c)%100;
                  g += (m+h)%100;
               }
               do
               {
                  l += (l+b-c+l+d+j-d+m-e+l-c*n)%100;
                  n -= (a*n+d-b*b+f+b*c+a)%100;
                  f -= (k*i+k*a-e*e+j-g)%100;
                  h += (n*b-j-k-k+l)%100;
                  a -= (l-g)%100;
               } while( ++DOcnt[35]%5 );
               for( ; ++FORcnt[51]%5 ; )
               {
                  a  = (d+h-j)%100;
                  i -= (j-n)%100;
                  l += (d+k-k+e-a*c+n*c-d*k+d+n+a)%100;
                  a -= (i*f+g*d+e-g+j-l-n-l+b*a+k*j)%100;
               }
               k += (m+a-d+l)%100;
            }
            else
            {
               while( ++WHILEcnt[34]%5 )
               {
                  l -= (g+h*j-i)%100;
                  j += (d+h)%100;
                  a += (c-k+j-e-m+b*e+g-f-h+b)%100;
                  g -= (e+g+m+i-k)%100;
                  g += (b*n-d-b+j+n+g+h*i+e+e)%100;
               }
               do
               {
                  g -= (e*b+l+n-l-i+n-g+d-b+n)%100;
               } while( ++DOcnt[34]%5 );
               c += (e+k+n-h+g+c-f+i-l*d+j+i-i-b)%100;
               for( ; ++FORcnt[50]%5 ; )
               {
                  h  = (f+l-l+m+j+a*h+f)%100;
                  l += (m-b-d-h-f+f-m-n+d*m)%100;
               }
               
               switch( ++SWcnt[17]%4 )
               {

               case 1:
               {
                  c += (g+f*m-i-d)%100;
                  b += (k-e+j+g-l+h-k-f)%100;
                  e -= (b-h*f-b)%100;
                  j -= (n+m-l*j-n)%100;
                  i -= (h+f*i*a*g-m+a+h-d-e+b*d-j)%100;
               }
               break;

               case 2:
               {
                  m += (h-e-m+n-e-l*n)%100;
                  k += (k+c*l+e+h*a-n*d+h-j+m)%100;
                  m -= (d+h+j-m)%100;
                  i += (i-m-d+i+f+c+a-k+c+e-b-m)%100;
               }
               break;

               case 3:
               {
                  n -= (d*d-i-b*c+g*j*e+l-f+i+m-m)%100;
                  i += (e*b-b-g*a*f+f)%100;
                  m += (e+j-k+k*j-d+c-a+i+m-a-l+h+e)%100;
                  c -= (b-k*h*f-g*k*h-m)%100;
                  i += (i+i)%100;
                  k -= (c+h+m+d*d+e-g-c)%100;
               }
               break;

               default:
               {
                  h -= (d*b*m+e-j)%100;
                  e -= (n+j-h*b-d-f-h+g-j-n+h)%100;
                  e  = (h-a+f+i-j+e*c+d-i+f+b)%100;
                  a += (l+f*f)%100;
                  h -= (d*j)%100;
               }
               }

               if( ++IFcnt[25]%10 )
               {
                  b += (b+k+k+a)%100;
                  b += (m-h+a-m+i)%100;
                  d += (i+c)%100;
               }
            }
            b -= (i-e*b*h*d+l+c+i+b+f+n*i)%100;
            h += (a-i-n-g+c*h-l)%100;
            e -= (i-g)%100;
         }
         a -= (b-l)%100;
         c -= (n+c-h*c+e*j+c*j+f+j-f)%100;
         k -= (k+l+b+d)%100;
         e -= (h-k-f*e+k+f-c-j)%100;
      }
      k -= (k-b-c+i+a*n-n-n+i*h+g)%100;
      i += (c-j+h*h*m*k)%100;
   }
   n -= (h-k-f-n-a+k+m*n+j)%100;
   i -= (i+h-d+j*j+e+i-k*k-g-m+a)%100;
   a -= (e-b)%100;
   n -= (b-e+i*l+i+g+j-n+k+n-n+e-e+c)%100;
   e += (g+j*h-g+j+i)%100;
   g -= (a-a)%100;
   l += (n+f-a*e+l*a+h+e+f+k-c+k-m)%100;
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
         h += (a+c)%100;
         j -= (h-l)%100;
         g -= (k+d+g+i)%100;
         a -= (a-n*n-n)%100;
         e += (n-i-h*l+k*c+l+e+i-l+n+c-i)%100;
      }
      else
      {
         while( ++WHILEcnt[37]%5 )
         {
            do
            {
               if( ++IFcnt[27]%10 )
               {
                  n += (l+j+l+n+i-a*h+f)%100;
                  j += (j+a+k+l*d-m+n*m*a-e*a+i+l+i)%100;
                  l -= (i-k-a-c+f+l*a-i)%100;
                  g -= (k-g)%100;
               }
               m += (f+d)%100;
               for( ; ++FORcnt[54]%5 ; )
               {
                  g -= (k*i-g)%100;
                  h += (a+a*l-d*a-b*b+n*f-j-l*i*e+b)%100;
                  f += (m+e+b-g+b+b-n+f+c*l)%100;
                  c += (k+h+g*a-e+n+b*i*d-f+h+m-d-j)%100;
                  a -= (h+n+g-f+m+a*m+a-b)%100;
                  i -= (e+d*f-f-e-n*h*a-j-h-m-h+g+f)%100;
               }
               
               switch( ++SWcnt[18]%3 )
               {

               case 1:
               {
                  f += (h*l+j+h+k-n+i*c-f*f*b)%100;
                  d -= (d-i+c+k-l)%100;
                  c += (f*m*m+i+k+d)%100;
                  d -= (b-l*l-b-b+e)%100;
                  f += (h+k*a+j+i)%100;
               }
               break;

               case 2:
               {
                  l += (f+f+e+n*f-e*n)%100;
               }
               break;

               default:
               {
                  k -= (b+g)%100;
                  j -= (c+h)%100;
               }
               }

               if( ++IFEcnt[36]%2 )
               {
                  j -= (n+e*l+m-n-b-f+d+l)%100;
                  n += (f+e-d*n+j+i)%100;
                  e += (k-a*e+n-g+n+b-m*k+m+b-j)%100;
                  n += (g+d-l+i-j*l+k+g)%100;
               }
               else
               {
                  m += (g+i+n+l-c-h-h*k-m)%100;
                  b += (e-n-l+e-c+k-i+g-n+e-d-d+c-j)%100;
                  b += (j-k-n+m*f*l+l)%100;
                  l -= (b+a+f+k+b+f-d+i-k-n+h*j-b+f)%100;
                  d -= (h+a)%100;
               }
            } while( ++DOcnt[36]%5 );
            while( ++WHILEcnt[36]%5 )
            {
               do
               {
                  k -= (h-e*d*n-k+e+c*f+k*n+e)%100;
                  g  = (e-g+b*e*d*j*m-d-f+n*k+n-d+i)%100;
                  j  = (f+c+d+h*b-j-g*b-n+l-b-i-h*m)%100;
                  i -= (e-f*m+d+j*h+n*l)%100;
                  l += (e*a*i+c*e)%100;
               } while( ++DOcnt[37]%5 );
               for( ; ++FORcnt[55]%5 ; )
               {
                  i -= (k+k+g*c+g)%100;
                  k  = (k-b-g-j)%100;
                  d -= (k-c-a)%100;
               }
               if( ++IFcnt[28]%10 )
               {
                  c += (n-i-n)%100;
                  e += (e-d+h-b-i+g+g+i+g+m-g)%100;
                  j  = (d+j+n*k*f*m-e+a)%100;
                  l += (f+e)%100;
                  g -= (m*f+k-a-d-m*d-m*n+k*b)%100;
               }
               for( ; ++FORcnt[56]%5 ; )
               {
                  d -= (d-f*c+g*l-f)%100;
                  j += (b-k+l-j)%100;
                  h += (g*h-d)%100;
                  e -= (h-a+c+g)%100;
               }
               if( ++IFEcnt[37]%2 )
               {
                  b -= (i*n-m+f+h)%100;
                  c  = (f*e+e+e-k*g+a*i+m)%100;
                  c -= (n+i*d+k-k+m*g-i*a-k+n)%100;
                  e += (a+c-d*i-g-c*b+g-k+g*l)%100;
                  e += (e+e-b+b+n*f-n)%100;
               }
               else
               {
                  m += (d-a*b-h-n-f+d-m-j-c+a-j-m)%100;
                  n -= (j-c*b*f*l*j*g+i+h+c+a-d+j)%100;
                  m += (d*i-i-l*k+n-l+l-b+l)%100;
                  j -= (d-k+d+g+i-i-h*n+h-k+f+l)%100;
                  i -= (d+j*j+h-k-f-g-b-c+b*e*h+d)%100;
                  m -= (g+n+e*l*l+d+a+i)%100;
               }
               i -= (g-h-f+c+i+n)%100;
            }
            b -= (i-f+c-e-e+h*j*l+m+i)%100;
         }
         l += (g-j-l-h-k-n+a-i-c+d-b)%100;
         i += (l*b+j-n+h+k+l-e*i)%100;
         k -= (g-c+a+i+l+e-e)%100;
         g += (d+b+e-h*e+m+h+h*j-c*l-k+k)%100;
      }
      m  = (n*j+a*l-h-g+e-j)%100;
      k -= (l+a+c-b-k-f*m+g-i-f+e*f+e-n)%100;
      e += (l*i+j+m+m+h)%100;
      l -= (e+f-j+j+g*c-g+h+i)%100;
      j -= (k-j-b-d-b+h+h)%100;
   }
   d -= (a-l-d+d+h-g-j)%100;
   f += (a+j-g+b*l)%100;
   d += (b-m-f-d+a-l)%100;
   f -= (h+d)%100;
   a -= (k-a*n+d+c-l+d*e*d*d+j-f-h+a)%100;
   f  = (j+e+m-f*i+n+n+n*d+c+g)%100;
   g += (j*i+b+k*a+n-l+a+f-i+c+m)%100;
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
         i -= (b+h-h*b*g-l*g+c+c-k+l-m)%100;
         for( ; ++FORcnt[60]%5 ; )
         {
            
            switch( ++SWcnt[19]%3 )
            {

            case 1:
            {
               if( ++IFcnt[29]%10 )
               {
                  f -= (f-j+k-k)%100;
                  l  = (a*k+d)%100;
                  a  = (n+c)%100;
                  e += (g-f-k+k-c)%100;
                  f += (k-e+j+j*a-g+d+c-d*a-c+b-c)%100;
               }
               if( ++IFEcnt[39]%2 )
               {
                  e += (e+j+a+j+e-n+d)%100;
                  a += (d*a-f+c*l+a+e-m+h+h)%100;
                  d -= (a-a+i*b-l-a+d*i)%100;
                  b -= (b-a-c-f+e-a)%100;
                  m += (j+g-j+c-e-n+e-e-j-k-m)%100;
                  e += (m+f-e-n*m+m*n*d+i-l)%100;
               }
               else
               {
                  f += (g-d)%100;
                  d -= (n-l+d)%100;
                  i += (d-a-f*d+m+j)%100;
                  d -= (m-e+b-k*m*f+e-h*i-e-l-l)%100;
               }
               while( ++WHILEcnt[38]%5 )
               {
                  e += (e+n+h*f-d+e+j-c-n)%100;
                  i -= (g+g)%100;
                  e -= (j-n+h+k+d+j-j-a-m)%100;
                  j -= (e*i)%100;
                  b  = (b*j+e+h+b+j-e*b*k)%100;
               }
            }
            break;

            case 2:
            {
               do
               {
                  g += (l+a-g*j+b+h-a)%100;
                  a += (a-n+f)%100;
               } while( ++DOcnt[39]%5 );
            }
            break;

            default:
            {
               for( ; ++FORcnt[58]%5 ; )
               {
                  n -= (l+d+j-e+a+g+e-g+h-m-b+g)%100;
                  i += (j+b)%100;
                  j -= (b-h-i+b-g-n*k-m+k)%100;
                  i += (g-m-f+i)%100;
               }
               for( ; ++FORcnt[59]%5 ; )
               {
                  h -= (d-k*e)%100;
                  d += (a+d+n-g+j)%100;
                  e += (e*h-e-f-i+g-d+i-j*k-m+h)%100;
                  b += (h+f+n-e*n-i*e-g+f)%100;
                  e += (a-l+h-b+h+i)%100;
                  i += (m-g+j-e*f-m-k-l*n*n-n*h-f-l)%100;
               }
               if( ++IFEcnt[40]%2 )
               {
                  b -= (l+h+f-d)%100;
                  i += (e-m*n-l+c-m)%100;
                  g += (k*g+m+g)%100;
               }
               else
               {
                  m += (d*i+h+a)%100;
                  n -= (b+i)%100;
                  g -= (h-d-f*m*k-d-j*k-e)%100;
                  b -= (j+k*g+j*g+j+c+a-d*g+h-d*k+b)%100;
                  f += (n+f-i+i)%100;
               }
               while( ++WHILEcnt[39]%5 )
               {
                  h += (d+m+h+i+j-d-m-h-k+a)%100;
                  e -= (g*b+i+l+j*f-e*a+m+l)%100;
                  k += (a+m*g+k-f-h-k-j-c+k)%100;
                  l -= (i-c-b*n+n*l*m-g+c+d+k-d)%100;
                  k += (b+c*d-k+n+a+b+b+l-b-m)%100;
               }
               do
               {
                  i += (h-l+b-h+n+k)%100;
                  a += (k-h+j+e-k*n+e+k-n*m-e-a*a-i)%100;
                  a  = (i-j-a-l-b+f+n*k-g)%100;
                  c += (n*c)%100;
               } while( ++DOcnt[40]%5 );
            }
            }

            if( ++IFcnt[30]%10 )
            {
               e -= (l*b*m)%100;
               i += (j+g)%100;
               c -= (e*h)%100;
               c += (n-e-i+n-i-a-f-l+k-b-e)%100;
               a += (h+h-k+h+j+j*l+b+e*j-d-b*n-g)%100;
               i += (m*d*j*l-h+l*h+g+g+k)%100;
            }
            e += (j+e-l+n-h-i+n-e-e+g)%100;
            a += (k-n-m*a+j-g)%100;
            d -= (a-n*c)%100;
         }
         g += (d+g*m*g+i+k-c)%100;
         k -= (a-k-m-h+a-j+e+f*e*m)%100;
         g += (b+b-c+l-k-n+i*k*b+l-d+g)%100;
         f += (m-n+a-m*d+h+k*c)%100;
      } while( ++DOcnt[38]%5 );
      k  = (l-d+a*i-f-j*j-g-d+h*a-g)%100;
      h -= (m+d*e+c+k-g*k+h-b-d-i-b)%100;
      d -= (b-e*a-j-b*d)%100;
   }
   k += (g-m-h-m+k+j-n-a-d+b*g)%100;
   a += (m-m-c+l)%100;
   g -= (n*m*f-e-n-k-i+f-f)%100;
   g += (j-f+b+j)%100;
   k += (n-m-f-c*k)%100;
   k += (a+f-a+l*b+c+i-k-m+m+m*c-h)%100;
   n += (c-e+m*n+n+j-i-i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F19(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[20]%3 )
   {

   case 1:
   {
      for( ; ++FORcnt[64]%5 ; )
      {
         m += (f-h*d+b+m-n+n+n)%100;
         if( ++IFEcnt[43]%2 )
         {
            h  = (n+c+b+a-m+l)%100;
            m += (i+k*j*d-d-f+k+c+k-c-e-f)%100;
            n -= (l+g)%100;
            c -= (e+d-b+g)%100;
            d += (l-i+f*b+j+a+m+g*e-g*h*j)%100;
            b -= (k+d-c*i-l-e-a-e)%100;
         }
         else
         {
            while( ++WHILEcnt[42]%5 )
            {
               do
               {
                  l += (c-f)%100;
                  f -= (m+a-e+n-c-e-e-i)%100;
                  b -= (k+h-l*d*j+i-n+h)%100;
                  m -= (h-n-m-a+e*j+g+g+a+n+c-n)%100;
                  g -= (f-l-a-k+k*b-a+g-j*g*k)%100;
               } while( ++DOcnt[41]%5 );
               for( ; ++FORcnt[61]%5 ; )
               {
                  f -= (n+k-g-a*m*f*d-m-d*m+h)%100;
                  e -= (c*m*i-m-k+k-k*k)%100;
                  k -= (f+g-a*l-c-c*j-a+f-g+a)%100;
               }
               if( ++IFcnt[31]%10 )
               {
                  n += (g-j+b*j+c-l-l+l-n*j*g*n*a)%100;
                  l += (j-d+n*l-j-g-j-e-l*d)%100;
                  d  = (j-m*n-a+c+h+d+g+m)%100;
                  n -= (j-l*k-h-i+c+m-n+l-k)%100;
                  h += (f-k+a+l-l)%100;
               }
               for( ; ++FORcnt[62]%5 ; )
               {
                  m -= (d+d-l*d*j*a*g-l)%100;
                  m -= (k*i)%100;
                  n += (e+l+i+e-c-k+b+h-e+n)%100;
                  i -= (a*n-c)%100;
               }
               if( ++IFEcnt[41]%2 )
               {
                  m -= (c*e-k+g*n+l-l+i+l*e+k)%100;
                  n  = (k+i-g*e+e-a+f+l*b-n-k-d-b)%100;
                  k -= (d+c-k-f-c)%100;
                  d  = (l*l-d-h-h*h+d-j-g+e)%100;
                  d += (n*m*n*k*i)%100;
               }
               else
               {
                  f += (m-b+n+n-i-b-n-h-n*n*n)%100;
                  f += (l*j-l-l+l-c-g+e)%100;
                  b -= (k*k-c-i*b-c+c*k-d+n)%100;
                  l += (i*e+n-i+f-g+l)%100;
                  e += (j+d+n-n)%100;
                  n -= (l-c+n)%100;
               }
               while( ++WHILEcnt[41]%5 )
               {
                  e  = (f+l+g+d-b+f+j+n*n+b)%100;
               }
            }
            do
            {
               f += (h*n-l)%100;
               for( ; ++FORcnt[63]%5 ; )
               {
                  n -= (j*b+d-j+a-j+n+n+c+m-a*d)%100;
                  b  = (m+j-i+g)%100;
                  j += (f-g*k*c+l*j+c-c+k+h)%100;
                  i -= (g*n-l*c+e)%100;
                  j += (h+k*a-k*h-k-a+j+m+n)%100;
               }
            } while( ++DOcnt[42]%5 );
            
            switch( ++SWcnt[21]%3 )
            {

            case 1:
            {
               if( ++IFcnt[32]%10 )
               {
                  m -= (c-a)%100;
                  e  = (a*h)%100;
                  n  = (c+i+d*f-c-e+e+a+f-e+m*c)%100;
                  i -= (g+k+c-n)%100;
                  k -= (g-f+b-n*a-l-b-m+i-k-f-e+k)%100;
                  d += (d+d-n+g-g)%100;
               }
               if( ++IFEcnt[42]%2 )
               {
                  h -= (l+a)%100;
                  f += (e+k+f-g+m+g*m+k+j)%100;
                  b -= (m*n-d+c-d-h+a+b*a+j+j-c)%100;
               }
               else
               {
                  m  = (d+b+h*a)%100;
                  e += (a+c-n+e-g-m+k-g*d+m-n+m-k)%100;
                  b += (h-j*j-l*m)%100;
                  j -= (c-n-e-i*e+e)%100;
                  a -= (e-a*a-b-n)%100;
               }
               b -= (l+b-d+g+a+f+k+e-c-e-a-h*d)%100;
               h  = (l-a)%100;
            }
            break;

            case 2:
            {
               b -= (h*i+f+e-l+m*e-j*b-d)%100;
               g += (a+n-l-c*h*l*k*d*m-m*k*i+h)%100;
               e -= (e+d-m)%100;
               d += (k-m*i-g-h*d-m+k*j)%100;
               e -= (j+f+c-i+f+j-k)%100;
            }
            break;

            default:
            {
               e -= (e-n-c-n-a*n-l-b+j+d-c-e*m)%100;
               n -= (c-a-b-a-j-g-g-b+b+g-k*e)%100;
               k += (d+d)%100;
               d -= (c+k+f-e-f-i)%100;
            }
            }

            i += (n-e+l-e+l-c+e-i-c+d+d-h+l)%100;
         }
         f += (e*e-f*c*h+e+g*e-i*i*g+l-k)%100;
         m  = (a*a-e+a-k+n-m*k-i*h-g)%100;
         k += (k*d+i*g-k-f+h+i+j)%100;
      }
      l -= (b-a+j)%100;
      d += (l+h-g+k*g-c*g-a+f*l-k-j)%100;
      k -= (i+d-n+b-l+e+a+f*b-l-m+m*g*j)%100;
      k -= (i-h-c-k-l-h+g)%100;
   }
   break;

   case 2:
   {
      f += (g-a)%100;
      j  = (e*b-c-b*f+n+m-k-k+f)%100;
      c -= (j+a*a+a+m+n-k+i)%100;
      e += (h-n-n-h*j+g)%100;
      g += (h+c+g*e-c*h+h+k-n-a+i)%100;
   }
   break;

   default:
   {
      m -= (l-i)%100;
      g += (i+a)%100;
      l -= (f-g*m+a-l+m)%100;
      n += (m+a+i-m+a-a*h+f*f-h+h+n)%100;
      c += (e*c-i*h+n*h+e+l+l-c-k-j)%100;
   }
   }

   a -= (f+k*f+l-b*k-c-j+k*f-k*d-k)%100;
   a += (m+e+d*c+g-b+n)%100;
   b  = (d+i-g+e-g+j*i+i-h+c-k-g)%100;
   m += (k-g+n-n-f+d-h+d+b+f-m+h*n)%100;
   i += (l-j)%100;
   l += (l-b+e-g+h-m)%100;
   n -= (f*m+i-k-e*n-b+e-h+b+l)%100;
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
                  h -= (c-h+d+h-d*d-k*e-a-i+d)%100;
                  d -= (g*j)%100;
                  m += (d*b+i+j*g+n+j-m)%100;
                  f -= (k*d)%100;
               }
               else
               {
                  a += (i-d-g+e+g+k-k-d-b)%100;
                  g += (j*m+h*e*c+d)%100;
                  g -= (a-d+j*e*i-h-c)%100;
                  h -= (f*j*d+h+g*d+m*c-g-l*d)%100;
                  c += (h*n)%100;
               }
               while( ++WHILEcnt[43]%5 )
               {
                  h += (c+m-m-h+h)%100;
                  i += (k+a*n-i+b-i-n+e+a*e*l*d)%100;
                  d -= (j-b+i*c*k-l-e*c+j+j*n*h-n-l)%100;
                  b -= (d+d*g-h-f+h+b-e-h*m-d-k*g)%100;
                  h  = (g*j+k+k-j-l)%100;
                  b -= (b+l*b+h-h-k+i+m-l-f-h+k)%100;
               }
               do
               {
                  c += (k+c+g-g+f*c+l-g+c-f+j+c)%100;
                  d -= (c-j*a-m+m+j-a-b)%100;
                  b -= (d-h+i+l-g-b-e-b+f*c-a-m)%100;
                  b  = (b-n-a)%100;
                  k -= (e-m*d*d*e-a-a+h-l-e+m+f)%100;
               } while( ++DOcnt[44]%5 );
            }
            if( ++IFcnt[33]%10 )
            {
               h += (n-l)%100;
            }
            for( ; ++FORcnt[66]%5 ; )
            {
               
               switch( ++SWcnt[22]%3 )
               {

               case 1:
               {
                  l += (n-h)%100;
                  f -= (a-i)%100;
                  a += (e+b+j)%100;
                  e += (d+e-a+c+n-b*m)%100;
                  i += (d+j)%100;
               }
               break;

               case 2:
               {
                  h -= (h-g+j+e-d+a-g+j+n-l-e-c)%100;
                  i -= (c*k-d*a+j+j*e-j+g+j+m+h+b)%100;
                  a -= (i-i-f+l-j-k*c-j+k+d-f*g)%100;
                  i -= (m+n*g-b*n+g+f*c-l*g+e+a-a*f)%100;
               }
               break;

               default:
               {
                  k -= (k-h)%100;
                  f += (b+e)%100;
                  l -= (h+m+j*a*f*i-g-d-n+b-m)%100;
                  n -= (h-m-e-d+f+f+e*f-i-g-h+h-e-j)%100;
                  h += (b+c)%100;
                  j += (c-j*e+b-m+i+m-j)%100;
               }
               }

               d  = (d+a+m*c+e+h+e+a+b)%100;
            }
            g  = (k-f-b+g-j*e-c+g)%100;
            l += (b-j+n-b-l)%100;
         }
         n += (d*j+h-a+f-j+k*e)%100;
         l  = (n-k-g+a+e+d+k+m*m+l-b-a-f-i)%100;
         c -= (g+g-a-l*e*m+b-a+b+m-l)%100;
         e -= (m+j-c-d-e-g+j-g)%100;
         f  = (a+j+l+l)%100;
      } while( ++DOcnt[43]%5 );
      m -= (d*i)%100;
      d -= (l-h+j+c-h+l)%100;
      a -= (h-k)%100;
   }
   a += (e-j-m-c-k*f-n*b-a-j-b-k+b-e)%100;
   e += (b*k*l-f-h+h*l+l*k+h)%100;
   a += (c+b+j+j*d+a-g*n-c-i)%100;
   j  = (b+j-h*f*n-i-b+g+m+e)%100;
   f += (e-f-l+e)%100;
   c += (l+b)%100;
   g += (c+e-g+k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F21(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[47]%2 )
   {
      b  = (h*i+l-m-g+e-d)%100;
      a += (l*f+e+c-d)%100;
      i += (k*j)%100;
      j -= (n-j-c-c-k-d*b-d-b+e*n*n+k)%100;
      j  = (a+h+f+e-d+g-e-e+n+f-b-f+l)%100;
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
                  j += (a+h-m-i+j-m+k+m+i-g*i)%100;
                  m -= (h-f-h-g-d)%100;
                  k -= (a+g)%100;
                  l -= (l+i*a)%100;
                  b -= (b-h+k+a+i-i-d+b+n+k)%100;
                  j += (a-e+e-e+n+g-e*b)%100;
               }
               for( ; ++FORcnt[68]%5 ; )
               {
                  d += (e-k-a+n+f+d+b-k*l*c-l-g-n-d)%100;
                  b -= (j*c*l-b+j-g+g)%100;
                  m -= (j-l+j+h+d-m+e)%100;
                  m += (a+b)%100;
                  f += (e-h+e+l-a*k-h-h*e*e+h)%100;
               }
               if( ++IFEcnt[45]%2 )
               {
                  m -= (l+g*g*d-a-l+m-i-e+h*a+c-n)%100;
                  c -= (a-d-a*g+m+d-m-a+h-a+m-e)%100;
                  n  = (l-k+g+j-e+j-i*j*b+j-k-n)%100;
                  l -= (k*e*l+f*j*h+a+e-i+l)%100;
               }
               else
               {
                  l  = (h-j-g+b-f)%100;
                  k -= (a-m+d+f)%100;
                  n  = (e*a+k+i+j-d*f-f*g+a-i+i+n)%100;
                  j -= (g+d+c+a+f-f-j)%100;
                  k += (h+b-h+f+g)%100;
               }
               while( ++WHILEcnt[45]%5 )
               {
                  c -= (k*h+i+l+c*d-l+n+i-k)%100;
                  f += (g+b-k-m-f*f-d*e)%100;
                  f += (d+m*f*e)%100;
                  m += (j+d)%100;
                  m -= (f-j-h)%100;
                  h += (k+k+e*k*n+g+n-g-h+h+h)%100;
               }
            }
            do
            {
               b += (c*f-a*f+j-j*g)%100;
               for( ; ++FORcnt[70]%5 ; )
               {
                  d += (e*e*b+e-g-h+h)%100;
                  j -= (l-f*f+a)%100;
                  e -= (a+c*h+l-a-d-m-l-k)%100;
               }
               
               switch( ++SWcnt[23]%3 )
               {

               case 1:
               {
                  l -= (b-i+h-c+m-f-m*h*j+d)%100;
                  m += (d-g)%100;
                  e -= (a+l-a+c+e+c-j+k-f*e)%100;
                  j -= (g+l*j-e-n-c*i*i)%100;
                  n += (b-j*a*n*f+c)%100;
               }
               break;

               case 2:
               {
                  e -= (e*b-k+n*k-e-n*m+h)%100;
                  j += (h*m*j-c*m-m+i-i+b+k+e-l+d)%100;
                  h += (i-a+e)%100;
                  g  = (a*a*i)%100;
               }
               break;

               default:
               {
                  k -= (f*h+k+i+e+e+j)%100;
                  i -= (i+n+a-f*l+d+h+a)%100;
                  j -= (i*m)%100;
                  j += (g+m+d+d-m*c)%100;
                  n += (n-a-b+d+b-n-a+k+c-i+n)%100;
                  d += (k-d*d+i*i)%100;
               }
               }

               if( ++IFcnt[35]%10 )
               {
                  i -= (n-i+m*n*h-e-m+d+e+k)%100;
                  f -= (g+b+m-i-k-k-g-d-l+i)%100;
                  b += (i+c-n)%100;
                  g -= (c-d)%100;
                  g -= (j+h*b+c-l*f+h*j*f-a*c-b)%100;
               }
               if( ++IFEcnt[46]%2 )
               {
                  j += (l-j-e+l-b-n*e-d-c+d-d)%100;
                  n += (n-d+d)%100;
               }
               else
               {
                  a += (j*c+n+h-h+g*k+h-c+n-g)%100;
               }
            } while( ++DOcnt[46]%5 );
            f += (i-d+e-h*f-g-l-l-k-a)%100;
            j -= (j+h)%100;
            b += (j-l*h-k)%100;
         } while( ++DOcnt[45]%5 );
         c -= (f-d-m)%100;
         i -= (l*f-g*d-c+l-n-l-j-l)%100;
      }
      m -= (d*d-j-n-b+b+d+l-g+m+l)%100;
      g -= (h+l+g-b*g)%100;
      f -= (g-g-k+c+h*n)%100;
      e += (e+f+d-e*k-h+e+h-m+l-a-k+k)%100;
   }
   c += (g+i-e-a+e+b)%100;
   h  = (h*d-k*e+f)%100;
   g -= (j*b)%100;
   i -= (l-g-c*l-l-l+d)%100;
   i += (d-k+j-i+f*a)%100;
   m -= (f-l)%100;
   b -= (l-m-c-k+f-j+g-j*l+e+m-m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F22(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[49]%5 )
   {
      do
      {
         for( ; ++FORcnt[73]%5 ; )
         {
            for( ; ++FORcnt[71]%5 ; )
            {
               if( ++IFEcnt[48]%2 )
               {
                  j += (g-j-j-d+m-e+f-g-f+n+l)%100;
                  b += (i+k*b-d*b*b+m+g-l*l-l+a+b*j)%100;
                  b -= (c*m-k)%100;
                  h += (i+b-l+f+b)%100;
               }
               else
               {
                  l += (n+f-l*a+n+b-i+n*b+d-e*g-m+a)%100;
                  n -= (d*e-g*l+d+e*l-h*b+h*h*b-i)%100;
                  h += (b+a+b)%100;
                  k -= (e-k-h-e*c*c+b*a*m-e-b+j-m)%100;
                  a -= (g+i-n+d+c+d*a*a*l+m+c)%100;
               }
               while( ++WHILEcnt[47]%5 )
               {
                  f -= (c-b*h-b-j)%100;
                  a += (a-n-l+h+m*c-h-b+a)%100;
                  b += (d-h-c-h-g-g-i*f*i-f-h+k-i)%100;
                  g += (i*e*c)%100;
                  h += (l*i-l)%100;
                  h -= (g-d+m)%100;
               }
               do
               {
                  h -= (g-m+m-f-h*c*f*j+m*b)%100;
                  i -= (m+e+n-l-b)%100;
                  f -= (c-e)%100;
                  g += (m+l*b-k+m+i-a*k-j-m)%100;
                  k -= (j*l+j+i+f-e+l-f+h)%100;
               } while( ++DOcnt[48]%5 );
            }
            if( ++IFcnt[36]%10 )
            {
               f -= (k+k)%100;
               for( ; ++FORcnt[72]%5 ; )
               {
                  d -= (g-n+i-c-l+l*k*k)%100;
                  i  = (g*b-m+i-d*n*k-m-f*d-i+k+i-k)%100;
                  n -= (f+k+h-i*a*c-k-f+b-n+m+k)%100;
                  m -= (d-n+e*n-j+e+h-n-f)%100;
               }
               
               switch( ++SWcnt[24]%3 )
               {

               case 1:
               {
                  n += (d*g+e+k-e*j*g+h)%100;
                  j += (i*b*e-f-a-j-d-g)%100;
                  l += (d-i+k+b+a-k-l-e+i+g+g)%100;
                  d += (h*m+a)%100;
                  c -= (i-l+i)%100;
                  a += (i-b+m+f*m-h+l-k+j*d)%100;
               }
               break;

               case 2:
               {
                  e -= (l-c+a*l*n*a+n-m-h+d-i*c)%100;
                  h += (j+b+h)%100;
                  g += (i-m-c)%100;
                  g -= (e-d)%100;
                  l -= (l-m-c)%100;
               }
               break;

               default:
               {
                  l -= (c-k-h-c+e-f*i+k-f*n*m-m-b+i)%100;
                  j -= (k*d)%100;
                  e -= (n-k-n+g*m-f+f+h-h)%100;
               }
               }

               if( ++IFEcnt[49]%2 )
               {
                  d -= (g+c+i-h-m+f+i-h+k-h)%100;
                  b -= (f-e+i*e*c+h-i+j+c-e*a*i+b+k)%100;
                  a -= (c-e+h-i)%100;
                  k += (c+m-m*k*f+j+m*e-e-d+a-n)%100;
               }
               else
               {
                  f -= (e-f+e+f+h-f*i)%100;
                  g -= (h+c+i)%100;
                  d  = (a*d-h-g-g-e-l+f*l)%100;
                  g  = (b-n)%100;
                  a += (a+j-d-f-e+m+k+f-d-j+n-i+j-j)%100;
               }
               while( ++WHILEcnt[48]%5 )
               {
                  c -= (j*i*j-l-j-m-b-d)%100;
                  e -= (a+d*b-c*g-a+m-c)%100;
                  f -= (l-f*c+e+a*i+i*d+e+g+e+m*n*l)%100;
                  l -= (m+h+g*i+l*b*d-a+j+h)%100;
                  a -= (j*g-n-h+d-i-n-i+m+l)%100;
                  i += (i+l)%100;
               }
            }
            do
            {
               e += (i+c-k)%100;
               g += (f-c-k-g-f-g+f+j*j)%100;
               h -= (c+i-b+e+e*n+d)%100;
               f -= (k-j-i-a*n-l-k+g+m)%100;
               h -= (j+a)%100;
            } while( ++DOcnt[49]%5 );
            e += (h-j+f-e-n*c+b-l-e-f-n+e-e)%100;
            f -= (h-a+j+k+d)%100;
         }
         a += (g+b+f-g)%100;
         h += (i+m+h*l+j)%100;
         n  = (l-f+a+a*j+h-d-m-j-j*j+l-n*e)%100;
         h -= (i-b-b+a-f)%100;
         b -= (a+h-b-m-i-d*n*j*i-f-e)%100;
      } while( ++DOcnt[47]%5 );
      k += (m-d-f*b)%100;
      d += (f-m*a-i+g-e+l+f)%100;
      f -= (f+l-m-h+l*f)%100;
   }
   b -= (j+b-h*j-e*i+k+l-n*e-f+k-d-h)%100;
   e += (a+n+l*c*k+h)%100;
   k -= (n-g)%100;
   j += (f-e)%100;
   f += (f-j-l+j+f-k+n-a-j+c)%100;
   c += (l-f+n*a+f+n)%100;
   i -= (d+g-b-a-h+b-n+l+n-d+e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F23(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[77]%5 ; )
   {
      if( ++IFcnt[38]%10 )
      {
         for( ; ++FORcnt[76]%5 ; )
         {
            if( ++IFEcnt[51]%2 )
            {
               
               switch( ++SWcnt[25]%3 )
               {

               case 1:
               {
                  b -= (m-c-k)%100;
                  j -= (j-m-l+h-n+b)%100;
                  h  = (f+h-c+n-d-b+k+b-i+e-c)%100;
                  g += (m-i*n*d-d+i+h)%100;
               }
               break;

               case 2:
               {
                  g  = (m-b+d-h-b+d+e+b-i*m-l)%100;
                  b += (h-j-i)%100;
                  g -= (k+m-j-m+h)%100;
                  h += (a+n)%100;
                  g += (n+c-i*n-m+k-b-j-n)%100;
                  j += (e+i*g+m+k)%100;
               }
               break;

               default:
               {
                  f -= (a-a-j+f)%100;
                  c += (a+n+i-f+c+h+f*f*a)%100;
                  k += (b-f+m)%100;
                  j += (d+m-i*k+f+c+k+h)%100;
                  d += (g+e)%100;
               }
               }

               if( ++IFcnt[37]%10 )
               {
                  d  = (n+f-f)%100;
                  d += (a+d*d+a*i)%100;
                  d += (n+a*g-i*g)%100;
                  b += (i-h-d+e-f-j+l)%100;
                  f -= (a+c+a+f)%100;
               }
               if( ++IFEcnt[50]%2 )
               {
                  l += (m+a*d*m*g-g+c-l)%100;
                  d += (e-b-h-m+h-f+j+d+n+a-h-d)%100;
                  k -= (k+j-g-k+f-d*d+d)%100;
                  c += (e-h+b-l+c-m-h-g+i*c-j-l)%100;
                  f -= (a*a)%100;
                  m  = (j+l-g-f*l*l+e*d-i*l-d-a)%100;
               }
               else
               {
                  m -= (f+d-j+k+c*f-b-i-g-m)%100;
                  m += (k+i-c*g-m)%100;
                  g -= (k+j)%100;
                  i  = (a-d)%100;
               }
               while( ++WHILEcnt[51]%5 )
               {
                  f -= (j+g-l+n)%100;
                  n += (d-k*a+f+j-c+f+n-d+b+g+j*h+g)%100;
                  i += (n*e)%100;
                  e += (l+a+f*i-h+m)%100;
                  h -= (l+a-b+c+h-j+b+g)%100;
               }
               do
               {
                  e -= (j+f+k-e-n-k+d-l+k)%100;
                  i -= (b*j+m*h*e+c+i-m+j-c)%100;
                  l += (n-f*j+l+k*i*g*i*j-n)%100;
               } while( ++DOcnt[51]%5 );
            }
            else
            {
               while( ++WHILEcnt[50]%5 )
               {
                  c -= (k-k+m*m-n*f-m+a+a*f*i)%100;
                  d  = (c-n+l)%100;
                  i  = (i-h*c+e+f+m+f*k-n*d+e-j+f-c)%100;
                  k += (h+d+d+k*h)%100;
                  l += (g-c-k+a+l-c+k)%100;
                  h -= (j+g+k)%100;
               }
               do
               {
                  l -= (g-d*i+m+j+c+a-e)%100;
                  m  = (m+l)%100;
                  h  = (b-l+g+k+i-e+g+f-h-e-b-k-m)%100;
                  l -= (j-h-f+c-c-l-i-a*c+k+b+i)%100;
                  g += (k+e+e-i+i+k+i)%100;
               } while( ++DOcnt[50]%5 );
               d -= (e-g)%100;
               for( ; ++FORcnt[74]%5 ; )
               {
                  a  = (h+b*m+l-k-j-m-f)%100;
                  g -= (i-d-n+m-i+a+g)%100;
                  l -= (a-a-i-k-e*l+j+g+j*j+j+i+j)%100;
               }
            }
            for( ; ++FORcnt[75]%5 ; )
            {
               n += (a-e-d)%100;
               a += (l-b-h)%100;
               e -= (e-a+d-f+g*k+j)%100;
               k += (a+i-j+m-f*a+n+d+f-l+b*f-i)%100;
               h  = (h-c+l-l-c-g+j+a+n)%100;
            }
            g += (i-n*m*f)%100;
            b += (k-l+j+d-h+g+c+j-m+g)%100;
            c += (m+n+f-f)%100;
         }
         i += (h-b+n-f+m+b-a*n-h-h)%100;
      }
   }
   a += (j*b-g-f-a)%100;
   e  = (d+d*j)%100;
   h += (i+j*j+h-c+m+c)%100;
   l -= (c-l+b)%100;
   b += (c-h+i-g-c+j-k*e-a-j*f-c)%100;
   e += (i+h+j-k+m+c-m+b+j+m-h-k)%100;
   h += (l-m*j+e+b+e+e+l-c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F24(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[81]%5 ; )
   {
      if( ++IFEcnt[54]%2 )
      {
         e += (d+i)%100;
         d -= (d+m+i-c-e*c*c+h+l-e*c-c*i*e)%100;
         l -= (h+a+m-k+e+m)%100;
      }
      else
      {
         while( ++WHILEcnt[53]%5 )
         {
            do
            {
               if( ++IFcnt[39]%10 )
               {
                  i += (n+c*c+a+m-m-f+e*f-j+l-l*l)%100;
                  h += (b-l*h+j*d-a)%100;
               }
            } while( ++DOcnt[52]%5 );
            c  = (j+d-i+e-d+f-e-k+c)%100;
            for( ; ++FORcnt[79]%5 ; )
            {
               
               switch( ++SWcnt[26]%3 )
               {

               case 1:
               {
                  c += (i+e-b-l-a*h*c-n-b-a-j+a-b)%100;
                  e += (m+g*b+f)%100;
                  g += (j+h)%100;
                  n -= (l-c)%100;
               }
               break;

               case 2:
               {
                  e  = (f+f+f-i*b+m+e)%100;
                  e -= (b-j-a)%100;
                  k -= (i*n+f*a-i*i-c+g)%100;
                  d  = (m-l-i*i+m+d-g)%100;
                  n += (b*j+k)%100;
                  d  = (d+c-g-h)%100;
               }
               break;

               default:
               {
                  g += (l*l*j+h-l*i+d+n+e-n)%100;
                  j  = (d-a*d*a-n-f-k)%100;
                  i -= (j+f+e+c+f-b-a+b)%100;
                  l += (i-i+j+j*d-i+g+n+f*g+d+a+m*l)%100;
                  j += (b+f+g+i-g*k-l-c-k-f-k+h)%100;
               }
               }

               if( ++IFEcnt[52]%2 )
               {
                  e -= (l+n)%100;
                  m += (c-g)%100;
                  d += (i+i+f-k*k+h+n*j-m+f-c+b)%100;
                  g += (a-a*i*k-l+n*m-g+l+a)%100;
                  l += (e-i+e-l*e+a-k+k+a)%100;
               }
               else
               {
                  f -= (l*j-m-c+c-c+b-l+j-l-d)%100;
                  i -= (m-h-n*j+g+e-f+j)%100;
                  a -= (g-l+g-e-a-g-a+l-d+n+h)%100;
               }
               while( ++WHILEcnt[52]%5 )
               {
                  m -= (a-e)%100;
                  b -= (m+c-i*a*i+e-l+a)%100;
                  j -= (d+m)%100;
                  e  = (n+j-m-e*a+i*f+n)%100;
               }
               do
               {
                  b -= (b+n*g+h-a+a)%100;
                  d += (a*f+h+j-e-g*d*k-c*b-d*h-n-k)%100;
                  b -= (g-i-l-b-c*n*n-l+h*g)%100;
                  d -= (n-i*b-a-i*d)%100;
                  e += (i-d+d+b*c+b*c)%100;
                  i -= (b-a*d+b+l-a+n+b-d)%100;
               } while( ++DOcnt[53]%5 );
               for( ; ++FORcnt[78]%5 ; )
               {
                  m -= (l+k)%100;
                  a += (h*a*h-h*b+d+e-f+e)%100;
                  e -= (i+l-d-a+a-f-a-a-f)%100;
                  h -= (m*a-l+b+f+i-l)%100;
                  f += (d-a-b+a+a-b+h+f*k-m-e*n)%100;
               }
            }
            if( ++IFcnt[40]%10 )
            {
               for( ; ++FORcnt[80]%5 ; )
               {
                  c += (k*e)%100;
                  k += (f-h*j+b+i-f+k-b-c*d)%100;
                  l -= (d-i-j+k-j)%100;
                  l -= (k-n-b-a-e*g-m+e*i-c-j+e+g-i)%100;
               }
               if( ++IFEcnt[53]%2 )
               {
                  f += (d+i-f+a-k+l-l-e+d-h)%100;
                  c -= (l*m*f+a+b-i+h+n+i)%100;
                  i -= (c+g)%100;
                  j -= (g+i+l*c-b+e*n-k+i*c-g+b-n)%100;
                  d += (m-a+l*l-a-c-i*n+g-d-n*f)%100;
               }
               else
               {
                  b -= (k-l-n+j+a*b-k)%100;
                  d += (e+d)%100;
                  g  = (d-a+m+b+b+n+a+g+b*l+d-l-g-b)%100;
                  b  = (k+g+g-d+l*j-d-g*m+m+i+h-a)%100;
                  d  = (j-a+k)%100;
                  e += (d-d-n)%100;
               }
               b -= (m*j+e+f*c+h+j-h+g)%100;
               l -= (c-c*l+b+i-j*g+k+b-g+c+n-c)%100;
               b  = (n-k-l-n-h*l*a*i+k-c+e+m)%100;
            }
            k += (m+m)%100;
         }
         d -= (h*h*n-l+j-i-g+e)%100;
         m += (e-k-f-i+l+i-c-f-n-n+j+f+m*j)%100;
         b += (h-e+c*k)%100;
         i += (a-b+a)%100;
         g -= (c+b+j+c+c-n-n+k-d-d)%100;
      }
      j -= (k*c-a+d+h-n-d+b+d*c+a*c)%100;
      k += (j+m-d)%100;
      h += (i-c-a+i*m+a+f*j+h)%100;
   }
   d += (b+n-b-d+l-a*j-m+e+a)%100;
   d -= (m*d)%100;
   c += (b+e)%100;
   j -= (l-f+c+h*m-b+j)%100;
   k += (m*c-f+c-l-i-i*c)%100;
   k += (i+j-g+g+m-k+g-d+e*m-c)%100;
   b -= (h+a+e+k+k*l*g*c+l-j-d-a*k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F25(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[56]%5 )
   {
      do
      {
         k += (f-d+c)%100;
         for( ; ++FORcnt[84]%5 ; )
         {
            
            switch( ++SWcnt[27]%4 )
            {

            case 1:
            {
               if( ++IFcnt[41]%10 )
               {
                  a -= (e-h-g-d-i-n*e)%100;
               }
               if( ++IFEcnt[55]%2 )
               {
                  j  = (h-n*f-f-h+l*e+k*l*f-b)%100;
                  n -= (b*l+m+b+n+b-d*f)%100;
                  e -= (i*m+h)%100;
                  e -= (b+k+l-f)%100;
                  a -= (l-a+l*l-n-c)%100;
               }
               else
               {
                  j  = (b*n+j-g-e-l*a+a+c-a*d-f*d-n)%100;
                  d -= (m+k*g*f-l-k)%100;
               }
               while( ++WHILEcnt[54]%5 )
               {
                  l += (c+e+g*g*n)%100;
                  i -= (l-g+d-d-j-g*c-j-f-a-d+h*e)%100;
                  e -= (a+f-j-n)%100;
                  j -= (l-d-h*b*l+g-g+k-h-f+b*d*g-b)%100;
               }
               do
               {
                  j -= (m+e+c+d)%100;
                  k -= (j*a+e+n*l-e+l-n)%100;
                  c -= (i+k+g-a+c-h*i-i+a+n-a-b+n+n)%100;
                  g -= (e*m+f)%100;
                  a += (j+i-g+b-d-g)%100;
                  j += (a*d-b)%100;
               } while( ++DOcnt[55]%5 );
               for( ; ++FORcnt[82]%5 ; )
               {
                  n -= (c*i+d)%100;
                  m += (k*f)%100;
                  j -= (k+e*f+h+n-l+g-e-b)%100;
                  f += (g-g-j-g-n+h-k-e-c)%100;
                  g += (k+c+a*l-k+g*k)%100;
               }
            }
            break;

            case 2:
            {
               for( ; ++FORcnt[83]%5 ; )
               {
                  a -= (k-i*h+b+a*h*f)%100;
                  j -= (k-k-c+d-j-l*g-n-h-m)%100;
                  d -= (k+k)%100;
                  m += (k+g*k*e-l+n-h+e*j-g+j+i-g+l)%100;
                  m += (k*c+l-i+k+e+n+h)%100;
               }
               if( ++IFEcnt[56]%2 )
               {
                  f -= (f+c-f+l-n+j-j)%100;
                  n += (m+i*c-i+i-m)%100;
                  k += (n-h-h+a+f+g-g)%100;
                  b += (f+d+m)%100;
                  j += (l+f-k-n+h*d+k-a*i-k-j-g-m-l)%100;
                  n -= (c+d-j*a*g-a-h-b-m)%100;
               }
               else
               {
                  c += (g+d+f-j-d*b*b-a-j)%100;
                  c -= (k+i+k*m*k)%100;
                  a -= (c+i)%100;
                  n -= (m-f-m-b+c*f)%100;
               }
               while( ++WHILEcnt[55]%5 )
               {
                  n += (c-i-j)%100;
                  d -= (m+i+h-i+c-m-a-c+n+e-d*l+a)%100;
                  n += (b-a-h-a-l*k+b-f*n-i)%100;
                  d += (d*m-m*f+b*l+g+j*i-j+j)%100;
                  d += (e-a)%100;
               }
            }
            break;

            case 3:
            {
               do
               {
                  d  = (n-l)%100;
                  f -= (k-c)%100;
                  c  = (f+f-h)%100;
                  l += (n-j+c-l-e-l)%100;
               } while( ++DOcnt[56]%5 );
               if( ++IFcnt[42]%10 )
               {
                  e -= (k-l-j*c-g)%100;
                  m += (l+b-g+c*f-a-i*i)%100;
                  e += (g+a-f-e+l+k*j+a-b+k+m+l)%100;
                  n += (g*d)%100;
                  m  = (e*m-m-j+h+c)%100;
                  m  = (l-c+k+m-j+a-h)%100;
               }
               n += (c+b-h-e-k-n-d+e+j+c+f+e*g+g)%100;
               h += (b+m-g-i-f+h+m+j-g-f-m+l+n)%100;
               b  = (l-g+g+h+d+f+l+n-n+b)%100;
            }
            break;

            default:
            {
               f -= (m-d-b+e-h*e-l+n-k-c*i+b+g)%100;
               h += (i*a-c*e+g-f*c-m-m-f-i)%100;
               g -= (e+j+e*k+f+m*f*h+e-b+b+k*k*j)%100;
               b -= (g-f*g-k-j-k-g+j*f-g-m)%100;
               l += (k+a-c+d+h*k*b*a-l*n+f-h-h)%100;
            }
            }

            b -= (d-a)%100;
            g -= (j-j-k+l-e)%100;
            f -= (b-c+n*d+b-n-c+i)%100;
            n += (h*l+i-l+k+n-m-a)%100;
            h -= (d-i-h-m*n+b+a*f*f*l)%100;
         }
         g += (n-b-j+g+g+h-a-i+c*i-l-d*b-b)%100;
         n -= (f+b)%100;
      } while( ++DOcnt[54]%5 );
      i -= (c-a+i*b-b+g+m+i-g-i-i)%100;
      h += (i+f-b*e-i+j*b-m+k*l)%100;
      k += (f+g*f)%100;
      b -= (i*e-c*b-f-h*f-h*j)%100;
   }
   c += (g-f+i+m-i-k+m*l+i-c)%100;
   m += (f+j-e*i-n*h+l-n+e+a)%100;
   e -= (d-d+m-m)%100;
   k += (n+c-b+a+c*g-i-m)%100;
   k  = (m-e-c-a)%100;
   m += (d-k-d-b-e)%100;
   c -= (m-g+g-i-n-f+i*e-f+k-l*n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F26(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[28]%3 )
   {

   case 1:
   {
      for( ; ++FORcnt[88]%5 ; )
      {
         m += (j+g+h*h+l-n)%100;
         if( ++IFEcnt[58]%2 )
         {
            n += (e-j-l-c*k*h-e-d*m+m+h)%100;
            i += (f*h-h-f+f-f-m-g-j-m*d*a-n-m)%100;
            b -= (c-m*d-j-i)%100;
            a  = (d+j-b+m-h-g)%100;
         }
         else
         {
            while( ++WHILEcnt[58]%5 )
            {
               do
               {
                  l += (i+h-a+d+h)%100;
                  a -= (c*h+k)%100;
                  d += (n-g+b+c+l-b-b+c*a-e-m-j+g)%100;
                  j += (i*k)%100;
                  k -= (b+k+m+f-g+n+b*m+j*c+k+h-l)%100;
               } while( ++DOcnt[57]%5 );
               for( ; ++FORcnt[85]%5 ; )
               {
                  l -= (a-a*c*d*g+k*d*c*c+k)%100;
               }
               if( ++IFcnt[43]%10 )
               {
                  n += (l-k*f-a*n-c-b+m+g-l+e-e-j)%100;
                  c += (n*k-d)%100;
               }
               for( ; ++FORcnt[86]%5 ; )
               {
                  m += (k-a-h*i-e+a+a+d+a-i+e+a*d-g)%100;
                  f -= (g*g-c+j)%100;
                  n -= (j+b)%100;
                  i += (m+k+k)%100;
                  l += (h+f-k-j-b-e-f)%100;
               }
               if( ++IFEcnt[57]%2 )
               {
                  e += (c+m+h+b-i-f-e+j+k-n-l+n-n)%100;
                  e -= (b*d+b-f-d-m-i-f-m-i-m+l-k)%100;
                  i += (g+a*n-a+m-h+c)%100;
                  k += (d-n+d+j+g-f+l+i-l+e+j)%100;
                  d += (e-f+m-i-h)%100;
                  g -= (h-j+f*k*f)%100;
               }
               else
               {
                  k += (g+n+f+g*h+c+b+b+n+m+m-b*n)%100;
                  a  = (g-l*e+f*g)%100;
                  a += (f-b+d-i+b+f+c*a+c*b+a+k*d+g)%100;
                  d += (b*m+n*e*b+j+c)%100;
               }
               while( ++WHILEcnt[57]%5 )
               {
                  i += (h*c+l)%100;
                  a += (b+h+d*h)%100;
                  c += (b+f+k+g-g+a+c*f+g-j-e+a+i+c)%100;
                  f  = (l+n+m+f+m)%100;
                  g += (l+k+i-l-k)%100;
               }
            }
            do
            {
               l -= (g-l-a-e-g-g-a-d-b)%100;
               for( ; ++FORcnt[87]%5 ; )
               {
                  j -= (a+l+a+f+g)%100;
                  h -= (l+h)%100;
                  n -= (j+l+g+a-g-i-a-m+h+k-i-j-k)%100;
                  c += (n+a-g-f+c-m-f*f-h+m+c-i-c+f)%100;
                  l += (e+l-k*b+i*e+j+h+k+k*f+d)%100;
               }
               
               switch( ++SWcnt[29]%4 )
               {

               case 1:
               {
                  e += (j-e)%100;
                  g += (i*c)%100;
                  n += (f+h*j+e)%100;
                  j += (h*b+e-n*n-h+j)%100;
               }
               break;

               case 2:
               {
                  n -= (k*i*n+m-g+n-m+n+m-a*i)%100;
                  j += (f-a*f+m*g*d*i+k+k-j*g-h-f)%100;
                  m -= (f*e+h)%100;
                  a += (c+d-a*f+n+l)%100;
                  e -= (a*m-f+n-d-n-b)%100;
                  n += (i-b+g+m+j)%100;
               }
               break;

               case 3:
               {
                  n += (k-l)%100;
                  m += (j+k-k-e-e-h-f-m+a)%100;
                  c  = (n-n*d*h-i)%100;
                  i += (f*f*k-n*e+b+g-m-a+a-f)%100;
                  h -= (f+m-c-m*l+c)%100;
               }
               break;

               default:
               {
                  i  = (l+i)%100;
                  a -= (e+n+d+j+k+m+c+m+g-h+e+g)%100;
                  k += (l-l*i-n+d-n)%100;
                  f += (k-i-j+c-l-e-a-n-j+i-l*m)%100;
                  f += (j*d*f+b+g+b*d*h-c+g-f+g-l)%100;
               }
               }

            } while( ++DOcnt[58]%5 );
            e -= (l*c-f-m+e)%100;
            k += (f+n+a-a+a*c-h+f)%100;
         }
         l += (b*n+c+l+c+d)%100;
         n -= (j+k*j+l+f+h+i+g*i)%100;
         k  = (b-l+l+e-d)%100;
      }
      h -= (c-h-f*l-b+j*b*f+f)%100;
      n += (g*c-i-m+m*h*d-l+e)%100;
   }
   break;

   case 2:
   {
      b += (c-j-n)%100;
      h -= (g+b+k-k-m+j+n-i-f+m*k)%100;
      k += (a+i-g+n+d+m*l+n*g-k)%100;
      h  = (j-l*l+m-h-i*k-k+j)%100;
      e -= (e*c*e)%100;
      i -= (g+m-b+e+b+j*k+i*j-n)%100;
   }
   break;

   case 3:
   {
      n -= (j+j+b-k+b+a)%100;
      e += (i*k*b*c+j+n*a)%100;
      a -= (d+g+k)%100;
      m += (a*g-l+g-k+l-m*d-l*i+e)%100;
      e += (a*g-c)%100;
   }
   break;

   default:
   {
      j += (l-j)%100;
      m -= (d*j)%100;
      b -= (j-m+c+b-g-n-e-i-f)%100;
   }
   }

   b += (f-d-m-k-h-k+l+d-j+m-l-k)%100;
   l -= (k-h+k-n+n*k)%100;
   h += (a+b+d-h-c-i*i+a-l-e)%100;
   i  = (m+n-j+c*j-k+n+i+f*j-m+d+b)%100;
   m -= (j-l-h+j)%100;
   d  = (e*n)%100;
   d  = (i+j+j-m-f+a-e+d+d-c+e*i+f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F27(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[45]%10 )
   {
      if( ++IFEcnt[60]%2 )
      {
         e -= (f-n*h-e+b*h*j)%100;
         c += (g-g+l-j-m*a*a-f*e+a*j*n+c+h)%100;
         d -= (b-g+k-h+j-b*i+e+j*k*c-k-j)%100;
         m -= (k-f+j*k*b-k-f-a+k+j)%100;
         n -= (c+n*c*g-n*i*d)%100;
      }
      else
      {
         while( ++WHILEcnt[60]%5 )
         {
            do
            {
               for( ; ++FORcnt[89]%5 ; )
               {
                  g -= (l*c+k-j*j*c-n)%100;
               }
               for( ; ++FORcnt[90]%5 ; )
               {
                  k -= (n+a)%100;
                  n += (f*j+k*h+n-e+b+n+l-d+j-b)%100;
               }
               if( ++IFEcnt[59]%2 )
               {
                  d += (g-k)%100;
                  h -= (m*f+m+f*a+f-i-a-h-k)%100;
                  l -= (n+m-c+b-n-g+l+n-g-h+f-c-n)%100;
                  d += (b+d*m-m*l*h-j-j+c-c-e-m)%100;
               }
               else
               {
                  l  = (d-i)%100;
                  m -= (b*h+g)%100;
                  c -= (c-b+n-c-m*e-k)%100;
                  k -= (c-m)%100;
                  g  = (j+a-h+l-d+j+l)%100;
               }
               while( ++WHILEcnt[59]%5 )
               {
                  n -= (e-h+l+b-b-f-n-e+i-j)%100;
                  k += (m+m-e-b-d+a-e+d+k+k)%100;
                  c += (k+c+a+i+n*m+j*h*c+i-j-l*d*h)%100;
                  a += (h+k+d-g+f+c+g+d-b+c-i+m)%100;
                  g += (e-i-h+l*a-i*e+d-h+d-e+b*g-j)%100;
                  l += (f*f-b-g*n)%100;
               }
               do
               {
                  c -= (k+k-n-f-l+i+n-n+a-k+c-l*c)%100;
                  d  = (a+e-a*l+l)%100;
                  m += (l+g+j-g*l*m)%100;
                  g  = (e+b+f*i*h-g)%100;
                  m -= (c+m-m-a*h+b)%100;
               } while( ++DOcnt[60]%5 );
            } while( ++DOcnt[59]%5 );
            if( ++IFcnt[44]%10 )
            {
               d -= (j-g-i+b+c+n*a*e-c+h*i+g+c)%100;
               for( ; ++FORcnt[91]%5 ; )
               {
                  e += (c-b*d*m+c*a-n-i-h-d-k-m-n+a)%100;
                  f += (k-f+g-e-n-h-m*j-f*d*j)%100;
                  m -= (h+c+n-c*k-m-k)%100;
                  b -= (j*l+i+m*e+i-j)%100;
                  f -= (f*a+g)%100;
               }
               
               switch( ++SWcnt[30]%3 )
               {

               case 1:
               {
                  n += (d+f+g-n+j*l-c+i-h+a*m)%100;
                  b -= (i*j-n-a+k)%100;
                  a += (d+n)%100;
                  c -= (k-c+e-f+i+j-g*e+e*a+k+c*a)%100;
               }
               break;

               case 2:
               {
                  n += (j*d+n+g-k+e+f*d+d-k*k+f-f)%100;
                  a += (d-k+g+a)%100;
                  b -= (g+g)%100;
                  i -= (i+i*d+h*k)%100;
                  l -= (e*g-k+e-a-a+c+k)%100;
                  c += (i+i+b*j-e-h-b+g-e)%100;
               }
               break;

               default:
               {
                  i += (h+c-b+l+l*n+e+m)%100;
                  k += (e-h*e-e+n*l+g-g*l-m)%100;
                  c -= (g-m+e*a-b)%100;
                  b -= (b-f)%100;
                  h += (m*f*k-j-m+e-e*e+m*c*k-h+a+a)%100;
               }
               }

            }
            e -= (k+f-d-l*i+l)%100;
            h -= (c+l+l-e-i+g+d-l+k-m)%100;
            j -= (m+f)%100;
            n += (k*i+m-l+g-m-a+j)%100;
         }
         i -= (b+j+j+e*a-g+e+e*k)%100;
         a -= (k-f)%100;
         a -= (h+j*k*d+i-b-m-j*e-c)%100;
      }
      h -= (l+a-b*f*m)%100;
      l -= (g-n+k+d*d-e-a-n-k*l*e-m)%100;
      c += (d-e)%100;
      c -= (k-d)%100;
   }
   c -= (d-c)%100;
   m -= (a+a+g)%100;
   c -= (a+k-n+j*h-e+i)%100;
   b -= (k-g*e+f-d*g-m+h+f+n+k)%100;
   c += (f+i+h-m-m-l*d-e+n)%100;
   l += (h-h*b+e+g-n*k+n+b-j*k+h)%100;
   l  = (m+a+g+n+h+i+k-a*i-c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F28(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[62]%2 )
   {
      d += (i-f-a-m-g-b-m-g-m+b+b-l-d+e)%100;
      l -= (j*c)%100;
      k += (e+e-b+b+k-k)%100;
   }
   else
   {
      while( ++WHILEcnt[62]%5 )
      {
         do
         {
            for( ; ++FORcnt[93]%5 ; )
            {
               if( ++IFcnt[46]%10 )
               {
                  k -= (d-f*g)%100;
                  j += (c-d+k+m-l*c+k-h+n*b+d-c*j+b)%100;
                  j -= (e+j*d+j-f+b-n*n-e+j+f-a)%100;
                  i += (j+f+h-f)%100;
                  l -= (e+l-j-g)%100;
               }
               for( ; ++FORcnt[92]%5 ; )
               {
                  d += (h*j-k*m*i-d*g+n+b*d*g*f)%100;
                  m += (k-m+g+a)%100;
                  k += (k+h*i-j-g)%100;
                  c -= (k-d*d-j-h-h+j)%100;
               }
               if( ++IFEcnt[61]%2 )
               {
                  a -= (h-e+f)%100;
                  n += (m-j-n-g-d-n*k)%100;
                  f += (i+g+a+d-m+l+a+h-a-m-k-e-m+j)%100;
                  b += (m*e)%100;
                  h -= (m+c+f-f)%100;
               }
               else
               {
                  k += (e-b+a-g-m*f*c+f+e-l-h-e)%100;
                  j += (n+k-e+g+a+i+e)%100;
                  l += (d-g*h+j-c*c-c+i)%100;
                  d += (c-m-j*e+m-b)%100;
                  e -= (b+g*l-l)%100;
                  j -= (g-h-i-j-e+m-i-f-a)%100;
               }
            }
            while( ++WHILEcnt[61]%5 )
            {
               do
               {
                  k  = (i*f+d-n)%100;
                  l += (b*j-f+j-l*n+a+h-e-f-b)%100;
               } while( ++DOcnt[62]%5 );
            }
            h -= (f-j)%100;
            for( ; ++FORcnt[94]%5 ; )
            {
               
               switch( ++SWcnt[31]%3 )
               {

               case 1:
               {
                  g  = (k+n-i*l-a-d-f+c+j+a)%100;
                  l += (m-j+m+a+d+n-e)%100;
                  l -= (b*g+c+e*g+c-j)%100;
                  g  = (j*f+c+c+j+g-f)%100;
               }
               break;

               case 2:
               {
                  l -= (g+d)%100;
                  c -= (g+j+f*i-l+j-b-l-l-c)%100;
                  c -= (i+j+d-h-m+g-k*n+m+a+c)%100;
                  g += (e+f+h+i)%100;
                  i += (k+e+l-f)%100;
                  g -= (b-m*m)%100;
               }
               break;

               default:
               {
                  h += (g+c*h+i+c-k+g*e+g+k)%100;
                  i -= (f+e+g+i+d-c+j-g+b-a)%100;
                  l -= (d-h+d-b-n+c*e*k+d-j+m)%100;
                  i += (d+a+k+n-n+d-c+j-i+k+i-k+m+j)%100;
                  l -= (f*f-h*f+l*g)%100;
               }
               }

               m -= (j-g*j*f-i)%100;
               n += (h-b-e+c+c-j+d+g+h+b-e*c)%100;
               f -= (h-b-h*a+j*d-g*b+l)%100;
               n += (l-b+h+g-i-d+d-g)%100;
            }
            l -= (f*h)%100;
         } while( ++DOcnt[61]%5 );
         n -= (j-j+e+i+b)%100;
         g  = (a-d+k-g+n-n)%100;
         b += (e-h)%100;
         j -= (f+d+b-g-n+c+b-n-l*g-k*m*m-f)%100;
         d -= (n-g*i-a-h-j+l-a+n)%100;
      }
      f += (d-f)%100;
      h -= (c+c-m-f-k-a-j)%100;
      g += (e+b+f+a-c)%100;
   }
   g -= (a+e-b+j-m*g-b)%100;
   g -= (n+a+k-f+l+i-i+m+f-a*c+a+k*j)%100;
   n += (g+d*e-f+d+e+g-k+i+e)%100;
   e -= (n+a)%100;
   g -= (n*g-b+d)%100;
   a -= (f+n*g-b+h*h-j)%100;
   g += (b+b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F29(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[48]%10 )
   {
      if( ++IFEcnt[65]%2 )
      {
         n += (f-e-a+n)%100;
         j  = (l+k-g+b+f*n-c+k*f*f)%100;
         j -= (h+g)%100;
         a -= (g+k*f-a-a+b*b-c+d-n+a)%100;
         m  = (j*k)%100;
         c -= (i-a-m+n-a-i-e+m-h-h+m*a+a)%100;
      }
      else
      {
         while( ++WHILEcnt[64]%5 )
         {
            do
            {
               for( ; ++FORcnt[95]%5 ; )
               {
                  a += (f+e+i)%100;
                  l += (k+i)%100;
                  i -= (k*c)%100;
                  n -= (b-n+f+m+f+l*m+g-k-n*l+d-c)%100;
                  e -= (h-b+e-l+b-j+d-k+a)%100;
               }
               for( ; ++FORcnt[96]%5 ; )
               {
                  m  = (h*n)%100;
                  n -= (m*f+m)%100;
                  j -= (d-f+h+g*g)%100;
                  d -= (a+m-b+i)%100;
               }
               if( ++IFEcnt[63]%2 )
               {
                  g += (f+l+g+k+h+k-n*d)%100;
                  l -= (h-c+f-k-h-l+n)%100;
                  b  = (l-a*l-h-k+b-i-k)%100;
                  b -= (e+d-d+e+l+d-l*m-g+n-c)%100;
                  b += (a-l*e+j+e-n-d-e*k+j*b+b)%100;
               }
               else
               {
                  g += (g+d*c)%100;
                  g += (e-b+c+c-j-l-h*h+a)%100;
                  d -= (n+i+g*d-c-n-h+j-h+n-g-a-i*e)%100;
                  d -= (m+j*c-b+k-a)%100;
                  l += (c*h+c-a-e+k+d+f-h-a-k*n+d-c)%100;
                  a -= (c+l*l-n*k)%100;
               }
               while( ++WHILEcnt[63]%5 )
               {
                  k -= (e*f-h-n-l-a-j+d-c*l+f*d+g+e)%100;
                  e  = (c+h-n-n-n-m)%100;
                  k += (b+a+i+k-g-i+a+k-c+m+a)%100;
               }
               do
               {
                  l -= (c-f-a-g)%100;
                  l -= (h-i+f*h*h)%100;
                  l -= (b*d-e*k-m)%100;
                  l += (h*g+c-f+f-e-i*b*c+d-c+b+l)%100;
                  l -= (j*j)%100;
               } while( ++DOcnt[64]%5 );
            } while( ++DOcnt[63]%5 );
            if( ++IFcnt[47]%10 )
            {
               b += (l+a-h*k)%100;
               for( ; ++FORcnt[97]%5 ; )
               {
                  k += (c-l*j-a+f-g-k+c+j+l+i)%100;
                  d += (e+m)%100;
                  f -= (m*h-c*e)%100;
                  f += (f*i*k-j)%100;
                  j += (m-k+m+n+d+j)%100;
                  k += (e-e-f+a-n*e+a+f+m-e+d-e+h)%100;
               }
               
               switch( ++SWcnt[32]%3 )
               {

               case 1:
               {
                  h -= (h+d)%100;
                  i += (c*e+m+i*d+l)%100;
                  k += (g*d-h*m+k+k+g-h-m+h+e)%100;
                  n += (j*c*j)%100;
                  k += (k+m+k)%100;
               }
               break;

               case 2:
               {
                  c -= (e-a-g-h+n-l-h)%100;
               }
               break;

               default:
               {
                  d -= (i-d-k*i+e-b+e+b+j+g)%100;
                  h -= (h-m*m)%100;
               }
               }

               if( ++IFEcnt[64]%2 )
               {
                  d -= (b+g*g+j+f-a+i)%100;
                  g -= (d-h-e-g+b+l+a+e*n-f+c+c)%100;
                  g += (c*n*d*e+j*b)%100;
                  g += (b+n+n+d-k+m-n-i+g-n*h+g-k)%100;
               }
               else
               {
                  n -= (e-j+j*i*f-a+j+l-c-b-f)%100;
                  m += (k+f+d+e+b)%100;
                  e  = (n+k+k+m-n*j-b+j)%100;
                  f -= (h+j+g*a*h)%100;
                  a -= (c*d-k+c-a-g-l+e)%100;
               }
            }
            a -= (h+f+h-k*m*j)%100;
            a -= (a-f-i+a+k+a+b-b)%100;
            c -= (a+d+a*n-h-f+e*h-m-h-g*a-b+m)%100;
            g += (e+c*h-l*a+i+c*b-h-n*a)%100;
         }
         b += (c*i+b+g-g-n+f+k+k)%100;
         h += (l-k+k+e+c*b-h*l*c)%100;
         n -= (h-h)%100;
      }
      f += (g-l*m)%100;
      k += (i-k-i+l*c-m+a)%100;
      c += (d-h-c-l-j+d-d-g+n*l+b)%100;
      k += (h+l-n-d*n)%100;
   }
   e -= (d-j+n-b+d+g+n+i+i+l+c-m*e*n)%100;
   b -= (g-j+g*g)%100;
   g += (l+n)%100;
   i -= (i-f)%100;
   g -= (m+k)%100;
   h -= (f*f-h)%100;
   j -= (j+m-e-n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F30(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[66]%5 )
   {
      do
      {
         for( ; ++FORcnt[100]%5 ; )
         {
            if( ++IFcnt[49]%10 )
            {
               for( ; ++FORcnt[98]%5 ; )
               {
                  b += (d+d)%100;
                  f += (a-m+e*l+n+g-e+d-h-l+e+f+m-f)%100;
                  i += (l*h)%100;
                  a += (l-d+i*j-e+i+k-h+f-b*m*c)%100;
                  n += (a-d)%100;
                  k -= (k-d+i-l+e+c-e+l+c+a+a-m-d+h)%100;
               }
               if( ++IFEcnt[66]%2 )
               {
                  a -= (l-i+l-l)%100;
                  a  = (e-d)%100;
                  a += (m*b-b-n+a-c+j-a+n-i+k+l)%100;
                  h += (m+j-g+b-e*i*e*d+a-j+d*l*h)%100;
                  d += (g-f*k-k+j-c)%100;
               }
               else
               {
                  j -= (m-i*f-e-i*j+k-e-m*b-g-i*l+g)%100;
                  c  = (k-e+j+m*m+k*c-f*i)%100;
                  g += (b+c-g+i+e*f-i)%100;
                  k += (d-a*j+n+l-i*c)%100;
                  e -= (l*g+d+j-l-n)%100;
               }
               while( ++WHILEcnt[65]%5 )
               {
                  i += (k+h+n)%100;
                  g += (g-c+c+g-f+b-h)%100;
                  i -= (n*j)%100;
                  e -= (g-j+l+a+l-h-m-n+n+g)%100;
               }
               do
               {
                  f  = (n+k+e*c)%100;
                  l -= (f-i-i-j-g+n+c)%100;
                  a += (j-f-b*m*g*e+i+a-k*j-d+d-g)%100;
                  n += (i-k+c*c+e-d*b+f*g)%100;
                  f += (e-m-b-j-g*f-j-j+i)%100;
                  n  = (b+l-h-e-b*f+a+g+f+m)%100;
               } while( ++DOcnt[66]%5 );
            }
            j += (b+b+a-f*m+a*g-d*l+a-h+m)%100;
            for( ; ++FORcnt[99]%5 ; )
            {
               
               switch( ++SWcnt[33]%3 )
               {

               case 1:
               {
                  l += (d+e+h*m+k*i)%100;
                  d += (e*h*e-j-h*k+m*k-m-e+j-d+h)%100;
                  n += (l-f*f*d)%100;
               }
               break;

               case 2:
               {
                  f -= (e+g-b+k-i+e-i+c*l-c-g-c)%100;
                  k -= (f-f-a-m*m-m-l-e-d+c-j+e)%100;
                  e -= (m*i+l+e*c-j*m*f+d+j-m)%100;
                  k += (i*j-f)%100;
                  k += (l+l+n)%100;
               }
               break;

               default:
               {
                  k += (j-l-d+m-g*c*b*e-l+a-g+m+n)%100;
                  l -= (j*i+k-b+c*f-k+i+a+f+i)%100;
                  g -= (n*e-g*k-d)%100;
                  d += (c+a+n-j*m-a*n+j+b)%100;
               }
               }

               if( ++IFcnt[50]%10 )
               {
                  j  = (d+e+b*f*f)%100;
                  m -= (n-c)%100;
                  c  = (h*h+a+m)%100;
                  g -= (a-j+d-d+f-l+m*c-k+c+d+c)%100;
                  d -= (a-h*j+k-i*a-a*k-n+f)%100;
                  h += (i-j-n*h+b)%100;
               }
               if( ++IFEcnt[67]%2 )
               {
                  a -= (l-b+g-m*d+j)%100;
               }
               else
               {
                  l += (b-d-d+m-d+m)%100;
                  m += (h+g-g+c+g+e-m-a)%100;
                  e += (e-j+g-h*e+g-h+b)%100;
                  n += (d-n+m-i*f-l-i-j-k-j-l)%100;
                  e += (a+b+i-a+h*b-g+e-j-j+k-h)%100;
               }
               d -= (m-n-h+e+g*i*e+e+c+f*e)%100;
               h += (j-n+e-b+i)%100;
            }
            b += (f+d)%100;
            b += (e-n-d+a+i-a)%100;
         }
         n += (l+g+l+k+f+e-h*d+g-c-d-m-e)%100;
         n += (i*a-b+m-k+l-l-m-d+j+a*n)%100;
      } while( ++DOcnt[65]%5 );
      l += (l-a-e-l-h+f+f+f-b*k-k+d-j*l)%100;
      d  = (g+i*k)%100;
      j -= (k-c+g-e+l+l+j+b+b-m*d-d)%100;
      k += (j-h*d-l*a*a*h*k+a*f)%100;
   }
   c += (c+e*m+d+k*e-l-f-n)%100;
   c -= (l+l-b)%100;
   b += (a-j*f*d+i+f+n*m)%100;
   l -= (n+i+d)%100;
   h  = (k*b+b+e-j-f)%100;
   g -= (i+j-l-f+i+n)%100;
   e += (c+h*g+b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F31(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[69]%5 )
   {
      do
      {
         for( ; ++FORcnt[104]%5 ; )
         {
            for( ; ++FORcnt[102]%5 ; )
            {
               if( ++IFEcnt[68]%2 )
               {
                  d += (b-c-b*a-b-d*j+n)%100;
                  e -= (f+j+i*f-h+i+c-b+i*d)%100;
                  g += (h-j+a+m)%100;
               }
               else
               {
                  k -= (g*i*d-j*n-d+l+c)%100;
                  b -= (g-g-f+b+e-n)%100;
                  i += (l-c+i-n-g+a+g-f+i+c-b+i+l+k)%100;
                  i -= (h-a+h-j+m-d*d)%100;
                  n += (n+b+n+j-d+m-d+g-f)%100;
               }
               while( ++WHILEcnt[67]%5 )
               {
                  g -= (l-a+h-i-e*a+g)%100;
                  i -= (g-g+n)%100;
                  j -= (j-m-l)%100;
                  k += (l-i*a+a-k+i-a-a*j+g)%100;
                  m += (c-e-a-h+c*k-l+l-i)%100;
               }
               do
               {
                  k -= (n+g+i+b*n+j-f-i*f+m*n)%100;
                  k -= (n-g*a+m+b-j+f-g+i)%100;
                  i += (m+i-g*m+a)%100;
                  d -= (m+k-g*k-n-f+k)%100;
               } while( ++DOcnt[68]%5 );
               if( ++IFcnt[51]%10 )
               {
                  k += (d+g*j*l)%100;
                  f -= (n+c*d-n+c+n+d+b+h-n)%100;
                  d += (i*i-j*b+g+g+g+c-e*l+c)%100;
                  g += (n+g)%100;
                  e -= (b*n*m-i-i+m+l-a)%100;
                  g += (n-d-l-e+g-d-b-h-b+j+n)%100;
               }
               j += (e-f)%100;
               for( ; ++FORcnt[101]%5 ; )
               {
                  k += (a-m+d-b+h-j-k*b)%100;
                  h -= (n+f+e*b*h+k-f-g-j-f)%100;
                  a -= (j+d+i*c-l*n-a+k+k+i)%100;
                  h -= (g-c)%100;
                  k -= (f*k+f)%100;
               }
            }
            
            switch( ++SWcnt[34]%4 )
            {

            case 1:
            {
               if( ++IFEcnt[69]%2 )
               {
                  j -= (d+j+d-k*n-d+e+e+j-d*g)%100;
                  n  = (d*k+k+k+a-j+e+h+j*i*f-n)%100;
                  i -= (d+g+d*m-i*g)%100;
                  j += (j+g-b+f+i+m-d-a)%100;
                  n -= (m-e+d)%100;
                  h  = (g+i*i-e*m)%100;
               }
               else
               {
                  g  = (c-i+e+d+b+m+m*a-j*f)%100;
                  n -= (g-h-h+a)%100;
                  d -= (k+j*e+k-j-g-k-l*i-j*b)%100;
                  b -= (d+j+i*g+j-b+l)%100;
               }
               while( ++WHILEcnt[68]%5 )
               {
                  g -= (a+c*c+c*d+d)%100;
                  n -= (h+g+l)%100;
                  m -= (i+a-b+i+j-j+b+b)%100;
                  f += (a+d+g+e)%100;
                  c += (a-e-k-g+g+m+g-f-n-a-k)%100;
               }
               do
               {
                  m -= (d+e*m-j+h-h+j+j+g)%100;
                  d -= (f+c*l-d-k-n+d-g)%100;
                  d -= (k-a+l+c+f*k-i+l-c+j*a)%100;
               } while( ++DOcnt[69]%5 );
               for( ; ++FORcnt[103]%5 ; )
               {
                  g  = (d+h+m-d-i-m)%100;
                  m += (e+d*k+i+n*n+i+i-e)%100;
                  e += (e-b-j*h+i)%100;
                  i -= (m-c+f+h+l-a-b+a)%100;
                  i += (i-n*h+h+i+f*a+g)%100;
               }
               if( ++IFcnt[52]%10 )
               {
                  n -= (a+e+a+g*l+e*h-l-k*f)%100;
                  g  = (m+g+m+k)%100;
                  m += (l+g+f+d-a-k+m*e+c)%100;
                  n += (d-c+f+b*h)%100;
               }
            }
            break;

            case 2:
            {
               n -= (k+a+b*l+a*d+f-k+h*c+j+i+l+g)%100;
               n += (h-c-n+k-a+c*f+e-m)%100;
               n += (h-h+e+i+a+j+c+n-g)%100;
               i += (h-k-b-f*n-g+j*m-f-d+a)%100;
               i += (a*c+c*n+c+d-k+a-c+b-f+l)%100;
               m += (g-m-d-c-c+b+l*a-b+i-n*a*f)%100;
            }
            break;

            case 3:
            {
               e += (b*f-d-f)%100;
               g += (e*n+g*h*e+m-n-m-n)%100;
               g -= (h-e-h-b+d+n+k*k+j)%100;
               a  = (h-h)%100;
               a += (a+j+m-d+e-d+h*j+g-e-n+g-b)%100;
            }
            break;

            default:
            {
               f += (e-l+d*n+l*a+k)%100;
            }
            }

            g += (c+l+d-e+e-b)%100;
            l += (i-d*a-a+j-f-k-k-e-l-f-d)%100;
         }
         k += (m-h-a-l-b+k+g-n*c+m-k)%100;
         f += (m+f+g-f-i-m+k*d*h-g-m-g+k*n)%100;
         j  = (a+b)%100;
         d += (m-e+e*k-c*d-j-k-b*f)%100;
      } while( ++DOcnt[67]%5 );
      j -= (f*g*a+j+i-k-e-j*l)%100;
   }
   k -= (b-i+c+m-d+c-g+l+n*d-f*e-j*c)%100;
   n -= (e*i+j-b+a+i+a-h+l-i+e)%100;
   n -= (d*n)%100;
   b  = (n+l-k+j*k+k*b-e-g-c)%100;
   d -= (n*m+n-f-c-f-h+n+e-b-i)%100;
   i -= (j+m)%100;
   k  = (n-a-i-e-j-i*h-c*c-l+b-n+f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F32(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[108]%5 ; )
   {
      if( ++IFEcnt[71]%2 )
      {
         e -= (a-e*e-n+e)%100;
         m -= (d-n+e-k-m+a+g-b+b-n)%100;
         k  = (j-c-l+n-a+c-j-n-m)%100;
         b += (m+a)%100;
         e -= (a+f)%100;
      }
      else
      {
         while( ++WHILEcnt[71]%5 )
         {
            do
            {
               l += (k*k-h-m*b-j+d+b+k*h*l*a)%100;
               for( ; ++FORcnt[105]%5 ; )
               {
                  f -= (l*n+m+d+l-m-c-e+d*k+n+b-f-h)%100;
                  a -= (k-i-k-f+m-l+b*j)%100;
                  d -= (b+f+j-h*l-b+g+f)%100;
                  j -= (g*k*e+h+k*l-i)%100;
                  i -= (f-j+m+g-k+n-m)%100;
               }
               
               switch( ++SWcnt[35]%3 )
               {

               case 1:
               {
                  l += (l-a*b+n+e)%100;
                  m -= (m+e+d-b)%100;
                  b -= (g-b-i+n+b+k+a+c)%100;
               }
               break;

               case 2:
               {
                  b += (g*d-j)%100;
                  b += (a-f+e-k+g+j+h)%100;
                  a -= (n+f)%100;
                  b += (a+f+e*j-b-b+j*a-e+l-g+n)%100;
                  d -= (a-e+e-i-n-e+i*d-h*l-g*e)%100;
               }
               break;

               default:
               {
                  b += (b+b*h+d+j-g*d-j+d+l)%100;
                  i += (b*c)%100;
                  m += (j+n-h+f*k-i-i-d+m)%100;
                  f += (d-k-e*k+j-i-k-i)%100;
               }
               }

               if( ++IFcnt[53]%10 )
               {
                  i -= (l+i*h+n*n*b)%100;
                  f -= (f+i+n+j*k-n*c+a-j-m-i-a)%100;
                  h += (a+c+d*i*m+a*l-f)%100;
                  e -= (e-k+c*h+k+e-c-g-h)%100;
                  g -= (i+d)%100;
                  k -= (f*f+l-d)%100;
               }
               if( ++IFEcnt[70]%2 )
               {
                  m += (g-f-a+j-e+m+g+g*n+b)%100;
                  m += (k+h*n+f+l*k-a+b)%100;
                  g -= (f*f-i+j+e*h+j+n+k+b+d*d)%100;
                  a += (d+a+i-d*l+f+g+l)%100;
                  m -= (b+f-m+e+d+n+a)%100;
               }
               else
               {
                  h -= (a+b-n*b-g-i-i+i+f-j+c)%100;
                  h += (g-a+n)%100;
                  c -= (h-b*k-h*m-h*j+k-n-b+a-m-c-i)%100;
                  c -= (k+d)%100;
                  l += (k+n*m+d-f)%100;
               }
               while( ++WHILEcnt[70]%5 )
               {
                  m  = (h-h+j)%100;
                  a += (f*h-k-f*n+f-m*k+a-b+g-e-n-c)%100;
                  n -= (j-i-e+n*m+i+c-i-d-d)%100;
                  a += (g+g+l+l-b*d+l+m+f)%100;
               }
            } while( ++DOcnt[70]%5 );
            do
            {
               for( ; ++FORcnt[106]%5 ; )
               {
                  d += (e*a*d-m-b+n-i+l+e)%100;
                  i -= (l-e*j+a+d-d+d+n*e-d+k-j+k+k)%100;
                  b -= (e+l*e-b+h*m+i+c+g+c-f)%100;
                  e -= (a+g-n*h-g+j*d-b+e-d+b-i)%100;
                  d += (i+j-c*j)%100;
               }
               for( ; ++FORcnt[107]%5 ; )
               {
                  e -= (a-k-f+l+a*i)%100;
                  j += (c-m+d-n*c+d+n-j+f)%100;
                  a += (d+n*i+e+m-k+g-e*n+d+k+b+h)%100;
               }
               h -= (f+i)%100;
               n += (k*c-l+j*h*i-a*h)%100;
               e += (d+a-k+e)%100;
               n  = (i*m-i*l-g+i+k+d+c-d)%100;
            } while( ++DOcnt[71]%5 );
            n -= (e+k-e-m-k*d-k-c-e*i-f)%100;
            a += (b+l-i*e-e+f-c*n)%100;
         }
         n += (g*k+a+l+c)%100;
         n -= (d-l+m+c+k*e+k-h-g*j-h+h-i+m)%100;
         n  = (l-k+e)%100;
         f += (h-n*h-c-e-a-j*j+h*a-n-l+b*c)%100;
      }
      n -= (m+d+h+f-g*c-k-e-i+b*d-h*g-b)%100;
   }
   i -= (k+i-g+h)%100;
   g += (h+j-c-d+m+b-e-l+f+a-h+c-m)%100;
   c += (j*c+k+l-c+d-d+f*a+m+e+j-m)%100;
   m -= (n*h-c+h+l-k+k-f-n+n-e)%100;
   d -= (e+a*m-h)%100;
   j  = (b+m+f+l+k-d-g-n*k+i)%100;
   c += (j+f-l+c*m+h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F33(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[74]%2 )
   {
      c  = (b+k*l-g+m-c+n-m-b+g*f*d-h-f)%100;
      m -= (k-d+i-n*a+i+k)%100;
      h += (a*d*l-n-n+b*d-l)%100;
      j  = (k+m-f-h+e)%100;
      h  = (i-l+l*b-f-e-e*m)%100;
   }
   else
   {
      while( ++WHILEcnt[73]%5 )
      {
         do
         {
            if( ++IFcnt[54]%10 )
            {
               i -= (m+a+e+m+k+b)%100;
            }
            for( ; ++FORcnt[109]%5 ; )
            {
               
               switch( ++SWcnt[36]%3 )
               {

               case 1:
               {
                  i -= (a+i-j-f-c)%100;
                  l -= (m-n)%100;
                  d  = (g+f-f+k*e)%100;
                  f -= (l-j-b-c*h+b+c-m+h-b+c-c)%100;
                  c += (i+m)%100;
               }
               break;

               case 2:
               {
                  c  = (m+c+m*b-f-a)%100;
                  l -= (f-m*g+c+j-d+n-g+l*g+f)%100;
                  i += (f-c+g+g-b+g-m-f-h+k+n+n+e)%100;
                  d  = (l+m-c+d+d-h-h)%100;
               }
               break;

               default:
               {
                  i -= (n+l+c+m-k*f+b*f-j-j*h*d)%100;
                  g -= (c-j*i*n+d-n-e-g)%100;
                  i -= (c-d+j-a-n*h-f-a-l+n+k-j-k-j)%100;
                  k  = (b-e+l)%100;
                  d -= (g*a-m+d-f-e*c-m)%100;
                  i += (l-l-i+l+f-h*n-g*a-a-j-l+g+a)%100;
               }
               }

               if( ++IFEcnt[72]%2 )
               {
                  n -= (f-c*k*h-h-i+b-f*k-d*f+e)%100;
                  m += (k*c)%100;
                  j += (b+c-g+b+i-m+d-h-l+f*f-j+j*j)%100;
               }
               else
               {
                  g -= (g+k+g-g+m*d+f-a-j)%100;
                  i += (e-b+m*d*c-l-f-e-m)%100;
                  i += (b+h*c*a-e+m+b+b+j+l-f+k+k)%100;
                  i -= (i+c-k-n+l)%100;
                  g += (b+n+m-i+i*d+h+k+n-a+a+c-l)%100;
               }
            }
            while( ++WHILEcnt[72]%5 )
            {
               do
               {
                  n += (a+i-i-i+g+b-k+m+k)%100;
                  f  = (b-a-b)%100;
                  a += (m-i-l)%100;
                  d += (h+m-j+e+a-h)%100;
               } while( ++DOcnt[73]%5 );
               for( ; ++FORcnt[110]%5 ; )
               {
                  n -= (a*l-f+l+m-n+l-n-d+m-g-l)%100;
                  a += (g*d*c)%100;
                  d += (a*m)%100;
                  e += (g*a-c)%100;
                  f -= (c+b-m-k+e-e+b)%100;
                  n -= (l+f*g+d*h+l+i)%100;
               }
               if( ++IFcnt[55]%10 )
               {
                  k -= (i-l+b*l+h*g*k-d+h)%100;
                  f -= (k*c+e*g)%100;
                  b -= (a+i+m)%100;
                  n -= (i*e-m-b)%100;
                  c -= (m-i+l*k*g*k-m-g-h+d+n-n)%100;
               }
               for( ; ++FORcnt[111]%5 ; )
               {
                  g += (d-j)%100;
                  f += (b+a-m*l*a+a-n+f+c-f)%100;
                  a += (f+e+h+b)%100;
                  m -= (n+i-j-e*n+d*b+l+h*c*j+k)%100;
                  l += (c+c+k-e)%100;
               }
               if( ++IFEcnt[73]%2 )
               {
                  l -= (a-k-m)%100;
                  l -= (c+m-d*j*k-g-n+l)%100;
                  f -= (i+d+b+m-h+h+c*j+n*h+g-c-k*g)%100;
                  n += (f-d*f+j+j)%100;
                  d -= (f+m-g+a+m*d-e+d-f+c-c-l-f*l)%100;
                  c -= (i-l*d-d*e)%100;
               }
               else
               {
                  m -= (l-d*j+d)%100;
                  a += (m-k+m-m+j+k)%100;
                  c -= (n-l)%100;
                  h -= (h+j-l+e-k+a-f-f-b+c-c+i+i*g)%100;
               }
            }
            l  = (j-l-d-c-l-a+c*l+a*c)%100;
            i -= (b-a+b+m+d-g)%100;
         } while( ++DOcnt[72]%5 );
         a -= (i+b)%100;
         i -= (g-h*l-k-g+j)%100;
         j -= (f*b+h-k-a*c+e-e-h+k-l-a+m)%100;
         h -= (i-j)%100;
         h += (l+d*f-i+m-l-m-h+c+n-j-j)%100;
      }
      m += (l-g+m*h*b+i+e+c+m+h-b)%100;
      i  = (f+k*j-l-h+g-d-a*e*i-d)%100;
      h += (a+i*g-i+d+m-a+k*a+n)%100;
   }
   l -= (d-n+a-g-a+c*i)%100;
   b -= (h+e*g-g+b-e-m-b*e)%100;
   n += (h+c-d*g-h-k-i*i-j-f)%100;
   g += (h*j*n-b-g*a+f-h+b+n-m*j)%100;
   b -= (i+i+m+l*g-c+k)%100;
   h += (i-k)%100;
   j += (b*h+l*f+h+f-c+d-h)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F34(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[76]%5 )
   {
      do
      {
         h += (d+j+g-g+g)%100;
         for( ; ++FORcnt[114]%5 ; )
         {
            
            switch( ++SWcnt[37]%3 )
            {

            case 1:
            {
               if( ++IFcnt[56]%10 )
               {
                  n -= (m-c*f+h-n+d+e-j-g-f)%100;
                  j -= (i+e+c-i)%100;
                  e -= (a+i-f+d-h)%100;
                  m -= (b-f+e-a-l-d*j)%100;
                  m += (j*d*m-h*k-j-d*k-m)%100;
               }
               if( ++IFEcnt[75]%2 )
               {
                  j += (a-m+f+g)%100;
                  j += (h+f+f-m+e-f-l*c+k-d+e)%100;
               }
               else
               {
                  c += (i+c)%100;
               }
               while( ++WHILEcnt[74]%5 )
               {
                  d  = (f+h+c+i-j)%100;
                  e -= (a+i*d+f+n-j+m*h-j*f+e*j)%100;
                  n -= (g-e+m-l-c+a-l)%100;
                  i -= (n+a+g+h*d+f+m-f+d)%100;
                  l  = (g-a-a-m*d*f)%100;
               }
               do
               {
                  d += (e+i-g-m*m-d-g-f+i-l+f)%100;
                  b += (j-n+e+i-f*l+n+f-g-k-b+d*l+n)%100;
                  n += (c-j+f-k-m-b+l+a)%100;
                  m += (m-g+h*e+j)%100;
               } while( ++DOcnt[75]%5 );
               for( ; ++FORcnt[112]%5 ; )
               {
                  g -= (e-c+m*b)%100;
                  e -= (b+m*m+k)%100;
                  e -= (n+l+l)%100;
                  b -= (l*j*j-k-b+d*i-h-n+j*f-d+l-a)%100;
                  i -= (h*f-m-d-i+g-b-l+g+h+g)%100;
                  h += (h-i)%100;
               }
               for( ; ++FORcnt[113]%5 ; )
               {
                  h -= (k-d+l-i+j-h)%100;
                  j += (h+e+e+f-c+m*b+c*j)%100;
                  j -= (d*c*m+c-c+d-k-h-i-d)%100;
                  a -= (d-l+l)%100;
                  g += (k*f+a+k+m+j+n)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[76]%2 )
               {
                  g  = (e-f+h+m-a-e-e*e)%100;
                  f -= (d-m*h+j-h+f)%100;
                  l += (a-c+d)%100;
                  n += (f+l)%100;
               }
               else
               {
                  c += (k+f-j)%100;
                  e += (f-h-l-l+l*d+l*n*h-a+j-b+h+d)%100;
                  a -= (a*e-d)%100;
                  l  = (h*d+j+k-d+b*k-b-n-h+m+f*j)%100;
                  c -= (a+d+n+g+g+i-c*g+j+g-k+k-m)%100;
               }
               while( ++WHILEcnt[75]%5 )
               {
                  g -= (d+l-k-l-b+d+k+e*a)%100;
                  n -= (e+a*i+l*a+d+b)%100;
                  n -= (g+i-c+i)%100;
                  a -= (j+a-m-i+g+d-m*l+i)%100;
                  l -= (n-i)%100;
                  f  = (i-g+b*d-k+g-k-e+g+e-b-c-h+g)%100;
               }
               do
               {
                  j -= (b*g*h+m+d*k-f*n-c*f+j+k)%100;
                  i += (i-d+i-b-k-m-h)%100;
                  n += (n*c-g+g+f+f+j+k)%100;
                  g -= (b+i*l*e+f-d-c)%100;
                  f += (j+a-d*h-j-f-i-b-k-d-a-e)%100;
               } while( ++DOcnt[76]%5 );
            }
            break;

            default:
            {
               if( ++IFcnt[57]%10 )
               {
                  g  = (j*k-l+b-e*c)%100;
                  d += (i*l*b+n+c*g*m+e-f*i-m)%100;
                  b += (i+d+a*g*j-f+k-k+j*d)%100;
                  l -= (g+d-k-i-j-j+k-b+a)%100;
               }
               k += (d*a*j*l-j*m+h-k*c+m-l+a*c)%100;
               b -= (l+c*i-j+g*f)%100;
               c += (j+i*c)%100;
               a -= (f+g*d-e+i+f*c-e)%100;
            }
            }

            f  = (a*k-l)%100;
            i += (a+f-g-f-c-a)%100;
            h -= (k+l)%100;
         }
         d -= (k-k-h*h+j)%100;
         l -= (h*j+i-m)%100;
         n -= (a-f-c-h-g-d-c)%100;
      } while( ++DOcnt[74]%5 );
      k += (e+k+f+d+f)%100;
      a  = (l*e-b)%100;
   }
   f -= (i-h-n+g)%100;
   k -= (a-f+c-m+g*n+d+l+f-d)%100;
   b += (n+h*c+j+l+b+j+j-h*c)%100;
   a += (m-b*c-g*m-b+i+i+h-a)%100;
   j -= (h-f-j-j-e*e*h-l-h*m-f-d)%100;
   l -= (g*m+m*h-l+n+h*d+f*l-h-c-n)%100;
   k += (e-b+a+i*m+l)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F35(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[38]%4 )
   {

   case 1:
   {
      for( ; ++FORcnt[118]%5 ; )
      {
         n -= (f-e*h+h+b-k-a-i+n-n+h)%100;
         if( ++IFEcnt[79]%2 )
         {
            g += (g+k-d*b+d+n-i-b*h-k+k)%100;
            k += (g+d-h)%100;
            k  = (h*n-j-g-c+k*c+e*c-j-b-f+a)%100;
            f -= (b+k+g+i-h*i+b-j-g+h+j-f*k*h)%100;
         }
         else
         {
            while( ++WHILEcnt[77]%5 )
            {
               do
               {
                  n -= (b-j-b+i*m-m-n)%100;
                  i += (c*b-e*g-d)%100;
                  h -= (a+m*d+n+a+e-h+h)%100;
                  g += (h*b+m*n+d-b-f)%100;
               } while( ++DOcnt[77]%5 );
               for( ; ++FORcnt[115]%5 ; )
               {
                  f += (l+l+e-b-b-d+h*j*f*l)%100;
                  f += (m+j-f+a-m*n+c*m+f-f)%100;
                  i += (j+g-f*g*d-h*a+a+m-e*e*k-i+l)%100;
                  k -= (l+b+m*d-n+l-j+k+b-b-j-n)%100;
                  f -= (l-c*f+l*c+j+n-g-b+a+n*a*j*c)%100;
                  k += (f*f+e+g-l*m-e*d)%100;
               }
               if( ++IFcnt[58]%10 )
               {
                  l += (m-i*b*f+m+l-m-n+l-g)%100;
                  e  = (h-n+k+g-n*h+e*n)%100;
                  m += (b+i-b-e)%100;
                  b += (f-e-b*n-n-j-i+e-m-i-c-g)%100;
                  n  = (b+i-b)%100;
               }
               for( ; ++FORcnt[116]%5 ; )
               {
                  g  = (h*f)%100;
               }
               if( ++IFEcnt[77]%2 )
               {
                  f -= (m+c-e+f-k+i-g*j+f+e-e-j-b)%100;
                  i -= (i-e+a+n+n*d)%100;
                  l -= (g+h-h*m-d)%100;
                  f += (m-e*f*i-c+e-e+m+m*f+n)%100;
                  d -= (b+m-g+m-h-f-l+e-f+a+d+a-g)%100;
               }
               else
               {
                  k -= (n*e-h-k-l+d*f+m*g)%100;
                  h  = (g*e*f+n-d-j-d-e+c-d+n+j)%100;
               }
            }
            while( ++WHILEcnt[78]%5 )
            {
               do
               {
                  n += (c*c+h-h)%100;
                  e += (d-j-k)%100;
                  b += (a+l-b*j)%100;
                  j += (k+m-l)%100;
                  d -= (l-c-k+g*m-j+k+n*a-d-a+d+h)%100;
                  m += (b+k)%100;
               } while( ++DOcnt[78]%5 );
               i += (i+m+n-g+a-f*b+l*d+j+b-j*j+j)%100;
               for( ; ++FORcnt[117]%5 ; )
               {
                  l += (l+k+n+a-e+j+g+g+j)%100;
                  l += (f+g-j+c)%100;
                  d += (g-i-e)%100;
                  f -= (d+l-l*m*n+e+g*c-c)%100;
                  i += (m-e-a+g+a+e+a-i+f+m-i)%100;
               }
               
               switch( ++SWcnt[39]%3 )
               {

               case 1:
               {
                  k -= (e+e*k-c-a*c*g-a+f)%100;
                  h += (l-c+n-g+b-e+j+f)%100;
                  f += (i+i+n*l-f-e)%100;
               }
               break;

               case 2:
               {
                  c -= (j+g*j+a-a+g+e*j+l-f-a+g-k-e)%100;
                  j -= (d-i*g+f-b)%100;
                  g -= (n-d*l+f)%100;
                  a -= (m+g+h)%100;
                  c -= (c+m-h+m*m-g-m-k)%100;
               }
               break;

               default:
               {
                  h -= (b*d*f+k-d-b)%100;
                  k += (d*a+i-n+j-g-i*k-n+g*d+a)%100;
                  a -= (d-g-b+b-e-k-c)%100;
                  f  = (f+j+h-g+m-j-i+f+g-m-d-h+n*k)%100;
               }
               }

            }
            if( ++IFcnt[59]%10 )
            {
               if( ++IFEcnt[78]%2 )
               {
                  g += (f+h+n-g-c+a-j-a-f*k+g)%100;
                  h -= (n+n-f)%100;
                  j -= (j*b+d-h)%100;
                  g += (d-h+m+m-j-h*m+c-f+c-a-h)%100;
                  c -= (g-b+m)%100;
               }
               else
               {
                  k -= (g+i+e-h-l-j-f-c-j)%100;
                  g -= (c*j+a+f*b-b+n-l+k+n)%100;
                  g  = (n*h+n-f+d+c+e-h*a-k+i)%100;
                  n -= (h+m+i-n+j*l+k+a+f-e-a-c)%100;
                  a  = (i-j-k+l-h+l-l-i+a-j+h+g-a+f)%100;
               }
               m -= (i+f+l-l+i-e+d-c)%100;
               k  = (h+h-i-n+d-k)%100;
               b  = (k-c*f)%100;
               i  = (j-h-b-i-h-h)%100;
               g -= (j+g)%100;
            }
         }
         h += (d-a+b+h+e+i+e-e-n*d-a*h+i-g)%100;
         j -= (i+h-i+a*d-e-k+h-b+h)%100;
         h -= (d+c*m+d)%100;
      }
      j -= (e+f-b*m+e-k*a*k+e-m-f*g)%100;
      c  = (k+l*a+m+c-d-i-a)%100;
      a -= (l+c-f-f-j+m+a-h+d*b-d+h+g*n)%100;
      l += (b-i-c-b*b*k+k+m*m-h+m)%100;
      n -= (h+i-b+d-j+c-b+j-i)%100;
   }
   break;

   case 2:
   {
      j -= (f+n-m-k)%100;
      d -= (c-g-h-i*m-d-k+j*a+k*c-n+m)%100;
      e -= (b-g+h-a-b-f)%100;
      l -= (f-d+e-l*a*a-e+c+b-h)%100;
      h -= (b+n+l*m*k)%100;
      h += (g+n-f-j)%100;
   }
   break;

   default:
   {
      h  = (k-i+c*d+b-j*k)%100;
      b -= (i*a)%100;
      h -= (c-n+d-b+e+l)%100;
      n -= (c+e-j*a+e+l-k+e-a)%100;
      a += (k-n-n*h+d)%100;
   }
   }

   d -= (f-l+e-n-k+l)%100;
   h -= (e+m)%100;
   c -= (a+e)%100;
   i -= (e*m-g-n+m*c+k*i-a+f-a)%100;
   a -= (m-h-b-a-b+c-h-b-n+k+c*n-m)%100;
   i += (e-n+h*k-j-m*m+j)%100;
   c -= (l-c-d-i*e+b*f+k+a-e+d-f)%100;
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
         for( ; ++FORcnt[121]%5 ; )
         {
            for( ; ++FORcnt[120]%5 ; )
            {
               if( ++IFEcnt[80]%2 )
               {
                  m  = (g-l-g-i)%100;
               }
               else
               {
                  g -= (j-g*c)%100;
                  a -= (l*e-c)%100;
                  l += (i+g-i+k-i*i-b*j-l+h+e)%100;
                  f += (n+c)%100;
                  h += (m-l*d+j-d+i-i+b-i)%100;
               }
               while( ++WHILEcnt[79]%5 )
               {
                  f += (l*n-n-d-b-g+i-e+n-f*i-j)%100;
                  k  = (f+j+n+b+m-c*k)%100;
               }
               do
               {
                  e -= (d+b+b+h)%100;
                  d += (k-f)%100;
                  j += (c+e-d-b*j+h-a)%100;
                  a += (b*a-k-j-l+a)%100;
                  e += (k-b+g*h+g-b-c*n+f-m)%100;
               } while( ++DOcnt[80]%5 );
               if( ++IFcnt[60]%10 )
               {
                  k -= (a*j+c+c+e*e-e*a)%100;
                  a += (e-e)%100;
                  f -= (n+m-b+h-i*b+h-c)%100;
                  m  = (k+c*g+n-m)%100;
               }
               l -= (b-k+l-m)%100;
               for( ; ++FORcnt[119]%5 ; )
               {
                  e -= (n+h-h-i+d+d-e)%100;
                  i  = (i+k+d)%100;
                  f -= (h*m-j+j+l-l)%100;
                  j += (i-g-i-g-j+i+l)%100;
                  i += (b+n)%100;
                  k -= (b-k+e+e+m-i*e*l+c-k-h-n*c)%100;
               }
            }
            
            switch( ++SWcnt[40]%3 )
            {

            case 1:
            {
               if( ++IFEcnt[81]%2 )
               {
                  n += (c+m+h-n-c-c*c-e-e)%100;
                  d += (e-k*n-j+i+j+h*m)%100;
                  k -= (l+j+b-j+b-n+f+h*c*k-g-j+f-g)%100;
                  d -= (e*h+a*i*a+i*g*g*d+f+d)%100;
                  a  = (c+j-d-b-j+c+j-n-i+a)%100;
               }
               else
               {
                  k -= (i+g-f-b-c+h)%100;
                  n += (b+a-n-n-g-h)%100;
                  e += (e-j)%100;
               }
               f  = (h*j-a)%100;
               a += (g+k+m+i+e*d+d+n+g+g)%100;
               k -= (n-e*j-b*i-g+f+d)%100;
               g -= (n+h*j)%100;
            }
            break;

            case 2:
            {
               m -= (h+l-g)%100;
               g -= (k*i*j-f-c+d*a)%100;
               n  = (h*n-b+j-a+h+b+i+h*l-h)%100;
               h  = (f*e)%100;
            }
            break;

            default:
            {
               l  = (n-h-f-l*e+k-l*e-c+g)%100;
               a += (g+e+l+i)%100;
               g += (b+h+b-m*d+d*m*n)%100;
               d += (i+n)%100;
               l += (d+m)%100;
               h += (n+a)%100;
            }
            }

            n += (b-l)%100;
            b += (h-k+g*n-m-k+i)%100;
         }
         j += (l-n)%100;
         g -= (e*a)%100;
         e -= (m+c+l)%100;
         c += (f+f-c-n+j)%100;
      } while( ++DOcnt[79]%5 );
      g -= (b*f-h*e-m+e-l-n+c-m+g+b)%100;
      e -= (l-e)%100;
   }
   a += (m-b-m+k+m+c-n+a+c+e-a)%100;
   g += (d-d-g+a+i+n-n-m)%100;
   c += (a-d-b-c+g*m)%100;
   j -= (d*k)%100;
   j += (j+d-d+c+c)%100;
   l += (g+m-b*j+g-a)%100;
   b += (n-f+n)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F37(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   while( ++WHILEcnt[83]%5 )
   {
      do
      {
         for( ; ++FORcnt[124]%5 ; )
         {
            if( ++IFcnt[61]%10 )
            {
               for( ; ++FORcnt[122]%5 ; )
               {
                  j += (k-k-a*l-f)%100;
                  i += (a-h*g+a*m+h+g+n-n+c)%100;
                  k  = (h+e*n-f*h-f-l*b-l)%100;
                  c += (a+k-e+j+m*a)%100;
                  f  = (c-k)%100;
               }
               if( ++IFEcnt[82]%2 )
               {
                  c -= (h-i+l+m-f+e*i-j+b-n+a)%100;
                  f += (c*l-d-i-k-h-c*a-k)%100;
                  k += (a+i+h+g+a-i-l+k*d+g*j-j-b)%100;
                  n += (h+f*g-e-h*c-c-n+c+g-a)%100;
                  n -= (h-d+l+e-a)%100;
               }
               else
               {
                  f -= (l+d-e)%100;
                  f += (j+j)%100;
                  d += (g-b)%100;
               }
               while( ++WHILEcnt[81]%5 )
               {
                  n += (i*f-a-e+h+n-d-f-f*k)%100;
                  g -= (m+j)%100;
                  j -= (f-n-b-e*d-g+h+h+l*h)%100;
                  f += (h-a+k-f+i-e+f+d+i-k-k-k+d-l)%100;
               }
               do
               {
                  i += (i-m+d)%100;
                  c -= (n+a*l+d-c+h+b*e+n+f-l-a+b*f)%100;
                  f  = (m+f+b+g+n)%100;
                  l  = (d*c-i*k)%100;
                  k -= (c-h)%100;
                  j -= (f-c)%100;
               } while( ++DOcnt[82]%5 );
               g -= (b+b+l+m+b+h+g-g)%100;
               for( ; ++FORcnt[123]%5 ; )
               {
                  a += (l+c*h+b-n-g+c+n+k-c+f)%100;
                  k += (k-n-d+e-e-k+l-n-a-e*k)%100;
                  l += (i+a+l*m+j-m+f-h+c+k+j)%100;
                  i -= (k*c-m+d*c*i+f-m-f+n+g)%100;
                  m += (j*b-l-h*d-a-c+k+d*a+h)%100;
               }
            }
            
            switch( ++SWcnt[41]%3 )
            {

            case 1:
            {
               if( ++IFcnt[62]%10 )
               {
                  j += (g+d)%100;
                  m += (f+d+d*k)%100;
               }
            }
            break;

            case 2:
            {
               if( ++IFEcnt[83]%2 )
               {
                  h += (f+h+c+k-j-n-i)%100;
                  m -= (b+c-g+m*i+i-l*b+l)%100;
                  l -= (i*n-d*f-i*e)%100;
                  g += (h-g-k-l+l)%100;
                  a  = (e+f+h-k+i*i+e+g+a+l+i-b-e+n)%100;
                  g -= (n-c+e-g-b*i+m-f-f)%100;
               }
               else
               {
                  h += (b-m*d*b+i+h*c+g+k)%100;
                  n -= (c+g+m-e-j*e*h-j*i*a+c+d)%100;
                  h += (g*j+k*e-g)%100;
                  a += (m-a+j-n+c-c-b*a-k+m-g*i+m)%100;
               }
               while( ++WHILEcnt[82]%5 )
               {
                  i += (j+g-n+e+k-f+h*d*g*e)%100;
                  b -= (b*c+l-n+c)%100;
                  f += (k*a)%100;
                  d += (c+a-n*i-i*c+f+k-j+d-n-k+k-k)%100;
                  n -= (g-a+a+e+j*i-l-j)%100;
               }
               f -= (a-d+f+l+b-n+j-d*j*m)%100;
               l += (e+a-d-d+a+f)%100;
               h += (g*l-a+l+i+e*l*k*j+b-i)%100;
            }
            break;

            default:
            {
               c += (m+a+d-h+l-b-j*n-j-g-i+n-a*j)%100;
               k -= (c*k+d-l*m-b-l)%100;
               c += (e+h-a-i-d-h+l+h)%100;
            }
            }

            l -= (i*j)%100;
            c -= (l*j-m-m)%100;
         }
         b -= (e+k-d-b*m+l-j*a+l*e)%100;
         m += (l+a)%100;
         l -= (a+e-c*d)%100;
         c += (g+a-f-e+a*c-e-c+h*d-b)%100;
      } while( ++DOcnt[81]%5 );
      g -= (k*c-f*l-e-i+g)%100;
      m  = (i-k-n-f-k-m+l+e-b*f-b-g-i)%100;
      d -= (j+k-l+j+b-e-m+e-g-d+g*m-m)%100;
      l += (d+d*h-m+h-g-b-i+a+j+k+f)%100;
   }
   i += (i+e-l-a+f-m-h*c+j+c-j)%100;
   a += (m-a-m+d-l+m*c+j-c-b-g-c-e)%100;
   l  = (b-b-l+a+k+a-e*g-f-e+n+l+j)%100;
   e += (a*l+m*f+g-l+d+b-l-b)%100;
   n -= (f*k)%100;
   a -= (l+d+b+c*l-e+m+h)%100;
   l += (d+l+e*b-b-n-n+g)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F38(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   do
   {
      for( ; ++FORcnt[128]%5 ; )
      {
         for( ; ++FORcnt[127]%5 ; )
         {
            if( ++IFEcnt[85]%2 )
            {
               
               switch( ++SWcnt[42]%4 )
               {

               case 1:
               {
                  a += (k+l+n*e+i-b-c*h)%100;
                  h -= (c*e+m-f*j+a-k)%100;
                  f  = (k+l+b-g-f+n)%100;
                  c -= (m+f+j*e+f-f)%100;
                  f += (g+g+g+b+a-d-n+c)%100;
               }
               break;

               case 2:
               {
                  l -= (g+a*k+j*g-f+k+j+l-c)%100;
                  b -= (a*f)%100;
                  g += (k-g-i-d-f-b)%100;
                  n  = (m+a+c+d+l-g+n+i*b)%100;
               }
               break;

               case 3:
               {
                  m -= (l-k+k)%100;
                  f += (i-d-l+f-a-g+l+b+e*a+n)%100;
                  h += (d-h*k-j)%100;
                  a += (n-m-j-a-m)%100;
                  m -= (d+i*d*i*b-k-j+f-e+d+n)%100;
                  f -= (f+d+f-g+c-n-h-l+m+f-m+b)%100;
               }
               break;

               default:
               {
                  g += (l-k*b)%100;
                  l += (i-d)%100;
                  k += (a+f+l*b)%100;
                  f += (k+m+h*n-l)%100;
                  k -= (d*g-n*e*h*a-d-d)%100;
               }
               }

               if( ++IFEcnt[84]%2 )
               {
                  b -= (a-e+j*c-a+i)%100;
                  m += (f+k)%100;
               }
               else
               {
                  k -= (a+k-n+h*a)%100;
               }
               while( ++WHILEcnt[85]%5 )
               {
                  a += (j+a+h-n+a+c*f-l-j*m-b+h)%100;
                  k -= (j+g-c*f-i-e*d+g)%100;
                  d += (h-n+j+n-j*m*e+i+d+m)%100;
                  d  = (m-i-e-j-j*d+e+a+d-c-l-i+j+e)%100;
                  j -= (a-k*i+c+a+f-e-m*b)%100;
               }
            }
            else
            {
               while( ++WHILEcnt[84]%5 )
               {
                  b -= (n+j+l-b*h-b-g-j+b*e+d+m-g+j)%100;
                  n += (d-l*a*f-l-i+i-m+g-j)%100;
                  b -= (n-m+g+k*g-m-n+d-e+n)%100;
                  e -= (k*g*f+c*a-d*a+m-d+c)%100;
                  d -= (f+a+c*l*a)%100;
               }
               do
               {
                  c -= (a+i-h-h+f-j)%100;
                  n -= (a+m*g-h)%100;
                  g -= (l+d-n+i-c-k)%100;
                  j += (i+b+l-e)%100;
               } while( ++DOcnt[84]%5 );
               if( ++IFcnt[63]%10 )
               {
                  a += (c-f-e*g+k+h)%100;
                  i -= (e+j)%100;
                  d += (f+g-g*k-j-i*a)%100;
                  j += (f+e+l-n)%100;
                  l -= (h-m-h)%100;
                  n += (g*k+h*h-e*k+k+i*d)%100;
               }
               g += (h-f)%100;
               for( ; ++FORcnt[125]%5 ; )
               {
                  m += (a*h*h-i-b+i)%100;
                  k -= (b+f)%100;
                  e -= (j*h-k)%100;
                  n -= (c*h)%100;
                  b -= (k-f-g*n-h*j-e*l)%100;
               }
            }
            do
            {
               for( ; ++FORcnt[126]%5 ; )
               {
                  g -= (j-j+e+g-e-f+n+n+g)%100;
                  f  = (k+a+e-l+m*j+m-d+k*b*d)%100;
                  i -= (e-c+d+a-g+j+d+n+n-j-h+i*a*f)%100;
                  f -= (n*n-a-f+f*k)%100;
                  b += (n-f+b)%100;
                  m -= (j+i*f+k+c*b-c-d+i+g*l-j+g+l)%100;
               }
               g += (i+m*c-d*k-k+c-a-i+j*f*g+f-k)%100;
               j -= (c+k)%100;
               m -= (d+b+j-b+i-a+i-j-g+h+d+j)%100;
            } while( ++DOcnt[85]%5 );
            j += (i+i)%100;
            b -= (l*l-h+a+g+d)%100;
            k -= (c+d+a*d+j*n+n*m*i+h*i*m)%100;
            k += (l*m*k*j-n-i-e+b+h+m*k)%100;
         }
         g -= (g+n+e*e-d+a)%100;
         b += (e+i*l+e)%100;
         f += (i+j)%100;
      }
      d -= (j-f-n+f-l*c-a-g+l+f+m+j-i)%100;
      e += (d*c*g*h-f)%100;
      i -= (m+j)%100;
      i -= (d-l-b+k+h-c*d+g+n-e)%100;
   } while( ++DOcnt[83]%5 );
   a -= (n-c+k-c-j+g+f*f)%100;
   i += (g*g+d)%100;
   e  = (a*j+j+j*b-m+d+e+l+h-l)%100;
   a -= (i+i+g+l-m-c-i*k+b*e)%100;
   m -= (e+l-c+e*l+n+g-m)%100;
   d += (k-m*e-g-k-m*h+h+i+m)%100;
   m -= (j*g+k*m-b+d)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F39(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[65]%10 )
   {
      for( ; ++FORcnt[131]%5 ; )
      {
         if( ++IFEcnt[87]%2 )
         {
            d += (b+f+g-h-c)%100;
         }
         else
         {
            while( ++WHILEcnt[86]%5 )
            {
               do
               {
                  m -= (c*f-e)%100;
                  c += (j+j-h*n-d+c+f)%100;
                  i -= (h-d-i-c-k-n+n*e+f-k-m)%100;
                  f -= (j+f+k+b-e-f*e*g-c-j)%100;
                  l -= (b-j-k-l+m*i+m+a-a)%100;
                  d  = (m-b-d+c-e*f-g*l-c+m)%100;
               } while( ++DOcnt[86]%5 );
               f += (g+e*l+l+c+d*m-b*d+g)%100;
               for( ; ++FORcnt[129]%5 ; )
               {
                  e -= (l-i-k+c*c*f-b+j+l)%100;
                  k += (d+m)%100;
                  b -= (j+e+a*g*h)%100;
                  b -= (e*d*l*m-j*e+a-m*g*i-h+k-f*g)%100;
                  j += (l+n+k+d-a)%100;
               }
               
               switch( ++SWcnt[43]%3 )
               {

               case 1:
               {
                  l += (k-l-j-b-c+m-g-n+l-b+n-e-d+n)%100;
                  d += (b+j)%100;
                  f -= (n-i-j*n+i-d*a+j+n*i-k)%100;
                  i -= (d-n+c-b)%100;
                  l += (g*i-a)%100;
               }
               break;

               case 2:
               {
                  i += (g*c)%100;
                  k += (h+f*c-h+c+c-h)%100;
                  j += (c+e)%100;
                  b -= (m-j+n*g-l-k-i*h-i*h+k)%100;
               }
               break;

               default:
               {
                  b -= (i+l+c)%100;
                  g  = (h+l-n+i+c-h+j-m+i+f+i-f+l+a)%100;
                  h += (e+a-l-k-g-f-b)%100;
                  i -= (h+i-l*k-b+b-k)%100;
                  n -= (e-a*n-h)%100;
                  h += (k+c)%100;
               }
               }

            }
            if( ++IFcnt[64]%10 )
            {
               if( ++IFEcnt[86]%2 )
               {
                  d  = (l*c-j*j)%100;
                  j += (c-f-i*k*b*b+b-g+k*a*j-i-k)%100;
                  b -= (m+g+n+h*g-d*d+e+l-f*d)%100;
                  e += (e*g+n+f*d*k+d-e+l-a-i+d)%100;
                  g -= (i+b+n+h-c-l+e+d)%100;
               }
               else
               {
                  i += (m+h*c+m+h)%100;
                  k += (a-b+b+f)%100;
                  d -= (d-k-h*n+g-g+k-c-i*c)%100;
               }
               while( ++WHILEcnt[87]%5 )
               {
                  n += (n*m*g*i)%100;
                  n -= (d+g*j*a+a-m)%100;
                  i += (k+k-n)%100;
                  a -= (m+l+n-k+j*g+k+c*f-i-n)%100;
               }
               do
               {
                  c -= (b+k)%100;
                  h  = (i-j+l-a*j-b+f+a*g*j+g+a-j)%100;
                  n -= (l-m)%100;
                  j += (a-d+f-h-k*m+f+k-b-g-e-e-f*f)%100;
                  e -= (j-k+g*a+m+b-a)%100;
                  f += (g-n)%100;
               } while( ++DOcnt[87]%5 );
               for( ; ++FORcnt[130]%5 ; )
               {
                  j  = (k-d*m+m)%100;
                  i += (i+d-j*c+f-a+f-m+h*j)%100;
                  e += (n+c*j)%100;
                  f  = (d+l)%100;
                  f -= (n+a-f-j+d*j+l*e)%100;
               }
               e += (l+b*g+a)%100;
            }
            j -= (g*k-m+m+k-e-n*i-b-c+n-l)%100;
            i += (a-i+f+l*f-m-m+f*h-k+m)%100;
            n += (l+c)%100;
         }
         l  = (n*f*i)%100;
         f -= (c-a*a+n+m*b-b+i+m)%100;
      }
      a += (k+d+k-e*l-g+n+h)%100;
      h -= (k-e-j+c+c*j-n-l)%100;
      m += (k+h)%100;
      l -= (n+d-i*c+f-l-h+f*b*k*i)%100;
   }
   a += (e+k)%100;
   g += (k+m-b-c+c+h-j+a+n-b*c+e*g+b)%100;
   e += (d-i-d+n-e+c-f*a)%100;
   j += (m-l+k+f+a+m+n-g)%100;
   m += (h-n-a+a-f-j+g*k)%100;
   b -= (f-f+j+g+l*b-b-h+l+g+k+f+g+k)%100;
   h -= (c*m*j*e+n-f*n-b-c-g+d+f+i-f)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F40(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[135]%5 ; )
   {
      if( ++IFEcnt[89]%2 )
      {
         m += (k+f*n-j*i*b)%100;
         j -= (m+m*i-k+d*m)%100;
         k -= (j+i)%100;
         f += (e-m+j-d+m)%100;
         c -= (e-g*d+i+m-j+k-e*c*f+b-d)%100;
         f += (g+j-i)%100;
      }
      else
      {
         while( ++WHILEcnt[89]%5 )
         {
            do
            {
               if( ++IFcnt[66]%10 )
               {
                  k += (i+e-n-g-l-f-g*f+b)%100;
                  k += (c+l*i-j+b-f-j-j-n-m+a+j)%100;
                  k += (i-l-c)%100;
                  g -= (n+c-e)%100;
                  a -= (j+g)%100;
               }
               n += (c*b-m+l-j)%100;
               for( ; ++FORcnt[132]%5 ; )
               {
                  f += (b-l-a-f-m-m+f)%100;
                  k += (b-b+h)%100;
                  n += (f*g+n*g*a-c+j-c)%100;
               }
               
               switch( ++SWcnt[44]%4 )
               {

               case 1:
               {
                  b -= (m+a+e+c+i)%100;
                  h -= (n+e-f*h-c+n)%100;
                  i -= (e-n-f-e-h*l-g-f)%100;
                  e -= (n*n-k-j)%100;
                  g -= (a-j+f-d-j+e+i+b-n+b+a+j+c-d)%100;
               }
               break;

               case 2:
               {
                  e += (m*h+m-a-k+a-f-n*h)%100;
                  g -= (d+l+j+m-e-b-a+g+g+j+i+m*e+g)%100;
                  n  = (b+b+l+k+b)%100;
                  g -= (f+f-d-d*m-h*e)%100;
               }
               break;

               case 3:
               {
                  f += (m*a+c-j*l)%100;
                  i -= (h-e+h+g-j+j+n+h-h)%100;
                  l += (h+e-a-f*f*j-b+c-h+c)%100;
                  d += (d-l*e+i-k+k-k)%100;
                  l -= (k-m*c+c+f-e+e-j-c+k*b-h)%100;
                  j -= (d-g)%100;
               }
               break;

               default:
               {
                  f -= (l-l)%100;
                  j -= (a-i-e+n+h*c+l*j*m+d-k-a-n)%100;
                  h -= (m+k-h+j-j+l)%100;
                  d += (i+b*i-f+i-e-d-k)%100;
                  l += (m*d+c+m*a-g-n-d+l-a-j+e+h+i)%100;
               }
               }

               if( ++IFEcnt[88]%2 )
               {
                  m -= (c+h-a)%100;
                  l -= (a+b+k*a*c+k-f-l+j-d-g+k+i-d)%100;
                  n -= (j+h+a*c*a+h-h-m-l*k+a+b)%100;
                  k -= (a+m*k-b*l)%100;
               }
               else
               {
                  e  = (l*j-n-j-l-l*a-d)%100;
                  f += (b+d-h+n+a+k+c+n-m+j)%100;
                  f -= (h*d-d-h+b-g)%100;
                  e -= (f+n+d-n+a+f+k+n+i*j+l)%100;
                  f -= (i+i)%100;
               }
               while( ++WHILEcnt[88]%5 )
               {
                  j  = (c-m-a*g*l+c-c+b+l-c+c*b+n-m)%100;
                  j += (m+a+i)%100;
                  c -= (g+b*b)%100;
                  b -= (d+f+m*c+k+g+b*d-n+a+a-k-g+b)%100;
                  k  = (j+g+k+n+g-a-i+c+n-i*d-j)%100;
                  g  = (f-a*h+a-d-d-d+m-j-f)%100;
               }
            } while( ++DOcnt[88]%5 );
            do
            {
               for( ; ++FORcnt[133]%5 ; )
               {
                  n -= (n-b+k*a*i+j-m+e-l+d+d-e)%100;
                  k -= (m+g*c+c+g+i*l-h-i*j)%100;
                  b -= (m+j*d*n+e-d-e)%100;
               }
               if( ++IFcnt[67]%10 )
               {
                  d -= (l-d)%100;
                  h += (l-a+k*g-f-f-i*f-a+j-n)%100;
                  m += (e+l+k*g+d+n+b*b)%100;
                  j  = (a-d+i-a)%100;
                  n -= (k+m+b+m+n-l)%100;
               }
               for( ; ++FORcnt[134]%5 ; )
               {
                  j -= (b-d+c+c+a*b-h)%100;
                  d += (g-e-g+b*i+k)%100;
                  i += (c+f-c+h+b-e+e+e+l-f+h*l)%100;
                  g += (l*c+n-l)%100;
               }
               b -= (d-c+a*g+n-n+h+e*h-d*a-l*g)%100;
               k -= (e+j+m-e-m-i-d+c+j-m*k-k)%100;
            } while( ++DOcnt[89]%5 );
            f += (j+a-a-n-m*n+b-n)%100;
            b += (e-k*g)%100;
         }
         l += (i*c-e-k)%100;
         b -= (i-m-k-j*l-i)%100;
         e -= (c-i+d+b*j+c+f-e*k+h)%100;
         e += (f-e-n+n-e+i+l)%100;
      }
      m  = (j+k-l*i+d-a+g+j)%100;
   }
   f += (d-h-l+h+k-b+i+k+b+k+b+i+h-k)%100;
   m -= (l-c+i+n-k-f+f+h+c)%100;
   a -= (b*d+g*e)%100;
   g -= (g+k*e-d-i+c+e+f+f+l)%100;
   j += (a-m)%100;
   k += (i-k-e+c+a*c+m)%100;
   h -= (h-e+f-i)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F41(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[92]%2 )
   {
      d -= (i+i*f-k+n-l+a+k-e-i+m+n)%100;
      b -= (f+n*h)%100;
      l += (b+g+h+f-g+l+g+c*h+e)%100;
      d -= (j*b)%100;
   }
   else
   {
      while( ++WHILEcnt[91]%5 )
      {
         do
         {
            j -= (f+n)%100;
            for( ; ++FORcnt[136]%5 ; )
            {
               
               switch( ++SWcnt[45]%3 )
               {

               case 1:
               {
                  a += (j-g-m+d-k+c-m+m)%100;
                  m -= (m+g)%100;
                  l  = (f-e*d+a+c*a+g-b-d+f+c+f+l)%100;
                  a += (c*i+n-h-a+d+b*h*m+m)%100;
               }
               break;

               case 2:
               {
                  c += (n+a*a+h-n-f-a*d-k-d*g-d+k+f)%100;
                  a += (f-b)%100;
                  c += (d-f+d-e+d-a+l-h-n*b+c-g-f+l)%100;
                  g += (n+m)%100;
                  d += (i+i)%100;
                  d -= (d+c+b-i+d-k-n*l-n)%100;
               }
               break;

               default:
               {
                  f += (c+d+e+j*c-b*b+c-j+a-h+m-k)%100;
                  h -= (n*d*g*k+k+c*a+i*b-l+m)%100;
                  n += (b+h+g-e+m*j*e+c*d*e+h)%100;
                  f -= (l-g-a+k+g+h-k)%100;
                  m += (h+e-d)%100;
               }
               }

               if( ++IFcnt[68]%10 )
               {
                  g += (n+k-g-h-e-b+a-i-k+g+a-f-b+j)%100;
                  e += (n*l-a+a+d+a-m-l+f-d)%100;
                  m  = (d+k+h-a)%100;
               }
               if( ++IFEcnt[90]%2 )
               {
                  k += (h+j-b-b-n+c+d)%100;
                  j -= (j*c-m+c)%100;
                  g += (d*h)%100;
                  e += (i*a-a-b+g)%100;
               }
               else
               {
                  a  = (n+m)%100;
                  f += (k-g+h-f+k+f*l+k-i+d+n*l)%100;
                  e += (d*h-e-f)%100;
                  l -= (n-d+d+i-d-g*h-f-c+a+n+n)%100;
                  k  = (l-h*e-f+i*i*b-e+j+j+e+f-c)%100;
               }
               while( ++WHILEcnt[90]%5 )
               {
                  n += (b+j+a+e-b*m+l-a+b+d+l-i-f-i)%100;
                  b -= (g*h+a-g-i-f+c-j+m*d+c+d)%100;
                  g -= (f+e*g-h+f+n-g-f+j+d*f+c)%100;
                  c -= (k+j)%100;
                  c += (k+m-g-h+j+f*m*n*h*i+h+l+c-a)%100;
                  n += (i+j*d-c+h-n+g+h-a-c-j)%100;
               }
               do
               {
                  l += (c-l)%100;
                  l += (b+g+d-a+h+h-f-e)%100;
                  a += (f+i*b+l+j*n)%100;
                  i += (c*g+k+c+d-c*i+a*e-g+k)%100;
                  g += (j+d+i-m+k-l+d*e+e)%100;
               } while( ++DOcnt[91]%5 );
            }
         } while( ++DOcnt[90]%5 );
      }
      for( ; ++FORcnt[138]%5 ; )
      {
         for( ; ++FORcnt[137]%5 ; )
         {
            if( ++IFEcnt[91]%2 )
            {
               a -= (h-b+j*f-j)%100;
               n -= (l+m+d*i*d+a-e+c-i-f-n)%100;
               m += (f*i+f+n-j*e+e+l*k*b-b+k-d*k)%100;
               f -= (h+e-m-b+f-l+a+k-f)%100;
               f += (b+k-h+d-k*b)%100;
            }
            else
            {
               while( ++WHILEcnt[92]%5 )
               {
                  m += (a+g)%100;
                  d += (i+i)%100;
                  k -= (m-c-b-h+n-m-c-a+d)%100;
                  d += (c-i)%100;
                  l += (h+l-i+a-e+h+j-m)%100;
               }
               do
               {
                  j -= (f-a+j-g-d+b-c*c+n*i)%100;
                  b += (c+j*g*h-n+j+l+f-g+f*h)%100;
                  d -= (l+e-g+g-a-a-f+i+b+b+m)%100;
               } while( ++DOcnt[92]%5 );
               l += (m+g+b)%100;
               c  = (b-d)%100;
               j += (d+f*k-h*n+h-n*h-a*n)%100;
               e -= (d+a+k*h*g)%100;
            }
            e += (f-i-b-l+j*i*a)%100;
            i += (l-h*a-c-h+b+l+k-d-j+j*f*b-j)%100;
            g -= (e+g-g*a-k+f-i)%100;
         }
         e  = (f+g-h)%100;
         k -= (d-j+l+f)%100;
         g += (d*e-f)%100;
         d += (c+j-d+k+j+k*c-d-f-b-m-j-i+l)%100;
      }
      f -= (g-l+a-a*d-i-k+a-a*b-h)%100;
      a -= (k+d-d)%100;
      d -= (f-n+c-e+f)%100;
   }
   i  = (c+d-n-i-i-g*j-c*j+c*c)%100;
   k += (n+e)%100;
   h -= (a-j+i+m+h*n)%100;
   d -= (c+d-a-a+f+a-n+g+a+f-b)%100;
   i -= (b*f-m-n-d*k+c)%100;
   f += (c-g-e+f+m+g-e-n-n*j+i)%100;
   b -= (h-f+c-n+a*g*e+h-m+c+c)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F42(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[70]%10 )
   {
      f -= (m*b*m+h+g-n-a-k+d+i*f*m)%100;
      for( ; ++FORcnt[142]%5 ; )
      {
         
         switch( ++SWcnt[46]%3 )
         {

         case 1:
         {
            if( ++IFEcnt[94]%2 )
            {
               for( ; ++FORcnt[139]%5 ; )
               {
                  j -= (g-n-h*a-i+e+d+k*i)%100;
                  n  = (j-i+i*c+c+a+b)%100;
                  l -= (n*h+g-f*n*k-b*h-n-a*n+f)%100;
                  n -= (b-d+h-k*g*n)%100;
                  a += (b+c*h*c*i-e*i-k+l-b+n-d*g)%100;
               }
               if( ++IFcnt[69]%10 )
               {
                  d -= (a+e*h+g*g+n-g+l+f*i*d*h-g-e)%100;
                  a  = (i-d+g-c*g+a-a-f*a-i)%100;
                  f += (c+d+n-c+e*d+k-d)%100;
               }
               for( ; ++FORcnt[140]%5 ; )
               {
                  k += (a-a-i*n-n-j*i)%100;
                  d += (c-l)%100;
                  d -= (f-k+c+a+f+k+e+j+j+k-i*c-j)%100;
                  k -= (a+n+i*e*h-e+d*j-b+m-d-a*i)%100;
                  i += (l-l)%100;
               }
               if( ++IFEcnt[93]%2 )
               {
                  h += (n+e+n*k*c-i+d+d+a)%100;
                  c -= (i*n+c+b-k+k-i+n-g-f+e+j+b-i)%100;
                  n -= (b*j)%100;
                  l += (g+g-e-k+b*a*b-e+h)%100;
                  g -= (l*n+k+c+n*e+n+h+n+n-n*i-b+d)%100;
                  d -= (b+h-l+d+n)%100;
               }
               else
               {
                  e -= (j+m+n*b*b-b-e+m+n*c)%100;
                  j += (k+e)%100;
                  g += (b-f*i-e-l-f-f+c+h-l*d+m-b)%100;
                  n -= (d+g*l+i+h+k+c-l-m*m+b+j+h-l)%100;
               }
               while( ++WHILEcnt[94]%5 )
               {
                  l -= (a-l+c)%100;
                  n  = (g-c)%100;
                  e += (n+g+l+g-c)%100;
                  l -= (l+n+k+e-g*f+c+m)%100;
                  k += (e-i*m+h+j+a+b+j+g-n-d)%100;
               }
               do
               {
                  k += (l*j+n-l+f+f)%100;
                  k -= (k+i-k+m*j*b+n+i*d*h-i-n-i+i)%100;
                  g -= (e*l*b*f+c-c-j+k*l*i)%100;
                  e += (m*k+g-i+l)%100;
                  f += (h-a-n)%100;
               } while( ++DOcnt[94]%5 );
            }
            else
            {
               while( ++WHILEcnt[93]%5 )
               {
                  b -= (e+b)%100;
                  m -= (f-n+e+k-j+f+a)%100;
                  d  = (i-m+l-e*c+f)%100;
                  l += (h-g+a+i+l-h-h-h-h*k*j+c-f)%100;
                  a -= (n+n-d*i-g+j-d+k+h-a)%100;
               }
               do
               {
                  c += (l-i-c+m)%100;
                  h -= (j-i-m-g+n+g+a+d-l-g-k+e+b+m)%100;
                  j -= (b+h-d+a+b*e-c*i+g*n*j)%100;
                  g -= (n+i+l-l-a-j+j*l)%100;
               } while( ++DOcnt[93]%5 );
            }
         }
         break;

         case 2:
         {
            e  = (g*c+m*e-a-g*h-b-i)%100;
            for( ; ++FORcnt[141]%5 ; )
            {
               k -= (d+e-c-i-i*k)%100;
               d += (e-e+h-f+d-m)%100;
               m -= (b+c-j-j+m*e*e-j+i)%100;
               e -= (m-i*d+g-b*g+c*g*k+i*j)%100;
               j += (j*c-f-f+e+g)%100;
               f  = (i+i)%100;
            }
            j -= (j+k)%100;
            c += (d*j*h+b+g-f*j*i-e)%100;
         }
         break;

         default:
         {
            l -= (g-e*d+g+g-c+b-k-e+g+a-l)%100;
            e += (d-d-n-l+m*h*l)%100;
            d += (j-h-n+d+b*a)%100;
            n += (b+h)%100;
            n  = (l-d+h+b)%100;
         }
         }

         h -= (f+n*c*i-h*f-a*e-e-d)%100;
         m += (i+h-l)%100;
         e  = (e+n-n-i-h*m-e)%100;
         b += (c+b-e*c-c+l+d+l+j*d-c+a*b)%100;
      }
      d += (i*i)%100;
      m += (i-l*h-b-b*n)%100;
      m  = (j-a-j+b*a-g+b+m-e-d-c+g-i+h)%100;
      a -= (k*i)%100;
   }
   h += (b*e+h-h-h*m-k*g+i-k-j+m)%100;
   k += (c+e-c-f-m)%100;
   a -= (m*d)%100;
   b -= (i-d-g+e-f+k+c)%100;
   g -= (b-a)%100;
   k -= (j-i-b-a-a*b-b+f)%100;
   h += (b+f+l+h-e+b-m*l+f*e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F43(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   
   switch( ++SWcnt[47]%3 )
   {

   case 1:
   {
      if( ++IFcnt[72]%10 )
      {
         if( ++IFEcnt[96]%2 )
         {
            b += (c+e+i+d)%100;
            b -= (k-f+a+l-c-b+i+f*n-h-m+c+k*d)%100;
            c += (l-l-i*c-h+k-j-j*i*g)%100;
            j += (b*h+b-n+h)%100;
            l += (j+f-b-h-h*m+h-c-a-h)%100;
         }
         else
         {
            while( ++WHILEcnt[96]%5 )
            {
               do
               {
                  e += (n-l)%100;
                  k += (h-k-l+k)%100;
                  a += (d+c+j*k-l-j-k*f-g*c+a+m)%100;
                  g += (n+f-h)%100;
                  n -= (e*l+d-d)%100;
               } while( ++DOcnt[95]%5 );
               for( ; ++FORcnt[143]%5 ; )
               {
                  a += (d+h-i*k+h-l-b-k+a+b+i-g)%100;
               }
               for( ; ++FORcnt[144]%5 ; )
               {
                  j -= (c-g*b)%100;
                  l += (b+n-e-f-h*n-n+c-i+n*c-d)%100;
               }
               if( ++IFEcnt[95]%2 )
               {
                  b += (h-l*e*i*c+f)%100;
                  d += (g-m*j)%100;
                  m += (e+j*a-a+e*m*n-n*k+a*h)%100;
                  j -= (e*g-c+i*g+i-d*n*m)%100;
               }
               else
               {
                  c += (h-j+l-m+e-k*m-k+c+j)%100;
                  l += (m+c-i*d+e*i+h+e*n)%100;
                  e -= (f-j-i-a-k*j+n)%100;
                  l -= (l-k+a+c+j*l+f+j*a*m)%100;
                  a -= (c+j-j-m+k+a-j+e+f-k)%100;
               }
               while( ++WHILEcnt[95]%5 )
               {
                  m += (n*l)%100;
                  e -= (m+f*j+k+b+a-h+b+g-b-b+a-c)%100;
                  g  = (g-i-g*m+f-m-l-l-n+c-n+k*n-l)%100;
                  e += (c+h-l*d+d-f-i+b+m*i-h)%100;
                  i -= (i*d*b+d+n+g-i-h-b+n)%100;
                  l -= (e-g*l)%100;
               }
               do
               {
                  i -= (h+g+j-n-k-c)%100;
                  i += (a+h+l-n-c-i-h*i)%100;
                  g += (j*b-d-l+g-n-e)%100;
                  f += (d-a*l-g+l-c*j-h*m+a-j-e-b)%100;
                  f += (a+j-g+c-j-e*l+b*d+j-k-g-f-e)%100;
               } while( ++DOcnt[96]%5 );
            }
            if( ++IFcnt[71]%10 )
            {
               b -= (k+l+l-k+j-f-k-c-l*d*a+h)%100;
               for( ; ++FORcnt[145]%5 ; )
               {
                  j -= (b+e-k)%100;
                  j += (i+n+n-c+b+c-b-a-c)%100;
                  f += (k-e*d)%100;
                  a -= (n*f)%100;
                  k -= (d-f)%100;
               }
               
               switch( ++SWcnt[48]%3 )
               {

               case 1:
               {
                  f -= (i-l+m+l+h-d+e*d+d-e*g+m)%100;
                  k -= (f+b+d-h+d-f-f)%100;
                  m -= (f-n)%100;
                  f -= (l+j+n+i+n+l-m-f*b-e-c*g-e*j)%100;
               }
               break;

               case 2:
               {
                  j  = (i-m-a+m+n-g*g-i+l-n)%100;
                  m += (e+c+f-f*k-c-e*e*e*c+n+d*a)%100;
                  f += (l+d-f*a-m-f-a-l+n+k+l+l+k)%100;
                  f -= (h+l-j+b-a-l+f+b+j*m)%100;
                  l -= (b-f+g-i*m+f-i)%100;
                  l += (n-f+g*f+k-i+e+b*k+j-h-b+f+j)%100;
               }
               break;

               default:
               {
                  c += (n+b)%100;
                  b += (m-l+d+b*e-k*h+a-j)%100;
                  a += (i-f+d-i-f-k+c-m-h-h-f+f)%100;
                  a -= (m-d+g-c)%100;
                  l += (j+b*g+c*e+e-f*e+a-i-c+h-e-g)%100;
               }
               }

            }
            a  = (k-n)%100;
            l += (l+f+e)%100;
         }
         l += (k+k-n-d+j-m-k*c+k)%100;
         f -= (b+i-k)%100;
         f += (i+e+c+f-i)%100;
         n  = (a-j-n+f)%100;
      }
      i -= (c*g-a*h*k+a)%100;
      f -= (e-k+f-j+e+a*i*n-f+n*e)%100;
   }
   break;

   case 2:
   {
      c += (c*i-c+e+f+f+h*i-d*c-e-b*j-b)%100;
      b -= (j+b*c*i-d)%100;
      a  = (e-j-b)%100;
      a += (k+g*m+l-e*b+k*j+b)%100;
   }
   break;

   default:
   {
      a  = (d*f*h+a-a+g-l*m*b+h-k+a)%100;
      j += (f+l+d*g-n-h-i+h-c*a+e*g+j)%100;
      b -= (b*c-i-l*g*i+i*i*f+g+m-j)%100;
      k -= (i+b+k+b+l*c*m-g-a+e)%100;
      a += (i-k-g-e-h*i*h+d*e+f-h+c-c)%100;
      l -= (j*c-c-j*c-f+n+a-i)%100;
   }
   }

   b += (m-a*k-c+b)%100;
   m += (e-g*e-i+i+c-m+g+i+j*l-m+e*e)%100;
   d += (d-b-h+f+g-l+n)%100;
   k += (i*l+m*g-a*b-j+k-f-a)%100;
   d -= (m*l)%100;
   j -= (d+g-l-i*i-g-m*b)%100;
   l += (c+b-l+m+h-i*l*b)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F44(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[98]%2 )
   {
      m += (b*c-l-n+c-n+m+b+m-a*l)%100;
      a += (c-c-l+n+h-k-m+k*d-j+i-m+a-d)%100;
      f += (k*j*h+k+k+m+d)%100;
      l += (a+i*d+d)%100;
      g += (a+h-c*f*i*d*j*b+e-i+n)%100;
      h += (k-m-n)%100;
   }
   else
   {
      while( ++WHILEcnt[98]%5 )
      {
         do
         {
            for( ; ++FORcnt[147]%5 ; )
            {
               if( ++IFcnt[73]%10 )
               {
                  a -= (l*d-g-d-n)%100;
                  i -= (m-k-d)%100;
                  c  = (j-n-j+h+i-f-l)%100;
                  m += (c+l*j)%100;
                  f -= (a-b*a+j-n-n)%100;
                  b += (c-b*f*g-b-j)%100;
               }
               for( ; ++FORcnt[146]%5 ; )
               {
                  n -= (c+d)%100;
                  e -= (k-j-i)%100;
                  i -= (g+k-g+g-m*c-i*i-e+c+d+l)%100;
                  i -= (k-e+g-j-h-k-c-h+f+e-c)%100;
                  j += (h-c-a-k-a*e+i-c-l)%100;
               }
               if( ++IFEcnt[97]%2 )
               {
                  f -= (e-e-k+f-b-j-a-a+k*e)%100;
                  l -= (h-n)%100;
               }
               else
               {
                  e += (b-l-m*h+k+m*j+f-g+l+g+l-m)%100;
               }
               while( ++WHILEcnt[97]%5 )
               {
                  c += (d*f-a-c+c-m-f+l-f+j)%100;
                  l -= (k-b*l+n-l*m+b+m)%100;
                  b += (c-n+l+g+a+d-i+g-n-d)%100;
                  b -= (l+g+b*j-c*e)%100;
                  f += (f+n*m-j*i-l*n-l+i-k+d-e+f)%100;
               }
            }
            do
            {
               j += (k*d+b+b-i+i+j-f*b+a)%100;
               for( ; ++FORcnt[148]%5 ; )
               {
                  e -= (n*a*g+m-d-c+b-n*e+c+d)%100;
                  j += (b+j*e-n-c-b+m)%100;
                  d  = (m*i+c)%100;
                  d += (f-a-g+c*g)%100;
                  m -= (m+i-g-j+e*e*b+n-h-f+h-b)%100;
                  d -= (a-d-b)%100;
               }
               
               switch( ++SWcnt[49]%3 )
               {

               case 1:
               {
                  b += (d-j*d+j+c-j)%100;
                  i += (f-e-g+i*g-d)%100;
                  b += (a+k-j+g+h+d*c)%100;
                  a += (h+f*c+h-f*f*f)%100;
                  f -= (d-k*i-c-k+i+f-h+e-j+m)%100;
               }
               break;

               case 2:
               {
                  b -= (b-m-c*n*d-k*k*f-m*c*a+f)%100;
                  c -= (c-d+g+c+i+n+j*m)%100;
                  n += (m+e)%100;
               }
               break;

               default:
               {
                  c -= (h-i-n+n-b-n+g-g)%100;
                  f -= (b+n-c*j+i+c*k-f+a-h)%100;
                  g -= (k+n-m-i+f+i-f-m+l*c+f+a)%100;
                  m += (a+m+l+l+f+i-b-a*j*j)%100;
                  g += (j+e-c)%100;
               }
               }

               if( ++IFcnt[74]%10 )
               {
                  l -= (g+l+c-h-b-e*i-e+b+m-m*e)%100;
                  n -= (n*l)%100;
                  k  = (f-n+k)%100;
                  k += (m-g+h*d)%100;
               }
            } while( ++DOcnt[98]%5 );
            l += (d+m*m-j+j-c-g+b-d*e+b+l-f*g)%100;
            a -= (k-e*m*b-j)%100;
            n += (i-l)%100;
         } while( ++DOcnt[97]%5 );
         n += (e+j+j+n*f+e-a+m+j-i-k+h)%100;
         a += (m-a-d+d-l+g+n-g*d*i+c*a*a+h)%100;
      }
      i += (f+m-i*n)%100;
      f -= (i-m+g-d*d)%100;
      c -= (a+i*c-c*i-m+d-g)%100;
      n += (n-a+h-h-c+d-j-g+n+j*j-k+e-a)%100;
   }
   e -= (b+a-d+e+j*a+h+d*m-l*g-l)%100;
   g -= (a*b-j*k+m-i*n-h+e-d+a)%100;
   e -= (g*g*k*l*d-c-m+n-f+c-f*a)%100;
   k -= (m-h)%100;
   g += (f+a-m-g*k+d-d-l)%100;
   m += (m+d+i*b-g+c-g)%100;
   e -= (c-j-g+l-n+m-i*b-h+b+l+e-d+m)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F45(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[101]%2 )
   {
      i  = (m-j+f+b*m+g-b+h+f-j+e)%100;
      l -= (k-a+m)%100;
      e += (g*g+i+k+k-m-c-d-g+k*a+i-a)%100;
      g -= (i+k-n-a-n+l+d-m)%100;
      g -= (b-a*d+g-n+f+l-a+i-e)%100;
      b += (n*n+c+f)%100;
   }
   else
   {
      while( ++WHILEcnt[101]%5 )
      {
         do
         {
            for( ; ++FORcnt[150]%5 ; )
            {
               for( ; ++FORcnt[149]%5 ; )
               {
                  a  = (n-m*i)%100;
                  a += (d-h)%100;
                  l += (d-l*l-h*c*e-n)%100;
                  j -= (c-h-m-h-d-c*m-n)%100;
                  i -= (n-f)%100;
               }
               if( ++IFEcnt[99]%2 )
               {
                  f += (b-f-j*j+d)%100;
                  m -= (g+c-l*m-g+h+b-i-j-d-i*c-c)%100;
                  d -= (e-n*e-e-g*a+m*j+n+i)%100;
                  n -= (g-h-d-j+i+a+f-n)%100;
                  e += (n-l-a*a*b)%100;
               }
               else
               {
                  k -= (h+l+j+e+j+l+l+i+n)%100;
                  n -= (f+c*k+f*e-g-k+j)%100;
                  f += (n+m+h*k*i*j-g+a-m+f*c-c+g)%100;
               }
               while( ++WHILEcnt[99]%5 )
               {
                  b += (c-i+d)%100;
                  h += (k*h)%100;
                  f += (j+f-c-h+c*l+a*a-i-c*h+c)%100;
                  c -= (j*c)%100;
               }
               do
               {
                  g -= (h-n*a-h+i-a+e)%100;
                  m  = (f*f+e+i+k+f+e-d-f+g*g-l-l-c)%100;
                  k += (l*l*c-e-j+c+a)%100;
                  h += (g-a+i+n*e-h+k-a)%100;
                  j -= (b*i+n+i-g+h-b-f+h+g+e*m)%100;
                  d += (n+a+c)%100;
               } while( ++DOcnt[100]%5 );
               if( ++IFcnt[75]%10 )
               {
                  a += (c+d+f+f-e+b*b-l)%100;
                  f -= (h-a-m-b*g-h+m)%100;
                  f += (h*h-g+k*e-d+e*l-b)%100;
                  j -= (k+k+n+m+f-n-h+n+j-j*c+i)%100;
                  j += (h+i)%100;
               }
               d  = (c+n-n-j-b-m)%100;
            }
            for( ; ++FORcnt[151]%5 ; )
            {
               
               switch( ++SWcnt[50]%3 )
               {

               case 1:
               {
                  j += (i-n)%100;
                  h += (c-n-d)%100;
               }
               break;

               case 2:
               {
                  j += (c-g-e+f+i+k-g)%100;
                  b -= (f-h+h-e+f-e-h-n+f*a+c)%100;
                  m += (d*e+l-h*i-d)%100;
                  h -= (k-h+g+l-l-i)%100;
                  c -= (l*j-b+d+e+n+l*k+i-h)%100;
               }
               break;

               default:
               {
                  b -= (a+j-k*n+d*d)%100;
                  b += (d-n)%100;
                  l += (e+l*b*h-f-j-g-k-f*m-l-m-d)%100;
                  g  = (k-j-g+j*f-f-a-n-b+f*k-i)%100;
               }
               }

            }
            if( ++IFEcnt[100]%2 )
            {
               f += (l*m+i*e-g+m)%100;
               c += (e+g+n+e*j-b-g+n-i+l+l-n)%100;
               m -= (n*n-c+e+j-n-b+a-d+h+m)%100;
               m += (c+e-c-n+j-f-g+c-f*k+l+b-n)%100;
            }
            else
            {
               while( ++WHILEcnt[100]%5 )
               {
                  k += (j+e-j)%100;
                  a += (m+g)%100;
                  h += (l-i*n+a*k+n*l+h)%100;
                  m -= (a-f)%100;
                  g -= (f*f-l*d)%100;
               }
               do
               {
                  e -= (e+h-k+g+j)%100;
                  b += (a+d-d+n-l-l)%100;
                  c += (c+c-a-d*m+f*i)%100;
               } while( ++DOcnt[101]%5 );
               for( ; ++FORcnt[152]%5 ; )
               {
                  n -= (n-e*e+l-a+h-h-m-n*i+h)%100;
                  k -= (j*h-g+n+j-l-i+j-m*n-b)%100;
                  k -= (b+h-n+a-l)%100;
                  d += (a-m+e-c+e-f+g*d+m-b)%100;
                  m -= (j+d-k+h)%100;
               }
               f -= (m*a*b-c-c+b-k)%100;
               f += (k*a*f-g+f+b+l-c-d+e*f+h+k)%100;
               g  = (j-c+a+h-i*k-f+n-d*n-m+d-c*n)%100;
            }
            e += (m-c+e+g+h-k-f*f+g+e+m-n)%100;
         } while( ++DOcnt[99]%5 );
         i += (c*m-e+n+e+g+a-k*g-i+f)%100;
         i -= (m-f+h+h+m-f-d-i-d)%100;
         c += (e-f+b-k+b+g)%100;
         k += (m-d+l-b)%100;
      }
      e  = (g*d*j-n*j+e+m-g-d-c-b*a)%100;
      c += (c+b*h+d-f+h-l)%100;
      m -= (e+k)%100;
      f -= (b+a-k*h+b-c+f*c+e)%100;
   }
   a += (m-c-n+n*e-j-h*a+c*j)%100;
   i += (m+g+k-n+f-f-i-i)%100;
   m -= (b*l)%100;
   d += (f+g+e+f-f+m+j*f+i+c)%100;
   b -= (m+e+b*d+g-d-j-i-a*l+g+i)%100;
   d += (j-m*a+c-f+a-h-f*d*c)%100;
   l -= (n+j)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F46(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFcnt[77]%10 )
   {
      for( ; ++FORcnt[155]%5 ; )
      {
         if( ++IFEcnt[103]%2 )
         {
            l -= (c-f*g-f+c*h+g+h*d+m)%100;
            l -= (g*n-d*l)%100;
            b += (g*b+g+b+e+n-n)%100;
            g -= (e*c-i-c*h-d)%100;
            g += (k+m*c+i-j+g+l-n+a-j+c-g)%100;
         }
         else
         {
            while( ++WHILEcnt[102]%5 )
            {
               do
               {
                  e -= (a-i+b)%100;
                  n -= (c+f)%100;
                  l -= (k+b-m*c)%100;
                  f -= (j+m*h+m*c)%100;
                  a -= (a+a-i-h+c+m-f)%100;
               } while( ++DOcnt[102]%5 );
               f -= (f*h)%100;
               for( ; ++FORcnt[153]%5 ; )
               {
                  j -= (f-m-d+b+m-b+j-h-k+i-f+d+a)%100;
                  k -= (e-c+g)%100;
                  d -= (n*b-b+m+b+l+i)%100;
               }
               
               switch( ++SWcnt[51]%3 )
               {

               case 1:
               {
                  a += (e-f+n)%100;
                  h += (e+f+a-b+h)%100;
                  h += (k-i-m-e*e+d)%100;
                  h -= (j+e-e*m+n)%100;
                  g += (l+n+j)%100;
               }
               break;

               case 2:
               {
                  c += (h-d-h*k+n*n-k+m)%100;
                  e += (b+m+d+a-c-c-l-j-n)%100;
                  l += (h-k+k-k+h+g-j-d*b)%100;
                  n -= (a-b+f+b*m-c-n+n+e-c+g)%100;
               }
               break;

               default:
               {
                  i -= (i-e-n*i-j-f)%100;
                  k -= (k-f-n-c+i-c-g*l-l-b-k)%100;
                  g += (k*n*m-n-i+j+m*e+l-d-f+m+b-n)%100;
                  i += (g*l-n-b*i-l+b-d-e-n-b*l*a)%100;
                  a -= (g+k-c+d-a*f)%100;
                  a += (j+m)%100;
               }
               }

               if( ++IFcnt[76]%10 )
               {
                  n -= (a+j-n+k*n+m*f)%100;
                  e += (m-h+e+f*a)%100;
                  a -= (l+m+a+c-l+e*l+k-a-l)%100;
                  j += (i-n*e+m+n-l)%100;
                  b += (g-i-l-m*h+k)%100;
               }
               if( ++IFEcnt[102]%2 )
               {
                  d -= (b+n*e-k+l*c+g)%100;
                  n -= (i-a-c*e+l+d-e-i-b+i+h-n+l)%100;
               }
               else
               {
                  b += (g*n+n)%100;
               }
            }
            while( ++WHILEcnt[103]%5 )
            {
               do
               {
                  i -= (l-l+c-k-i-e+f*c-c+d+a-j-f)%100;
                  e += (f-g*l-e-k+h+n+h-f)%100;
                  d += (m-g)%100;
                  f += (k-m-c*l*f-d-f+d)%100;
               } while( ++DOcnt[103]%5 );
               for( ; ++FORcnt[154]%5 ; )
               {
                  c -= (i+c*d-j)%100;
                  l  = (g*i-e+j*a-l+f*b-n+g-b+l+b)%100;
                  h -= (l-e)%100;
                  d -= (a+f+k+f-d-b-d-j*e+j-j-j*c)%100;
                  j -= (j-h*n+f*l-g-b-c*b+n-f)%100;
                  a  = (d-n*n+d*n-k-b+h-f-e*j)%100;
               }
               c += (c*a-k-l+k+g-i)%100;
               k -= (b+k-k-j-f+f-i-c+i*g)%100;
               m -= (k-k*n-m-f*l-a+h*k+e*e*n*n+b)%100;
            }
            k -= (f-n)%100;
            i  = (j-e+d+c-e-f+e-n)%100;
         }
         d -= (k*c+l+a+a+e+b+c*m)%100;
         a  = (n+a+m+g*d*e*b-j)%100;
         g += (f+e*f+j+a+g-a*j-n+h+g)%100;
         d += (a+g+g*f+b-g+b+h+d*f)%100;
      }
      l -= (h+n-c-e*l-k+a*n*c+f-c*h)%100;
      l += (g+h)%100;
      c += (l-k)%100;
      n -= (e-d+m-a+d-a)%100;
   }
   b -= (c-f+k*k+l-d-d*a-m+l+c*j-n)%100;
   n -= (n-n-c+e-h+j)%100;
   b += (f+l+h-k)%100;
   i += (d-g)%100;
   g -= (j+l+d-i+i*i)%100;
   b -= (d+n+g+e+e*n+c+b-n-e*e-h)%100;
   a += (e-e-c+a+b-f+e-c+m+k)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F47(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   for( ; ++FORcnt[159]%5 ; )
   {
      if( ++IFEcnt[105]%2 )
      {
         l += (c+n-i)%100;
         l += (f-g-n+e)%100;
         d  = (f-g*m+m-n+b*e)%100;
         m -= (f+l+c+l-c-i+m+a-j)%100;
      }
      else
      {
         while( ++WHILEcnt[105]%5 )
         {
            do
            {
               if( ++IFcnt[78]%10 )
               {
                  l -= (d-e+d)%100;
                  e -= (f-m-k-l-j-a)%100;
                  l += (d+j+a+b+l+h-i-j*e)%100;
                  g += (m-b+g+f-h)%100;
                  b -= (b-f)%100;
               }
               n -= (b-d+c-l*l+f-m+d-k)%100;
               for( ; ++FORcnt[156]%5 ; )
               {
                  f += (m+k*m+n-l-d*a+n-e-f-k+c*a-j)%100;
                  l -= (m-b+m+b*j+i*k)%100;
                  m += (n-a+g+h-d*j+d)%100;
                  e -= (c-k+e)%100;
                  n -= (n+i*f-h-h-n+m+e+a+l-f+a+h-k)%100;
               }
               
               switch( ++SWcnt[52]%4 )
               {

               case 1:
               {
                  l -= (m-i-h*l)%100;
                  k -= (b-h+k-j*m+j+k+g*m-h+e*a-a*m)%100;
                  a -= (e+m-a-f+k-f-f*g+k*n-k)%100;
                  f += (d-c-f*k*c*j*d+m*i+k+e-i+c)%100;
               }
               break;

               case 2:
               {
                  j += (f+i*e+i-b+a-f-i-b*a+a*k-d-m)%100;
                  m += (h-d)%100;
                  k += (g+j*e*g-a+g+i-i+c*i+i)%100;
                  g -= (e-i-i-c-m)%100;
                  k += (j+d+c*a-l*b+d)%100;
                  i -= (b-l)%100;
               }
               break;

               case 3:
               {
                  m -= (i+h+f-c+a-l+n-d-b+g-f+b)%100;
                  i += (b*j)%100;
                  d  = (b+m*g*m*a+e+m+g-m*m+l)%100;
                  b -= (e-g)%100;
                  f -= (a-m)%100;
               }
               break;

               default:
               {
                  a -= (f-k*j-d+f+g+h-m-c-a-d-f-m)%100;
                  m -= (n-d*d*c)%100;
                  h -= (l+d)%100;
               }
               }

               if( ++IFEcnt[104]%2 )
               {
                  l += (e-h*n-k+a-i-n*k-f)%100;
                  g -= (c-k+l+b-g-b-k*l)%100;
                  j  = (m-i-b*f+l-n*e-l)%100;
                  j += (m-f+d+h-c+f*a)%100;
               }
               else
               {
                  l += (f*g*m+e-h*d+a-c+i-m)%100;
                  j -= (d*c)%100;
                  f += (h-n-h+e*g-d-g*a+c+d+b-e)%100;
                  f -= (j+m)%100;
                  k -= (n-c-d-l-n-k)%100;
               }
               while( ++WHILEcnt[104]%5 )
               {
                  f -= (l+f+h-f-e+n*d)%100;
                  n -= (c*d*d-m+f+d+n-k+n*j*e)%100;
                  m -= (l-d+i+f-b-b+d)%100;
                  d -= (g-a-m+a)%100;
                  j += (m-f*k*i-b-f+n*c-e-l-m+d-a-j)%100;
                  j += (l-n-e*m-j*a*e)%100;
               }
            } while( ++DOcnt[104]%5 );
            do
            {
               for( ; ++FORcnt[157]%5 ; )
               {
                  c -= (e-h*k-a+b+i-n)%100;
               }
               if( ++IFcnt[79]%10 )
               {
                  j += (h*g)%100;
                  g += (g*h-d+h+m+c*c+j*g-h*b)%100;
               }
               for( ; ++FORcnt[158]%5 ; )
               {
                  a += (k-i*c+l-i-m-f+m-i-l+h-e)%100;
                  f += (l-j)%100;
                  h += (b*h*f+a-d*a+c+d+i+l-i*a-m*g)%100;
                  k += (g+k+b-d+m-i+e+f*m)%100;
                  j -= (j-h-a-a*m*k-d-e+d+j-b*f+l+n)%100;
               }
               k  = (l-d*d+m-j-l)%100;
               f  = (g-a-e+d+i-d-a)%100;
            } while( ++DOcnt[105]%5 );
            c -= (c-i*a+a+k-m-g-b-a*d-k)%100;
            f -= (d*n+i*d*b-n-k+c-h*k)%100;
         }
         c += (c-f+d-a+k-l+k+l*c-d+f)%100;
         d -= (i-d*e+g-g-a)%100;
         b += (k-e+d+d-n)%100;
         f += (l-f+c+e+n-f+j)%100;
      }
      n -= (j-j+f+m-a)%100;
      g += (e-j+g-d+m+f+n+l+k+c+b)%100;
   }
   f += (k*m*d+l-c*n-n-c*l+j+a*e-i)%100;
   i += (d+b)%100;
   k  = (l+n*d-g)%100;
   a += (l+n+e-f-e-l-l-d)%100;
   m  = (h+m+m+a)%100;
   k += (i+h-c*g+b)%100;
   h -= (k-k*k*e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F48(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[107]%2 )
   {
      a -= (d+a-j*k)%100;
      b  = (l-l-d-e*k*i+i*d+e-m-f)%100;
      j += (m+c+e+c+i*n*m+k)%100;
      h -= (i*j-k+j*a+f-h+d)%100;
      c += (c+b-e)%100;
   }
   else
   {
      while( ++WHILEcnt[107]%5 )
      {
         do
         {
            j += (n*e)%100;
            for( ; ++FORcnt[160]%5 ; )
            {
               
               switch( ++SWcnt[53]%4 )
               {

               case 1:
               {
                  f += (g+a-b)%100;
                  j -= (g-m+d)%100;
                  m -= (a-l+f-g-l+h-f)%100;
                  h += (m*c-a-b+g+n*c-g*l*k)%100;
               }
               break;

               case 2:
               {
                  e  = (c+e+c-l-c-j-d-a)%100;
                  k += (d+h+m*l-h*d-j*j-m*h+j+c)%100;
                  k += (b+j+h)%100;
                  h  = (l-l-b+l-a+a+g+g+a-d+m+f*g)%100;
                  k -= (n-i*j-e+l+i*i-i-k-a+m-f+c)%100;
                  n -= (g-f-c-i-g+c-l)%100;
               }
               break;

               case 3:
               {
                  j += (n*h-k*f*l)%100;
                  g -= (e+c-n-e)%100;
                  h -= (k+n-h-c-i-c-c+e+j-a)%100;
                  l -= (g-g*d-i*f-j*e*h*b-e*g-b)%100;
                  l -= (a-e-d-j*k+c-b)%100;
               }
               break;

               default:
               {
                  j += (f-a+n)%100;
                  m -= (i+a-k-i-n-l+i*n*e+n*j)%100;
                  n -= (e+f-j+l+c-c*a+e*e)%100;
                  l += (d-h+f*g*c+d+e+k*g*n+l+l-k)%100;
                  k -= (f+f-m)%100;
               }
               }

               if( ++IFcnt[80]%10 )
               {
                  g += (d+c-h+m*n-i+a+m)%100;
                  a -= (a-n*b-b-n-j*k)%100;
                  c -= (b*b+b+l-j+k*h+m)%100;
                  g += (m+j-a-l-n-m-f-k)%100;
               }
               if( ++IFEcnt[106]%2 )
               {
                  h += (b-i-i*d+m+h*a)%100;
                  h -= (a+l+c+f)%100;
                  e += (d+c)%100;
                  c -= (e-h-m*b+g-f)%100;
                  l -= (a-d-e*n+a+i+d-c+i*k-j)%100;
               }
               else
               {
                  l -= (d-c)%100;
                  h  = (g*k*m)%100;
                  i += (b+e-n+c+c-c-b)%100;
                  j += (k+d-i*b-k+h*a+i-i+b*n-n-k)%100;
                  b -= (e-j)%100;
                  b -= (e+l*h+b+d+g*h)%100;
               }
               while( ++WHILEcnt[106]%5 )
               {
                  m += (f-g+e+c-l+h-b-c*b*d)%100;
                  k -= (j+e-j+k-e-c-e+a-b)%100;
                  h += (m-h+m-b-c-d*l)%100;
               }
               do
               {
                  f += (a+k-e)%100;
                  j += (b+c-m-c-i+i*g+f-h)%100;
                  h  = (c+i)%100;
                  m -= (n-d-f+n+a)%100;
                  a -= (f*c-n+d-i-h+n-c+e+d)%100;
               } while( ++DOcnt[107]%5 );
            }
            for( ; ++FORcnt[162]%5 ; )
            {
               for( ; ++FORcnt[161]%5 ; )
               {
                  d  = (l+k+j*j*c)%100;
                  d += (n*k+a-h+m*j+e-a+g-b+g*a-n)%100;
                  j -= (c-i+g-h-g-i+c-g-c+k*i+h+e)%100;
                  d -= (a-h-b+f-k*j+j-b-a+l*j)%100;
                  b += (n-j+m+b+e-e-h-d)%100;
                  i -= (c-h+k*c+h)%100;
               }
               a -= (a+g-a+m-e)%100;
               c -= (l+k-j-k)%100;
               n -= (j*j-a+g)%100;
            }
         } while( ++DOcnt[106]%5 );
         f -= (h-l-h+k-d*j*e)%100;
         c += (j-l)%100;
         c  = (k*i+l+k-n-b+a+n*j)%100;
         k  = (h*n+n-f+d+m*i)%100;
      }
      j -= (j+d-k-k*m*j+e-d)%100;
      g -= (l+f-i+l-f)%100;
      d += (j-c+g+n*m+b*m+l*d+f)%100;
      l += (d+c+j+m-c+i+g+e)%100;
      b  = (i-b+c+g*f-m*m+d*a+f-k*f-c)%100;
   }
   g -= (d-g-i+m-f+a+i)%100;
   f  = (f-b*k-j-l*b-n*h+g+j*e*c-m*b)%100;
   a -= (b-c-d*i-a-c-k-h-k-l-h)%100;
   k += (e-c*e+f*a+j-n+h-c-j*d*d+e)%100;
   h -= (d+b+j+i-c-l-e-k-g)%100;
   k -= (n+k*k*e)%100;
   f -= (i+h*f-a*f+n+k*e+f-e)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int F49(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
   a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
   if( ++IFEcnt[110]%2 )
   {
      i -= (h-g-d-i*a-m*g+c+k-b+i+d-g)%100;
      i -= (a+e-m-a)%100;
      j -= (c+h*e+c+j+n-l-a*i)%100;
      e += (b-d*k*j+m-m*n+h)%100;
   }
   else
   {
      while( ++WHILEcnt[109]%5 )
      {
         do
         {
            if( ++IFcnt[81]%10 )
            {
               m += (n-e-m-g-d-e*m+m+m*j*h+b+k+k)%100;
               for( ; ++FORcnt[163]%5 ; )
               {
                  l -= (k+m*b+l)%100;
                  e  = (h+j+m+g-d+d-e-d+d+j)%100;
                  h -= (l-c-b-c*i+e)%100;
                  n += (e-f-c)%100;
                  d  = (m+k*h-l-h+f-n+m-h)%100;
                  n += (j+m)%100;
               }
               
               switch( ++SWcnt[54]%3 )
               {

               case 1:
               {
                  j -= (n-k-g-d*m-i+e+i)%100;
                  c += (b+b*i+g-g*i+b-l+g-n*f)%100;
                  k -= (d+e*b*l-e-d-l+l*f-g-b-k*m)%100;
                  i += (j-l-l)%100;
                  k -= (i-a+d*m-a+b+a+a-g)%100;
               }
               break;

               case 2:
               {
                  e -= (f-n*j-l*i+i+h+m)%100;
                  b += (n+i*n+m*k-g+i-j-f)%100;
                  j -= (b+e-j*f-c)%100;
               }
               break;

               default:
               {
                  f  = (k+c-l*f-j+k)%100;
                  c += (j-k-j-c*j-h+l+l-a+k*k*j+n)%100;
                  d += (m*g+m-c+k+l-m+j+f+j*l+l)%100;
                  d += (h+g-j-a+i-a-h*g+a)%100;
                  d += (d+i)%100;
               }
               }

               if( ++IFEcnt[108]%2 )
               {
                  f += (l+a)%100;
                  g += (j+c-i-d-b*n-i*n+h-k-d+d-d)%100;
                  a -= (n+h+j+i*e-e*h-g+j-i*n-i+l+m)%100;
                  a += (h*n)%100;
                  l -= (f-b)%100;
                  i -= (c+m+n+e+m*j+l+j*n*h)%100;
               }
               else
               {
                  i += (l+n+c-n+a+d+g-f-h)%100;
                  h += (j-e*a-j-a+e*f+b*g*f)%100;
                  i -= (m+f+f+b-f-b*i+n+k*i-k+j-i-l)%100;
                  c += (n*m-j+c*c-n-e+g-e)%100;
               }
            }
            while( ++WHILEcnt[108]%5 )
            {
               do
               {
                  k -= (l+a*f+l+h-m+l+d*k+n-c-b*i-n)%100;
                  d  = (e*d+j-h*h*i-k+b+b*h+j+g)%100;
                  b -= (m+a+h+a)%100;
                  b -= (m+l-l*n+k-j)%100;
                  j  = (m+d-l*i+b-n-f+d)%100;
               } while( ++DOcnt[109]%5 );
               for( ; ++FORcnt[164]%5 ; )
               {
                  a += (d*l-b+h-h-g-i+i)%100;
                  c -= (i-f-l-d-k*m-c+k-l+i+n)%100;
                  d += (f+c*e*k*e+e+c+j-h)%100;
                  e += (k+g+k-c+h-c*d-b-i+n)%100;
               }
               if( ++IFcnt[82]%10 )
               {
                  c -= (e-m+i+c+l-m*c-d*n*n+m)%100;
                  k -= (j-d)%100;
                  b += (i-h-h*a+c*c-d-n-b+l)%100;
                  g += (c-j-c-j+e-d+e-n+m+f)%100;
                  g += (m+i-l-e-g-f-l+b-a+e+c)%100;
                  l  = (j-g+i+j*i*j+m-b*b-f+h)%100;
               }
               for( ; ++FORcnt[165]%5 ; )
               {
                  l += (l+j)%100;
                  i -= (m-n-a-d-c+m-e-i-d+c)%100;
                  k += (a+c)%100;
                  b += (n-f-n*a-n+c-n+l*l+d+l+f-f+j)%100;
                  a += (f+c-n-n-b-m+i*k+k-d*d)%100;
               }
               if( ++IFEcnt[109]%2 )
               {
                  n += (j-n-l-n-g-m-h*l-e)%100;
                  c += (g-b)%100;
                  f -= (i+j+j*d-l-f+a-m-j+e)%100;
                  i += (g+m+m+g*f-c-d*c-h)%100;
                  f  = (j+b)%100;
               }
               else
               {
                  e -= (a-n*j+d*l+b-h-m-c-l)%100;
                  e += (k*f-k+h*l+m-m-g+e-i-e)%100;
                  j += (l-f-j)%100;
               }
            }
            i -= (m-i+i-l+i-n-a*m+a-i-j-d)%100;
            n += (l-b+e-c+k-f*c-j)%100;
            d  = (h-f+a+n*a-e)%100;
         } while( ++DOcnt[108]%5 );
         g += (c-f)%100;
      }
   }
   g -= (h+e+h*i)%100;
   d += (n-c*n-i-f+m-b-e)%100;
   d -= (j*i+a+i*i*d+m+k)%100;
   d -= (f+c*i+m-j+k+a-e+l-e-g-n-m)%100;
   h += (l+e+f+b-g-h+f+b+e*e+g-f)%100;
   k -= (h-b-b-c+n*m)%100;
   f -= (a+f-c-j-k+i-n+a)%100;
   return (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
}

int main(void)
{
   int I;
   clock_t StartTick = clock();
   for(I=0; I<120; I++) IFcnt[I]   =0;
   for(I=0; I<160; I++) IFEcnt[I]  =0;
   for(I=0; I<80; I++) SWcnt[I]   =0;
   for(I=0; I<160; I++) WHILEcnt[I]=0;
   for(I=0; I<160; I++) DOcnt[I]   =0;
   for(I=0; I<240; I++) FORcnt[I]  =0;
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
   sum += F42( ) ;
   sum += F43( ) ;
   sum += F44( ) ;
   sum += F45( ) ;
   sum += F46( ) ;
   sum += F47( ) ;
   sum += F48( ) ;
   sum += F49( ) ;

   {
      int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
      a=b=c=d=e=f=g=h=i=j=k=l=m=n=1;
      g += (m+n)%100;
      e -= (h-l*c+a)%100;
      m += (f+a-f*k-l-m*d)%100;
      e -= (n*l-n-j)%100;
      j -= (g+h+d+e+b+l)%100;
      b -= (m+g-i-g*n)%100;
      j -= (l-m+b-a-i*g+c-m*m-l+g*k)%100;
      a -= (j*n)%100;
      sum += (a+b+c+d+e+f+g+h+i+j+k+l+m+n)%100 ;
   }

   cout << "\nChecksum = " << sum;
   for(I=sum=0; I<83; I++) sum += IFcnt[I];
   cout << "\nIF frequency:      Static = " << 83 << "   Dynamic = " << sum ;
   for(I=sum=0; I<111; I++) sum += IFEcnt[I];
   cout << "\nIF-ELSE frequency: Static = " << 111 << "   Dynamic = " << sum ;
   for(I=sum=0; I<55; I++) sum += SWcnt[I];
   cout << "\nSWITCH frequency:  Static = " << 55 << "   Dynamic = " << sum ;
   for(I=sum=0; I<110; I++) sum += WHILEcnt[I];
   cout << "\nWHILE frequency:   Static = " << 110 << "   Dynamic = " << sum ;
   for(I=sum=0; I<110; I++) sum += DOcnt[I];
   cout << "\nDO frequency:      Static = " << 110 << "   Dynamic = " << sum ;
   for(I=sum=0; I<166; I++) sum += FORcnt[I];
   cout << "\nFOR frequency:     Static = " << 166 << "   Dynamic = " << sum ;
   cout << "\nRun Time = " << double(clock()-StartTick)/CLOCKS_PER_SEC << " sec\n\n";

   return 0;
}