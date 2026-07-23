// ==WindhawkMod==
// @id              disk-usage-bar-customizer
// @name            Disk Usage Bar Customizer
// @description     Customize everything about the disk usage bar from the This PC section in the File Explorer, including theme-aware colors, height, border and more.
// @version         1.2.0
// @author          Valer100
// @github          https://github.com/Valer100
// @include         explorer.exe
// @compilerOptions -luxtheme -lgdi32 -lgdiplus
// ==/WindhawkMod==


// ==WindhawkModReadme==
/*
# Disk Usage Bar Customizer
Customize everything about the disk usage bar from the This PC section in the File Explorer, including theme-aware colors, height, border, rounded corners and more.


## Customization options
### General
- Show remaining space as progress instead of used space
- Custom warning percentage threshold

### Rendering
- Render using visual styles
- Render using dark mode parts when using visual styles

### Custom rendering
- Use system's accent color for the normal progress color
- Render bar border
- Height factor
- Corner radius factor 
- Percentage label overlay 
- Custom light & dark mode colors


## Screenshots
### Colors adapting to the system's theme
![System colors light mode](https://raw.githubusercontent.com/Valer100/my-windhawk-mods/refs/heads/main/disk-usage-bar-customizer/screenshots/light_mode_default.png)

![System colors dark mode](https://raw.githubusercontent.com/Valer100/my-windhawk-mods/refs/heads/main/disk-usage-bar-customizer/screenshots/dark_mode_default.png)

### Accent color as the normal progress color
![Accent color light mode](https://raw.githubusercontent.com/Valer100/my-windhawk-mods/refs/heads/main/disk-usage-bar-customizer/screenshots/light_mode_accent.png)

![Accent color dark mode](https://raw.githubusercontent.com/Valer100/my-windhawk-mods/refs/heads/main/disk-usage-bar-customizer/screenshots/dark_mode_accent.png)

### Custom colors
![Custom colors](https://raw.githubusercontent.com/Valer100/my-windhawk-mods/refs/heads/main/disk-usage-bar-customizer/screenshots/custom_colors.png)

### No border
![No border](https://raw.githubusercontent.com/Valer100/my-windhawk-mods/refs/heads/main/disk-usage-bar-customizer/screenshots/custom_colors_no_border.png)

### Custom height
![Custom height](https://raw.githubusercontent.com/Valer100/my-windhawk-mods/refs/heads/main/disk-usage-bar-customizer/screenshots/custom_height.png)

### Custom warning threshold
![Custom warning threshold](https://raw.githubusercontent.com/Valer100/my-windhawk-mods/refs/heads/main/disk-usage-bar-customizer/screenshots/custom_warning_threshold.png)

### Show remaining space as progress instead of used space
![Show remaining space as progress instead of used space](https://raw.githubusercontent.com/Valer100/my-windhawk-mods/refs/heads/main/disk-usage-bar-customizer/screenshots/remaining_space_as_progress.png)
*/
// ==/WindhawkModReadme==


