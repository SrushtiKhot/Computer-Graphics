#include<stdio.h>
#include<GL/glut.h>
#include<windows.h>
#define sleep(x) Sleep(1000*(x))

GLubyte f1[10000]={"In computer science, tree traversal (also known as tree search) is a form of graph"};
GLubyte f2[1000]= {"traversal and refers to the process of visiting  (checking and/or updating)  each"};
GLubyte f3[1000]={"node in a tree  data structure, exactly once. Such traversals  are classified  by"};
GLubyte f4[1000]={"the order in which the nodes are  visited. The following  algorithms are  described"};
GLubyte f5[1000]={"for a binary tree, but they may be  generalized to other trees as well.The  trace"};
GLubyte f6[1000]={"of a traversal is called a sequentialisation  of the tree. The traversal  trace is" };
GLubyte f7[1000]={"a list of each visited root. No one sequentialisation  according to pre-,  in- or"};
GLubyte f8[1000]={"post-order describes the  underlying  tree uniquely. Given a tree  with distinct"};
GLubyte f9[1000]={"elements, either pre-order or post-order paired with in-order is  sufficient to"};
GLubyte f10[1000]={"describe the treeuniquely. However , pre-order with post-order leaves some "};
GLubyte f11[1000]={"ambiguity in the tree structure."};

int xc=250,yc=400,r=25,i,j,k,h=0,cyl=0,m,k,i1=0,interactive=0,anim=0,x,y,w5=0,h0=0,h1=0,h2=0,h3=0,h4=0,h5=0,h6=0,h7=0,h8=0,h9=0,h10=0,h11=0,h12=0,h13=0,ainorder=0;

//int x=0,y=0;
int q=10,w=10,d0=1;
GLint flag=0;
GLubyte t[11]={"BINARY TREE"};

GLubyte def[150]={"DEFINITIONS"};
GLubyte def1[500]={":-Binary Tree is defined as finite set of nodes that is either or consists of a root"};
GLubyte def2[500]={" and two disjoint binary tree TL nad TR called right and left subtree of the root  "};
GLubyte def3[500]={":-The root is visited before the left and right  subtree are visited  (in the order)"};
GLubyte def4[500]={":-The root is visited after visiting its  left subtree before visiting the  right  subtree"};
GLubyte def5[500]={":-The root is visited after visiting  the left and right  subtrees (in the order)"};

GLubyte dec[11]={"DESCRIPTION"};
GLbyte a[7]={'I','N','O','R','D','E','R'};
GLbyte b[8]={'P','R','E','O','R','D','E','R'};
GLbyte c[9]={'P','O','S','T','O','R','D','E','R'};
GLbyte d[12]={'T','R','A','V','E','R','S','A','L','S'};

GLbyte inorder[20]={"3->4->5->6->7->8->9"};
GLbyte pre[20]={"6->4->3->5->8->7->9"};
GLbyte post[20]={"3->5->4->7->9->8->6"};

GLbyte bk[4]={'B','A','C','K'};
GLbyte n[4]={'N','E','X','T'};

//front page
GLbyte clg[100]={"BASAVESHWAR ENGINEERING COLLEGE,BAGALKOT"};
GLbyte dept[100]={"Department of Computer Science"};
GLbyte sub[100]={"SUBJECT:Computer Graphics and Visualization Lab (UCS614L)"};
GLbyte title[100]={"TITLE"};
GLbyte ti[100]={"Demonstration of"};
GLbyte ti1[100]={"Binary Tree Traversal"};
GLbyte batch[100]={"Batch No.A11"};
GLbyte n0[50]={"Team Members:"};
GLbyte n1[50]={"1) Santosh Goudar"};
GLbyte n2[20]={"2) Srushti Khot"};
GLbyte n3[50]={"3) Mohammedsaad Patel"};
GLbyte n4[50]={"4) Sanket Revadigar"};
GLbyte guide[200]={"GUIDE: Prof S.N Benkikeri"};
GLbyte date[200]={"Date:25/2/19"};

GLbyte inorder1[200]={"INORDER TRAVERSAL"};
GLbyte preorder[200]={"PREORDER TRAVERSAL"};
GLbyte postorder[200]={"POSTORDER TRAVERSAL"};
GLbyte order[200]={"ORDER OF TRAVERSAL"};


GLbyte choice[200]={"SELECT THE DESIRED TRAVERSAL METHOD FOR TREE"};
GLbyte key[200]={"KEYPRESS TRAVERSAL"};
GLbyte animation[200]={"ANIMATION"};
GLbyte sel1[200]={"Press F1 for Description Page"};
GLbyte sel2[200]={"Press F2 for Traversal Method page"};
GLbyte sel3[200]={"Press F3 for Traversal Type Page"};

//details of tree
GLbyte det[100]={"Details of Tree"};
GLbyte att0[100]={"** Depth of Tree is--3"};
GLbyte att1[100]={"--> Unvisited nodes"};
GLbyte att2[100]={"--> Visited nodes"};
GLbyte att3[100]={"--> Visited path"};
GLbyte att5[100]={"--> Unvisited path"};
GLbyte att4[100]={"--> Pointer"};
GLbyte att6[100]={"Press 1 to 7 for Traversal"};
GLbyte att7[100]={"Press 0 to Reset"};
GLbyte att8[100]={"Nodes"};
GLbyte att9[100]={"Path"};

