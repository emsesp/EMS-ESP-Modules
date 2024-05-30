#ifndef MODULELIBRARY_H
#define MODULELIBRARY_H

#include <Arduino.h>

#include <memory>
#include <vector>

#include <emsesp.h>

class ModuleLibrary {
  public:
    class Modules {
      public:
        Modules(const char * name, std::unique_ptr<Module> module)
            : name(name)
            , module(std::move(module)) {
        }
        const char *            name;
        std::unique_ptr<Module> module;
    };

    void start(emsesp::EMSESP *);
    void loop();
    void list(JsonObject output);

    void enable(const char * name, bool enable);

  private:
    std::vector<Modules>     modules_;
    static uuid::log::Logger logger_;
};

#endif
