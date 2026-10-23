/* sub_607CE2A0
 * address: 0x607CE2A0   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CE2A0(int a1, int a2, int a3)
{
  int v6; // r5
  int v8; // r0

  v6 = 0;
  if ( (FIELD_U32(a1, 1204) & 0x24000) != 0 )
    return v6;
  sub_607D001C(a1, 0);
  v8 = sub_607D6C28(a1);
  if ( v8 )
  {
    switch ( a3 )
    {
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
        (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v8 + 1168))(v8, a2, a3);
        break;
      case 9:
      case 10:
        FIELD_U32(a1, 1204) |= 0x4000u;
        FIELD_U32(a1, 1232) |= 0x20000000u;
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 1428))(v8);
        SE_PLY_SPLASH_LAVA_ref_76CCA4(a1);
        break;
      case 14:
        FIELD_U32(a1, 1204) |= 0x4000u;
        FIELD_U32(a1, 1232) |= 0x20000000u;
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 1428))(v8);
        SE_PLY_SPLASH_POISON_ref(a1);
        break;
      case 19:
        sub_60765E4C(a1);
        break;
      default:
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 1428))(v8);
        Player_changeState(a1, (StateBase *)&dword_60CC5654, 0);
        break;
    }
    return 1;
  }
  else
  {
    v6 = 1;
    if ( (unsigned int)(a3 - 9) >= 2 )
    {
      if ( a3 != 14 )
        return v6;
      FIELD_U32(a1, 1204) |= 0x4000u;
      SE_PLY_SPLASH_POISON_ref(a1);
      return 1;
    }
    else
    {
      FIELD_U32(a1, 1204) |= 0x4000u;
      SE_PLY_SPLASH_LAVA_ref_76CCA4(a1);
      return 1;
    }
  }
}