void init()
{
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(00,1350,00,700);
}

   	
void stipple()
{
	GLint x1=30,y1=490,x2=1340,y2=490;
	glEnable(GL_LINE_STIPPLE);
	glColor3f(1,1,0);
	glLineWidth(3);
	glLineStipple(1,0x00FF);
	glBegin(GL_LINES);
	glColor3f(1,0,0);
	glVertex2i(x1,y1);
	glColor3f(0,0,1);
	glVertex2i(x2,y2);

	y1=340;
	y2=340;
    glColor3f(1,0,0);
	glVertex2i(x1,y1);
	glColor3f(0,0,1);
	glVertex2i(x2,y2);
	glEnd();
	glDisable(GL_LINE_STIPPLE);
	glFlush();
}
void bac()
{
		glColor3f(1,1,1);
		glRecti(30,610,90,640);
		GLint x=40,m;
		GLint y=620;
		glColor3f(0,0,0);
		for(m=0;m<4;m++)
    	{
    		glRasterPos2i(x,y);
    		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,bk[m]);
    		x=x+10;
		}
}
void putpixel(int x,int y)
{
    glPointSize(2);
    glColor3f(0,1,1);
    glBegin(GL_POINTS);
    glVertex2i(xc+x,yc+y);
    glVertex2i(xc-x,yc+y);
    glVertex2i(xc+x,yc-y);
    glVertex2i(xc-x,yc-y);
    glVertex2i(xc+y,yc+x);
    glVertex2i(xc-y,yc+x);
    glVertex2i(xc-y,yc-x);
    glVertex2i(xc+y,yc-x);
    glEnd();
}

void putpixel1(int x,int y)///ADDED
{
    glPointSize(2);
    glColor3f(0,0,1);
    glBegin(GL_POINTS);
    glVertex2i(xc+x,yc+y);
    glVertex2i(xc-x,yc+y);
    glVertex2i(xc+x,yc-y);
    glVertex2i(xc-x,yc-y);
    glVertex2i(xc+y,yc+x);
    glVertex2i(xc-y,yc+x);
    glVertex2i(xc-y,yc-x);
    glVertex2i(xc+y,yc-x);
    glEnd();
}
void circle1()///ADDED
{
    int x=0,y=r,p;
    p=1-r;
    putpixel(x,y);
    while(x<y)
    {
        if(p<0)
        {
            p=p+2*x+3;
            putpixel1(x++,y);
        }
        else
        {
            p=p+2*(x-y)+5;
            putpixel1(x++,y--);
        }
    }
}
void circle()
{
    int x=0,y=r,p;
    p=1-r;
    putpixel(x,y);
    while(x<y)
    {
        if(p<0)
        {
            p=p+2*x+3;
            putpixel(x++,y);
        }
        else
        {
            p=p+2*(x-y)+5;
            putpixel(x++,y--);
        }
    }
}

void llinne()
{
	glColor3f(1,1,0);
	glBegin(GL_LINES);
                   glVertex2i(750,10);
                   glVertex2i(750,690);
                   glEnd();
}

void hometime()
{
	for(i=0;i<1;i++)
	{
		win1();
		if(h1<100)
		{
			h1+=1;
		}
		if(h1>=99 && h2<1050)
		{
			h2+=10;
		}
		if(h2>=820 && h3<=200)
		{
			h3+=10;
		}
		if(h3>=200 && h4<800)
		{
			h4+=10;
		}
		if(h4>=800 && h5<920)
		{
			h5+=10;
		}
		if(h5>=240 && h6<680)
		{
			h6+=10;
		}
		if(h6>=680 && h7<320)
		{
			h7+=10;
		}
		if(h7>=320 && h8<300)
		{
			h8+=10;
		}
		if(h8>=300 && h9<400)
		{
			h9+=10;
		}
		if(h9>=400 && h10<180)
		{
			h10+=10;
		}
		if(h10>=180 && h11<400)
		{
			h11+=10;
		}
		if(h11>=400 && h12<120)
		{
			h12+=10;
		}
		if(h12>=120 && h13<200)
		{
			h13+=10;
		}
	}
}

