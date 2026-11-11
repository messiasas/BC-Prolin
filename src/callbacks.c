#include <string.h>
#include <osal.h>
#include <xui.h>
#include "ppcomp.h"
#include "ppcomp_ex.h"
#include "callbacks.h"

static XuiFont *g_font;
static XuiColor BRANCO = {0xFF, 0xFF, 0xFF, 0xFF};

/* Area de mensagens: logo abaixo do menu */
#define Y_AREA  100
#define H_AREA  50

/* ===== As duas que vamos usar ===== */

static int iCbkClearDisplay(void)
{
    OsLog(LOG_INFO, "[CBK] ClearDisplay");
    XuiClearArea(XuiRootCanvas(), 0, Y_AREA, 480, H_AREA);
    return PPCOMP_OK;
}

static int iCbkDisplay(char *pszMsg)
{
    char buf[256];
    char *linha;
    int y = Y_AREA + 5;

    OsLog(LOG_INFO, "[CBK] Display: [%s] tam=%d", pszMsg, (int)strlen(pszMsg));
    XuiClearArea(XuiRootCanvas(), 120, Y_AREA, 130, 60);

    strncpy(buf, pszMsg, sizeof(buf) - 1);
    buf[sizeof(buf) - 1] = '\0';

    for (linha = strtok(buf, "\r\n"); linha != NULL; linha = strtok(NULL, "\r\n")) {

        XuiCanvasDrawText(XuiRootCanvas(), 120, y, 15, g_font, XUI_TEXT_NORMAL, BRANCO, linha);
        y += 20;
    }
    return PPCOMP_OK;
}



static int iCbkTestCancel(void)
{
    return 0;
}

static int iCbkGetPIN(char *pszMsg, int iNum)
{
    OsLog(LOG_INFO, "[CBK] GetPIN chamada");
    return PPCOMP_OK;
}

static int iCbkSetLED(int iLed)
{
    OsLog(LOG_INFO, "[CBK] SetLED chamada: 0x%02X", iLed);
    return PPCOMP_OK;
}

static int iCbkMenu(char *pszTitle, char **pvszItem, int iItem, int iTimeout)
{
    OsLog(LOG_INFO, "[CBK] Menu chamada");
    return 1;
}

void Callbacks_Init(XuiFont *font)
{
    PPInitLibStru st;
    int rc;

    g_font = font;
    OsLog(LOG_INFO, "[INIT] fonte=%p", (void *)g_font);

    memset(&st, 0, sizeof(st));
    st.iSize                  = sizeof(PPInitLibStru);
    st.stFuncs.piTestCancel   = iCbkTestCancel;
    st.stFuncs.piDisplayClear = iCbkClearDisplay;
    st.stFuncs.piDisplay      = iCbkDisplay;
    st.stFuncs.piMenu         = iCbkMenu;
    st.stFuncs.piGetPIN       = iCbkGetPIN;
    st.stFuncs.piSetLED       = iCbkSetLED;

    rc = PP_iInitLib(&st);
    OsLog(LOG_INFO, "[INIT] PP_iInitLib -> %d", rc);
}
