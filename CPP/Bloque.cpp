
#include "../H/Bloque.h"
#include "../H/Object.h"

Bloque::Bloque():Object(){
<<<<<<< HEAD
	scaleG={1.f*tamanio_pixeles/cant_pixeles,1.f*tamanio_pixeles/cant_pixeles};
=======
	scaleG={6,6};
>>>>>>> 4e482defa54763e1e363dd7b5aa0a6e312fb7aeb
	spr.setScale(scaleG);
}

void Bloque::Update(int i){
	spr.move(-i,0);
	positionG.x+=speedG.x*-i;
<<<<<<< HEAD
	///Esto de abajo lo deberia hacer la plataforma preseteada
	if(positionG.x<=-1*resolutionG.x){
=======
	if(positionG.x<=-16*scaleG.x){
>>>>>>> 4e482defa54763e1e363dd7b5aa0a6e312fb7aeb
		spr.setPosition(resolutionG.x,positionG.y);
		positionG.x=resolutionG.x;
	}
}
<<<<<<< HEAD
void Bloque::Init(string name,int i,int j){ 
	tex.loadFromFile(name);
	spr.setTexture(tex);
	positionG={i*tamanio_pixeles*1.f,j*tamanio_pixeles*1.f};
	spr.setPosition(positionG);
}
void Bloque::Init(Texture & textu,int i,int j){ 
	tex = textu;
	spr.setTexture(tex);
	positionG={i*tamanio_pixeles*1.f,j*tamanio_pixeles*1.f};
	spr.setPosition(positionG);
=======
void Bloque::Init(string name,int i,int Pl){ 
	
	tex.loadFromFile(name);
	spr.setTexture(tex);
	positionG={i*144,500};
	spr.setPosition(positionG);

		
>>>>>>> 4e482defa54763e1e363dd7b5aa0a6e312fb7aeb
}
