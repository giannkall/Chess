#include <stdio.h>
#include <math.h>
int check_king(int chessmatrix[8][8],int row,int col,int newrow,int newcol,int color,int eat[16]){
	int i,j,a,p,l;
	if(color==1){
		if(chessmatrix[row][col]/10==1){
			if(newrow==row-1 && newcol==col){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=11;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
            		printf("\n");
					for(a=0;a<32;a++)
						printf("%3d",eat[a]);
					printf("\n");	
            		return 2;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
            		for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto p;
            			}
            		}
					p:chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=11;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");
					return 2;
            	}else{
            		printf("invalid move\n");
            		return 1;
            	}
			}else if(newrow==row+1 && newcol==col){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=11;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 2;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
            		for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto p;
            			}
            		}
					p=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=11;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
            		printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 2;
            	}else{
            		printf("invalid move\n");
            		return 1;
            	}
			}else if(newrow==row && newcol==col+1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=11;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 2;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
            		for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto p;
            			}
            		}
					p=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=11;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 2;
            	}else{
            		printf("invalid move\n");
            		return 1;
            	}
			}else if(newrow==row && newcol==col-1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=11;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}	
            		printf("\n");
            		for(a=0;a<32;a++){
            			printf("%3d",eat[a]);
            		}
            		printf("\n");
            		return 2;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto p;
            			}
            		}
					p=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=11;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");
            		return 2;
            	}else{
            		printf("invalid move\n");
            		return 1;
            	}
			}else if(newrow==row+1 && newcol==col+1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=11;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 2;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto p;
            			}
            		}
					p=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=11;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 2;
            	}else{
            		printf("invalid move\n");
            		return 1;
            	}
			}else if(newrow==row-1 && newcol==col+1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=11;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 2;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto p;
            			}
            		}
					p=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=11;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");
            		return 2;
            	}else{
            		printf("invalid move\n");
            		return 1;
            	}
			}else if(newrow==row+1 && newcol==col-1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=11;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 2;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto p;
            			}
            		}
					p=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=11;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");
            		return 2;
            	}else{
            		printf("invalid move\n");
            		return 1;
            	}
			}else if(newrow==row-1 && newcol==col-1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=11;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 2;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto p;
            			}
            		}
					p=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=11;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 2;
            	}else{
            		printf("invalid move\n");
            		return 1;
            	}
			}else{
				printf("invalid move\n");
				return 1;
			}
			
		}else{
			printf("you choose wrong color\n");
			return 1;
		}
	}
	if(color==2){
		if(chessmatrix[row][col]/10==2){
			if(newrow==row-1 && newcol==col){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=21;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 1;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
            		for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto l;
            			}
            		}
					l:chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=21;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 1;
            	}else{
            		printf("invalid move\n");
            		return 2;
            	}
			}else if(newrow==row+1 && newcol==col){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=21;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 1;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto l;
            			}
            		}
					l=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=21;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}else{
            		printf("invalid move\n");
            		return 2;
            	}
			}else if(newrow==row && newcol==col+1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=21;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}	
            		printf("\n");
            		for(a=0;a<32;a++){
            			printf("%3d",eat[a]);
            		}
            		printf("\n");
            		return 1;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto l;
            			}
            		}
					l=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=21;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}else{
            		printf("invalid move\n");
            		return 2;
            	}
			}else if(newrow==row && newcol==col-1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=21;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto l;
            			}
            		}
					l=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=21;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}else{
            		printf("invalid move\n");
            		return 2;
            	}
			}else if(newrow==row+1 && newcol==col+1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=21;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto l;
            			}
            		}
					l=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=21;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}else{
            		printf("invalid move\n");
            		return 2;
            	}
			}else if(newrow==row-1 && newcol==col+1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=21;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto l;
            			}
            		}
					l=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=21;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}else{
            		printf("invalid move\n");
            		return 2;
            	}
			}else if(newrow==row+1 && newcol==col-1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=21;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 1;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto l;
            			}
            		}
					l=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=21;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}else{
            		printf("invalid move\n");
            		return 2;
            	}
			}else if(newrow==row-1 && newcol==col-1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=21;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto l;
            			}
            		}
					l=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=21;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}else{
            		printf("invalid move\n");
            		return 2;
            	}
			}else{
				printf("invalid move\n");
				return 2;
			}
			
		}else{
			printf("you choose wrong color\n");
			return 2;
		}
	}
}
int check_knight(int chessmatrix[8][8],int row,int col,int newrow,int newcol,int color,int eat[16]){
	int i,j,b,c,a;
	if(color==1){
		if(chessmatrix[row][col]/10==1){
			if(newrow==row+2 && newcol==col+1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=15;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 2;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto b;
            			}
            		}
					b:chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=15;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 2;
            	}else{
            		printf("invalid move\n");
            		return 1;
            	}
						
			}else if(newrow==row+2 && newcol==col-1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=15;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}	
            		printf("\n");
            		for(a=0;a<32;a++){
            			printf("%3d",eat[a]);
            		}
            		printf("\n");
            		return 2;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto b;
            			}
            		}
					b=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=15;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}	
            		printf("\n");
            		for(a=0;a<32;a++){
            			printf("%3d",eat[a]);
            		}
            		printf("\n");
            		return 2;
            	}else{
            		printf("invalid move\n");
            		return 1;
            	}
			}else if(newrow==row+1 && newcol==col+2){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=15;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 2;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto b;
            			}
            		}
					b=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=15;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 2;
            	}else{
            		printf("invalid move\n");
            		return 1;
            	}
			}else if(newrow==row+1 && newcol==col-2){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=15;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 2;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto b;
            			}
            		}
					b=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=15;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 2;
            	}else{
            		printf("invalid move\n");
            		return 1;
            	}
			}else if(newrow==row-2 && newcol==col+1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=15;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 2;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto b;
            			}
            		}
					b=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=15;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 2;
            	}else{
            		printf("invalid move\n");
            		return 1;
            	}
			}else if(newrow==row-2 && newcol==col-1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=15;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 2;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto b;
            			}
            		}
					b=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=15;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 2;
            	}else{
            		printf("invalid move\n");
            		return 1;
            	}
			}else if(newrow==row-1 && newcol==col+2){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=15;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 2;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto b;
            			}
            		}
					b=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=15;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 2;
            	}else{
            		printf("invalid move\n");
            		return 1;
            	}
			}else if(newrow==row-1 && newcol==col-2){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=15;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 2;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto b;
            			}
            		}
					b=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=15;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}	
            		printf("\n");
            		for(a=0;a<32;a++){
            			printf("%3d",eat[a]);
            		}
            		printf("\n");
            		return 2;
            	}else{
            		printf("invalid move\n");
            		return 1;
            	}
			}else{
				printf("invalid move\n");
				return 1;
			}
		
		}else{
			printf("you choose wrong color\n");
			return 1;
		}
	}
	if(color==2){
		if(chessmatrix[row][col]/10==2){
			if(newrow==row+2 && newcol==col+1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=25;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto c;
            			}
            		}
					c:chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=25;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}else{
            		printf("invalid move\n");
            		return 2;
            	}
						
			}else if(newrow==row+2 && newcol==col-1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=25;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto c;
            			}
            		}
					c=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=25;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}else{
            		printf("invalid move\n");
            		return 2;
            	}
			}else if(newrow==row+1 && newcol==col+2){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=25;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}	
            		printf("\n");
            		for(a=0;a<32;a++){
            			printf("%3d",eat[a]);
            		}
            		printf("\n");
            		return 1;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto c;
            			}
            		}
					c=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=25;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}else{
            		printf("invalid move\n");
            		return 2;
            	}
			}else if(newrow==row+1 && newcol==col-2){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=25;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}
					printf("\n");	
            		return 1;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto c;
            			}
            		}
					c=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=25;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}else{
            		printf("invalid move\n");
            		return 2;
            	}
			}else if(newrow==row-2 && newcol==col+1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=25;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto c;
            			}
            		}
					c=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=25;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}else{
            		printf("invalid move\n");
            		return 2;		
				}
			}else if(newrow==row-2 && newcol==col-1){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=25;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto c;
            			}
            		}
					c=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=25;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}else{
            		printf("invalid move\n");
            		return 2;
            	}
			}else if(newrow==row-1 && newcol==col+2){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=25;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto c;
            			}
            		}
					c=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=25;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}else{
            		printf("invalid move\n");
            		return 2;
            	}
			}else if(newrow==row-1 && newcol==col-2){
				if(chessmatrix[newrow][newcol]==0){
					chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=25;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}	
            		printf("\n");
            		for(a=0;a<32;a++){
            			printf("%3d",eat[a]);
            		}
            		printf("\n");
            		return 1;
            	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto c;
            			}
            		}
					c=chessmatrix[row][col]=0;
					chessmatrix[newrow][newcol]=25;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
					for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
            			printf("\n");
            		}
					printf("\n");
					for(a=0;a<32;a++){
						printf("%3d",eat[a]);
					}	
					printf("\n");
            		return 1;
            	}else{
            		printf("invalid move\n");
            		return 2;
            	}
			}else{
				printf("invalid move\n");
				return 2;
			}
		
		}else{
			printf("you choose wrong color\n");
			return 2;
		}
	
	}
}
int check_bishop(int chessmatrix[8][8],int row,int col,int newrow,int newcol,int color,int eat[16]){

	int x,y,i,j,q,w,a;
	x=abs(newrow-row);
	y=abs(newcol-col);

	if(color==1){
		if(chessmatrix[row][col]/10==1){
			if(x==y){
				if(newrow>row && newcol>col){
					for(i=1;i<x;i++){
						if(chessmatrix[row+i][col+i]!=0){
							printf("invalid move!\n");
							return 1;
						}
					}
					if(chessmatrix[newrow][newcol]==0){
						if(chessmatrix[row][col]%10==4){
							chessmatrix[newrow][newcol]=14;
						}else{
							chessmatrix[newrow][newcol]=12;
						}
						chessmatrix[row][col]=0;
						printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
						for(i=0;i<8;i++){
            				for(j=0;j<8;j++)
              					printf("%3d",chessmatrix[i][j]);
            				printf("\n");
            			}
						printf("\n");
						for(a=0;a<32;a++){
							printf("%3d",eat[a]);
						}	
						printf("\n");
            			return 2;
            		}	
					if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
						for(a=0;a<32;a++){
            				if(eat[a]==0){
            					eat[a]=chessmatrix[newrow][newcol];
            				goto q;
            				}
            			}
						q:if(chessmatrix[row][col]%10==4){
							chessmatrix[newrow][newcol]=14;
						}else{
							chessmatrix[newrow][newcol]=12;
						}
						
						chessmatrix[row][col]=0;
						printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
						for(i=0;i<8;i++){
            				for(j=0;j<8;j++)
              					printf("%3d",chessmatrix[i][j]);
            				printf("\n");
            			}	
            			printf("\n");
            			for(a=0;a<32;a++){
            				printf("%3d",eat[a]);
            			}
            			printf("\n");
            			return 2;
					}else{
						printf("invalid move!\n");
						return 1;
					}
				}else if(newrow>row && newcol<col){
					for(i=1;i<x;i++){
						if(chessmatrix[row+i][col-i]!=0){
							printf("invalid move!\n");
							return 1;
						}
					}
					if(chessmatrix[newrow][newcol]==0){
						if(chessmatrix[row][col]%10==4){
							chessmatrix[newrow][newcol]=14;
						}else{
							chessmatrix[newrow][newcol]=12;
						}
						chessmatrix[row][col]=0;
						printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
						for(i=0;i<8;i++){
            				for(j=0;j<8;j++)
              					printf("%3d",chessmatrix[i][j]);
            				printf("\n");
            			}	
            			printf("\n");
            			for(a=0;a<32;a++){
            				printf("%3d",eat[a]);
            			}
            			printf("\n");
            			return 2;
            		}
				
					if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
						for(a=0;a<32;a++){
            				if(eat[a]==0){
            					eat[a]=chessmatrix[newrow][newcol];
            				goto q;
            				}
            			}
						if(chessmatrix[row][col]%10==4){
							chessmatrix[newrow][newcol]=14;
						}else{
							chessmatrix[newrow][newcol]=12;
						}
						
						chessmatrix[row][col]=0;
						printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
						for(i=0;i<8;i++){
            				for(j=0;j<8;j++)
              					printf("%3d",chessmatrix[i][j]);
            				printf("\n");
            			}
						printf("\n");
						for(a=0;a<32;a++){
							printf("%3d",eat[a]);
						}	
						printf("\n");
            			return 2;
					}else{
						printf("invalid move!\n");
						return 1;
					}
				}else if(newrow<row && newcol>col){
					for(i=1;i<x;i++){
						if(chessmatrix[row-i][col+i]!=0){
							printf("invalid move!\n");
							return 1;
						}
					}
					if(chessmatrix[newrow][newcol]==0){
						if(chessmatrix[row][col]%10==4){
							chessmatrix[newrow][newcol]=14;
						}else{
							chessmatrix[newrow][newcol]=12;
						}
						chessmatrix[row][col]=0;
						printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
						for(i=0;i<8;i++){
            				for(j=0;j<8;j++)
              					printf("%3d",chessmatrix[i][j]);
            				printf("\n");
            			}
						printf("\n");
						for(a=0;a<32;a++){
							printf("%3d",eat[a]);
						}	
						printf("\n");
            			return 2;
            		}
					if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
						for(a=0;a<32;a++){
            				if(eat[a]==0){
            					eat[a]=chessmatrix[newrow][newcol];
            				goto q;
            				}
            			}
						if(chessmatrix[row][col]%10==4){
							chessmatrix[newrow][newcol]=14;
						}else{
							chessmatrix[newrow][newcol]=12;
						}
						
						chessmatrix[row][col]=0;
						printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
						for(i=0;i<8;i++){
            				for(j=0;j<8;j++)
              					printf("%3d",chessmatrix[i][j]);
            				printf("\n");
            			}
						printf("\n");
						for(a=0;a<32;a++){
							printf("%3d",eat[a]);
						}
						printf("\n");	
            			return 2;
					}else{
						printf("invalid move!\n");
						return 1;
					}
				}else if(newrow<row && newcol<col){
					for(i=1;i<x;i++){
						if(chessmatrix[row-i][col-i]!=0){
							printf("invalid move!\n");
							return 1;
						}
					}
					if(chessmatrix[newrow][newcol]==0){
						if(chessmatrix[row][col]%10==4){
							chessmatrix[newrow][newcol]=14;
						}else{
							chessmatrix[newrow][newcol]=12;
						}
						chessmatrix[row][col]=0;
						printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
						for(i=0;i<8;i++){
            				for(j=0;j<8;j++)
              					printf("%3d",chessmatrix[i][j]);
            				printf("\n");
            			}	
            			printf("\n");
            			for(a=0;a<32;a++){
            				printf("%3d",eat[a]);
            			}
            			printf("\n");
            			return 2;
            		}
					if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
						for(a=0;a<32;a++){
            				if(eat[a]==0){
            					eat[a]=chessmatrix[newrow][newcol];
            				goto q;
            				}
            			}
						if(chessmatrix[row][col]%10==4){
							chessmatrix[newrow][newcol]=14;
						}else{
							chessmatrix[newrow][newcol]=12;
						}
						
						chessmatrix[row][col]=0;
						printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
						for(i=0;i<8;i++){
            				for(j=0;j<8;j++)
              					printf("%3d",chessmatrix[i][j]);
            				printf("\n");
            			}
						printf("\n");
						for(a=0;a<32;a++){
							printf("%3d",eat[a]);
						}	
						printf("\n");
            			return 2;
					}else{
						printf("invalid move!\n");
						return 1;
					}
				}else{
					printf("invalid move\n");
					return 1;
				}
			}else{
				printf("invalid move\n");
				return 1;
			}	
		}else 
			printf("you choose wrong color\n");
			return 1;
	}
	if(color==2){
		if(chessmatrix[row][col]/10==2){
			if(x==y){
				if(newrow>row && newcol>col){
					for(i=1;i<x;i++){
						if(chessmatrix[row+i][col+i]!=0){
						printf("invalid move!\n");
						return 2;
						}
					}
					if(chessmatrix[newrow][newcol]==0){
						if(chessmatrix[row][col]%10==4){
							chessmatrix[newrow][newcol]=24;
						}else{
							chessmatrix[newrow][newcol]=22;
						}
						chessmatrix[row][col]=0;
						printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
						for(i=0;i<8;i++){
            				for(j=0;j<8;j++)
              					printf("%3d",chessmatrix[i][j]);
            				printf("\n");
            			}	
            			printf("\n");
            			for(a=0;a<32;a++){
            				printf("%3d",eat[a]);
            			}
            			printf("\n");
            			return 1;
            		}
					if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
						for(a=0;a<32;a++){
            				if(eat[a]==0){
            					eat[a]=chessmatrix[newrow][newcol];
            				goto w;
            				}
            			}
						w:if(chessmatrix[row][col]%10==4){
							chessmatrix[newrow][newcol]=24;
						}else{
							chessmatrix[newrow][newcol]=22;
						}
						
						chessmatrix[row][col]=0;
						printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
						for(i=0;i<8;i++){
            				for(j=0;j<8;j++)
              					printf("%3d",chessmatrix[i][j]);
            				printf("\n");
            			}
						printf("\n");
						for(a=0;a<32;a++){
							printf("%3d",eat[a]);
						}	
						printf("\n");
            			return 1;
					}else{
						printf("invalid move!\n");
						return 2;
					}
				}else if(newrow>row && newcol<col){
					for(i=1;i<x;i++){
						if(chessmatrix[row+i][col-i]!=0){
							printf("invalid move!\n");
							return 2;
						}
					}
					if(chessmatrix[newrow][newcol]==0){
						if(chessmatrix[row][col]%10==4){
							chessmatrix[newrow][newcol]=24;
						}else{
							chessmatrix[newrow][newcol]=22;
						}
						chessmatrix[row][col]=0;
						printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
						for(i=0;i<8;i++){
            				for(j=0;j<8;j++)
              					printf("%3d",chessmatrix[i][j]);
            				printf("\n");
            			}	
            			printf("\n");
            			for(a=0;a<32;a++){
            				printf("%3d",eat[a]);
            			}
            			printf("\n");
            			return 1;
            		}
					if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
						for(a=0;a<32;a++){
            				if(eat[a]==0){
            					eat[a]=chessmatrix[newrow][newcol];
            				goto w;
            				}
            			}
						if(chessmatrix[row][col]%10==4){
							chessmatrix[newrow][newcol]=24;
						}else{
							chessmatrix[newrow][newcol]=22;
						}
						
						chessmatrix[row][col]=0;
						printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
						for(i=0;i<8;i++){
            				for(j=0;j<8;j++)
              					printf("%3d",chessmatrix[i][j]);
            				printf("\n");
            			}
						printf("\n");
						for(a=0;a<32;a++){
							printf("%3d",eat[a]);
						}	
						printf("\n");
            			return 1;
					}else{
						printf("invalid move!\n");
						return 2;
					}
				}else if(newrow<row && newcol>col){
					for(i=1;i<x;i++){
						if(chessmatrix[row-i][col+i]!=0){
							printf("invalid move!\n");
							return 2;
						}
					}
					if(chessmatrix[newrow][newcol]==0){
						if(chessmatrix[row][col]%10==4){
							chessmatrix[newrow][newcol]=24;
						}else{
							chessmatrix[newrow][newcol]=22;
						}
						chessmatrix[row][col]=0;
						printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
						for(i=0;i<8;i++){
            				for(j=0;j<8;j++)
              					printf("%3d",chessmatrix[i][j]);
            				printf("\n");
            			}	
            			printf("\n");
            			for(a=0;a<32;a++){
            				printf("%3d",eat[a]);
            			}
            			printf("\n");
            			return 1;
            		}
					if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
						for(a=0;a<32;a++){
            				if(eat[a]==0){
            					eat[a]=chessmatrix[newrow][newcol];
            				goto w;
            				}
            			}
						if(chessmatrix[row][col]%10==4){
							chessmatrix[newrow][newcol]=24;
						}else{
							chessmatrix[newrow][newcol]=22;
						}
						
						chessmatrix[row][col]=0;
						printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
						for(i=0;i<8;i++){
            				for(j=0;j<8;j++)
              					printf("%3d",chessmatrix[i][j]);
            				printf("\n");
            			}
						printf("\n");
						for(a=0;a<32;a++){
							printf("%3d",eat[a]);
						}	
						printf("\n");
            			return 1;
					}else{
						printf("invalid move!\n");
						return 2;
					}
				}else if(newrow<row && newcol<col){
					for(i=1;i<x;i++){
						if(chessmatrix[row-i][col-i]!=0){
							printf("invalid move!\n");
							return 2;
						}
					}
					if(chessmatrix[newrow][newcol]==0){
						if(chessmatrix[row][col]%10==4){
							chessmatrix[newrow][newcol]=24;
						}else{
							chessmatrix[newrow][newcol]=22;
						}
						chessmatrix[row][col]=0;
						printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
						for(i=0;i<8;i++){
            				for(j=0;j<8;j++)
              					printf("%3d",chessmatrix[i][j]);
            				printf("\n");
            			}
						printf("\n");
						for(a=0;a<32;a++){
							printf("%3d",eat[a]);
						}	
						printf("\n");
            			return 1;
            		}
					if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
						for(a=0;a<32;a++){
            				if(eat[a]==0){
            					eat[a]=chessmatrix[newrow][newcol];
            				goto w;
            				}
            			}
						if(chessmatrix[row][col]%10==4){
							chessmatrix[newrow][newcol]=24;
						}else{
							chessmatrix[newrow][newcol]=22;
						}
						
						chessmatrix[row][col]=0;
						printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
						for(i=0;i<8;i++){
            				for(j=0;j<8;j++)
              					printf("%3d",chessmatrix[i][j]);
            				printf("\n");
            			}
						printf("\n");
						for(a=0;a<32;a++){
							printf("%3d",eat[a]);
						}	
						printf("\n");
            			return 1;
					}else{
						printf("invalid move!\n");
						return 2;
					}
				
				}else{
					printf("invalid move\n");
					return 2;
				}
			
			}else{
				printf("invalid move\n");
				return 2;
			}
		
		}else{
			printf("you choose wrong color\n");
			return 2;
		}
	
	}
}
int check_rook(int chessmatrix[8][8],int row,int col,int newrow,int newcol,int color,int eat[16]){
    int i,j,x,y,r,t,a;
    x=abs(newrow-row);
    y=abs(newcol-col);
    
	if(color==1){
    	if(chessmatrix[row][col]/10==1){
        	/*mprosta gia ta maura*/
        	if(row<newrow && col==newcol){
				for(i=1;i<x;i++){
            		if(chessmatrix[row+i][col]!=0){
             			printf("invalid move!\n");
    					return 1;
            		}
				}
				if(chessmatrix[newrow][newcol]==0){
          			if(chessmatrix[row][col]%10==3){
					  	chessmatrix[newrow][newcol]=13;
      				}else{
      					chessmatrix[newrow][newcol]=12;
      				}
      				chessmatrix[row][col]=0;
      				printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
          			for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
             				printf("%3d",chessmatrix[i][j]);
          					printf("\n");
          			}
          			printf("\n");
          			for(a=0;a<32;a++){
          				printf("%3d",eat[a]);
          			}
          			printf("\n");
          			return 2;
      			}
      			if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
      				for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto r;
            			}
            		}	
      				r:if(chessmatrix[row][col]%10==3){
          				chessmatrix[newrow][newcol]=13;
      				}else{
      					chessmatrix[newrow][newcol]=12;
      				}
      				chessmatrix[row][col]=0;
      				printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
          			for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
          					printf("\n");
          			}
          			printf("\n");
          			for(a=0;a<32;a++){
          				printf("%3d",eat[a]);
          			}
          			printf("\n");
          			return 2;
      			}else{
      				printf("invalid move\n");
      				return 1;
      			}
     			 /*pisw gia ta maura*/
          	}else if(row>newrow && col==newcol){
            	for(i=1;i<x;i++){
              		if(chessmatrix[row-i][col]!=0){
              			printf("invalid move!\n");
              			return 1;
              		}
            	}
            	if(chessmatrix[newrow][newcol]==0){
            		
            		if(chessmatrix[row][col]%10==3){
           				chessmatrix[newrow][newcol]=13;
        			}else{
        				chessmatrix[newrow][newcol]=12;
        			}
        			chessmatrix[row][col]=0;
        			printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
            		for(i=0;i<8;i++){
              			for(j=0;j<8;j++)
                			printf("%3d",chessmatrix[i][j]);
              			printf("\n");
            		}
            		printf("\n");
            		for(a=0;a<32;a++){
            			printf("%3d",eat[a]);
            		}
            		printf("\n");
            		return 2;
        		}
        		if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2)
        		{
        			for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto r;
            			}
            		}
        			if(chessmatrix[row][col]%10==3){
          				chessmatrix[newrow][newcol]=13;
      				}else{
      					chessmatrix[newrow][newcol]=12;
      				}
					chessmatrix[row][col]=0;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
          			for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
          				printf("\n");
          			}
          			printf("\n");
          			for(a=0;a<32;a++){
          				printf("%3d",eat[a]);
          			}
          			printf("\n");
          			return 2;
        		}else{
        			printf("invalid move\n");
        			return 1;
        		}
            
          	/*kinhsh ap ta maura pros ta deksia*/
    		}else if(row==newrow && col<newcol){
            	for(i=1;i<y;i++){
                	if(chessmatrix[row][col+i]!=0){
                  		printf("invalid move!\n");
                  		return 1;
                	}
              	}
              	if(chessmatrix[newrow][newcol]==0){
              		if(chessmatrix[row][col]%10==3){
             			 chessmatrix[newrow][newcol]=13;
          			}else{
          				chessmatrix[newrow][newcol]=12;
          			}
          			chessmatrix[row][col]=0;
          			printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
              		for(i=0;i<8;i++){
                		for(j=0;j<8;j++)
                  			printf("%3d",chessmatrix[i][j]);
                		printf("\n");
              		}
              		printf("\n");
              		for(a=0;a<32;a++){
              			printf("%3d",eat[a]);
              		}
              		printf("\n");
              		return 2;
          		}
          		if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
          			for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto r;
            			}
            		}
          			if(chessmatrix[row][col]%10==3){
          				chessmatrix[newrow][newcol]=13;
      				}else{
      					chessmatrix[newrow][newcol]=12;
      				}
      				
					chessmatrix[row][col]=0;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
          			for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
          				printf("\n");
          			}
          			printf("\n");
          			for(a=0;a<32;a++){
          				printf("%3d",eat[a]);
          			}
          			printf("\n");
          			return 2;
          		}else{
          			printf("invalid move\n");
          			return 1;
          		}	
             /*kinhsh ap ta maura pros ta aristera*/
			 }else if(row==newrow && col>newcol){
            	for(i=1;i<y;i++){
                	if(chessmatrix[row][col-i]!=0){
                    	printf("invalid move!\n");
                    	return 1;
                  	}
                }
                if(chessmatrix[newrow][newcol]==0){
                	if(chessmatrix[row][col]%10==3){
                		chessmatrix[newrow][newcol]=13;
            		}else{
            			chessmatrix[newrow][newcol]=12;
            		}
            		chessmatrix[row][col]=0;
            		printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
                	for(i=0;i<8;i++){
                  		for(j=0;j<8;j++)
                   			 printf("%3d",chessmatrix[i][j]);
                  		printf("\n");
                	}
                	printf("\n");
                	for(a=0;a<32;a++){
                		printf("%3d",eat[a]);
                	}
                	printf("\n");
                	return 2;
              	}
            	if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==2){
            		if(eat[a]==0){
						for(a=0;a<32;a++){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto r;
            			}
            		}
              		if(chessmatrix[row][col]%10==3){
         				chessmatrix[newrow][newcol]=13;
      				}else{
      					chessmatrix[newrow][newcol]=12;
      				}
      				
            		chessmatrix[row][col]=0;
            		printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
          			for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
             				 printf("%3d",chessmatrix[i][j]);
         				 printf("\n");
          			}
          			printf("\n");
          			for(a=0;a<32;a++){
          				printf("%3d",eat[a]);
          			}
          			printf("\n");
          			return 2;
              	}else{
             		 printf("invalid move\n");
             		 return 1;
			  	}
			}else{
				printf("invalid move\n");
				return 1;
			}
      
	  	}else{
	  		printf("you choose wrong colour\n");
	  		return 1;
	  	}
    
    }
    if(color==2){
    	if(chessmatrix[row][col]/10==2){
        	/*mprosta gia ta aspra*/
        	if(row<newrow && col==newcol){
         		for(i=1;i<x;i++){
            		if(chessmatrix[row+i][col]!=0){
              			printf("invalid move!\n");
              			return 2;
            		}
          		}
          		if(chessmatrix[newrow][newcol]==0){
          			if(chessmatrix[row][col]%10==3){
          				chessmatrix[newrow][newcol]=23;
      				}else{
      					chessmatrix[newrow][newcol]=22;
      				}
      				chessmatrix[row][col]=0;
      				printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
         			for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
          				printf("\n");
          			}
          			printf("\n");
          			for(a=0;a<32;a++){
          				printf("%3d",eat[a]);
          			}
          			printf("\n");
         			return 1;
      			 }
      			if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
      					for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto t;
            			}
            		}
      				t:if(chessmatrix[row][col]%10==3){
          				chessmatrix[newrow][newcol]=23;
      				}else{
      					chessmatrix[newrow][newcol]=22;
      				}
      			
					chessmatrix[row][col]=0;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
          			for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
          				printf("\n");
          			}
          			printf("\n");
          			for(a=0;a<32;a++){
          				printf("%3d",eat[a]);
          			}
          			printf("\n");
          			return 1;
      			}else{
      				printf("invalid move\n");
      				return 2;
      			}
      		/*pisw gia ta aspra*/
          	}else if(row>newrow && col==newcol){
            	for(i=1;i<x;i++){
              		if(chessmatrix[row-i][col]!=0){
              			printf("invalid move!\n");
              			return 2;
              		}
            	}
            	if(chessmatrix[newrow][newcol]==0){
            		if(chessmatrix[row][col]%10==3){
            			chessmatrix[newrow][newcol]=23;
        			}else{
        				chessmatrix[newrow][newcol]=22;
        			}
        			chessmatrix[row][col]=0;
        			printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
            		for(i=0;i<8;i++){
              			for(j=0;j<8;j++)
                			printf("%3d",chessmatrix[i][j]);
              			printf("\n");
            		}
            		printf("\n");
            		for(a=0;a<32;a++){
            			printf("%3d",eat[a]);
            		}
            		printf("\n");
            		return 1;
        		}
        		if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1)
        		{
        			for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto t;
            			}
            		}
        			if(chessmatrix[row][col]%10==3){
          				chessmatrix[newrow][newcol]=23;
      				}else{
      					chessmatrix[newrow][newcol]=22;
      				}
      				
					chessmatrix[row][col]=0;
					printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
          			for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
              				printf("%3d",chessmatrix[i][j]);
          				printf("\n");
          			}
          			printf("\n");
          			for(a=0;a<32;a++){
          				printf("%3d",eat[a]);
          			}
          			printf("\n");
          			return 1;
        		}else{
        			printf("invalid move\n");
        			return 2;
        		}
          	   /*kinhsh ap ta aspra pros ta deksia*/
			}else if(row==newrow && col<newcol){
             	 	for(i=1;i<y;i++){
               		 	if(chessmatrix[row][col+i]!=0){
                 			 printf("invalid move!\n");
              				return 2;
               		 	}
             	 	}
             	 	if(chessmatrix[newrow][newcol]==0){
              			if(chessmatrix[row][col]%10==3){
             			 	chessmatrix[newrow][newcol]=23;
        			  	}else{
          					chessmatrix[newrow][newcol]=22;
         			 	}
         			 	chessmatrix[row][col]=0;
         			 	printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
              			for(i=0;i<8;i++){
                			for(j=0;j<8;j++)
                  				printf("%3d",chessmatrix[i][j]);
                			printf("\n");
             		 	}
						 printf("\n");
						 for(a=0;a<32;a++){
						 	printf("%3d",eat[a]);
						 }	
						 printf("\n");
             		 	return 1;
          			}
          			if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
          				for(a=0;a<32;a++){
            				if(eat[a]==0){
            					eat[a]=chessmatrix[newrow][newcol];
            					goto t;
            				}
            			}
          				if(chessmatrix[row][col]%10==3){
          					chessmatrix[newrow][newcol]=23;
     					 }else{
      						chessmatrix[newrow][newcol]=22;
      					}
      					
						chessmatrix[row][col]=0;
						printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
          				for(i=0;i<8;i++){
            				for(j=0;j<8;j++)
              					printf("%3d",chessmatrix[i][j]);
          					printf("\n");
          				}
          				printf("\n");
          				for(a=0;a<32;a++){
          					printf("%3d",eat[a]);
          				}
          				printf("\n");
          				return 1;
          			}else{
          				printf("invalid move\n");
          				return 2;
          			}
            	 /*kinhsh ap ta aspra pros ta aristera*/
				}else if(row==newrow && col>newcol){
                	for(i=1;i<y;i++){
                  		if(chessmatrix[row][col-i+1]!=0){
                    		printf("invalid move!\n");
                    		return 2;
                  		}
                	}
               		if(chessmatrix[newrow][newcol]==0){
                		if(chessmatrix[row][col]%10==3){
                			chessmatrix[newrow][newcol]=23;
            			}else{
            				chessmatrix[newrow][newcol]=22;
            			}
            			chessmatrix[row][col]=0;
            			printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
                		for(i=0;i<8;i++){
                  			for(j=0;j<8;j++)
                   				 printf("%3d",chessmatrix[i][j]);
                  			printf("\n");
                		}
                		printf("\n");
                		for(a=0;a<32;a++){
                			printf("%3d",eat[a]);
                		}
                		printf("\n");
               			return 1;
              		}		
              		if(chessmatrix[newrow][newcol]!=0 && chessmatrix[newrow][newcol]/10==1){
					  	for(a=0;a<32;a++){
            				if(eat[a]==0){
            					eat[a]=chessmatrix[newrow][newcol];
            					goto t;
            				}
            			}
              			if(chessmatrix[row][col]%10==3){
          					chessmatrix[newrow][newcol]=23;
      					}else{
      						chessmatrix[newrow][newcol]=22;
      					}
      					
						chessmatrix[row][col]=0;
						printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   					printf("1:Black 2:White\n");
          				for(i=0;i<8;i++){
            				for(j=0;j<8;j++)
              					printf("%3d",chessmatrix[i][j]);
          					printf("\n");
          				}
          				printf("\n");
          				for(a=0;a<32;a++){
          					printf("%3d",eat[a]);
          				}
          				printf("\n");
          				return 1;
              		}else{
             			 printf("invalid move\n");
              			return 2;
			  		}
				}else{
					printf("invalid move\n");
					return 2;
				}
      
	  	}else{
	  		printf("you choose wrong colour\n");
	  		return 2;
	  	}
    
    }


}
int check_pawn(int chessmatrix[8][8],int row,int col,int newrow,int newcol,int color,int eat[16]){
    int i,j,a,n,m;
    if(color==1){
    	/*black (16) soldier*/\
    	if(chessmatrix[row][col]/10==1){                       
      		/*1 move forward*/
      		if (newrow==row+1 && newcol==col){
        		if(chessmatrix[newrow][newcol]==0){
          			chessmatrix[row][col]=0;
          			chessmatrix[newrow][newcol]=16;
          			printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
          			for(i=0;i<8;i++){
            			for(j=0;j<8;j++)
           					 printf("%3d",chessmatrix[i][j]);
          				printf("\n");
          			}
          			printf("\n");
          			for(a=0;a<32;a++){
          				printf("%3d",eat[a]);
          			}
          			printf("\n");
          			return 2;
        		}else {
              		printf("Invalid move!\n");
              		return 1;
				}
            /*2 moves forward*/
      		}else if(newrow==row+2 && newcol==col){
              	if(chessmatrix[row][col]==chessmatrix[1][col] && chessmatrix[row+1][col]==0 && chessmatrix[row+2][col]==0){
                	chessmatrix[row][col]=0;
                	chessmatrix[newrow][newcol]=16;
                	printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
                	for(i=0;i<8;i++){
                  		for(j=0;j<8;j++)
                    		printf("%3d",chessmatrix[i][j]);
                  		printf("\n");
                	}
                	printf("\n");
                	for(a=0;a<32;a++){
                		printf("%3d",eat[a]);
                	}
                	printf("\n");
               		 return 2;
              	}else {
                    printf("Invalid move!\n");
                    return 1;
                }
             /*diagwnios anaptuksh deksia*/
            }else if(chessmatrix[newrow][newcol]==chessmatrix[row+1][col+1] && chessmatrix[newrow][newcol]/10==2){
                  for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto n;
            			}
            		}
					n:chessmatrix[row][col]=0;
                   chessmatrix[newrow][newcol]=16;
                   	printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
                  for(i=0;i<8;i++){
                    for(j=0;j<8;j++)
                      printf("%3d",chessmatrix[i][j]);
                    printf("\n");
                  }
                  printf("\n");
                  for(a=0;a<32;a++){
                  	printf("%3d",eat[a]);
                  }
                  printf("\n");
                  return 2;                  
            }else if (chessmatrix[newrow][newcol]==chessmatrix[row+1][col-1] && chessmatrix[newrow][newcol]/10==2){
                    for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto n;
            			}
            		}
					n=chessmatrix[row][col]=0;
                    chessmatrix[newrow][newcol]=16;
                   	printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
                    for(i=0;i<8;i++){
                        for(j=0;j<8;j++)
                        	printf("%3d",chessmatrix[i][j]);
                        printf("\n");
                    }
                    printf("\n");
                    for(a=0;a<32;a++){
                    	printf("%3d",eat[a]);
                    }
                    printf("\n");
                    return 2;
            }else {
                    printf("Invalid move!\n");
                    return 1;
            }
    	}else {
          	printf("you choosed wrong color!\n");
          	return 1;
        }       
    }     
    /*white (26) soldier*/
	if(color==2){  
    	if((chessmatrix[row][col]/10)==2){
        	/*1 move forward*/
        	if (newrow==row-1 && newcol==col){
            	if (chessmatrix[newrow][newcol]==0){
                	chessmatrix[row][col]=0;
                	chessmatrix[newrow][newcol]=26;
                	printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
                	for(i=0;i<8;i++){
                  		for(j=0;j<8;j++)
                    		printf("%3d",chessmatrix[i][j]);
                  		printf("\n");
                	}
                	printf("\n");
                	for(a=0;a<32;a++){
                		printf("%3d",eat[a]);
                	}
                	printf("\n");
                	return 1;
              	}else {
                    printf("Invalid move!\n");
                    return 2;
                }      
            /*2 move forward*/
            }else if(newrow==row-2 && newcol==col){
            	if(chessmatrix[row][col]==chessmatrix[6][col] && chessmatrix[row-1][col]==0 && chessmatrix[row-2][col]==0){
                	chessmatrix[row][col]=0;
                	chessmatrix[newrow][newcol]=26;
                	printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
                	for(i=0;i<8;i++){
                  		for(j=0;j<8;j++)
                    		printf("%3d",chessmatrix[i][j]);
                  		printf("\n");
                	}
                	printf("\n");
                	for(a=0;a<32;a++){
                		printf("%3d",eat[a]);
                	}
                	printf("\n");
                	return 1;
            	}else {
                	printf("Invalid move!\n");
                	return 2;
                }
            /*diagwnios anaptuksh aristera*/
            }else if(chessmatrix[newrow][newcol]==chessmatrix[row-1][col+1] && chessmatrix[newrow][newcol]/10==1){
            	for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto m;
            			}
            		}
					m:chessmatrix[row][col]=0;
                chessmatrix[newrow][newcol]=26;
            	printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   			printf("1:Black 2:White\n");
                for(i=0;i<8;i++){
                    for(j=0;j<8;j++)
                        printf("%3d",chessmatrix[i][j]);
                     printf("\n");
                }
                printf("\n");
                for(a=0;a<32;a++){
                	printf("%3d",eat[a]);
                }
                printf("\n");
                return 1;                  
            }else if (chessmatrix[newrow][newcol]==chessmatrix[row-1][col-1] && chessmatrix[newrow][newcol]/10==1){
            	for(a=0;a<32;a++){
            			if(eat[a]==0){
            				eat[a]=chessmatrix[newrow][newcol];
            				goto m;
            			}
            		}
					m=chessmatrix[row][col]=0;
               	 chessmatrix[newrow][newcol]=26;
                	printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   				printf("1:Black 2:White\n");
                for(i=0;i<8;i++){
                	for(j=0;j<8;j++)
                    	printf("%3d",chessmatrix[i][j]);
                    printf("\n");
                }
                printf("\n");
                for(a=0;a<32;a++){
                	printf("%3d",eat[a]);
                }
                printf("\n");
                return 1;
            }else {
            	printf("Invalid move!\n");
                return 2;
            }
            
        }else {
        	printf("you choosed wrong color!\n");
            return 2;
        }
    }

}
main(){
       int i,j,row,col,newrow,newcol,color,a;
       int chessmatrix[8][8],eat[32];
       for(i=0;i<8;i++){
         for(j=0;j<8;j++)
           chessmatrix[i][j]=0;
       }
       for(a=0;a<32;a++){
       	  eat[a]=0;
       }
       chessmatrix[0][0]=13;
       chessmatrix[0][1]=15;
       chessmatrix[0][2]=14;
       chessmatrix[0][3]=12;
       chessmatrix[0][4]=11;
       chessmatrix[0][5]=14;
       chessmatrix[0][6]=15;
       chessmatrix[0][7]=13;
       
       for(i=0;i<8;i++)
         chessmatrix[1][i]=16;
       
       for(i=0;i<8;i++)
         chessmatrix[6][i]=26;
       
       chessmatrix[7][0]=23;
       chessmatrix[7][1]=25;
       chessmatrix[7][2]=24;
       chessmatrix[7][3]=22;
       chessmatrix[7][4]=21;
       chessmatrix[7][5]=24;
       chessmatrix[7][6]=25;
       chessmatrix[7][7]=23;
       
       printf("1:King 2:Queen 3:Rook 4:Bishop 5:Knight 6:Pawn\n");
	   printf("1:Black 2:White\n");
       for(i=0;i<8;i++){
         for(j=0;j<8;j++)
           printf("%3d",chessmatrix[i][j]);
		 printf("\n");
		}
		printf("\n");
		for(a=0;a<32;a++){
			printf("%3d",eat[a]);
		}
		printf("\n");
                       
       color=2;
    
       while(eat[a]!=11 && eat[a]!=21){
    		if (color==1){
         		printf("Player Black what will you move? ");
         		scanf("%d %d",&row,&col);
         		printf("Player Black where will you move it? ");
         		scanf("%d %d",&newrow,&newcol);             
         	} 
         	if (color==2){
                 printf("Player White what will you move? ");
                 scanf("%d %d",&row,&col);
                 printf("Player White where will you move it?");
                 scanf("%d %d",&newrow,&newcol);             
            }
			
       	 	if(newrow>-1 && newcol >-1 && newrow <8 && newcol<8 && row>-1 && row<8 && col>-1 && col<8){
       	 			for(a=0;a<32;a++){
       					if(eat[a]==11 || eat[a]==21){
								if(eat[a]==11){
	  								printf("The winner is Player White\n");
	  							}else{
	  								printf("The winner is Player Black\n");
	  							}	  
								exit(0);   
							}
						}
           		if(chessmatrix[row][col]%10==6){                           
             		color=check_pawn(chessmatrix,row,col,newrow,newcol,color,eat);                              
           		}
           		if(chessmatrix[row][col]%10==3){                           
            		 color=check_rook(chessmatrix,row,col,newrow,newcol,color,eat);                              
           		}
           		if(chessmatrix[row][col]%10==4){
             		color=check_bishop(chessmatrix,row,col,newrow,newcol,color,eat);
           		}
           		if(chessmatrix[row][col]%10==2){
           			int x,y;
           	 		x=abs(newrow-row);
           	 		y=abs(newcol-col);
           	 		if(x==y){
           	 			color=check_bishop(chessmatrix,row,col,newrow,newcol,color,eat);
           	 		}else{
           	 			color=check_rook(chessmatrix,row,col,newrow,newcol,color,eat);
           	 		}
           		}
           		if(chessmatrix[row][col]%10==5){
           			color=check_knight(chessmatrix,row,col,newrow,newcol,color,eat);
           		}
           		if(chessmatrix[row][col]%10==1){
           			color=check_king(chessmatrix,row,col,newrow,newcol,color,eat);
           		}
           		
         	}else{
         			printf("invalid move!\n");
         	}
				 
	  }
	  
}
