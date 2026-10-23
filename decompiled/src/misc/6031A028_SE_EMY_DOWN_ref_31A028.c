/* SE_EMY_DOWN_ref_31A028
 * address: 0x6031A028   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_31A028(int a1)
{
  float v2; // s0
  int *v3; // r0
  int v4; // r1
  int v5; // r2
  float v6; // r0
  int result; // r0
  float v8; // r1
  float v9; // r1
  int v10; // r5
  Vec2 v11; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( (FIELD_U8(a1, 2872) & 1) == 0 )
  {
    FIELD_U32(a1, 6312) = 0;
    FIELD_U32(a1, 6316) = 0;
    FIELD_U32(a1, 6320) = 0;
    FIELD_U32(a1, 100) = -1103101952;
    goto LABEL_10;
  }
  v3 = (int *)(a1 + 6396);
  v4 = FIELD_U32(a1, 6396);
  if ( v4 <= 1 )
  {
    FIELD_U32(a1, 6400) -= 0x1000000;
    FIELD_U32(a1, 124) = 1065353216;
    *v3 = v4 + 1;
LABEL_8:
    if ( !FIELD_U8(a1, 6428) )
    {
      v6 = FIELD_F32(a1, 108);
      position.y = FIELD_F32(a1, 112);
      position.x = v6;
      position.z = sub_600024C4(a1);
      EffectData_create(712, &position, 0, a1 + 144);
    }
    goto LABEL_10;
  }
  v5 = 4;
  if ( v4 == 2 )
    v5 = 3;
  *v3 = v5;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 6400) = 0;
  if ( v5 <= 3 )
    goto LABEL_8;
LABEL_10:
  result = FIELD_U8(a1, 536);
  if ( !FIELD_U8(a1, 536) )
  {
    result = sub_60003AE0((StageActor *)a1);
    if ( result == 1 )
    {
      v8 = FIELD_F32(a1, 112);
      position.x = FIELD_F32(a1, 108);
      position.y = v8;
      position.z = 0.0;
      sub_602A38A4(a1, &position.x);
      v9 = FIELD_F32(a1, 112);
      v10 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v9;
      mapPositionToScreen(&v11, &position);
      BasicSoundActor1_playSound(v10, "SE_EMY_DOWN", (int)&v11, 0);
      return sub_602A6024(a1, FIELD_U32(a1, 80), -1, -1);
    }
  }
  return result;
}
