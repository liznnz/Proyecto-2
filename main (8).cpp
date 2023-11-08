
#include <iostream>
#include <string>
#include "arbol.h"
#include "planta.h"
#include "fruto.h"


int main(){
  Arbol arbol_1("abeto", 4, 60, 8);
  std::cout << "\nInformación del Árbol:" << std::endl;
  arbol_1.mostrarInformacion();
  Planta planta("Planta genérica", 5);
  Flor flor("Rosa", 2, "Rojo");
  std::cout << "\nInformación de la Planta:" << std::endl;
  planta.mostrarInformacion();
  std::cout << "\nInformación de la Flor:" << std::endl;
  flor.mostrarInformacion();
  Fruto manzana("Manzana", "Roja", 0.2);
  std::cout << "\nInformación del fruto:" << std::endl;
  std::cout << "Nombre: " << manzana.getNombre() << std::endl;
  std::cout << "Color: " << manzana.getColor() << std::endl;
  std::cout << "Peso: " << manzana.getPeso() << " kg" << std::endl;
  return 0;
}