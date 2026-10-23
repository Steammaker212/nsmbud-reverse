/* sub_60442878
 * address: 0x60442878   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60442878(int a1, int a2, int a3)
{
  float v4; // s2
  float *v5; // r0
  int v6; // r1
  float v7; // s0
  float v8; // s0
  float v9; // s2
  int v10; // r0
  float v11; // r0
  float v12; // r1
  float v13; // s0
  float v14; // r1
  float v15; // s0
  float v16; // s0

  v4 = FIELD_F32(a3, 56);
  v5 = (float *)(a1 + 1684);
  v6 = FIELD_U32(a3, 60);
  v7 = *v5;
  FIELD_U32(a2, 52) = FIELD_U32(a3, 52);
  FIELD_F32(a2, 56) = (float)(v7 + v7) - v4;
  FIELD_U32(a2, 60) = v6;
  v8 = *v5;
  v9 = FIELD_F32(a3, 68);
  v10 = FIELD_U32(a3, 72);
  FIELD_U32(a2, 64) = FIELD_U32(a3, 64);
  FIELD_F32(a2, 68) = (float)(v8 + v8) - v9;
  FIELD_U32(a2, 72) = v10;
  v11 = FIELD_F32(a3, 76);
  FIELD_F32(a2, 76) = v11;
  v12 = FIELD_F32(a3, 80);
  FIELD_F32(a2, 80) = v12;
  v13 = v12;
  v14 = FIELD_F32(a3, 84);
  FIELD_F32(a2, 84) = v14;
  v15 = sqrtf((float)((float)(v13 * v13) + (float)(v11 * v11)) + (float)(v14 * v14));
  if ( v15 > 0.0 )
  {
    v16 = 1.0 / v15;
    FIELD_F32(a2, 76) = v16 * FIELD_F32(a2, 76);
    FIELD_F32(a2, 80) = v16 * FIELD_F32(a2, 80);
    FIELD_F32(a2, 84) = v16 * FIELD_F32(a2, 84);
  }
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 16))(a2, a2 + 4);
}
