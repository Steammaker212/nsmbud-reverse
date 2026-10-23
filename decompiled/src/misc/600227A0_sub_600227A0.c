/* sub_600227A0
 * address: 0x600227A0   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600227A0(int a1, int a2, unsigned int a3, int a4)
{
  int result; // r0
  int v7; // r0
  int v8; // [sp+8h] [bp-20h] BYREF
  int v9; // [sp+Ch] [bp-1Ch]
  int v10; // [sp+10h] [bp-18h]

  if ( a4 != -1 )
  {
    sub_60407E74(dword_60C9A1E8, a2, dword_60AF5010[a3], a4, 0, 0, v8, v9, v10);
    if ( a3 > 4 )
    {
      v7 = FIELD_U32(dword_60CC6484, 128);
      v8 = FIELD_U32(dword_60CC6484, 116);
      v9 = v7;
      (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
        Global_BasicSoundActor2,
        "SE_SYS_ONE_UP",
        &v8,
        0);
      (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
        Global_BasicSoundActor2,
        "SE_SYS_ONE_UP_RC",
        &v8,
        0);
      return sub_603FB964(dword_60C99DD4, a4);
    }
    else
    {
      return sub_603FBA2C(dword_60C99DD4, dword_60AF5038[a3], a4);
    }
  }
  return result;
}