void win1()
{

   if(d0)
	{
	glutTimerFunc(1000/60,hometime,0);
	glClear(GL_COLOR_BUFFER_BIT);
	GLint x=340,m;
	GLint y=650;
	glColor3f(1,1,1);
	glRasterPos2i(x,750-h1);
	for(m=0;m<45;m++)
    {
    	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,clg[m]);
    	x=x+15;
	}

	glBegin(GL_LINES);
	glColor3f(1,0,0);
	glVertex2i(320,640);
	glColor3f(0,0,1);
	glVertex2i(960,640);
    glEnd();


    glColor3f(1,1,1);
	x=425;
    y=600;
    glRasterPos2i(1510-h2,y);
	for(m=0;m<50;m++)
    {
    	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,dept[m]);
    	x=x+15;
	}

	glColor3f(1,0,0);
	glBegin(GL_LINES);
	glVertex2i(450,590);
	glColor3f(0,0,1);
	glVertex2i(800,590);
    glEnd();

    glColor3f(1,1,1);
	x=210;
    y=520;
    glRasterPos2i(x,725-h3);
	for(m=0;m<60;m++)
    {
    	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,sub[m]);
    	x=x+15;
	}

	glColor3f(1,1,1);
	x=600;
    y=460;
    glRasterPos2i(1400-h4,y);
	for(m=0;m<60;m++)
    {
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,title[m]);
    	x=x+16;
	}
	glBegin(GL_LINES);
	glColor3f(1,0,1);
	glVertex2i(595,455);
	glColor3f(1,0,0);	
	glVertex2i(663,455);
    glEnd();
	glColor3f(0,1,1);
	glRasterPos2i(1400-h5,y);
	glRecti(1400-h5,350,1790-h5,445);
	glColor3f(0,0,0);
	x=529;
    y=415;
	for(m=0;m<60;m++)
    {
		glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,ti[m]);
    	x=x+15;
	}
    x=500;
    y=380;
	for(m=0;m<60;m++)
    {
		glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,ti1[m]);
    	x=x+15;
	}
	
	glColor3f(1,1,1);
	x=1000;
    y=300;
    glRasterPos2i(1400-h7,y);
	for(m=0;m<60;m++)
    {
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,batch[m]);
    	x=x+15;
	}

	x=50;
    y=300;
    glRasterPos2i(-250+h8,y);
	for(m=0;m<60;m++)
    {
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,n0[m]);
    	x=x+15;
	}
	x=140;
    y=260;
    glRasterPos2i(-250+h9,y);
	for(m=0;m<60;m++)
    {
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,n1[m]);
    	x=x+15;
	}

	x=140;
    y=220;
    glRasterPos2i(-250+h9,y);
	for(m=0;m<20;m++)
    {
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,n2[m]);
    	x=x+15;
	}

	x=140;
    y=180;
    glRasterPos2i(-250+h9,y);
	for(m=0;m<22;m++)
    {
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,n3[m]);
    	x=x+15;
	}

	x=140;
    y=140;
    glRasterPos2i(-250+h9,y);
	for(m=0;m<22;m++)
    {
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,n4[m]);
    	x=x+15;
	}
	
	x=50;
    y=70;
    glRasterPos2i(x,-100+h10);
	for(m=0;m<20;m++)
    {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,date[m]);
    	x=x+15;
	}
	
	x=1100;
    y=70;
    glRasterPos2i(x,-100+h10);
	for(m=0;m<30;m++)
    {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,guide[m]);
    	x=x+15;
	}
	stipple();
	glFlush();
	}
	glutSwapBuffers();
	
	
}
void win2()
{
	x=550;
	y=600;
	glColor3f(1,1,1);
	for(m=0;m<11;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,dec[m]);//Description window 2//
    	x=x+16;
	}
	glLineWidth(2);
	glBegin(GL_LINES);
	glVertex2i(550,590);
	glVertex2i(720,590);
	glEnd();
	glFlush();		
	GLint x=30,m;
	GLint y=400;
	glColor3f(0,1,1);
	for(m=0;m<1000;m++)
    {
		glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,f1[m]);
    	x=x+15;
	}
	glFlush();
	x=30;
	y=375;
	for(m=0;m<1000;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,f2[m]);
   		x=x+15;
	}
	glFlush();
	//sleep(1);
	x=30;
	y=350;
	for(m=0;m<1000;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,f3[m]);
    	x=x+15;
	}
	glFlush();
	///sleep(1);
	x=30;
	y=332;
	for(m=0;m<1000;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,f4[m]);
    	x=x+15;
	}
	glFlush();
	//sleep(1);
	x=30;
	y=315;
	for(m=0;m<1000;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,f5[m]);
    	x=x+15;
	}
	glFlush();
//	sleep(1);
	x=30;
	y=295;
	for(m=0;m<1000;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,f6[m]);
    	x=x+15;
	}
	glFlush();
//	sleep(1);
	x=30;
	y=275;
	for(m=0;m<1000;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,f7[m]);
    	x=x+15;
	}
	glFlush();
//	sleep(1);
	x=30;
	y=255;
	for(m=0;m<1000;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,f8[m]);
    	x=x+15;
	}
	glFlush();
//	sleep(1);
	x=30;
	y=235;
	for(m=0;m<1000;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,f9[m]);
    	x=x+15;
	}
	glFlush();
//	sleep(1);
	x=30;
	y=215;
	for(m=0;m<1000;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,f10[m]);
    	x=x+15;
	}
	glFlush();
//	sleep(1);
	x=30;
	y=195;
	for(m=0;m<1000;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,f11[m]);
    	x=x+15;
	}
	glFlush();
	sleep(1);
	glColor3f(1,1,1);
	glRecti(1150,610,1230,640);
	x=1157;
	y=618;
	glColor3f(0,0,0);
	for(m=0;m<4;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,n[m]);
    	x=x+16;
	}
	glFlush();
	sleep(1);
	
      glLineWidth(1);
	glBegin(GL_LINES);
	glVertex2i(548,590);
	glVertex2i(732,590);
	glEnd();



	glFlush();
}
void fun1()
{
    xc=350;										//root node
    yc=600;
    circle();
    glColor3f(128,128,0);
    glRasterPos2i(xc-5,yc-5);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'6');
  
}
void fun2()
{
    xc=220;									//left node
    yc=500;
    circle();
    glColor3f(128,128,0);
    glRasterPos2i(xc-5,yc-5);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'4');
   
}
void fun3()
{
    xc=120;									//left 2 node
    yc=400;
    circle();
    glColor3f(128,128,0);
    glRasterPos2i(xc-5,yc-5);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'3');
   
   }
void fun4()
{
    xc=320;									//right 2 node
    yc=400;
    circle();
    glColor3f(128,128,0);
    glRasterPos2i(xc-5,yc-5);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'5');
  //glutSwapBuffers();
  }
void fun5()
{
    xc=380;									//right left 2 node
    yc=400;
    circle();
    glColor3f(128,128,0);
    glRasterPos2i(xc-5,yc-5);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'7');
   //glutSwapBuffers();
}

void fun6()
{
    xc=580;									//right roight node
    yc=400;
    circle();
    glColor3f(128,128,0);
    glRasterPos2i(xc-5,yc-5);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'9');

    //glutSwapBuffers();
}
void fun7()
{
    xc=480;									//right node
    yc=500;
    circle();
    glColor3f(128,128,0);
    glRasterPos2i(xc-5,yc-5);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'8');
}

