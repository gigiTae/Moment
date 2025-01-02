#define WIN32_LEAN_AND_MEAN             // ���� ������ �ʴ� ������ Windows ������� �����մϴ�.

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