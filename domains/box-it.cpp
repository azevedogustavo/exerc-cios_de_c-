#include<bits/stdc++.h>

using namespace std;

//Implement the class Box  
class Box
{
    private:
    int l, b, h;
    public:
    Box(){
    // set.l{};
    // set.b{}; // até onde lembro posso deixar vazio que os valores serão zero
    // set.h{};
    }
    Box(int length, int breadth, int height){
        l=length;
        b=breadth;
        h=height;
    }
    Box(const Box& box){// essa parte precisa, poir no check2 existe uma instância por referência quando type == 5
        l = box.l;
        b = box.b;
        h = box.h;
    }
    int getLength(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h;
    }

    long long CalculateVolume(){
        return (long) (long)l*h*b;

    }
    friend bool operator < ( Box& A,Box& B){ // copiado da internet
        if( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)) ){
            return true;
        }else{
            return false;
        }
    };
    
    friend ostream& operator<< (ostream& output, const Box& B){ // copiado da internet
        output << B.l << " " << B.b << " " << B.h;
        return output;
    }
};

//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors:

// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
