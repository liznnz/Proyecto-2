#include <string>

class Planta {
public:
    Planta(std::string nombre, int edad) : nombre(nombre), edad(edad) {}

    // Getters
    std::string getNombre() const { return nombre; }
    int getEdad() const { return edad; }

    // Setters
    void setNombre(std::string nuevoNombre) { nombre = nuevoNombre; }
    void setEdad(int nuevaEdad) { edad = nuevaEdad; }

    void mostrarInformacion() {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << " años" << std::endl;
    }

private:
    std::string nombre;
    int edad;
};

class Flor : public Planta {
public:
    Flor(std::string nombre, int edad, std::string color) : Planta(nombre, edad), color(color) {}

    // Getter
    std::string getColor() const { return color; }

    // Setter
    void setColor(std::string nuevoColor) { color = nuevoColor; }

    void mostrarInformacion() {
        Planta::mostrarInformacion();
        std::cout << "Color de flor: " << color << std::endl;
    }

private:
    std::string color;
};