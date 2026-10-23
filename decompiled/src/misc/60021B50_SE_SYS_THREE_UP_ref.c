/* SE_SYS_THREE_UP_ref
 * address: 0x60021B50   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_SYS_THREE_UP_ref(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v6; // r0
  _DWORD v7[8]; // [sp+0h] [bp-20h] BYREF

  v4 = a3;
  if ( a4 == 1 )
  {
    v6 = FIELD_U32(dword_60CC6484, 128);
    v7[0] = FIELD_U32(dword_60CC6484, 116);
    v7[1] = v6;
    if ( a3 == 3 )
    {
      (*(void (__fastcall **)(int, const char *, _DWORD *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
        Global_BasicSoundActor2,
        "SE_SYS_THREE_UP",
        v7,
        0);
      (*(void (__fastcall **)(int, const char *, _DWORD *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
        Global_BasicSoundActor2,
        "SE_SYS_THREE_UP_RC",
        v7,
        0);
    }
    else if ( a3 == 1 )
    {
      (*(void (__fastcall **)(int, const char *, _DWORD *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
        Global_BasicSoundActor2,
        "SE_SYS_ONE_UP",
        v7,
        0);
      (*(void (__fastcall **)(int, const char *, _DWORD *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
        Global_BasicSoundActor2,
        "SE_SYS_ONE_UP_RC",
        v7,
        0);
    }
  }
  if ( v4 >= 1 )
  {
    do
    {
      sub_603FB964(dword_60C99DD4, a2);
      --v4;
    }
    while ( v4 );
  }
}
