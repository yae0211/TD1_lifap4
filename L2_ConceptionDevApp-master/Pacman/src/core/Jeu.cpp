#include "Jeu.h"

Jeu::Jeu () : ter(), pac(), fan() {
	ter.mangePastille(pac.getX(),pac.getY());
}

// Terrain& Jeu::getTerrain () { return ter; }

// Pacman& Jeu::getPacman () {	return pac; }



bool Jeu::actionClavier (const char touche) {
	switch(touche) {
		case 'g' :
				pac.gauche(ter);
				break;
		case 'd' :
				pac.droite(ter);
				break;
		case 'h' :
				pac.haut(ter);
				break;
		case 'b' :
				pac.bas(ter);
				break;
	}
	if (ter.getXY(pac.getX(),pac.getY())=='.') {
	    ter.mangePastille(pac.getX(),pac.getY());
        return true;
	}
	return false;
}

void Jeu::actionsAutomatiques () {
    //fan.versPacman(ter,pac);
    fan.bougeAuto(ter);
}
