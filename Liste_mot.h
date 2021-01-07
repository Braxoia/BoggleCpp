#pragma once

#pragma warning(disable:4996)

#include "constantes.h" // + type Mot

struct Liste_mot {
    Mot* tab; ///< Tableau de mots
    unsigned int inserted; ///< Nombre de mots entré
    unsigned int capacite; ///< Capacité maximale du tableau
    unsigned int coef_extension_defaut = 10; ///< Contient le coefficient d'extension qui sera utilisé 4 fois
    unsigned int coef_extension_grooos = 4; ///< Contient le coefficient d'extension qui sera utilisé à 5eme extension
};

/*
*  @brief Initialise une liste de mots avec une capacité et
*  un coefficient d'extension
*
*  @param[in-out] liste_mot la liste qui sera initialisée
*/
void initialiser(Liste_mot& liste_mot);

/*
*  @brief Ajoute un mot dans une liste de mots
*
*  @param[out] liste_mot liste où sera contenu le nouveau mot
*  @paramin] buffer a ajouté dans la liste
*/
void ajouter(Liste_mot& liste_mot, Mot buffer);

/*
*  @brief Affiche une liste de mots
*
*  @param[in] liste_mot la liste qui sera affichée
*/
void afficher(const Liste_mot& liste_mot);
