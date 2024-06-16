#include <bits/stdc++.h>

using namespace std;

#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

set<unsigned long> color({0xffc0c0,0xffffc0,0xc0ffc0,0xc0ffff,0xffc0ff,0xff0000,0xffff00,0x00ff00,0x00ffff,0x0000ff,0xff00ff,0xc00000,0xc0c000,0x00c000,0x00c0c0,0x0000c0,0xc000c0,0xffffff,0x000000});


unsigned long rgb(int r, int g, int b){
	return ((r&0xff)<<16) + ((g&0xff)<<8) +(b&0xff);}

int main(){__
	long long height, width;cin>>height>>width;
	if(height <=0 || width <= 0){cout<<"the image is too big!"; return 0;}
	unsigned long img[width][height];
	for(long long j=0; j<height;j++) for (long long i=0; i<width;i++){
		int r,g,b;cin>>r>>g>>b;
		img[i][j]=rgb(r,g,b);
		if(color.find(img[i][j])==color.end()){cout<<"piet does not recognize the color "<< hex << img[i][j] <<" at x= "<< i<< " y= " << j<<endl;return 0;}}
return 0;}