void fu1()///ADDED
{

    xc=350;										//root node
    yc=600;
    circle1();
    glColor3f(128,128,0);
    glRasterPos2i(xc-5,yc-5);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'6');
    glLineWidth(3);
    glColor3f(0,1,0);
    glBegin(GL_LINES);
    	glVertex2i(350,575);
    glVertex2i(220,525);
    glEnd();
}
void fu2()///ADDED
{
    xc=220;									//left node
    yc=500;
    circle1();
    glColor3f(128,128,0);
    glRasterPos2i(xc-5,yc-5);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'4');
}
 void fu3()///ADDED
   {
        int  x,y,m,n=250;
    xc=120;									//left 2 node
    yc=400;
    circle1();
    glColor3f(1,1,0);
    glRasterPos2i(xc-5,yc-5);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'3');
     glColor3f(0,1,0);
     glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(220,475);
	glVertex2i(120,425);
	glEnd();
   }
   void fu4()///ADDED
  {
    xc=320;									//right 2 node
    yc=400;
    circle1();
    glColor3f(128,128,0);
    glRasterPos2i(xc-5,yc-5);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'5');
    glColor3f(0,1,0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(220,475);
    glVertex2i(320,425);
    glEnd();
  }
      void fu5()///ADDED
{
    xc=380;									//right left 2 node
    yc=400;
    circle1();
    glColor3f(128,128,0);
    glRasterPos2i(xc-5,yc-5);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'7');

}

void fu6()///ADDED
{
    xc=580;									//right roight node
    yc=400;
    circle1();
    glColor3f(128,128,0);

    glRasterPos2i(xc-5,yc-5);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'9');
     glLineWidth(3);
    glColor3f(0,1,0);
    glBegin(GL_LINES);
        glVertex2i(480,475);
    glVertex2i(580,425);
    glEnd();
}
void fu7()///ADDED
{
    xc=480;									//right node
    yc=500;
    circle1();
    glColor3f(128,128,0);
    glRasterPos2i(xc-5,yc-5);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'8');
    glLineWidth(3);
    glColor3f(0,1,0);
    glBegin(GL_LINES);
	glVertex2i(350,575);
    glVertex2i(220,525);
    glVertex2i(220,475);
	glVertex2i(120,425);
    glVertex2i(220,475);
    glVertex2i(320,425);
    glVertex2i(350,575);
    glVertex2i(480,525);
    glVertex2i(480,475);
    glVertex2i(380,425);

    glEnd();

}


void in()
{
	fun1();
	fun2();
	fun3();
	fun4();
	fun5();
	fun6();
	fun7();
    glColor3f(0,206,209);
    glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2i(350,575);
    glVertex2i(220,525);
    glVertex2i(220,475);
	glVertex2i(120,425);
    glVertex2i(220,475);
    glVertex2i(320,425);
    glVertex2i(350,575);
    glVertex2i(480,525);
    glVertex2i(480,475);
    glVertex2i(380,425);
    glVertex2i(480,475);
    glVertex2i(580,425);
    glEnd();
    //glFlush();
}

int px,py;
 int qx=0,qy=0;
void translate()
{
	
    in();
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,0,0);
	glPointSize(8);
	glBegin(GL_POINTS);
	glVertex2i(px+qx,py+qy);
	glEnd();
	in();
   glFlush();
   Sleep(100);
}



void win3()
{
    glColor3f(1,1,1);
	glRecti(275,275,575,375);
    glRasterPos2i(300,500);
    for(m=0;choice[m]!='\0';m++)
    {
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,choice[m]);
	}
	glBegin(GL_LINES);
	glVertex2i(300,495);
	glVertex2i(950,495);
	glEnd();
	
	glColor3f(1,1,1);
	glRecti(275,275,575,375);
	x=290,y=320;
    glColor3f(0,0,1);
    glRasterPos2i(x,y);
    for(m=0;key[m]!='\0';m++)
    {
	    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,key[m]);
	}
	glBegin(GL_LINES);
	glVertex2i(290,310);
	glVertex2i(510,310);
	glEnd();
	
	glColor3f(1,1,1);
	glRecti(675,275,975,375);
	x=730,y=320;
    glColor3f(0,0,1);
    glRasterPos2i(x,y);
    for(m=0;animation[m]!='\0';m++)
    {
    	
	    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,animation[m]);
       //	x=x+15;
	}
	glBegin(GL_LINES);
	glVertex2i(730,310);
	glVertex2i(850,310);
	glEnd();
	
	glLineWidth(3);
	glColor3f(0,0,1);
	glBegin(GL_LINES);
	glVertex2i(620,495);
	glVertex2i(425,375);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(620,495);
	glVertex2i(810,375);
	glEnd();
	glFlush();	
}
void win4()
{
	int  x=250,y=280,m,n=250,key=1;
    glColor3f(1,0,0);
    for(m=0;m<11;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,def[m]);
    x=x+20;
    }
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(240,270);
    glVertex2i(470,270);
    glEnd();

      x=250,y=670,m,n=250;
    glColor3f(1,0,0);
    for(m=0;m<11;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,t[m]);
    x=x+20;
    }
    x=15,y=240,m,n=250;
    glColor3f(1,0,0);
    for(m=0;m<11;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,t[m]);
    x=x+13;
    }
      for(m=0;m<1300;m++)
    {   glColor3f(0,1,1);
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,def1[m]);
    x=x+13;
    }
    x=169;y=220;
       for(m=0;m<1300;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,def2[m]);
    x=x+13;
    }
      x=15;y=170;
    for(m=0;m<8;m++)
    {
        glColor3f(1,0,0);
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,a[m]);
    x=x+13;
    }

    for(m=0;m<1300;m++)
    {
        glColor3f(0,1,1);
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,def3[m]);
    x=x+13;
    }
        x=15;y=120;
    for(m=0;m<8;m++)
    {
        glColor3f(1,0,0);
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,b[m]);
    x=x+13;
    }

    for(m=0;m<1300;m++)
    {
        glColor3f(0,1,1);
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,def4[m]);
    x=x+13;
    }
      x=15;y=70;
    for(m=0;m<8;m++)
    {
        glColor3f(1,0,0);
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,c[m]);
    x=x+13;
    }

    for(m=0;m<1300;m++)
    {
        glColor3f(0,1,1);
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,def5[m]);
    x=x+13;
    }
    glBegin(GL_LINES);
    glVertex2i(250,660);
    glVertex2i(450,660);
    glEnd();
    
    x=850;
    y=650;
    glColor3f(1,0,0);
    for(m=0;m<11;m++)
    {
	    glRasterPos2i(x,y);
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,d[m]);
	    x=x+20;
    }
	in();
    glColor3f(1,1,1);
	glRecti(900,550,1050,600);
	glColor3f(0,0,0);
    glRasterPos2i(120,120);
    x=910;
	y=565;
    for(m=0;m<7;m++)
    {
	    glRasterPos2i(x,y);
	    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,a[m]);
	    x=x+15;
    }
    glColor3f(1,1,1);
	glRecti(900,450,1050,500);
	glColor3f(0,0,0);
    glRasterPos2i(120,120);
    x=910;
	y=465;
    for(m=0;m<8;m++)
    {
	    glRasterPos2i(x,y);
	    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,b[m]);
	    x=x+15;
    }
    glColor3f(1,1,1);
	glRecti(900,350,1050,400);
	glColor3f(0,0,0);
    glRasterPos2i(120,120);
    x=910;
	y=365;
    for(m=0;m<9;m++)
    {
	    glRasterPos2i(x,y);
	    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,c[m]);
	    x=x+15;
    }
    glFlush();
	
}

