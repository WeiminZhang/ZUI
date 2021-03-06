﻿#include "CheckBox.h"
#include <core/control.h>
#include "Option.h"
#if (defined HAVE_JS) && (HAVE_JS == 1)
#include <duktape.h>
#endif
ZEXPORT ZuiAny ZCALL ZuiCheckBoxProc(ZuiInt ProcId, ZuiControl cp, ZuiCheckBox p, ZuiAny Param1, ZuiAny Param2, ZuiAny Param3) {
    switch (ProcId)
    {
    case Proc_OnCreate: {
        return ZuiOptionProc(Proc_OnCreate, cp, p, Param1, Param2, Param3);
    }
    case Proc_GetObject:
        if (Param1 == Type_CheckBox)
            return (ZuiAny)p;
        break;
    case Proc_GetType:
        return (ZuiAny)Type_CheckBox;
    case Proc_CoreInit:
        return (ZuiAny)TRUE;
    case Proc_CoreUnInit:
        return (ZuiAny)NULL;
    default:
        break;
    }
    return ZuiOptionProc(ProcId, cp, p, Param1, Param2, Param3);
}




