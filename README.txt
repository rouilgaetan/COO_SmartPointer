Bonjour ou bonsoir si vous lisez ça le soir.

Ce projet a été fait sur Eclipse et avec cppunit pour les tests unitaires.

La documentation a été générée en format HTML avec le plugin Eclox qui implémente doxygen pour Eclipse.

Ce projet consiste à manipuler des objets sans explicitement manipuler la mémoire. Le concept était un peu dur à comprendre
mais une fois compris le projet était bien et la conception finalement assez simple.

Compilation:

Ouvrez le projet sous Eclipse ou utiliser le makefile présent dans le fichier debug.
 
Explication des classes :

COOObject :
	Classe racine de tous les objets, qui sauvegarde le nombre de référence sur une instance de l'objet.
	Elle implémente toString qui permet un affichage de l'id de l'objet ainsi que de son type concret.
	L'id est récupérer par la fonction hashCode qui renvoie une version long de l'adresse de l'objet.
	
cooref<>:
	Patron de classe qui permet de faire une référence sur un COOObject.
	La classe implémente les opérateurs =, +, - ainsi que l'opérateur flèche qui retourne l'objet en attribut de façon
	à pouvoir appeler les méthodes de l'objet.
	La fonction write est appelé par la surcharge de l'opérateur << et qui va afficher les valeurs des objets pointés.
	
COOComplex :
	Classe héritant de COOObject.
	Classe exemple ne gérant pas des complexes mais des doubles. Implémente les opérateurs + et - de façon à ce qu'ils
	soient appelés dans les opérateurs de cooref.
	

COOString :
	Classe héritant de COOObject.
	Classe très simple ayant comme attribut un seul std::string. Implémente l'opérateur + pour les COOString, appelé par 
	les opérateurs de cooref. 


