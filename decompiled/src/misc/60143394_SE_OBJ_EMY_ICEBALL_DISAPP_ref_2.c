/* SE_OBJ_EMY_ICEBALL_DISAPP_ref_2
 * address: 0x60143394   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_EMY_ICEBALL_DISAPP_ref_2(int a1)
{
  float v2; // s0
  float v3; // r0
  float *v4; // r5
  int result; // r0
  bool v6; // zf
  int v7; // r6
  Vec2 v8; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  StageActor__accelerateX((StageActor *)a1);
  sub_600035C0(a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 252))(a1, v2) == 1 )
  {
    v3 = FIELD_F32(a1, 112);
    v4 = (float *)(a1 + 108);
LABEL_6:
    v7 = Global_BasicSoundActor2;
    position.x = *v4;
    position.y = v3;
    mapPositionToScreen(&v8, &position);
    BasicSoundActor2_play(v7, "SE_OBJ_EMY_ICEBALL_DISAPP", &v8.x, 0);
    return SE_OBJ_PNGN_ICEBALL_DISAPP_ref(a1);
  }
  v4 = (float *)(a1 + 108);
  ((void (__fastcall *)(Vec3 *, int, int, _DWORD))checkLiquidCollisions)(
    &position,
    a1 + 6104,
    a1 + 108,
    FIELD_U8(a1, 86));
  result = LODWORD(position.x);
  v6 = LODWORD(position.x) == 0;
  FIELD_F32(a1, 6100) = position.x;
  if ( !v6 && FIELD_F32(a1, 112) <= FIELD_F32(a1, 6104) )
  {
    v3 = FIELD_F32(a1, 112);
    goto LABEL_6;
  }
  return result;
}
