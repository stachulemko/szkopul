#include <iostream>
#include <windows.h>
#include <bluetoothapis.h>
#pragma comment(lib, "Bthprops.lib")

int main() {
    // Inicjalizacja biblioteki COM
    HRESULT result = CoInitialize(nullptr);
    if (FAILED(result)) {
        std::cerr << "Błąd podczas inicjalizacji biblioteki COM: " << result << std::endl;
        return 1;
    }

    // Inicjalizacja struktury SEARCH_PARAMS
    BLUETOOTH_DEVICE_SEARCH_PARAMS searchParams = { sizeof(BLUETOOTH_DEVICE_SEARCH_PARAMS) };
    searchParams.dwSize = sizeof(BLUETOOTH_DEVICE_SEARCH_PARAMS);
    searchParams.fReturnAuthenticated = TRUE;
    searchParams.fReturnRemembered = TRUE;
    searchParams.fReturnConnected = TRUE;
    searchParams.fReturnUnknown = TRUE;
    searchParams.fIssueInquiry = TRUE;
    searchParams.cTimeoutMultiplier = 4;
    searchParams.hRadio = nullptr;

    // Wyszukaj urządzenia Bluetooth
    BLUETOOTH_DEVICE_INFO deviceInfo = { sizeof(BLUETOOTH_DEVICE_INFO) };
    deviceInfo.dwSize = sizeof(BLUETOOTH_DEVICE_INFO);

    HANDLE hFind = BluetoothFindFirstDevice(&searchParams, &deviceInfo);
    if (hFind != nullptr) {
        do {
            std::wcout << L"Znaleziono urządzenie Bluetooth: " << deviceInfo.szName << std::endl;
            // Dodatkowe informacje o urządzeniu można uzyskać z struktury deviceInfo

        } while (BluetoothFindNextDevice(hFind, &deviceInfo));
        BluetoothFindDeviceClose(hFind);
    }
    else {
        std::cerr << "Nie znaleziono urządzeń Bluetooth." << std::endl;
    }

    // Zamknij połączenie z biblioteką COM
    CoUninitialize();

    return 0;
}
