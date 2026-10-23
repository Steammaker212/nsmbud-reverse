/* sub_6008AA7C
 * address: 0x6008AA7C   size: 748   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6008AA7C(StageActor *a1, int a2, int a3)
{
  int v3; // r5
  StateBase *CurrentState; // r0
  int v6; // r6
  int v7; // r7
  int v8; // r6
  char v9; // r12
  StateBase *v10; // r0
  int v11; // r6
  StateBase *v12; // r0
  int v13; // r7
  StateBase *v14; // r0
  int v15; // r7
  _BOOL4 v16; // r1
  float v17; // s0

  v3 = FIELD_U32(a3, 64);
  if ( !v3 )
    return 0;
  sub_600009FC(a1);
  if ( Actor__getProfileId((Actor *)v3) == 728 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    v7 = 1;
    if ( v6 != (*((int (**)(void))stru_60C8E1CC._.vtable + 2))() )
      sub_6025DE4C(v3);
  }
  else if ( Actor__getProfileId((Actor *)v3) == 392 )
  {
    v10 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
    v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
    v7 = 0;
    if ( v11 == (*(int (**)(void))(stru_60C92684 + 8))() )
      v7 = (*(int (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 884))(a1) ^ 1;
    sub_602EE7B8(v3, FIELD_U32(v3, 80), FIELD_S8(v3, 84));
  }
  else
  {
    if ( ((unsigned int)dword_60C7B430 & ~(1611180952 << v9) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
    v7 = 0;
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &Enemy_RTTI) == 1 && (FIELD_U8(v3, 6148) & 1) != 0 )
    {
      v8 = 1;
      sub_60022540(dword_60C7F52C, v3 + 108, 1u, FIELD_S8(v3, 84), 1);
      SE_EMY_DOWN_ref_2A58B4(v3, v3);
      return v8;
    }
  }
  if ( (a1[11].zoneId & 2) != 0 )
  {
    v12 = StateMgr__getCurrentState((StateMgr *)&a1[9].aCollider.field_64);
    v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
    if ( v13 == (*(int (**)(void))(dword_60C81D6C + 8))()
      || (v14 = StateMgr__getCurrentState((StateMgr *)&a1[9].aCollider.field_64),
          v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14),
          v8 = 1,
          v15 == (*(int (**)(void))(dword_60C81D8C + 8))()) )
    {
      FIELD_U8(a1, 0x54) = FIELD_U8(v3, 84);
      v16 = FIELD_F32(v3, 108) > FIELD_F32(a1, 0x6C);
      v17 = (float)byte_60AFE3F4[v16];
      FIELD_U32(a1, 0x50) = v16;
      FIELD_F32(a1, 0x78) = v17 * 3.5;
      FIELD_F32(a1, 0x7C) = 2.5;
      FIELD_F32(a1, 0x80) = 0.0;
      (*(void (__fastcall **)(StageActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C81D8C);
      return 1;
    }
  }
  else
  {
    v8 = 1;
    if ( v7 == 1 )
      (*(void (__fastcall **)(StageActor *, int))(FIELD_U32(a1, 0x0) + 804))(a1, v3);
  }
  return v8;
}
