#include "Airplane.h"
#include <string>

Airplane::Airplane(std::string name, int id)
{
    this->name = name;
    this->id = id;
}

int Airplane::getBaggageWeight()
{
    int totalWeight = 0;
    for (int i = 0; i < this->components.size(); i++)
    {
        totalWeight += components[i]->getBaggageWeight();
    }
    return totalWeight;
}

void Airplane::output()
{
    std::cout << "Airplane: " << this->name << " " << this->id << std::endl;
    if (this->components.size() == 0)
        std::cout << "No comonents in airplane"<<std::endl;
    for (int i = 0; i < this->components.size(); i++)
    {
        components[i]->output();
    }
}

void Airplane::removeOverload(int* weightToRemove)
{

    for (int i = 0; i < this->components.size(); i++)
    {
        if (*weightToRemove > 0)
        {
            components[i]->removeOverload(weightToRemove);
        }
        else
        {
            break;
        }
    }
}

void Airplane::addComponent(FlightComponent* component)
{
    components.push_back(component);
}