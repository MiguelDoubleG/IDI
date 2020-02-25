#version 330 core

out vec4 FragColor;
uniform vec2 size;

void main() {
    FragColor = vec4(1.);
    if(gl_FragCoord.x < size.x/2)
    { 
        if(gl_FragCoord.y>size.y/2)
        {
            FragColor = vec4(1.,0.,0.,1);
        }
        if(gl_FragCoord.y<size.y/2)
        {
            FragColor = vec4(1.,1.,0.,1);
        }
    }
    else
    {
        if(gl_FragCoord.y>size.y/2)
        {
            FragColor = vec4(0.,0.,1.,1);
        }
        if(gl_FragCoord.y<size.y/2)
        {
            FragColor = vec4(0.,1.,0.,1);
        }
    }
    if(int(gl_FragCoord.y) %20 < 10)
        discard;
}

