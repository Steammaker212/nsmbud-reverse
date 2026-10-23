/* FinalBowser__collisionIceball
 * address: 0x6007225C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60025630
// 
// Overridden by: None
int __fastcall FinalBowser__collisionIceball(int a1, int a2, int a3)
{
  StateMgr *v5; // r4
  StateBase *CurrentState; // r0
  int v7; // r7
  int v8; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r1

  v5 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v7 != (*(int (**)(void))(dword_60C81710 + 8))() )
  {
    v8 = FIELD_U32(a3, 84);
    FIELD_U32(a1, 7508) = FIELD_U32(a3, 88);
    FIELD_U32(a1, 7504) = v8;
    koopa_damage_ice_ref(a1, (float *)(a1 + 7504), 2);
    v9 = FIELD_U32(a1, 108);
    v10 = FIELD_U32(a1, 112);
    FIELD_U32(a1, 7060) = FIELD_U32(a1, 116);
    FIELD_U32(a1, 7056) = v10;
    FIELD_U32(a1, 7052) = v9;
    v11 = FIELD_U32(a1, 120);
    v12 = FIELD_U32(a1, 124);
    FIELD_U32(a1, 7072) = FIELD_U32(a1, 128);
    FIELD_U32(a1, 7068) = v12;
    FIELD_U32(a1, 7064) = v11;
    FIELD_U32(a1, 7076) = FIELD_U32(a1, 100);
    FIELD_U32(a1, 7080) = FIELD_U32(a1, 104);
    FIELD_U32(a1, 7084) = FIELD_U16(a1, 6276);
    FIELD_U32(a1, 7088) = FIELD_U16(a1, 6278);
    StateMgrExt_changeState(v5, (StateBase *)&dword_60C81710);
  }
  return 1;
}
