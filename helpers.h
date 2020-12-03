#pragma once

#include "conteneurs.h"

unsigned int mots_vers_pts(const char* mot);
void ajouter(Liste_mot& liste_mot, Mot buffer);
void swap(Mot mot1, Mot mot2);
void initialiser(Liste_mot& liste_mot);
void trier(Liste_mot& liste_mot);
void afficher(Liste_mot& liste_mot);
bool exister(Liste_mot& liste_mot, Mot mot_test);




/**
 * @brief
 * @see https://fr.wikipedia.org/wiki/Tri_%C3%A0_bulles
 * @pre
 *
*/#pragma once