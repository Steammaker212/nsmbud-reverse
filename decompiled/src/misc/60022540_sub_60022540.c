/* sub_60022540
 * address: 0x60022540   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60022540(int a1, int a2, unsigned int a3, int a4, int a5)
{
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // [sp+8h] [bp-20h] BYREF
  int v12; // [sp+Ch] [bp-1Ch]
  int v13; // [sp+10h] [bp-18h]

  if ( a4 != -1 )
  {
    if ( a4 == 5 )
    {
      v7 = sub_60407E74(dword_60C9A1E8, a2, 25, -1, 0, 0, v11, v12, v13);
      sub_60021C70(v7, a5);
      return;
    }
    sub_60407E74(dword_60C9A1E8, a2, dword_60AF49C4[a3], a4, 0, 0, v11, v12, v13);
    if ( a3 != 10 )
    {
      if ( a3 == 9 )
      {
        if ( a5 == 1 )
        {
          v10 = FIELD_U32(dword_60CC6484, 128);
          v11 = FIELD_U32(dword_60CC6484, 116);
          v12 = v10;
          (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
            Global_BasicSoundActor2,
            "SE_SYS_THREE_UP",
            &v11,
            0);
          (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
            Global_BasicSoundActor2,
            "SE_SYS_THREE_UP_RC",
            &v11,
            0);
        }
        sub_603FB964(dword_60C99DD4, a4);
        sub_603FB964(dword_60C99DD4, a4);
        v9 = dword_60C99DD4;
        goto LABEL_13;
      }
      if ( a3 == 8 )
      {
        if ( a5 == 1 )
        {
          v8 = FIELD_U32(dword_60CC6484, 128);
          v11 = FIELD_U32(dword_60CC6484, 116);
          v12 = v8;
          (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
            Global_BasicSoundActor2,
            "SE_SYS_ONE_UP",
            &v11,
            0);
          (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
            Global_BasicSoundActor2,
            "SE_SYS_ONE_UP_RC",
            &v11,
            0);
        }
        v9 = dword_60C99DD4;
LABEL_13:
        sub_603FB964(v9, a4);
        return;
      }
      if ( a3 <= 7 )
        sub_603FBA2C(dword_60C99DD4, dword_60AF49F0[a3], a4);
    }
  }
}
