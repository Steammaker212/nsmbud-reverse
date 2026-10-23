/* SE_EMY_KG_KILLER_FLY_ref
 * address: 0x60327674   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall SE_EMY_KG_KILLER_FLY_ref(int a1)
{
  int v2; // r1
  int *v3; // r3
  int v4; // r12
  int v5; // r2
  int v6; // r0
  char *v7; // r0
  int v8; // r7
  int v9; // t1
  _BOOL4 v10; // r6
  char v11; // r1
  int v12; // r6
  int v13; // r5
  float v14; // r0
  float v15; // r1
  unsigned int v16; // r0
  Vec2 out; // [sp+18h] [bp-28h] BYREF
  Vec3 position; // [sp+20h] [bp-20h] BYREF

  v2 = 0;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  v3 = (int *)(a1 + 86956);
  v4 = FIELD_U32(a1, 86956);
  v5 = FIELD_U32(a1, 164);
  v6 = a1 + 86956;
  v9 = FIELD_U8(v6, 4);
  v7 = (char *)(v6 + 4);
  v8 = v9;
  v10 = v5 < -268435455;
  if ( !v9 )
    v10 = v5 >= 0x10000000;
  if ( v10 )
  {
    if ( v4 - 0x80000 > 0 )
      v2 = v4 - 0x80000;
  }
  else
  {
    v2 = v4 + 0x80000;
    if ( v4 + 0x80000 >= 0x800000 )
      v2 = 0x800000;
  }
  *v3 = v2;
  if ( v8 )
  {
    FIELD_U32(a1, 164) = v5 - v2;
    if ( v2 )
      goto LABEL_15;
    v11 = 0;
  }
  else
  {
    FIELD_U32(a1, 164) = v2 + v5;
    if ( v2 )
      goto LABEL_15;
    v11 = 1;
  }
  *v7 = v11;
LABEL_15:
  Animation_update(**(_DWORD **)(FIELD_U32(a1, 6300) + 28));
  v12 = FIELD_U32(a1, 8);
  v13 = Global_BasicSoundActor1;
  v14 = FIELD_F32(a1, 86908);
  position.x = FIELD_F32(a1, 86904);
  position.y = v14;
  mapPositionToScreen(&out, &position);
  j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v13, "SE_EMY_KG_KILLER_FLY", v12, &out, 0);
  EffectWrapper_update(
    (EffectWrapper *)(a1 + 6304),
    560,
    (Vec3 *)(a1 + 86916),
    (Vec3i *)(a1 + 156),
    (Vec3 *)(a1 + 87996));
  position.x = 0.0;
  v15 = -2.0;
  v16 = FIELD_U32(a1, 80);
  if ( v16 <= 2 )
    v15 = flt_60AFF7E0[v16];
  position.x = v15;
  return LightSource_update1((LightSource *)(a1 + 87312), 50, (Vec3 *)(a1 + 87300), &position, 0, 0, 0, 0, 0);
}
