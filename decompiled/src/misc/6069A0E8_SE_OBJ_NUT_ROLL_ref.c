/* SE_OBJ_NUT_ROLL_ref
 * address: 0x6069A0E8   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_OBJ_NUT_ROLL_ref(int a1)
{
  int *v2; // r7
  int v3; // r0
  float v4; // s0
  int v5; // r0
  float v6; // r1
  int v7; // r5
  int v8; // r6
  int v9; // r0
  int v10; // r0
  StateMethodExecuter *result; // r0
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  v2 = (int *)(a1 + 6108);
  v3 = FIELD_U32(a1, 6108) - FIELD_U32(a1, 6116);
  if ( v3 < FIELD_U32(a1, 6112) )
    v3 = FIELD_U32(a1, 6112);
  *v2 = v3;
  FIELD_F32(a1, 120) = (float)v3 * 0.000000010245;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  v4 = CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 156) += *v2;
  CollisionMgr_process((_BYTE *)(a1 + 648), v4);
  v5 = FIELD_U32(a1, 2872);
  if ( (v5 & 0x440000) != 0 && (v5 & 0x10000000) == 0 )
  {
    FIELD_U32(a1, 108) = FIELD_U32(a1, 584);
    FIELD_U32(a1, 120) = 0;
  }
  v6 = FIELD_F32(a1, 112);
  v7 = FIELD_U32(a1, 8);
  v8 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v6;
  mapPositionToScreen(&out, &position);
  j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v8, "SE_OBJ_NUT_ROLL", v7, &out, 0);
  v9 = FIELD_U32(a1, 2872);
  if ( (v9 & 0x880000) == 0 || (v9 & 0x20000000) != 0 )
  {
    result = (StateMethodExecuter *)*v2;
    if ( *v2 )
      return result;
    v10 = FIELD_U32(a1, 584);
  }
  else
  {
    v10 = FIELD_U32(a1, 584);
  }
  FIELD_U32(a1, 108) = v10;
  return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB950C);
}
