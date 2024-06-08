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
        Modules(const char * key, std::unique_ptr<Module> module)
            : key(key)
            , module(std::move(module)) {
        }
        const char *            key; // internal key for the module
        std::unique_ptr<Module> module;
    };

    void start(emsesp::EMSESP * emsesp_main, bool test_mode = false);
    void loop();
    void list(JsonObject output);
    bool enable(const char * key, const char * license, bool enable);

  private:
    std::vector<Modules>     modules_;
    std::string              mac_address_;
    static uuid::log::Logger logger_;
};

#endif
