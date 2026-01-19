# Push_swap

## Description
**Push_swap** est un projet d'algorithmique dont l'objectif est de trier une pile de nombres entiers en utilisant un ensemble limité d'instructions, et ce, avec le plus petit nombre d'opérations possible.

Le projet repose sur deux piles, **A** et **B** :
* **Pile A** : Contient initialement une liste de nombres non triés.
* **Pile B** : Vide au départ, elle sert de zone de stockage temporaire pour faciliter le tri.

Le but est d'afficher une suite d'instructions (`sa`, `pb`, `ra`, etc.) qui aboutit à une Pile A parfaitement triée par ordre croissant, tout en vidant la Pile B. Ce projet permet d'appréhender la complexité algorithmique et de choisir la stratégie de tri la plus adaptée (Tri par insertion, Radix, ou algorithmes plus complexes comme le "Turk Algorithm").

---

## Instructions

### Compilation
Le projet est écrit en **C** et inclut un `Makefile` pour automatiser la compilation. Pour générer l'exécutable, utilisez la commande suivante à la racine du dépôt :

```bash
make

# Exemple avec des nombres séparés par des espaces
./push_swap 42 1 3 21 5

# Exemple avec une chaîne de caractères
ARG="3 0 9 2 -1"; ./push_swap $ARG

ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l

ARG="3 2 1"; ./push_swap $ARG | ./checker_linux $ARG
