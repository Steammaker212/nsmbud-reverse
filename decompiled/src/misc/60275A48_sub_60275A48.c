/* sub_60275A48
 * address: 0x60275A48   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60275A48(int a1)
{
  _DWORD *v2; // r7
  float v3; // s16
  float v4; // s18
  int v5; // r5
  StateBase *CurrentState; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r1
  float v10; // s0
  int v11; // r0
  int (__fastcall *v12)(int, int *); // r2
  int result; // r0
  int v14; // r1
  int v15; // r0
  int v16; // r1

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  v2 = (_DWORD *)(a1 + 6420);
  v3 = FIELD_F32(a1, 6420);
  SE_EMY_CHOROBON_ref(a1);
  v4 = FIELD_F32(a1, 6420);
  v5 = a1 + 6664;
  nullsub_7();
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6336));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v8 = (*((int (**)(void))LineFollower_StateID_Fall._.vtable + 2))();
  v9 = FIELD_U32(a1, 8888);
  if ( v7 == v8 )
  {
    if ( (v9 & 1) != 0 || (result = v9 & 0x10400, (v9 & 0x10400) == 0x400) )
    {
      v10 = FIELD_F32(a1, 108);
      FIELD_F32(a1, 6516) = v10 - FIELD_F32(a1, 584);
      FIELD_U32(a1, 6520) = 0;
      v11 = FIELD_U32(a1, 588);
      FIELD_U32(a1, 112) = v11;
      FIELD_F32(a1, 6416) = v10;
      *v2 = v11;
      v12 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
      return v12(a1, &dword_60C8ED70);
    }
    if ( (v9 & 0x440000) != 0 && (result = v9 & 0x10000000, (v9 & 0x10000000) == 0)
      || (v9 & 0x880000) != 0 && (result = v9 & 0x20000000, (v9 & 0x20000000) == 0) )
    {
      FIELD_U32(a1, 6516) = 0;
      FIELD_U32(a1, 6520) = 0;
      v15 = FIELD_U32(a1, 584);
      FIELD_U32(a1, 108) = v15;
      v16 = FIELD_U32(a1, 112);
      FIELD_U32(a1, 6416) = v15;
      *v2 = v16;
      v12 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
      return v12(a1, &dword_60C8ED70);
    }
  }
  else
  {
    result = a1 + 6316;
    if ( (float)(v4 - v3) < 0.0 && (v9 & 1) != 0
      || (float)(v4 - v3) > 0.0 && (v9 & 0x10400) == 0x400
      || ((v14 = FIELD_U32(a1, 80), (*(_DWORD *)(v5 + 4 * ((v14 + 18) >> 5) + 2224) & (1 << ((v14 + 18) & 0x1F))) != 0)
       || (*(_DWORD *)(v5 + 4 * ((v14 + 22) >> 5) + 2224) & (1 << ((v14 + 22) & 0x1F))) != 0)
      && (*(_DWORD *)(v5 + 4 * ((v14 + 28) >> 5) + 2224) & (1 << ((v14 + 28) & 0x1F))) == 0 )
    {
      FIELD_F32(a1, 6496) = -FIELD_F32(a1, 6496);
      JUMPOUT(0x6000F338);
    }
  }
  return result;
}