// ==WindhawkModSettings==
/*
- general:
  - remainingSpaceAsProgress: false
    $name: Show remaining space as progress instead of used space

  - warningPercentageThreshold: 90
    $name: Warning percentage threshold
    $description: >-
      Use the warning progress color when the warning percentage threshold (in percents) is reached (default: 90%).

  $name: General


- rendering:
  - renderUsingVisualStyles: false
    $name: Render using visual styles
    $description: >-
      Render the usage bar using the parts provided by the theme to match the system's appearance. You won't be able to customize the bar rendering if this option is enabled.

  - darkModeVSRendering: true
    $name: Render using dark mode parts when using visual styles
    $description: >-
      Render the usage bar using the dark mode parts from the "DarkMode_CopyEngine::Progress" class when dark mode is enabled. You must have Windows 11 build 26200.6899 or higher installed and the "Render using visual styles" option enabled for this to work.

  $name: Rendering


- customRendering:
  - useSystemAccentColor: false
    $name: Use system's accent color for the normal progress color
    $description: >-
      Use system's accent color for the normal progress color.

  - renderBarBorder: true
    $name: Render bar border

  - heightFactor: 100
    $name: Height factor
    $description: >-
      A factor that determines the height of the usage bar (in percents; default: 100%). The factor cannot be greater than 100%.

  - cornerRadiusFactor: 0
    $name: Corner radius factor
    $description: >-
      A factor that determines how rounded the bar's corners are (in percents; default: 0%). 0% keeps square corners, 100% results in fully rounded, pill-shaped ends. The progress fill's leading edge stays square until the drive is completely full, matching how the bar's background rounds off.

  - showPercentageLabel: false
    $name: Show percentage label
    $description: >-
      Overlay a percentage label centered on the bar itself.

  - labelMode: used
    $name: Label content
    $description: >-
      Whether the label shows the percentage of used or free space.
    $options:
    - used: Used space
    - free: Free space

  - labelFontSizeFactor: 70
    $name: Label font size factor
    $description: >-
      Font size as a factor of the bar's height (in percents; default: 70%). This is independent of the "Height factor" setting, so the label stays legible even if the bar itself is shrunk thin.


  - lightModeColors:
    - barColor: "#E6E6E6"
      $name: Bar color
      $description: >-
        Hex color code for the empty part of the bar (default: #E6E6E6).
      
    - barBorderColor: "#BCBCBC"
      $name: Bar border color
      $description: >-
        Hex color code for the bar's border (default: #BCBCBC). Not appliable when "Render bar border" is disabled.
      
    - progressColorNormal: "#0070CB"
      $name: Normal progress color
      $description: >-
        Hex color code for the normal disk usage bar progress (default: #0070CB). Not appliable when "Use system's accent color for the normal progress color" is enabled.
      
    - progressColorFull: "#C42B1C"
      $name: Full/Warning progress color
      $description: >-
        Hex color code for the bar progress when a drive is nearly full (default: #C42B1C).

    - labelColor: "#000000"
      $name: Label color
      $description: >-
        Hex color code for the percentage label text in light mode (default: #000000). Only applies when "Show percentage label" is enabled.
  
    $name: Light mode colors
  
  
  - darkModeColors:
    - barColor: "#383838"
      $name: Bar color
      $description: >-
        Hex color code for the empty part of the bar (default: #383838).
      
    - barBorderColor: "#646464"
      $name: Bar border color
      $description: >-
        Hex color code for the bar's border (default: #646464). Not appliable when "Render bar border" is disabled.
      
    - progressColorNormal: "#60CDFF"
      $name: Normal progress color
      $description: >-
        Hex color code for the normal disk usage bar progress (default: #60CDFF). Not appliable when "Use system's accent color for the normal progress color" is enabled.
      
    - progressColorFull: "#FF3D53"
      $name: Full/Warning progress color
      $description: >-
        Hex color code for the bar progress when a drive is nearly full (default: #FF3D53).

    - labelColor: "#FFFFFF"
      $name: Label color
      $description: >-
        Hex color code for the percentage label text in dark mode (default: #FFFFFF). Only applies when "Show percentage label" is enabled.
  
    $name: Dark mode colors

  $name: Custom rendering
  $description: >-
    These options will be ignored when the "Render using visual styles" option is enabled.
*/
// ==/WindhawkModSettings==


#include <windhawk_utils.h>
#include <uxtheme.h>
#include <vsstyle.h>
#include <versionhelpers.h>
#include <gdiplus.h>

using namespace Gdiplus;

// Undocumented functions
using fnGetThemeClass                      = HRESULT(WINAPI*)(HTHEME, LPWSTR, INT);
using fnGetImmersiveColorFromColorSetEx    = DWORD (WINAPI *)(DWORD, DWORD, BOOL, DWORD);
using fnGetImmersiveUserColorSetPreference = DWORD (WINAPI *)(BOOL, BOOL);

