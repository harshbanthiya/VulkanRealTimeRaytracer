//
//  first_app.hpp
//  vulkanraytracer
//
//  Created by Hersh Banthiya on 2022-06-08.
//
#pragma once


#include "Lve_window.hpp"
#include "Lve_pipeline.hpp"
#include "Lve_device.hpp"
namespace lve{
class FirstApp
{
public:
    static constexpr int WIDTH  = 800;
    static constexpr int HEIGHT = 600;
    void run();
private:
    LveWindow lveWindow{WIDTH, HEIGHT, "Hello Vulkan!"};
    LveDevice lveDevice{lveWindow};
    LvePipeline lvePipeline{lveDevice, "shaders/simple_shader.vert.spv", "shaders/simple_shader.frag.spv", LvePipeline::defaultPipelineConfigInfo(WIDTH, HEIGHT)};

};
} /* first_app_h */
