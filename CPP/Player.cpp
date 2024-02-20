#include "../H/Player.h"
#include <string>
#include <iostream>
using namespace std;

Player::Player():Object() {
	
	///Cambio de variables
<<<<<<< HEAD
	positionG = {resolutionG.x*0.4, resolutionG.y*0.5};
	scaleG={resolutionG.x*0.0003,resolutionG.x*0.0003};
	
	///Modificacion del spr
	spr.setPosition(resolutionG.x*0.4, resolutionG.y*0.5);
=======
	positionG = {resolutionG.x*0.2, resolutionG.y*0.5};
	scaleG={resolutionG.x*0.0003,resolutionG.x*0.0003};
	
	///Modificacion del spr
	spr.setPosition(positionG);
>>>>>>> 4e482defa54763e1e363dd7b5aa0a6e312fb7aeb
	spr.setScale(scaleG);

	
}

void Player::Update(bool on_Air,bool collide_With_wall_left,bool collide_With_wall_right){
<<<<<<< HEAD

	if(!on_Air){ //Si no esta en el aire...
		jump_clock.restart(); // El reloj de salto se resetea
		jumping_Animation=false; // Se apaga la animacion de salto
		on_Air_Falling=false; // No esta activada la caida 
		on_Air_Jumping=false; // No esta activado el salto 
		 //La plataforma traslada al jugador
		///speedG = worldspeed; //La plataforma traslada al jugador
	
		
=======
	
	if(!on_Air){ //Si no esta en el aire...
		jump_clock.restart(); // El reloj de salto se resetea
		jumping_Animation=false; // Se apaga la animacion de salto
		on_Air_Falling=false; // No esta activada la caida 
		on_Air_Jumping=false; // No esta activado el salto 
		speedG.x=-3; //La plataforma traslada al jugador
		positionG.x+=speedG.x;
>>>>>>> 4e482defa54763e1e363dd7b5aa0a6e312fb7aeb
	}
	
	if(on_Air&&!on_Air_Jumping){ //Si esta en el aire pero no esta saltando
		jumping_Animation=true; //Activo la animacion de salto/caida
		on_Air_Falling=true; // Esta cayendo
		speedG.y=+5; // Velocidad de caida
<<<<<<< HEAD
	
	} 
	if(r1.top>1090){
		spr.setPosition(resolutionG.x*0.4, resolutionG.y*0.5);
	}
	if (jump_clock.getElapsedTime().asMilliseconds()>=500||!Keyboard::isKeyPressed(Keyboard::Up)&&!Keyboard::isKeyPressed(Keyboard::W)&&!Keyboard::isKeyPressed(Keyboard::Space)&&on_Air){ //Si paso el tiempo O si no fueron apretadas las tecla de salto en el aire...
		on_Air_Falling=true; //Se activa la caida
		on_Air_Jumping=false; //Se apaga la animacion de salto
	}
=======
		positionG.y+=speedG.y;
	} 

	if (jump_clock.getElapsedTime().asMilliseconds()>=500||!Keyboard::isKeyPressed(Keyboard::Up)&&!Keyboard::isKeyPressed(Keyboard::W)&&!Keyboard::isKeyPressed(Keyboard::Space)&&on_Air){ //Si paso el tiempo O si no fueron apretadas las tecla de salto en el aire...
		on_Air_Falling=true; //Se activa la caida
		on_Air_Jumping=false; //Se apaga la animacion de salto
	}
>>>>>>> 4e482defa54763e1e363dd7b5aa0a6e312fb7aeb

	if (!on_Air_Falling&&(Keyboard::isKeyPressed(Keyboard::Up)||Keyboard::isKeyPressed(Keyboard::W)||Keyboard::isKeyPressed(Keyboard::Space))){ // Si no esta cayendo y se apreto la tecla de salto...
		jumping_Animation=true; // Se activa la animacion de salto
		on_Air_Jumping=true;// Se activa el salto
		speedG.y=-10;// Velocidad de salto
<<<<<<< HEAD
		Idle=false;
	
	}	

	if ((Keyboard::isKeyPressed(Keyboard::Right)||Keyboard::isKeyPressed(Keyboard::D))&&positionG.x<1650&&!collide_With_wall_right){
		
		speedG.x=10; //Velocidad de movimiento
		scaleG.x=resolutionG.x*0.0003; //Se espeja el sprite
		spr.setPosition(r1.left,r1.top); //Se arregla el error del espejo
		walking_animation= true;// Se activa la animacion de movimiento
		Idle=false;
		
=======
		positionG.y+=speedG.y;
	}	

	if ((Keyboard::isKeyPressed(Keyboard::Right)||Keyboard::isKeyPressed(Keyboard::D))&&positionG.x<1650&&!collide_With_wall_right){
		
		speedG.x=10; //Velocidad de movimiento
		positionG.x+=speedG.x; //Se guarda posicion
		scaleG.x=resolutionG.x*0.0003; //Se espeja el sprite
		spr.setPosition(positionG); //Se arregla el error del espejo
		walking_animation= true;// Se activa la animacion de movimiento
	}

	if ((Keyboard::isKeyPressed(Keyboard::Left)||Keyboard::isKeyPressed(Keyboard::A))&&!collide_With_wall_left){	
		speedG.x=-10;//Velocidad de movimiento
		positionG.x+=speedG.x;//Se guarda posicion
		scaleG.x=resolutionG.x*-0.0003;//Se espeja el sprite
		spr.setPosition(positionG.x-r1.width,positionG.y);//Se arregla el error del espejo
		walking_animation= true;// Se activa la animacion de movimiento
	}
	if(collide_With_wall_right){
		speedG.x=3;
		positionG.x+=speedG.x;
	}if(collide_With_wall_left){
		speedG.x=-3;
		positionG.x+=speedG.x;
>>>>>>> 4e482defa54763e1e363dd7b5aa0a6e312fb7aeb
	}

	if ((Keyboard::isKeyPressed(Keyboard::Left)||Keyboard::isKeyPressed(Keyboard::A))&&!collide_With_wall_left){	
		//Velocidad de movimiento
		scaleG.x=resolutionG.x*-0.0003;//Se espeja el sprite
		spr.setPosition(r1.left+r1.width,r1.top);//Se arregla el error del espejo
		walking_animation= true;// Se activa la animacion de movimiento
		Idle=false;
		
	}
	if(collide_With_wall_right){
		speedG.x=3;
	
<<<<<<< HEAD
	}if(collide_With_wall_left){
		speedG.x=-3;

	}
	int aux=0;
	if(Idle){
		aux=-2;
		
	}
	Idle=true;
	tex.loadFromFile(Animation());
	spr.setTexture(tex);
	spr.setScale(scaleG);
	spr.move(aux,speedG.y);
	
	r1= spr.getGlobalBounds();
	//speedG = worldspeed; /// la velocidad por defecto es la velocidad del mundo
	
=======
	tex.loadFromFile(Animation());
	spr.setTexture(tex);
	spr.setScale(scaleG);
	spr.move(speedG);
	speedG={0.0,0.0};
>>>>>>> 4e482defa54763e1e363dd7b5aa0a6e312fb7aeb
	
}
string Player::Animation(){
	number_Animation+=1;
	if(number_Animation>20||(number_Animation>8&&jumping_Animation)){
		number_Animation=1;
	}
	if(jumping_Animation){
		Name1="./Textures/J";
	}else{
		if(walking_animation){
			Name1="./Textures/Walk";
			walking_animation = false;
			
		}else{
			Name1="./Textures/";
		}
	}
	string Name2=to_string(number_Animation);
	string Name3=".png";
	return Name1+Name2+Name3;
}
Vector2f Player::getVelocity(){
	Vector2f aux =speedG; 
	speedG={0.0,0.0}; 
	return aux;}
