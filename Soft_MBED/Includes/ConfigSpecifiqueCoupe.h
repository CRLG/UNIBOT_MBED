/*! \file ConfigSpecifiqueCoupe.h
	\brief Déclare
*/
#ifndef _CONFIG_SPECIFIQUE_COUPE 
#define _CONFIG_SPECIFIQUE_COUPE

#include "CMoteurs.h"
#include "CServoMoteurSD20.h"

//CHOIX DE L'EQUIPE
//#define BRICK_AND_STEEL
#define THALBOT

#ifdef THALBOT
// ------------------------------
// Affectation des sorties moteurs
typedef enum {
   MOTEUR_ROUE_GAUCHE = 1,
   MOTEUR_ROUE_DROITE,  // MOTEUR_2
   MOTEUR_CHARIOT, 	// MOTEUR_3
   MOTEUR_MOELDAR, 	// MOTEUR_4
   MOTEUR_NON_DEFINI_2, 	    // MOTEUR_5
   MOTEUR_NON_DEFINI_3,    // MOTEUR_6
   MOTEUR_ELECTROVANNE  // MOTEUR_7-> Moteur piloté en ON/OFF (sans PWM)
}eATTRIBUTION_MOTEURS;

// Affectation des codeurs de position
typedef enum {
   CODEUR_NON_DEFINI  =   1,
   CODEUR_CHARIOT,    // CODEUR_2
   CODEUR_ROUE_DROITE,  // CODEUR_3
   CODEUR_ROUE_GAUCHE   // CODEUR_4

}eATTRIBUTION_CODEURS;

//! cet enumere contient les numeros d'attribution des servos SD20 pour 2014
typedef enum {
	SERVO_VENTOUSE=13,
	SERVO_CENTREUR_G,
	SERVO_CENTREUR_D,
	SERVO_PINCE_D,
	SERVO_PINCE_G,
	SERVO_BALLE,
	SERVO_RECOLTEURS,
	SERVO_VOLET
} eATTRIBUTION_SERVOS_SD20;

//! cet enumere contient les numeros d'attribution des servos AX pour 2014
typedef enum {
	SERVO_KMAR_ROTATION=0,
	SERVO_KMAR_BRAS,
    SERVO_AX_TOUS = 0xFE
} eATTRIBUTION_SERVOS_AX;


// ------------------------------									
#elif defined BRICK_AND_STEEL
// ------------------------------
// Affectation des sorties moteurs
typedef enum {
   MOTEUR_ROUE_GAUCHE = 1,
   MOTEUR_ROUE_DROITE,  // MOTEUR_2
   MOTEUR_CHARIOT, 	// MOTEUR_3
   MOTEUR_MOELDAR, 	// MOTEUR_4
   MOTEUR_NON_DEFINI_2, 	    // MOTEUR_5
   MOTEUR_NON_DEFINI_3,    // MOTEUR_6
   MOTEUR_ELECTROVANNE  // MOTEUR_7-> Moteur piloté en ON/OFF (sans PWM)
}eATTRIBUTION_MOTEURS;

// Affectation des codeurs de position
typedef enum {
   CODEUR_NON_DEFINI  =   1,
   CODEUR_CHARIOT,    // CODEUR_2
   CODEUR_ROUE_DROITE,  // CODEUR_3
   CODEUR_ROUE_GAUCHE   // CODEUR_4

}eATTRIBUTION_CODEURS;

//! cet enumere contient les numeros d'attribution des servos SD20 pour 2014
typedef enum {
	SERVO_VENTOUSE=13,
	SERVO_CENTREUR_G,
	SERVO_CENTREUR_D,
	SERVO_PINCE_D,
	SERVO_PINCE_G,
	SERVO_BALLE,
	SERVO_RECOLTEURS,
	SERVO_VOLET
} eATTRIBUTION_SERVOS_SD20;

//! cet enumere contient les numeros d'attribution des servos AX pour 2014
typedef enum {
	SERVO_KMAR_ROTATION=0,
	SERVO_KMAR_BRAS,
    SERVO_AX_TOUS = 0xFE
} eATTRIBUTION_SERVOS_AX;


// ------------------------------
#endif


#endif // _CONFIG_SPECIFIQUE_COUPE


