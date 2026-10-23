/* sub_6079C9D8
 * address: 0x6079C9D8   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079C9D8(int a1, float *a2, int a3, int a4)
{
  float v5; // s0
  float v6; // r1
  float v9; // s2
  int v10; // r0
  float v11; // s0
  float v12; // s0

  v5 = a2[1];
  v6 = *a2;
  v9 = FIELD_F32(a1, 1244);
  v10 = FIELD_U32(a1, 116);
  FIELD_F32(a1, 108) = v6;
  v11 = (float)(v5 + (float)(v9 * -0.5)) + -2.0;
  FIELD_F32(a1, 112) = v11;
  FIELD_F32(a1, 584) = v6;
  FIELD_F32(a1, 588) = v11;
  FIELD_U32(a1, 592) = v10;
  FIELD_F32(a1, 608) = v6;
  FIELD_F32(a1, 612) = v11;
  FIELD_U32(a1, 616) = v10;
  sub_607A5504(a1);
  v12 = *(float *)a3;
  FIELD_U32(a1, 88) = *(_DWORD *)a3;
  FIELD_F32(a1, 92) = v12;
  FIELD_U32(a1, 124) = FIELD_U32(a3, 4);
  FIELD_U32(a1, 80) = v12 <= 0.0;
  FIELD_U32(a1, 12232) = a4;
  sub_60766314(a1, (StateBase *)&dword_60CC4B4C, 0);
  return 1;
}