fnGetThemeClass GetThemeClass = nullptr;
fnGetImmersiveColorFromColorSetEx GetImmersiveColorFromColorSetEx = nullptr;
fnGetImmersiveUserColorSetPreference GetImmersiveUserColorSetPreference = nullptr;


static decltype(&DrawThemeBackground) DrawThemeBackground_orig = nullptr;


// General
static BOOL     g_remainingSpaceAsProgress = FALSE;
static INT      g_warningThreshold         = 90;

// Rendering
static BOOL     g_renderUsingVisualStyles  = FALSE;
static BOOL     g_darkModeVSRendering      = TRUE;

// Custom rendering
static BOOL     g_useSystemAccentColor     = FALSE;
static BOOL     g_renderBarBorder          = TRUE;
static INT      g_heightFactor             = 100;
static INT      g_cornerRadiusFactor       = 0;
static BOOL     g_showPercentageLabel      = FALSE;
static BOOL     g_labelModeFree            = FALSE;
static INT      g_labelFontSizeFactor      = 70;

// Light mode colors
static COLORREF g_barColorLight            = 0x00E6E6E6;
static COLORREF g_barBorderColorLight      = 0x00BCBCBC;
static COLORREF g_progressColorNormalLight = 0x00CB7000;
static COLORREF g_progressColorFullLight   = 0x001C2BC4;
static COLORREF g_labelColorLight          = 0x00000000;

// Dark mode colors
static COLORREF g_barColorDark             = 0x00383838;
static COLORREF g_barBorderColorDark       = 0x00646464;
static COLORREF g_progressColorNormalDark  = 0x00FFCD60;
static COLORREF g_progressColorFullDark    = 0x00533DFF;
static COLORREF g_labelColorDark           = 0x00FFFFFF;

// Other
thread_local int g_barWidth  = 1;
thread_local int g_barLeft   = 0;
thread_local int g_barRight  = 0;
thread_local int g_barTop    = 0;
thread_local int g_barBottom = 0;
static ULONG_PTR g_gdiplusToken = 0;
HTHEME g_darkHTheme = nullptr;
HMODULE g_uxtheme = nullptr;
HMODULE g_shell32 = nullptr;


static COLORREF LoadColorSetting(PCWSTR colorName, COLORREF fallback) {
    PCWSTR originalHexString = Wh_GetStringSetting(colorName);
    PCWSTR hexString = originalHexString;

    if (hexString[0] == L'#') hexString++;

    if (wcslen(hexString) != 6) {
        Wh_FreeStringSetting(originalHexString);
        return fallback;
    }

    auto h = [](wchar_t c) -> int {
        if (c >= L'0' && c <= L'9') return c - L'0';
        if (c >= L'A' && c <= L'F') return c - L'A' + 10;
        if (c >= L'a' && c <= L'f') return c - L'a' + 10;
        return -1;
    };

    int h0 = h(hexString[0]); 
    int h1 = h(hexString[1]);
    int h2 = h(hexString[2]);
    int h3 = h(hexString[3]);
    int h4 = h(hexString[4]);
    int h5 = h(hexString[5]);

    if (h0 < 0 || h1 < 0 || h2 < 0 || h3 < 0 || h4 < 0 || h5 < 0) {
        Wh_FreeStringSetting(originalHexString);
        return fallback;
    }

    Wh_FreeStringSetting(originalHexString);
    return RGB((h0 << 4) | h1, (h2 << 4) | h3, (h4 << 4) | h5);
}


