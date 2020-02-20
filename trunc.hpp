#ifndef __TRUNC_HPP__
#define __TRUNC_HPP__

#include <string>
#include <math.h>

#include "decorator.hpp"
#include "base.hpp"

class Ceil : public Decorator {
public:
    /* Constructors */
    Ceil(Base* b) { function = b; }
    
    /* Pure Virtual Functions */
    virtual double evaluate() {}
    
    virtual std::string stringify() {
        return std::to_string(trunc(function->evaluate()));
    }
    
    
private:
    Base* function;
};

#endif //__CEIL_HPP__



