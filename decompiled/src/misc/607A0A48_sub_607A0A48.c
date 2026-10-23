/* sub_607A0A48
 * address: 0x607A0A48   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A0A48(int a1, ActiveCollider *a2, int a3)
{
  int v5; // r4
  int (__fastcall ***v6)(_DWORD, int *); // r7
  char v7; // r12

  v5 = 0;
  if ( FIELD_U32(a3, 136) != 15
    && FIELD_U32(a1, 1320) == FIELD_U32(a1, 11388)
    && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 644))(a1)
    && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1)
    && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1156))(a1) )
  {
    if ( (FIELD_U8(a1, 1221) & 0x80) != 0 )
      goto LABEL_14;
    v6 = (int (__fastcall ***)(_DWORD, int *))sub_6079DFCC(a1);
    if ( ((unsigned int)&dword_60C7B410 & ~(1618610924 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B410) )
    {
      dword_60C7B40C = (int)&off_60BC00D4;
      _cxa_guard_release(&dword_60C7B410);
    }
    if ( v6
      && (**v6)(v6, &dword_60C7B40C) == 1
      && (float)((float)(ActiveCollider_getCenterX(a2) - FIELD_F32(a1, 108)) * flt_60B0A898[FIELD_U32(a1, 80)]) > 0.0 )
    {
      sub_605DCF28((int)v6, a1);
      sub_6079E724((_DWORD *)a1);
      FIELD_U32(a1, 9572) = 127;
    }
    else
    {
LABEL_14:
      v5 = 0;
      if ( (*(int (__fastcall **)(int, StageActor *, _DWORD))(*(_DWORD *)a1 + 1180))(a1, FIELD_U32(a2, 0x40), 0) == 1 )
      {
        AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, FIELD_S8(a1, 84), 4, 0, 0);
        return 1;
      }
    }
  }
  return v5;
}
