/* sub_606CCCF0
 * address: 0x606CCCF0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CCCF0(int a1)
{
  unsigned int v1; // r1
  float *v2; // r2
  float v3; // s4
  float v4; // s6
  float v5; // s8
  float v6; // s10
  float v7; // s2
  float v8; // r12
  float v9; // s0
  float v10; // r3
  float v11; // s12
  float v12; // s8
  float v13; // s4
  float v15; // [sp+0h] [bp-18h] BYREF
  float v16; // [sp+4h] [bp-14h]
  int v17; // [sp+8h] [bp-10h]

  v1 = FIELD_U32(a1, 164);
  v2 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v6 = v2[3];
  v7 = FIELD_F32(a1, 8016);
  v8 = FIELD_F32(a1, 108);
  v9 = FIELD_F32(a1, 8020);
  v10 = FIELD_F32(a1, 112);
  v17 = FIELD_U32(a1, 116);
  v16 = v10;
  v15 = v8;
  v11 = (float)(v1 & 0xFFFFFF) * 0.000000059605;
  v12 = v5 + (float)(v11 * v6);
  v13 = v3 + (float)(v4 * v11);
  v15 = FIELD_F32(a1, 6900) + (float)((float)((float)(v7 * v12) - (float)(v13 * v9)) + v8);
  v16 = FIELD_F32(a1, 6904) + (float)((float)((float)(v9 * v12) + (float)(v13 * v7)) + v10);
  return sub_606361F8(a1 + 6916, &v15, (_DWORD *)(a1 + 156));
}
