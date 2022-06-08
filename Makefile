

GLFW_LIB = /opt/homebrew/Cellar/glfw/3.3.7/lib
VULKAN_SDK_PATH = /Users/sheeed/VulkanSDK/1.3.211.0/macOS
CFLAGS = -std=c++17 -I. -I$(VULKAN_SDK_PATH)/include
LDFLAGS = -L $(GLFW_LIB)/pkgconfig `pkg-config --static --libs glfw3` -lvulkan

a.out: *.cpp *.hpp
	g++ $(CFLAGS) -o a.out *.cpp $(LDFLAGS)

.PHONY : test clean 

test : a.out 
	./a.out 

clean: 
	rm -f a.out
