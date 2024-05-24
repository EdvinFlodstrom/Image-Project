#pragma once

#include <Windows.h>
#include <utility>

constexpr const UINT MOUSE_LEFT_EVENT = MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP;
constexpr const UINT MOUSE_RIGHT_EVENT = MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP;

bool moveCursor(int xPos, int yPos);

void simulateMouseClick(UINT mouseEvent);

bool moveCursorAndSimulateClick(UINT mouseEvent, int xPos, int yPos);

std::pair<int, int> getCursorPos();