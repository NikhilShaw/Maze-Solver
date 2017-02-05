#include<iostream>
#include<stdlib.h>
using namespace std;

bool find_path(int maze[][10], int row, int col, int prev)
{


	cout<<"::"<<row<<" "<<col<<endl;

	bool capture;											//stores the return from find_path

	if(maze[row][col]==2)									//If the end is found
	{
		cout<<row<<" "<<col<<endl;
		return true;
	}
	else if(maze[row][col]==0)								//If a wall is found
		return false;

	else if(prev==0)										// When first move is played represented by prev=0
	{
		capture= find_path(maze, row+1, col, 4);
		if(capture==true)
		{
			cout<<row<<" "<<col<<endl;
			return true;
		}

		capture= find_path(maze, row, col+1, 1);
		if(capture==true)
		{
			cout<<row<<" "<<col<<endl;
			return true;
		}

		capture= find_path(maze, row-1, col, 2);
		if(capture==true)
		{
			cout<<row<<" "<<col<<endl;
			return true;
		}

		capture= find_path(maze, row, col-1, 3);
		if(capture==true)
		{
			cout<<row<<" "<<col<<endl;
			return true;
		}
	}

	//If a path is found

	else if(prev==1)										//When previous move was right ie. 1
	{
		switch(rand()%3)
		{
			case 0:	capture= find_path(maze, row+1, col, 4);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row, col+1, 1);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row-1, col, 2);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					break;

			case 1:	capture= find_path(maze, row, col+1, 1);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row+1, col, 4);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}

					capture= find_path(maze, row-1, col, 2);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					break;

			case 2:	capture= find_path(maze, row-1, col, 2);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row, col+1, 1);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row+1, col, 4);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}

					break;

			default: cout<<"Switch error prev==1"<<endl;
					 break;
		}
	}

	else if(prev==2)										//When previous move was up ie. 2
	{
		switch(rand()%3)
		{
			case 0: capture= find_path(maze, row, col-1, 3);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row, col+1, 1);	
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row-1, col, 2);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					break;

			case 1: capture= find_path(maze, row, col+1, 1);	
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row, col-1, 3);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}

					capture= find_path(maze, row-1, col, 2);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					break;

			case 2: capture= find_path(maze, row-1, col, 2);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row, col+1, 1);	
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row, col-1, 3);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					break;

			default: cout<<"Switch error prev==2"<<endl;
					 break;

		}
	}
	else if(prev==3)										//When previous move was left ie. 3
	{
		switch(rand()%3)
		{
			case 0: capture= find_path(maze, row+1, col, 4);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row, col-1, 3);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row-1, col, 2);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					break;

			case 1: capture= find_path(maze, row, col-1, 3);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row+1, col, 4);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}

					capture= find_path(maze, row-1, col, 2);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					break;

			case 2: capture= find_path(maze, row-1, col, 2);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row, col-1, 3);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row+1, col, 4);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					break;

			default: cout<<"Switch error prev==3"<<endl;
					 break;
		}
	}

	else if(prev==4)										//When previous move was down ie. 4
	{
		switch(rand()%3)
		{
			case 0: capture= find_path(maze, row+1, col, 4);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row, col+1, 1);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row, col-1, 3);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					break;

			case 1: capture= find_path(maze, row, col+1, 1);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row+1, col, 4);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row, col-1, 3);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					break;

			case 2: capture= find_path(maze, row, col-1, 3);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row, col+1, 1);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					capture= find_path(maze, row+1, col, 4);
					if(capture==true)
					{
						cout<<row<<" "<<col<<endl;
						return true;
					}
					break;

			default: cout<<"Switch error prev==3"<<endl;
					 break;
		}
	}

}

void enclose(int maze[][10], int &row_size, int &col_size)
{
	int row, col;
	row_size++;							//row and coloum incremented due to enclosure of wall by 0
	col_size++;
	for(row=0;row<=row_size;row++)
	{
		maze[row][0]=0;
		maze[row][col_size]=0;
	}

	for(col=0;col<=col_size;col++)
	{
		maze[0][col]=0;
		maze[row_size][col]=0;
	}

}



int main()
{
	int row, col, row_size, col_size, maze[10][10], start_row, start_col;
	bool path_found, input=false;
	cout<<"Input the row and coloumn size of the maze"<<endl;
	cin>>row_size>>col_size;
	cout<<"Input the maze in the following way:"<<endl;
	cout<<"1. All walls of maze should be represented by 0"<<endl;
	cout<<"2. All the path of the maze should be represented by 1"<<endl;
	cout<<"3. The end (or exit of size 1X1) should be of value 2"<<endl;

	///// Input the maze such that it dimension is from 1,1 to row,col

	for(row=1;row<=row_size;row++)
	{
		for(col=1;col<=col_size;col++)
		{
			cin>>maze[row][col];
		}
	}

	enclose(maze, row_size, col_size);

	for(row=0;row<=row_size;row++)
	{
		for(col=0;col<=col_size;col++)
			cout<<maze[row][col]<<" ";

		cout<<endl;
	}

	cout<<"Input the starting row and coloumn"<<endl;
	do
	{
		input=true;
		cin>>start_row>>start_col;
		if(maze[start_row][start_col]==0)
		{
			input=false;
			cout<<"Enter a starting position where there is a path and not a wall"<<endl;
		}
	}while(input==false);

	// 0 is indicator to play first move in any possible 4 direction
	srand(time(NULL)); 
	path_found= find_path(maze, start_row, start_col, 0);		
	if(path_found==false)
		cout<<"Path not found"<<endl;

	return 0;
}
