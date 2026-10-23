/* sub_6034F6B8
 * address: 0x6034F6B8   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6034F6B8(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  int v4; // r5
  int v5; // r0
  float v6; // s2
  float v7; // r1
  float v8; // s0
  float v9; // s4
  EnemyFreezeMgr_Info v11; // [sp+0h] [bp-30h] BYREF

  CurrentState = *(StateBase **)(a1 + 6100);
  v3 = FIELD_U32(a1, 80);
  if ( !CurrentState )
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v5 = (*(int (**)(void))(dword_60C94E30 + 8))();
  v6 = FIELD_F32(a1, 108);
  v7 = FIELD_F32(a1, 116);
  if ( v4 == v5 )
    v3 ^= 1u;
  v8 = FIELD_F32(a1, 112) + -2.0;
  v9 = flt_60AF1EA8[v3];
  v11.settings = 3;
  v11.position.x = v6 + v9;
  v11.position.y = v8;
  v11.position.z = v7;
  v11.scale.x = 0.65;
  v11.scale.y = 0.67;
  v11.scale.z = 0.9;
  v11.field_1C = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), &v11, 1u);
}
