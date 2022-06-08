//
//  first_app.hpp
//  vulkanraytracer
//
//  Created by Hersh Banthiya on 2022-06-08.
//
#pragma once


#include "Lve_window.hpp"
#include "Lve_pipeline.hpp"
namespace lve{
class FirstApp
{
public:
    static constexpr int WIDTH  = 800;
    static constexpr int HEIGHT = 600;
    void run();
private:
    LveWindow lveWindow{WIDTH, HEIGHT, "Hello Vulkan!"};
    LvePipeline lvePipeline{"shaders/simple_shader.vert.spv", "shaders/simple_shader.frag.spv"};

};
} /* first_app_h */