void animinorder()
{
   		px=0;
   		py=0;
   		qx=0;
   		qy=0;
   		{
   		glFlush();
		in();
		//animation
    	
    	px=120,py=425;
    	if(px<220&&py<475)
		{
			
		
    	for(i=1;i<12;i++)
    	{
			
			translate();
			qx=qx+8;
			qy=qy+5;
			
		}
		}
	    
		if(px>220&&py>475)
        
			px=220,py=475;
			for(i=1;i<10;i++)
    	{			
			translate();
			qx=qx+12;
			qy=qy-5;
			
		}
    
        
	if(px>320&&py>425)
		
			px=320,py=425;
			for(i=1;i<23;i++)
    	{			
			translate();
			qx=qx+1;
			qy=qy+7;
			
		}
		
	if(px>320&&py>425)
		
			px=375,py=575;
			for(i=1;i<27;i++)
    	{			
			translate();
			qx=qx+1;
			qy=qy-6;
			
		}
		
		if(px>375&&py>430)
		
			px=375,py=425;
			for(i=1;i<10;i++)
    	{			
			translate();
			qx=qx+12;
			qy=qy+7;
			
		}
		
		if(px>580&&py>425)
		
			px=580,py=425;
			for(i=1;i<18;i++)
    	{			
			translate();
			qx=qx+7;
			qy=qy-5;
			
		}
		glFlush();
		glutSwapBuffers();
		 glColor3f(1,1,0);
		x=200;
		y=200;
		glRasterPos2i(x,y);
	    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,1);
	    x=201,y=670;
    glColor3f(1,0,0);
    for(m=0;m<30;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,inorder1[m]);
        x=x+20;
    }
    x=180,y=150;
    glColor3f(1,0,0);
    for(m=0;m<30;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,inorder[m]);
        x=x+20;
    }
    
    llinne();
    details();
   // bac();
	px=350,py=575;
	//translate();	
	}
	//ai=0;
	glFlush();
	//
	 //px=0,py=0;
}

void animpreorder()
{
	    px=0;
   		py=0;
   		qx=0;
   		qy=0;
   		glFlush();
    	glClear(GL_COLOR_BUFFER_BIT);
		in();
		px=350,py=575;
		if(px>220&&py>525)
		for(i=1;i<12.5;i++)
    	{			
			translate();
			qx=qx-9;
			qy=qy-5;
			
		}
		if(px<220&&py<475)
		px=220,py=525;
		for(i=1;i<20;i++)
    	{			
			translate();
			qx=qx-6;
			qy=qy-5;
			
		}
		
		
		if(px<320&&py==400)
		px=120,py=400;
		for(i=1;i<21;i++)
    	{			
			translate();
			qx=qx+10;
			//qy=qy-5;
			
		}
	
	
		if(px<480&&py==475)
		px=320,py=425;
		for(i=1;i<18;i++)
    	{			
			translate();
			qx=qx+10;
			qy=qy+5;
			
		}	
		
		
		if(px<480&&py<475)
		px=480,py=475;
		for(i=1;i<17;i++)
    	{			
			translate();
			qx=qx-8;
			qy=qy-5;
			
		}
		
		if(px<580&&py==400)
		px=380,py=425;
		for(i=1;i<20.5;i++)
    	{			
			translate();
			qx=qx+11;
			//qy=qy-5;
			
		}
		
		
		x=180,y=150;
    glColor3f(1,0,0);
    for(m=0;m<30;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,pre[m]);
        x=x+20;
    }
		glColor3f(1,1,0);
		x=200;
		y=670;
      	
    	glColor3f(1,0,0);
    for(m=0;m<30;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,preorder[m]);
        x=x+20;
    }
    	llinne();
    	details();
    	//bac();
    	glFlush();
}

