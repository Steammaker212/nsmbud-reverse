/* SE_SYS_BACK_ref_4A39D0
 * address: 0x604A39D0   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_BACK_ref_4A39D0(int a1)
{
  _DWORD *v2; // r6
  int v3; // r0
  _BYTE *v4; // r0
  _DWORD v6[6]; // [sp+8h] [bp-18h] BYREF

  v2 = (_DWORD *)(a1 + 20496);
  sub_604A7048(a1, FIELD_U32(a1, 20496));
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = dword_60CA1314;
  if ( sub_6047467C((_DWORD *)(a1 + 48), 0, v6, (int)&dword_60CA1330, -1.0, 0) == 1 )
    sub_6047482C(a1 + 48, 0);
  if ( *v2 == 6 )
  {
    if ( dword_60C99E24 )
    {
      v3 = sub_603FF0A8(dword_60C99E24, a1);
      if ( v3 )
        sub_604FDD28(v3, 9 * FIELD_U32(v3, 40080) + FIELD_U32(v3, 40088));
    }
  }
  v4 = *(_BYTE **)(a1 + 20488);
  if ( v4 )
  {
    if ( *v2 < 7u )
      v4 += *v2;
    *v4 = 0;
  }
  FIELD_U8(a1, 20541) = 0;
  FIELD_U8(a1, 20553) = 0;
  return sub_60807EF0(SoundSystem_instance, "SE_SYS_BACK", 0, 1);
}
