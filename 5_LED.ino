int a,i=1,b,binary;
void setup() {
  
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
}

void loop() {
int x=9,rev,p;
int A[10]={0,0,0,0,0,0,0};
int main()
{
  int binary=0,remainder,i=1;
    while(x!=0)
    {
        remainder=x%2;
        x=x/2;
        binary=binary+remainder*i;
        i=i*10;
    }
  int r=0;
    for(binary>0;r++;)
    {
        p=binary%10;
        binary=binary/10;
        A[r]=p;

    }
    for(int x:A)
    {
        int lenght=0;
        length=length +1;
    }
    for(int i=0;i<=length;i++)
    {
        if(i==0)
        {
            if(A[i]==0)
            {
                digitalWrite(12,LOW);
            }
            if(A[i]==1)
            {
                digitalWrite(12,HIGH);
            }
            
        }
        if(i==1)
        {
            if(A[i]==0)
            {
                digitalWrite(11,LOW);
            }
            if(A[i]==1)
            {
                digitalWrite(11,HIGH);
            }
            
        }if(i==2)
        {
            if(A[i]==0)
            {
                digitalWrite(10,LOW);
            }
            if(A[i]==1)
            {
                digitalWrite(10,HIGH);
            }
            
        }if(i==3)
        {
            if(A[i]==0)
            {
                digitalWrite(9,LOW);
            }
            if(A[i]==1)
            {
                digitalWrite(9,HIGH);
            }
            
        }if(i==4)
        {
            if(A[i]==0)
            {
                digitalWrite(8,LOW);
            }
            if(A[i]==1)
            {
                digitalWrite(8,HIGH);
            }
            
        }
    }

}

  
}
