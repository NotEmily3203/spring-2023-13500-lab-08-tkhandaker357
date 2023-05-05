#pragma once

#include <iostream>
#include <string>
#include "imageio.h"

int invertValue(int value);
void invertImageColor(std::string imageName);
void invertRightHalf(std::string imageName);
void addWhiteBox(std::string imageName);
void addBoxFrame(std::string imageName);
void scaleTwice(std::string imageName);
void pixelate(std::string imageName);
