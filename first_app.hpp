//
//  first_app.hpp
//  vulkanraytracer
//
//  Created by Hersh Banthiya on 2022-06-08.
//
#pragma once


#include "Lve_window.hpp"

namespace lve{
class FirstApp
{
public:
    static constexpr int WIDTH  = 800;
    static constexpr int HEIGHT = 600;
    void run();
private:
    LveWindow lveWindow{WIDTH, HEIGHT, "Hello Vulkan!"};

};
} /* first_app_h */
