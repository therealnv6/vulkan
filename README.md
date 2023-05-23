
                                           Voxel Engine
                                                |
                                            Vulkan Backend
                    _____________________________________________________
                   |                 |                |                 |
     Vulkan API Wrapper     Validation Layers    Vulkan Runtime   Shader Compiler
                   |                                     |
            Windowing System                        Device Management
                 (GLFW)                                    |
                       ___________________________________|_______________________________
                      |                 |                  |                  |           |
        Physical Device Selection    Logical Device    Memory Management   Command Buffer
                                             Creation                          Management
                                                                                        |
                           _________________________________________|_______________________________
                          |                          |                     |                |
                    Render Passes         Resource Management     Descriptor Sets    Shader Modules
                                                          |
                                                Swap Chain and Presentation