static void LoadSettings() {
    // General
    g_remainingSpaceAsProgress = Wh_GetIntSetting(L"general.remainingSpaceAsProgress");
    g_warningThreshold         = Wh_GetIntSetting(L"general.warningPercentageThreshold");

    // Rendering
    g_renderUsingVisualStyles  = Wh_GetIntSetting(L"rendering.renderUsingVisualStyles");
    g_darkModeVSRendering      = Wh_GetIntSetting(L"rendering.darkModeVSRendering");

    // Custom rendering
    g_useSystemAccentColor     = Wh_GetIntSetting(L"customRendering.useSystemAccentColor");
    g_renderBarBorder          = Wh_GetIntSetting(L"customRendering.renderBarBorder");
    g_heightFactor             = Wh_GetIntSetting(L"customRendering.heightFactor");
    g_cornerRadiusFactor       = Wh_GetIntSetting(L"customRendering.cornerRadiusFactor");
    g_showPercentageLabel      = Wh_GetIntSetting(L"customRendering.showPercentageLabel");
    g_labelFontSizeFactor      = Wh_GetIntSetting(L"customRendering.labelFontSizeFactor");

    if (g_heightFactor > 100) g_heightFactor = 100;
    else if (g_heightFactor < 0) g_heightFactor = 0;

    if (g_cornerRadiusFactor > 100) g_cornerRadiusFactor = 100;
    else if (g_cornerRadiusFactor < 0) g_cornerRadiusFactor = 0;

    if (g_labelFontSizeFactor > 100) g_labelFontSizeFactor = 100;
    else if (g_labelFontSizeFactor < 1) g_labelFontSizeFactor = 1;

    PCWSTR labelMode = Wh_GetStringSetting(L"customRendering.labelMode");
    g_labelModeFree = (wcscmp(labelMode, L"free") == 0);
    Wh_FreeStringSetting(labelMode);

    // Light mode colors
    g_barColorLight            = LoadColorSetting(L"customRendering.lightModeColors.barColor",            0x00E6E6E6);
    g_barBorderColorLight      = LoadColorSetting(L"customRendering.lightModeColors.barBorderColor",      0x00BCBCBC);
    g_progressColorNormalLight = LoadColorSetting(L"customRendering.lightModeColors.progressColorNormal", 0x00CB7000);
    g_progressColorFullLight   = LoadColorSetting(L"customRendering.lightModeColors.progressColorFull",   0x001C2BC4);
    g_labelColorLight          = LoadColorSetting(L"customRendering.lightModeColors.labelColor",          0x00000000);

    // Dark mode colors
    g_barColorDark            = LoadColorSetting(L"customRendering.darkModeColors.barColor",              0x00383838);
    g_barBorderColorDark      = LoadColorSetting(L"customRendering.darkModeColors.barBorderColor",        0x00646464);
    g_progressColorNormalDark = LoadColorSetting(L"customRendering.darkModeColors.progressColorNormal",   0x00FFCD60);
    g_progressColorFullDark   = LoadColorSetting(L"customRendering.darkModeColors.progressColorFull",     0x00533DFF);
    g_labelColorDark          = LoadColorSetting(L"customRendering.darkModeColors.labelColor",            0x00FFFFFF);
}


static bool AreAppsUsingDarkTheme() {
    DWORD value = 1;
    DWORD size = sizeof(value);

    LONG result = RegGetValueW(
        HKEY_CURRENT_USER,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
        L"AppsUseLightTheme",
        RRF_RT_REG_DWORD, nullptr, &value, &size
    );

    return result == ERROR_SUCCESS && !value;
}


static COLORREF GetSystemAccentColorShade(int shade) {
    if (GetImmersiveColorFromColorSetEx && GetImmersiveUserColorSetPreference)
        return GetImmersiveColorFromColorSetEx(
            GetImmersiveUserColorSetPreference(FALSE, FALSE), shade, FALSE, 0
        );
    else
        return 0xFFFF00FF;
}


// Computes the corner radius (in pixels) to use for a rect of the given
// height, based on the configured corner radius factor. A factor of 100%
// yields a fully rounded (pill-shaped) end for the rect's height.
static int GetCornerRadius(const RECT& rect) {
    int height = rect.bottom - rect.top;
    if (height <= 0 || g_cornerRadiusFactor <= 0) return 0;

    // Round to the nearest pixel instead of truncating, and guarantee any
    // nonzero factor produces at least a 1px radius - otherwise low factor
    // values on a thin bar silently truncate to 0 and look identical to
    // "disabled", which is confusing.
    int radius = ((height / 2) * g_cornerRadiusFactor + 50) / 100;
    return (radius < 1) ? 1 : radius;
}