void animpostorder()
{
		px=0;
   		py=0;
   		qx=0;
   		qy=0;
   		glFlush();
   		glClear(GL_COLOR_BUFFER_BIT);
		in();
		
		px=120,py=400;
		if(px<320&&py==400)
		for(i=1;i<26.5;i++)
    	{			
			translate();
			qx=qx+8;
		//	qy=qy-5;
			
		}
		
		if(px>320&&py>425)
		px=320,py=425;
		for(i=1;i<22;i++)
    	{			
			translate();
			qx=qx-6;
			qy=qy+5;
			
		}
		
		if(px>380&&py>425)
		px=220,py=475;
		for(i=1;i<22;i++)
    	{			
			translate();
			qx=qx+9;
			qy=qy-5;
			
		}
		
		if(px>380&&py==400)
		px=380,py=425;
		for(i=1;i<25;i++)
    	{			
			translate();
			qx=qx+8;
			//qy=qy+5;
			
		}
		
		if(px>580&&py>400)
		px=580,py=425;
		for(i=1;i<20;i++)
    	{			
			translate();
			qx=qx-6;
			qy=qy+6;
			
		}
		
		if(px>480&&py>525)
		px=480,py=500;
		for(i=1;i<20;i++)
    	{			
			translate();
			qx=qx-8;
			qy=qy+5;
			
		}
		x=180,y=150;
		for(m=0;m<20;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,post[m]);
        x=x+20;
    }	
		glColor3f(1,1,0);
		x=200;
		y=670;
   glColor3f(1,0,0);
    for(m=0;m<30;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,postorder[m]);
        x=x+20;
    }
    	llinne();
    	details();
    	//bac();
        glFlush(); 	
}


void oneseven()
{
	    x=120;
		y=90;
    	glColor3f(1,0,0);
        for(m=0;m<30;m++)
       {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,att6[m]);
        x=x+20;
       }
}
void win5()
{
	glClear(GL_COLOR_BUFFER_BIT);
	if(w5==1)
	{
     	win4();
    if(flag==1)
	{
    	 if(interactive==1)
   		 {
    	glClear(GL_COLOR_BUFFER_BIT);
		in();
		 glColor3f(1,1,0);
		x=200;
		y=200;
		glRasterPos2i(x,y);
	    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,1);
	    x=201,y=670;
    	glColor3f(0,0,1);
    	for(m=0;m<30;m++)
    	{
    		glRasterPos2i(x,y);
    		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,inorder1[m]);
       		 x=x+20;
   		 }
   		 glLineWidth(2);
    glBegin(GL_LINES);
	glVertex2i(201,660);
	glVertex2i(520,660);
	glEnd();
   		 
    	details();
    	llinne();
    	oneseven();
    //	bac();
    	glFlush();
   	}
   	int ai=1;
   	if(anim==1)
   	{
   		if(ainorder==1)
   			animinorder();
   		ainorder=0;	
   }
}
 px=0,py=0;  	
 if(flag==2)
{
    if(interactive==1)
 {
    	glClear(GL_COLOR_BUFFER_BIT);
		in();
		glColor3f(1,1,0);
		x=200;
		y=670;
    	glColor3f(0,0,1);
        for(m=0;m<30;m++)
       {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,preorder[m]);
        x=x+20;
       }
       glBegin(GL_LINES);
	glVertex2i(200,660);
	glVertex2i(550,660);
	glEnd();
       
    	llinne();
    	details();
    	oneseven();
    	
    //	bac();
    	glFlush();
 }
    
    if(anim==1)
    {
    	if(ainorder==2)
   			animpreorder();
   		ainorder=0;
	}
}

if(flag==3)
{
   if(interactive==1)
  {
		
    	glClear(GL_COLOR_BUFFER_BIT);
		in();
		glColor3f(1,1,0);
		x=200;
		y=670;
   glColor3f(0,0,1);
    for(m=0;m<30;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,postorder[m]);
        x=x+20;
    }
    glBegin(GL_LINES);
	glVertex2i(200,660);
	glVertex2i(570,660);
	glEnd();
	
    	llinne();
    	details();
    //	bac();
        oneseven();
    	glFlush();
   }
   	if(anim==1)
   	{
   		if(ainorder==3)
   			animpostorder();
   		ainorder=0;	
	}
}
glFlush();
}
}

