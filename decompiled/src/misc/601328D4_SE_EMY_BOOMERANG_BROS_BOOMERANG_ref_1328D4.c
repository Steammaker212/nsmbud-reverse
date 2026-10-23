/* SE_EMY_BOOMERANG_BROS_BOOMERANG_ref_1328D4
 * address: 0x601328D4   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_BOOMERANG_BROS_BOOMERANG_ref_1328D4(int a1)
{
  int v2; // r0
  float v3; // r1
  int v4; // r6
  int v5; // r5
  bool v6; // zf
  int v7; // r0
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  if ( FIELD_U8(dword_60CC6D8C, 17) )
    CollisionMgr_process((_BYTE *)(a1 + 648));
  v2 = FIELD_U32(a1, 6520) - 167772;
  if ( v2 <= 117440512 )
    v2 = 117440512;
  FIELD_U32(a1, 6520) = v2;
  FIELD_U32(a1, 156) += v2;
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_U32(a1, 8);
  v5 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v3;
  mapPositionToScreen(&out, &position);
  j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v5, "SE_EMY_BOOMERANG_BROS_BOOMERANG", v4, &out, 0);
  v6 = FIELD_U8(dword_60CC6D8C, 17) == 0;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v6 = FIELD_U8(a1, 6592) == 0;
  if ( v6 )
  {
    if ( (nullsub_7(a1 + 6600), v7 = FIELD_U32(a1, 8824), (v7 & 0x10400) == 0x400)
      || (v7 & 0x440000) != 0 && (v7 & 0x10000000) == 0
      || (v7 & 1) != 0
      || !(((v7 & 0x880000) == 0) | ((v7 & 0x20000000u) >> 29)) )
    {
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C87644);
    }
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
}
