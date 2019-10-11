#version 120

varying vec2 texCoord0;

uniform sampler2D diffuseTex;

varying out vec4 diffuseColor;

void main()
{
	diffuseColor = texture2D(diffuseTex, texCoord0);
}