void details()
{
	
	                int x=800,y=670,m;
                   glColor3f(0,0,1);
                   
                   for(m=0;m<=20;m++)
                	{
					glRasterPos2i(x,y);
					   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,det[m]);
                	x=x+15;
					}
					glBegin(GL_LINES);
	               glVertex2i(800,660);
	               glVertex2i(1050,660);
					glEnd();
                	
                   x=800,y=560;
                   glColor3f(1,1,0);
				    for(m=0;m<=30;m++)
                   	{glRasterPos2i(x,y);
					   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,att0[m]);
                	x=x+15;}
                	
                	xc=810,yc=510;
                   circle();
                	x=860,y=510;
                   glColor3f(1,1,0);
				    for(m=0;m<=30;m++)
                   	{glRasterPos2i(x,y);
					   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,att1[m]);
                	x=x+15;}
                	
                	xc=810,yc=440;
                   circle1();
                	x=860,y=440;
                   glColor3f(1,1,0);
				    for(m=0;m<=30;m++)
                   	{glRasterPos2i(x,y);
					   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,att2[m]);
                	x=x+15;}
                	
                	x=860,y=360;
				    for(m=0;m<=30;m++)
                   	{glRasterPos2i(x,y);
					   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,att5[m]);
                	x=x+15;}
                	glColor3f(0,1,1);
                	glLineWidth(2);
                	glBegin(GL_LINES);
                	glVertex2i(800,360);
                	glVertex2i(840,360);
                	glEnd();
                	
                	x=860,y=230;
                   glColor3f(1,1,0);
				    for(m=0;m<=30;m++)
                   	{glRasterPos2i(x,y);
					   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,att4[m]);
                	x=x+15;}glColor3f(1,0,0);
					glPointSize(10);
					glBegin(GL_POINTS);
					glVertex2i(820,235);
					glEnd();
	
                	x=860,y=290;
                   glColor3f(1,1,0);
				    for(m=0;m<=30;m++)
                   	{glRasterPos2i(x,y);
					   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,att3[m]);
                	x=x+15;}
                	glColor3f(0,1,0);
                	glLineWidth(2);
                	glBegin(GL_LINES);
                	glVertex2i(800,290);
                	glVertex2i(840,290);
                	glEnd();
                	
                	x=800,y=170;
                   glColor3f(1,1,0);
				    for(m=0;m<=100;m++)
                   	{glRasterPos2i(x,y);
					   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,sel1[m]);
                	x=x+15;}
                	
                	x=800,y=130;
                   glColor3f(1,1,0);
				    for(m=0;m<=100;m++)
                   	{glRasterPos2i(x,y);
					   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,sel2[m]);
                	x=x+15;}
                	
                	x=800,y=90;
                   glColor3f(1,1,0);
				    for(m=0;m<=100;m++)
                   	{glRasterPos2i(x,y);
					   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,sel3[m]);
                	x=x+15;}
                	
}
int g=1;
void keypress(GLubyte k,GLint x,GLint y)
{		
    	
		
		x=201,y=670;
        if(flag==1)
        {
    glColor3f(1,0,0);
    for(m=0;m<30;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,inorder1[m]);
        x=x+20;
    }
    //tras();
    details();
        switch(k)
        {
            case '1':in();
                      fu3();

                  int  x=200,y=180;
                   glColor3f(1,1,0);
                    glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'3');
                   x=x+10;
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'>');
                   llinne();
                      x=180;
   			 		y=230;
   			 		glColor3f(1,0,0);
    					for(m=0;m<30;m++)
    					{
    					glRasterPos2i(x,y);
    					glutBitmapCharacter(GLUT_BITMAP_9_BY_15,order[m]);
        				x=x+20;
    					}
    					    					glLineWidth(3);
    				glColor3f(1,1,0);
    				glBegin(GL_LINES);
    				glVertex2i(180,220);
    				glVertex2i(535,220);
    				glEnd();
                   break;

          case '2': fu2();
                      x=225,y=180;
                   glColor3f(1,1,0);
                    glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'4');
                     x=x+10;
                     glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'>');
                     llinne();
                   break;


          case '3': fu4();
                        x=250,y=180;
                   glColor3f(1,1,0);
                   glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'5');
                     x=x+10;
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'>');
                   llinne();
                   break;



          case '4': fu1();
                          x=275,y=180;
                   glColor3f(1,1,0);
                   glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'6');
                     x=x+10;
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'>');
                   llinne();
                   break;

          case '5': fu5();
                            x=300,y=180;
                   glColor3f(1,1,0);
                   glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'7');
                     x=x+10;
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'>');
					llinne();
                   break;

          case '6': fu7();
                            x=325,y=180;
                   glColor3f(1,1,0);
                   glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'8');
                     x=x+10;
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'>');
                   llinne();
                   break;

          case '7': fu6();
                    x=350,y=180;
                   glColor3f(1,1,0);
                   glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'9');
                   llinne();
                  // bac();
                   //glLineWidth(5);
				   
                   

                	
                	
				   break;
                   
           case'0':
               glClear(GL_COLOR_BUFFER_BIT);
                       glutPostRedisplay();
                   break;
        }
        }
        if(flag==2)
        {
        	
        	glColor3f(1,0,0);
    for(m=0;m<30;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,preorder[m]);
        x=x+20;
    }
    details();
        switch(k)
        {
            case '1':in();
                        fu1();

                  int  x=200,y=180;
                   glColor3f(1,1,0);
                    glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'6');
                   x=x+10;
                     glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'>');
                     llinne();
                     x=180;
   			 		y=230;
   			 		glColor3f(1,0,0);
    					for(m=0;m<30;m++)
    					{
    					glRasterPos2i(x,y);
    					glutBitmapCharacter(GLUT_BITMAP_9_BY_15,order[m]);
        				x=x+20;
    					}
    					glLineWidth(3);
    				glColor3f(1,1,0);
    				glBegin(GL_LINES);
    				glVertex2i(180,220);
    				glVertex2i(535,220);
    				glEnd();
                     
                   break;

          case '2': fu2();
                      x=225,y=180;
                   glColor3f(1,1,0);
                    glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'4');
                     x=x+10;
                     glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'>');
                     //llinne();
                   break;


          case '3': fu3();
                        x=250,y=180;
                   glColor3f(1,1,0);
                   glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'3');
                     x=x+10;
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'>');
                   llinne();
                   break;



          case '4': fu4();
                          x=275,y=180;
                   glColor3f(1,1,0);
                   glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'5');
                     x=x+10;
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'>');
                   llinne();
                   break;

          case '5': fu7();
                            x=300,y=180;
                   glColor3f(1,1,0);
                   glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'8');
                     x=x+10;
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'>');
                   llinne();

                   break;

          case '6': fu5();
                            x=325,y=180;
                   glColor3f(1,1,0);
                   glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'7');
                     x=x+10;
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'>');
                   llinne();
                   break;

          case '7': fu6();
                    x=350,y=180;
                   glColor3f(1,1,0);
                   glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'9');
                   glLineWidth(5);
				   glBegin(GL_LINES);
                   glVertex2i(750,10);
                   glVertex2i(750,690);
                   glEnd();
                   x=800,y=670;
                   glColor3f(1,0,0);
                   
                   for(m=0;m<=20;m++)
                   	{glRasterPos2i(x,y);
					   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,det[m]);
                	x=x+15;}
                	
                   x=800,y=560;
                   glColor3f(1,1,0);
				    for(m=0;m<=30;m++)
                   	{glRasterPos2i(x,y);
					   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,att0[m]);
                	x=x+15;}
                	llinne();
                	//bac();
                //details();

                   break;
           case'0':
               glClear(GL_COLOR_BUFFER_BIT);
                       glutPostRedisplay();
                   break;
        }

        }
         if(flag==3)
         {
         	
         	glColor3f(1,0,0);
    for(m=0;m<30;m++)
    {
    	glRasterPos2i(x,y);
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,postorder[m]);
        x=x+20;
    }
    details();
               switch(k)
        {
            case '1':in();
                        fu3();

                  int  x=200,y=180;
                   glColor3f(1,1,0);
                    glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'3');
                   x=x+10;
                     glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'>');
                     llinne();
                       x=180;
   			 		y=230;
   			 		glColor3f(1,0,0);
    					for(m=0;m<30;m++)
    					{
    					glRasterPos2i(x,y);
    					glutBitmapCharacter(GLUT_BITMAP_9_BY_15,order[m]);
        				x=x+20;
    					}
    					    					glLineWidth(3);
    				glColor3f(1,1,0);
    				glBegin(GL_LINES);
    				glVertex2i(180,220);
    				glVertex2i(535,220);
    				glEnd();
                   break;

          case '2': fu4();
                      x=225,y=180;
                   glColor3f(1,1,0);
                    glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'5');
                     x=x+10;
                     glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'>');
                   break;


          case '3': fu2();
                        x=250,y=180;
                   glColor3f(1,1,0);
                   glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'4');
                     x=x+10;
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'>');
                   break;



          case '4': fu5();
                          x=275,y=180;
                   glColor3f(1,1,0);
                   glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'7');
                     x=x+10;
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'>');
                   break;

          case '5': fu6();
                            x=300,y=180;
                   glColor3f(1,1,0);
                   glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'9');
                     x=x+10;
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'>');

                   break;

          case '6': fu7();
                            x=325,y=180;
                   glColor3f(1,1,0);
                   glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'8');
                     x=x+10;
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'>');
                   break;

          case '7': fu1();
                    x=350,y=180;
                   glColor3f(1,1,0);
                   glRasterPos2i(x,y);
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'6');
                   glLineWidth(5);
				   glBegin(GL_LINES);
                   glVertex2i(750,10);
                   glVertex2i(750,690);
                   glEnd();
                   x=800,y=670;
                   glColor3f(1,0,0);
                   
                   for(m=0;m<=20;m++)
                   	{glRasterPos2i(x,y);
					   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,det[m]);
                	x=x+15;}
                	
                   x=800,y=560;
                   glColor3f(1,1,0);
				    for(m=0;m<=30;m++)
                   	{glRasterPos2i(x,y);
					   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,att0[m]);
                	x=x+15;}
                //	bac();
                	
                	                   details();

                   break;
           case'0':
               glClear(GL_COLOR_BUFFER_BIT);
                     glutPostRedisplay();
                   break;
        }
         }


     glFlush();
    }