// Fills a rect with the given color, optionally rounding its left and/or
// right corners, using GDI+ so the rounded corners are anti-aliased (plain
// GDI's RoundRect produces jagged corners). When a side isn't rounded, the
// rounded-corner region on that side is overdrawn with a flat-edged
// GDI+ rectangle of the same color to square it off.
static void FillRoundedRect(
    HDC hdc, const RECT& rect, int radius, COLORREF color, bool roundLeft, bool roundRight
) {
    if (rect.right <= rect.left || rect.bottom <= rect.top) return;

    Graphics graphics(hdc);
    graphics.SetSmoothingMode(SmoothingModeAntiAlias);

    SolidBrush brush(Color(255, GetRValue(color), GetGValue(color), GetBValue(color)));

    int width = rect.right - rect.left;
    int height = rect.bottom - rect.top;

    if (radius <= 0 || (!roundLeft && !roundRight)) {
        graphics.FillRectangle(&brush, rect.left, rect.top, width, height);
        return;
    }

    int diameter = radius * 2;

    GraphicsPath path;
    path.AddArc(rect.left, rect.top, diameter, diameter, 180, 90);
    path.AddArc(rect.right - diameter, rect.top, diameter, diameter, 270, 90);
    path.AddArc(rect.right - diameter, rect.bottom - diameter, diameter, diameter, 0, 90);
    path.AddArc(rect.left, rect.bottom - diameter, diameter, diameter, 90, 90);
    path.CloseFigure();

    graphics.FillPath(&brush, &path);

    if (!roundLeft)
        graphics.FillRectangle(&brush, rect.left, rect.top, radius, height);

    if (!roundRight)
        graphics.FillRectangle(&brush, rect.right - radius, rect.top, radius, height);
}


// Draws a "<percentage>%" label centered within the given rect, in a font
// sized relative to fontRefHeight (the bar's default, un-shrunk height -
// kept separate from rect's height so the label stays legible even when
// the bar itself has been shrunk via the height factor setting). Uses
// transparent background so it composites over whatever was already drawn
// underneath (track + fill).
static void DrawPercentageLabel(HDC hdc, const RECT& rect, int fontRefHeight, int percentage, BOOL darkMode) {
    if (rect.right <= rect.left) return;

    int fontHeight = -(fontRefHeight * g_labelFontSizeFactor / 100);
    if (fontHeight == 0) return;

    HFONT font = CreateFontW(
        fontHeight, 0, 0, 0, FW_SEMIBOLD, FALSE, FALSE, FALSE,
        DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
        CLEARTYPE_QUALITY, DEFAULT_PITCH | FF_DONTCARE, L"Segoe UI"
    );

    if (!font) return;

    HGDIOBJ oldFont = SelectObject(hdc, font);
    int oldBkMode = SetBkMode(hdc, TRANSPARENT);
    COLORREF oldColor = SetTextColor(hdc, (darkMode) ? g_labelColorDark : g_labelColorLight);

    WCHAR text[16];
    swprintf(text, 16, L"%d%%", percentage);

    RECT textRect = rect;
    DrawTextW(hdc, text, -1, &textRect, DT_CENTER | DT_VCENTER | DT_SINGLELINE | DT_NOCLIP);

    SetTextColor(hdc, oldColor);
    SetBkMode(hdc, oldBkMode);
    SelectObject(hdc, oldFont);
    DeleteObject(font);
}


