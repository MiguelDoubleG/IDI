#version 330 core

in vec3 fcolor;
out vec4 FragColor;
uniform vec2 size;

void main() {
    FragColor = vec4(fcolor,1.);
}

