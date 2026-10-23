/* SE_OBJ_NUT_REVERT_ref
 * address: 0x60699F5C   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SE_OBJ_NUT_REVERT_ref(int a1)
{
  int v2; // r0
  int *v3; // r7
  unsigned int result; // r0
  int v5; // r2
  int v6; // r0
  float v7; // s0
  bool v8; // zf
  float v9; // r1
  int v10; // r9
  int v11; // r10
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  v3 = (int *)(a1 + 6108);
  v2 = FIELD_U32(a1, 6108);
  if ( v2 >= 1 )
    return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB952C);
  v5 = FIELD_U32(a1, 6128);
  if ( v5 < 1 )
  {
    v6 = v2 - FIELD_U32(a1, 6116);
    if ( v6 < FIELD_U32(a1, 6112) )
      v6 = FIELD_U32(a1, 6112);
    *v3 = v6;
    FIELD_F32(a1, 120) = (float)v6 * 0.000000010245;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 128) = 0;
    v7 = CollisionActor__handleSpeed((CollisionActor *)a1);
    v8 = *v3 == 0;
    FIELD_U32(a1, 156) += *v3;
    if ( !v8 )
    {
      v9 = FIELD_F32(a1, 112);
      v10 = FIELD_U32(a1, 8);
      v11 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v9;
      mapPositionToScreen(&out, &position);
      SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v11, "SE_OBJ_NUT_REVERT", v10, &out, 0);
    }
    CollisionMgr_process((_BYTE *)(a1 + 648), v7);
    result = FIELD_U32(a1, 2872);
    if ( (result & 0x880000) != 0 )
    {
      result &= 0x20000000u;
      if ( !result )
      {
        FIELD_U32(a1, 6112) = 0;
        *v3 = 0;
        FIELD_U32(a1, 120) = 0;
        result = FIELD_U32(a1, 584);
        FIELD_U32(a1, 108) = result;
      }
    }
  }
  else
  {
    result = v5 - 1;
    FIELD_U32(a1, 6128) = v5 - 1;
    if ( v5 == 1 )
    {
      result = dword_60CB9508;
      FIELD_U32(a1, 6112) = dword_60CB9508;
    }
  }
  return result;
}