HRESULT WINAPI HookedDrawThemeBackground(
    HTHEME hTheme, HDC hdc, INT iPartId, INT iStateId, LPCRECT pRect, LPCRECT pClipRect
) {
    // I know the rect left point and shell32 caller checks are some really 
    // weird checks, but I have no idea for a better check that actually works 
    // and that can actually distinguish from Explorer's progress bar drawing 
    // inside an item from This PC's drive list and an actual progress bar 
    // control drawing. From my inspection, Explorer seems to custom draw a 
    // progress bar like this only inside the drive list from the This PC section.

    if ((iPartId != PP_FILL && iPartId != PP_TRANSPARENTBAR) || !pRect || pRect->left <= 0)
        return DrawThemeBackground_orig(hTheme, hdc, iPartId, iStateId, pRect, pClipRect);

    WCHAR themeClass[256] = {};

    BOOL isThemeClassValid = (
        GetThemeClass && SUCCEEDED(GetThemeClass(hTheme, themeClass, 256)) 
        && wcscmp(themeClass, L"Progress") == 0
    );

    if (isThemeClassValid) {
        HMODULE callerModule = nullptr;
        void* caller = __builtin_return_address(0);

        BOOL isCallerShell32 = GetModuleHandleEx(
            GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT, 
            reinterpret_cast<LPCWSTR>(caller), &callerModule
        ) && callerModule == g_shell32;

        if (!isCallerShell32)
            return DrawThemeBackground_orig(hTheme, hdc, iPartId, iStateId, pRect, pClipRect);

        COLORREF color;
        RECT clipRect = *pRect;
        BOOL darkMode = AreAppsUsingDarkTheme();

        if (pClipRect) IntersectRect(&clipRect, &clipRect, pClipRect);

        if (g_renderUsingVisualStyles && g_darkModeVSRendering && darkMode && g_darkHTheme) 
            hTheme = g_darkHTheme;

        // Captured before the height factor inset below, so the label font
        // size stays legible even when the bar itself is shrunk thin.
        int barHeight = clipRect.bottom - clipRect.top;

        if (!g_renderUsingVisualStyles) {
            int inset = (clipRect.bottom - clipRect.top) * (100 - g_heightFactor) / 200;

            clipRect.top = clipRect.top + inset;
            clipRect.bottom = clipRect.bottom - inset;
        }

        if (iPartId == PP_FILL) {
            int progressWidth = clipRect.right - clipRect.left;
            int usedPercentage = progressWidth * 100 / g_barWidth;

            if (g_remainingSpaceAsProgress)
                clipRect.right = clipRect.left + g_barWidth - progressWidth;

            // The fill always grows from the container's left edge, so its
            // left corner should match the track's rounding. Its right
            // corner should only be rounded once it actually reaches the
            // container's right edge (i.e. the drive is completely full).
            bool roundLeft = (clipRect.left <= g_barLeft);
            bool roundRight = (clipRect.right >= g_barRight);

            if (g_renderUsingVisualStyles)
                DrawThemeBackground_orig(
                    hTheme, hdc, PP_FILL, (usedPercentage >= g_warningThreshold) ? PBFS_ERROR : PBFS_PARTIAL, 
                    &clipRect, 0
                );
            else {
                if (iStateId == PBFS_ERROR || iStateId == PBFS_PARTIAL) 
                    if (usedPercentage >= g_warningThreshold) {
                        color = (darkMode) ? g_progressColorFullDark : g_progressColorFullLight;
                    } else {
                        if (g_useSystemAccentColor)
                            if (IsWindows10OrGreater())
                                color = ((darkMode) ? GetSystemAccentColorShade(2) : GetSystemAccentColorShade(5)) & 0xFFFFFF;
                            else if (IsWindows8OrGreater())
                                color = GetSystemAccentColorShade(9) & 0xFFFFFF;
                            else
                                color = 0x00FF00FF;
                        else
                            color = (darkMode) ? g_progressColorNormalDark : g_progressColorNormalLight;
                    }
                else 
                    return DrawThemeBackground_orig(hTheme, hdc, iPartId, iStateId, pRect, pClipRect);

                int radius = GetCornerRadius(clipRect);

                if (g_renderBarBorder) {
                    clipRect.top++; clipRect.left++; clipRect.bottom--; clipRect.right--;
                    if (radius > 0) radius--;
                }

                FillRoundedRect(hdc, clipRect, radius, color, roundLeft, roundRight);

                if (g_showPercentageLabel) {
                    RECT fullBarRect = { g_barLeft, g_barTop, g_barRight, g_barBottom };
                    int labelPercentage = (g_labelModeFree) ? (100 - usedPercentage) : usedPercentage;

                    DrawPercentageLabel(hdc, fullBarRect, barHeight, labelPercentage, darkMode);
                }
            }
            
            return S_OK;
        }

        else if (iPartId == PP_TRANSPARENTBAR) {
            g_barWidth  = clipRect.right - clipRect.left;
            g_barLeft   = clipRect.left;
            g_barRight  = clipRect.right;
            g_barTop    = clipRect.top;
            g_barBottom = clipRect.bottom;
 
            if (g_renderUsingVisualStyles)
                DrawThemeBackground_orig(hTheme, hdc, PP_TRANSPARENTBAR, PBS_NORMAL, &clipRect, 0);
            else {
                int radius = GetCornerRadius(clipRect);

                if (g_renderBarBorder) {
                    FillRoundedRect(
                        hdc, clipRect, radius, (darkMode) ? g_barBorderColorDark : g_barBorderColorLight, true, true
                    );

                    clipRect.top++; clipRect.left++; clipRect.bottom--; clipRect.right--;
                    if (radius > 0) radius--;
                }

                FillRoundedRect(hdc, clipRect, radius, (darkMode) ? g_barColorDark : g_barColorLight, true, true);
            }
            
            return S_OK;
        }
    }
    
    return DrawThemeBackground_orig(hTheme, hdc, iPartId, iStateId, pRect, pClipRect);
}


