#ifndef MODULELIBRARY_H
#define MODULELIBRARY_H

#include <Arduino.h>
#include <memory>
#include <vector>

class Module {}; // forward declaration

class ModuleLibrary {
  public:
    void setup();
    void loop();
    void status();

  private:
    std::vector<std::unique_ptr<Module>> modules;
};

#endif
