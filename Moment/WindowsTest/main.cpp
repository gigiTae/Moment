#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용을 Windows 헤더에서 제외합니다.

#include <windows.h>

#include "../Common/WindowManager.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)
{

	common::WindowManager ws;
	ws.Initialize(500, 500, L"Test");
	while (ws.BeginLoof())
	{
		ImGui::Begin("Test");
		ImGui::End();

		ws.EndLoof();
	}
	ws.Finalize();

	return 0;
}