static BOOL CALLBACK RefreshExplorerCallback(HWND hwnd, LPARAM lParam) {
    DWORD pid;
    WCHAR windowClass[256];

    GetWindowThreadProcessId(hwnd, &pid); 

    if (
        pid == GetCurrentProcessId() && GetClassName(hwnd, windowClass, 256) 
        && wcscmp(windowClass, L"CabinetWClass") == 0
    )
        SendMessage(hwnd, WM_SETTINGCHANGE, SPI_SETHIGHCONTRAST, 0);
    
    return TRUE;
}


BOOL Wh_ModInit() {
    GdiplusStartupInput gdiplusStartupInput;
    GdiplusStartup(&g_gdiplusToken, &gdiplusStartupInput, nullptr);

    g_shell32 = GetModuleHandle(L"shell32.dll");
    g_uxtheme = GetModuleHandle(L"uxtheme.dll");

    g_darkHTheme = OpenThemeData(0, L"DarkMode_CopyEngine::Progress");
    
    GetThemeClass = (fnGetThemeClass)GetProcAddress(g_uxtheme, MAKEINTRESOURCEA(74));
    GetImmersiveColorFromColorSetEx = (fnGetImmersiveColorFromColorSetEx)GetProcAddress(g_uxtheme, MAKEINTRESOURCEA(95));
    GetImmersiveUserColorSetPreference = (fnGetImmersiveUserColorSetPreference)GetProcAddress(g_uxtheme, MAKEINTRESOURCEA(98));

    LoadSettings();
    WindhawkUtils::SetFunctionHook(DrawThemeBackground, HookedDrawThemeBackground, &DrawThemeBackground_orig);
    EnumWindows(RefreshExplorerCallback, 0);

    return TRUE;
}


void Wh_ModUninit() {
    if (g_darkHTheme) CloseThemeData(g_darkHTheme);

    EnumWindows(RefreshExplorerCallback, 0);

    if (g_gdiplusToken) {
        GdiplusShutdown(g_gdiplusToken);
        g_gdiplusToken = 0;
    }
}


void Wh_ModSettingsChanged() {
    LoadSettings();
    EnumWindows(RefreshExplorerCallback, 0);
}
