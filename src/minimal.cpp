#include "openvr.h"
#pragma comment(lib, "openvr_api.lib")

#include <stdio.h>

using namespace vr;

int main()
{
    printf("VR_IsRuntimeInstalled: %d\n", VR_IsRuntimeInstalled());
    printf("VR_IsHmdPresent: %d\n", VR_IsHmdPresent());
    EVRInitError error;
    printf("VR_Init: %p\n", VR_Init(&error, VRApplication_Scene));
    printf("VR_Init error: %d (%s)\n", error, VR_GetVRInitErrorAsSymbol(error));
    return 0;
}