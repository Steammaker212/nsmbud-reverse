/* sub_60276278
 * address: 0x60276278   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60276278(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r0
  int v5; // r1
  float v6; // s0
  int v7; // r0
  int result; // r0
  int v9; // r0
  int v10; // r1
  __int16 v11; // r1

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  SE_EMY_CHOROBON_ref(a1);
  nullsub_7();
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6336));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = (*((int (**)(void))LineFollower_StateID_Fall._.vtable + 2))();
  v5 = FIELD_U32(a1, 8888);
  if ( v3 == v4 )
  {
    if ( (v5 & 1) != 0 || (result = v5 & 0x10400, (v5 & 0x10400) == 0x400) )
    {
      v6 = FIELD_F32(a1, 108);
      FIELD_F32(a1, 6516) = v6 - FIELD_F32(a1, 584);
      FIELD_U32(a1, 6520) = 0;
      v7 = FIELD_U32(a1, 588);
      FIELD_U32(a1, 112) = v7;
      FIELD_F32(a1, 6416) = v6;
      FIELD_U32(a1, 6420) = v7;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8ED70);
    }
    else if ( (v5 & 0x440000) != 0 && (result = v5 & 0x10000000, (v5 & 0x10000000) == 0)
           || (v5 & 0x880000) != 0 && (result = v5 & 0x20000000, (v5 & 0x20000000) == 0) )
    {
      FIELD_U32(a1, 6516) = 0;
      FIELD_U32(a1, 6520) = 0;
      v9 = FIELD_U32(a1, 584);
      FIELD_U32(a1, 108) = v9;
      v10 = FIELD_U32(a1, 112);
      FIELD_U32(a1, 6416) = v9;
      FIELD_U32(a1, 6420) = v10;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8ED70);
    }
  }
  else
  {
    result = a1 + 6316;
    if ( (v5 & 1) != 0
      || (v5 & 0x10400) == 0x400
      || (v5 & 0x440000) != 0 && (v5 & 0x10000000) == 0
      || (v5 & 0x880000) != 0 && (v5 & 0x20000000) == 0
      || (v11 = FIELD_U16(a1, 6510) - 1, FIELD_U16(a1, 6510) = v11, v11 <= 0) )
    {
      FIELD_U32(a1, 108) = FIELD_U32(a1, 584);
      FIELD_U32(a1, 112) = FIELD_U32(a1, 588);
      FIELD_U32(a1, 116) = FIELD_U32(a1, 592);
      FIELD_F32(a1, 6496) = -FIELD_F32(a1, 6496);
      sub_6000F338(result);
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8ECA0);
    }
  }
  return result;
}