void fkeys(GLint k,GLint x,GLint y)
{
	printf("%d\n",k);
	switch(k)
	{
		case GLUT_KEY_F1:
		glClear(GL_COLOR_BUFFER_BIT);
		win2();
		break;
		case GLUT_KEY_F2:
		glClear(GL_COLOR_BUFFER_BIT);
		flag=0;
		interactive=0;
		anim=0;
		win3();
		break;
		case GLUT_KEY_F3:
		glClear(GL_COLOR_BUFFER_BIT);
		win4();
		break;
	}
	
}

void draw(GLint b,GLint a,GLint x,GLint y)
{
				printf("\n%d *%d",x,700-y);

	if(b==GLUT_LEFT_BUTTON && a==GLUT_DOWN)
	{

     if((x>450 && x<855) && (y>700-525 && y<700-350))
		{
			h=1;
			d0=0;
		}

		if((x>1143 && x<1235) && (y>700-643 && y<700-610))
		{
			cyl=1;
		}
		
		
		if((x>894 && x<1052) && (y>700-605 && y<700-552))
		{
			flag=1;
			ainorder=1;			
		}
		if((x>894 && x<1052) && (y>700-503&& y<700-452))
		{
			flag=2;
			ainorder=2;
		}
		if((x>894 && x<1052) && (y>700-404 && y<700-351))
		{
			flag=3;
			ainorder=3;
		}
		if((x>44 && x<129) && (y>700-639 && y<700-609))
		{
			flag=4;
		}
		if((x>275 && x<575) && (y>700-375 && y<700-275))
		{
			printf("interactive\n");
			anim=0;
			w5=1;
			interactive=1;
			
		}
		
		if((x>675 && x<975) && (y>700-375 && y<700-275))
		{
			printf("anims\n");
			interactive=0;
			w5=1;
			anim=1;
			
		}
}
	else
	if(b==GLUT_RIGHT_BUTTON)
	exit(0);
	glFlush();

}


void display()
{
	if(g==1)
	win1();
	g=0;

  if(h==1)
  {
  	glClear(GL_COLOR_BUFFER_BIT);
  	win2();
  }
  h=0;

	glClear(GL_COLOR_BUFFER_BIT);
    if(cyl==1)
    {
        glClear(GL_COLOR_BUFFER_BIT);
        
      	win3();
    }
	glClear(GL_COLOR_BUFFER_BIT);
	if(flag==4)
    {
    	glClear(GL_COLOR_BUFFER_BIT);
		win3();
	}
	if(w5==1)
    {
    	glClear(GL_COLOR_BUFFER_BIT);
      	win5();
    }
}

int main(int argc,char* argv[])
{
	glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1356,695);
	glutInitWindowPosition(0,0);
	glutCreateWindow("BINARY TREE");
	glutMouseFunc(draw);
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(keypress);
	glutSpecialFunc(fkeys);
	glutMainLoop();
}

