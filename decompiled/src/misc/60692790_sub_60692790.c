/* sub_60692790
 * address: 0x60692790   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60692790(int a1)
{
  unsigned int v2; // r5
  int ResArchiveById; // r0
  int v4; // r3
  int *v5; // r5
  float v6; // s2
  float v7; // s2

  FIELD_U32(a1, 116) = 0;
  v2 = FIELD_U32(a1, 20);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v4 = (v2 >> 8) & 3;
  if ( v4 == 3 )
    v4 = 0;
  v5 = &dword_60CB90F0[15 * v4];
  sub_6069339C(a1 + 6124, ResArchiveById, v5);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) - *((float *)v5 + 12);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) - *((float *)v5 + 13);
  v6 = *((float *)v5 + 13) + *((float *)v5 + 13);
  FIELD_F32(a1, 508) = *((float *)v5 + 12) * -2.0;
  FIELD_F32(a1, 512) = v6;
  v7 = (float)(*((float *)v5 + 13) + *((float *)v5 + 13)) + 64.0;
  FIELD_F32(a1, 7604) = 64.0 - (float)(*((float *)v5 + 12) + *((float *)v5 + 12));
  FIELD_F32(a1, 7608) = v7;
  ShapedCollider_init((ShapedCollider *)(a1 + 6904), (StageActor *)a1, (ShapedColliderInfo *)(v5 + 3));
  FIELD_U32(a1, 7240) = a1 + 7600;
  FIELD_U32(a1, 7228) = sub_606928C0;
  FIELD_U32(a1, 7232) = sub_606928E0;
  FIELD_U32(a1, 7236) = sub_60692900;
  return 1;
}
