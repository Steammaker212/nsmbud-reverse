/* DryBones__vfD0
 * address: 0x60316C28   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A9358
// 
// Overridden by: None
signed int __fastcall DryBones__vfD0(Enemy *a1)
{
  float x; // s2
  float y; // s0
  float *v3; // r1
  int v4; // r3
  float z; // lr
  float *v6; // r1
  int v7; // r2
  float v8; // s4
  float v9; // s0
  int *v10; // r2
  float *v11; // r1
  float v12; // s2
  float v13; // s4
  int *v14; // r1
  float v15; // s0
  EnemyFreezeMgr_Info freezeInfo; // [sp+0h] [bp-28h] BYREF

  x = FIELD_U32(a1, 0x0)._._.position.x;
  y = FIELD_U32(a1, 0x0)._._.position.y;
  v3 = flt_60AF1F10;
  v4 = *(unsigned __int16 *)&a1[1]._._.collisionMgr[694];
  if ( !*(_WORD *)&a1[1]._._.collisionMgr[694] )
    v3 = (float *)&unk_60AF2078;
  z = FIELD_U32(a1, 0x0)._._.position.z;
  v6 = &v3[FIELD_U32(a1, 0x0)._._.rotation.y > 0x2AA9FFFFu && FIELD_U32(a1, 0x0)._._.rotation.y < 1];
  v7 = 4;
  if ( !*(_WORD *)&a1[1]._._.collisionMgr[694] )
    v7 = 1;
  v8 = *v6;
  freezeInfo.settings = v7;
  v9 = y + -2.5;
  freezeInfo.position.x = x + v8;
  v10 = dword_60316D14;
  v11 = flt_60316D1C;
  if ( !v4 )
  {
    v11 = &flt_60316D1C[1];
    v10 = &dword_60316D14[1];
  }
  v12 = *v11;
  v13 = *(float *)v10;
  freezeInfo.position.y = v9;
  v14 = dword_60316D24;
  freezeInfo.position.z = z;
  if ( !v4 )
    v14 = &dword_60316D24[1];
  v15 = *(float *)v14;
  freezeInfo.scale.x = v12;
  freezeInfo.scale.y = v13;
  freezeInfo.scale.z = v15;
  freezeInfo.field_1C = 0;
  return EnemyFreezeMgr_freeze(&FIELD_U32(a1, 0x1808), &freezeInfo, 1u);
}
