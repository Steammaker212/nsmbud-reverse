/* sub_6075CBEC
 * address: 0x6075CBEC   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075CBEC(int a1)
{
  unsigned int v3; // [sp+4h] [bp-44h] BYREF
  float32x2_t v4; // [sp+8h] [bp-40h] BYREF
  float v5; // [sp+10h] [bp-38h]
  float v6; // [sp+14h] [bp-34h]
  float v7; // [sp+18h] [bp-30h]
  float v8; // [sp+1Ch] [bp-2Ch]
  float v9; // [sp+20h] [bp-28h]
  float v10; // [sp+24h] [bp-24h]
  float v11; // [sp+28h] [bp-20h]
  float v12; // [sp+2Ch] [bp-1Ch]
  float v13; // [sp+30h] [bp-18h]
  float v14; // [sp+34h] [bp-14h]

  face_1_ref_78D328();
  sub_6075CD88(a1);
  face_1_ref_78E48C(a1, &v4);
  v3 = 0;
  Mtx34_rotateX(&v4, &v3);
  v3 = 0x40000000;
  Mtx34_rotateY(&v4, &v3);
  v3 = 0x80000000;
  Mtx34_rotateZ(&v4, &v3);
  v6 = v6 + (float)((float)((float)(-1.0 * v4.n64_f32[1]) + (float)(0.0 * v4.n64_f32[0])) + (float)(0.0 * v5));
  v10 = v10 + (float)((float)((float)(-1.0 * v8) + (float)(0.0 * v7)) + (float)(0.0 * v9));
  v14 = v14 + (float)((float)((float)(-1.0 * v12) + (float)(0.0 * v11)) + (float)(0.0 * v13));
  v4.n64_f32[0] = 0.23 * v4.n64_f32[0];
  v7 = 0.23 * v7;
  v11 = 0.23 * v11;
  v4.n64_f32[1] = 0.23 * v4.n64_f32[1];
  v8 = 0.23 * v8;
  v12 = 0.23 * v12;
  v5 = 0.23 * v5;
  v9 = 0.23 * v9;
  v13 = 0.23 * v13;
  sub_6075C5FC(a1, (int)&v4);
  return sub_6075CF0C(a1, &v4);
}
