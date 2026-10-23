/* sub_600BB614
 * address: 0x600BB614   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BB614(int a1)
{
  float v2; // s0
  float v3; // s2
  int v4; // r1
  unsigned int v5; // r2
  float *v6; // r3
  float v7; // s6
  float v8; // s10
  int result; // r0

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6188));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 120) + FIELD_F32(a1, 6200);
  FIELD_F32(a1, 6200) = v2;
  v3 = FIELD_F32(a1, 124) + FIELD_F32(a1, 6204);
  FIELD_F32(a1, 6204) = v3;
  FIELD_F32(a1, 112) = v3;
  v4 = FIELD_U32(a1, 6184);
  v5 = FIELD_U32(a1, 6196) + v4;
  FIELD_U32(a1, 6196) = v5;
  v6 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v7 = (float)(v5 & 0xFFFFFF);
  v8 = FIELD_F32(a1, 6180);
  FIELD_F32(a1, 108) = v2 + (float)(v8 * (float)(v6[2] + (float)((float)(v7 * v6[3]) * 0.000000059605)));
  FIELD_F32(a1, 116) = FIELD_F32(a1, 6208)
                       - (float)(v8 * (float)(*v6 + (float)((float)(v7 * v6[1]) * 0.000000059605)));
  FIELD_U32(a1, 160) += v4;
  result = sub_60235E50(a1 + 6264);
  if ( result == 1 )
    return EffectData_update((EffectData *)(a1 + 6264), (Vec3 *)(a1 + 108), 0, (Vec3 *)(a1 + 144));
  return result;
}
