#include<string>

class Fruto {
private:
    std::string nombre;
    std::string color;
    double peso;

public:
    // Constructor por defecto
    Fruto() {
        nombre = "";
        color = "";
        peso = 0.0;
    }

    // Constructor con parámetros
    Fruto(std::string nombre, std::string color, double peso) {
        this->nombre = nombre;
        this->color = color;
        this->peso = peso;
    }

    // Getter para obtener el nombre del fruto
    std::string getNombre() {
        return nombre;
    }

    // Setter para establecer el nombre del fruto
    void setNombre(std::string nombre) {
        this->nombre = nombre;
    }

    // Getter para obtener el color del fruto
    std::string getColor() {
        return color;
    }

    // Setter para establecer el color del fruto
    void setColor(std::string color) {
        this->color = color;
    }

    // Getter para obtener el peso del fruto
    double getPeso() {
        return peso;
    }

    // Setter para establecer el peso del fruto
    void setPeso(double peso) {
        this->peso = peso;
    }
};