#include "MouseInteraction.h"
#include "Windows.h"

bool moveCursor(int xPos, int yPos) {
	return SetCursorPos(xPos, yPos);
}

void simulateMouseClick(UINT mouseEvent) {
	mouse_event(mouseEvent, 0, 0, 0, 0);
}
bool moveCursorAndSimulateClick(UINT mouseEvent, int xPos, int yPos) {
	if (!SetCursorPos(xPos, yPos))
		return false;

	mouse_event(mouseEvent, 0, 0, 0, 0);
	return true;
}

std::pair<int, int> getCursorPos() {
	POINT cursorPosition{};
	return GetCursorPos(&cursorPosition) ? std::make_pair(cursorPosition.x, cursorPosition.y) : std::make_pair((long) - 1, (long) - 1);
}