/* FinalBowser__collisionThrowableObject
 * address: 0x60072364   size: 736   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60025720
// 
// Overridden by: None
int __fastcall FinalBowser__collisionThrowableObject(int a1, int a2, int a3)
{
  int v5; // r5
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r6
  int v10; // r7
  StateBase *CurrentState; // r0
  int v12; // r6
  float v13; // r1
  StateBase *v14; // r0
  int v15; // r6
  unsigned int v16; // r7
  unsigned int v17; // r0
  char v18; // r0
  float v20[8]; // [sp+8h] [bp-20h] BYREF

  v5 = FIELD_U32(a3, 64);
  if ( !v5 )
    return 0;
  sub_600009FC((StageActor *)a1);
  if ( Actor__getProfileId((Actor *)v5) != 392 )
  {
    if ( Actor__getProfileId((Actor *)v5) == 728 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
      v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v12 != (*((int (**)(void))stru_60C8E1CC._.vtable + 2))() )
      {
        if ( (FIELD_U8(a1, 7144) & 2) == 0 )
        {
          (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 856))(a1, v5);
          v13 = FIELD_F32(v5, 112);
          v20[0] = FIELD_F32(v5, 108);
          v20[1] = v13;
          koopa_damage_ice_ref(a1, v20, 0);
        }
        v14 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
        v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14);
        if ( v15 == (*((int (**)(void))stru_60C8EA70._.vtable + 2))() )
        {
          v16 = FIELD_S8(v5, 84);
          if ( v16 <= 3 )
          {
            sub_60000A18((StageActor *)v5);
            v17 = sub_602856EC(a1 + 6292, FIELD_U32(v5, 564));
            sub_60022540(dword_60C7F52C, v5 + 108, v17, v16, 1);
          }
          SE_EMY_DOWN_ref_2A58B4(v5, v5);
        }
        else
        {
          sub_6025DE4C(v5);
        }
      }
      v18 = FIELD_U8(a3, 110);
      v10 = 1;
    }
    else
    {
      v10 = 1;
      if ( Actor__getProfileId((Actor *)v5) != 726 || (FIELD_U8(a1, 7144) & 2) != 0 )
        return v10;
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 856))(a1, v5);
      koopa_damage_ice_ref(a1, (float *)(a3 + 84), 0);
      SE_BOSS_JR_DAMAGE_KOOPA_ref(v5);
      v18 = FIELD_U8(a3, 110);
    }
    FIELD_U8(a3, 110) = v18 | 2;
    return v10;
  }
  if ( (FIELD_U8(v5, 21) & 1) == 0 && (FIELD_U8(v5, 7440) & 1) != 0 )
    sub_602EE7B8(v5, FIELD_U32(v5, 80), FIELD_S8(v5, 84));
  FIELD_U8(a3, 110) |= 2u;
  v6 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
  if ( v7 == (*(int (**)(void))(stru_60C92684 + 8))()
    || (v8 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084)),
        v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8),
        v10 = 1,
        v9 == (*(int (**)(void))(stru_60C92664 + 8))()) )
  {
    v10 = 1;
    if ( (FIELD_U8(a1, 7144) & 2) == 0 )
    {
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 856))(a1, v5);
      koopa_damage_ice_ref(a1, (float *)(a3 + 84), 0);
    }
  }
  return v10;
}
