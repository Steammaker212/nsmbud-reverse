/* sub_605D862C
 * address: 0x605D862C   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x2_t *__fastcall sub_605D862C(float32x2_t *a1)
{
  float v2; // s16
  unsigned int v3; // r1
  unsigned int v4; // r2
  int v5; // r0
  unsigned __int64 v6; // d17
  unsigned __int64 v7; // d17
  unsigned __int64 v8; // d17
  float32x2_t v10; // [sp+0h] [bp-60h] BYREF
  unsigned __int64 v11; // [sp+8h] [bp-58h]
  __int64 v12; // [sp+10h] [bp-50h]
  unsigned __int64 v13; // [sp+18h] [bp-48h]
  unsigned __int64 v14; // [sp+20h] [bp-40h]
  unsigned __int64 v15; // [sp+28h] [bp-38h]
  unsigned int v16; // [sp+30h] [bp-30h] BYREF
  unsigned int v17; // [sp+34h] [bp-2Ch] BYREF
  unsigned int v18; // [sp+38h] [bp-28h] BYREF

  if ( sub_605DBD64(a1) )
    v2 = 0.0;
  else
    v2 = a1[72].n64_f32[0];
  v3 = a1[20].n64_u32[0];
  v4 = a1[20].n64_u32[1];
  v16 = a1[19].n64_u32[1];
  v17 = v3;
  v18 = v4;
  v5 = sub_605DBDAC(a1);
  if ( v5 )
    v17 += sub_607BA5CC(v5);
  v10.n64_u64[0] = 1065353216;
  LODWORD(v11) = 0;
  v12 = 0x3F80000000000000LL;
  LODWORD(v13) = 0;
  v14 = 0;
  LODWORD(v15) = 1065353216;
  HIDWORD(v11) = a1[13].n64_u32[1];
  HIDWORD(v13) = a1[14].n64_u32[0];
  HIDWORD(v15) = a1[14].n64_u32[1];
  Mtx34_rotateY(&v10, &v17);
  *((float *)&v11 + 1) = *((float *)&v11 + 1)
                       + (float)((float)((float)(v2 * v10.n64_f32[1]) + (float)(v10.n64_f32[0] * 0.0))
                               + (float)(*(float *)&v11 * 0.0));
  *((float *)&v13 + 1) = *((float *)&v13 + 1)
                       + (float)((float)((float)(v2 * *((float *)&v12 + 1)) + (float)(*(float *)&v12 * 0.0))
                               + (float)(*(float *)&v13 * 0.0));
  *((float *)&v15 + 1) = *((float *)&v15 + 1)
                       + (float)((float)((float)(v2 * *((float *)&v14 + 1)) + (float)(*(float *)&v14 * 0.0))
                               + (float)(*(float *)&v15 * 0.0));
  Mtx34_rotateX(&v10, &v16);
  Mtx34_rotateZ(&v10, &v18);
  *((float *)&v11 + 1) = *((float *)&v11 + 1)
                       + (float)((float)((float)(v10.n64_f32[0] * 0.0) - (float)(v10.n64_f32[1] * v2))
                               + (float)(*(float *)&v11 * 0.0));
  *((float *)&v13 + 1) = *((float *)&v13 + 1)
                       + (float)((float)((float)(*(float *)&v12 * 0.0) - (float)(*((float *)&v12 + 1) * v2))
                               + (float)(*(float *)&v13 * 0.0));
  *((float *)&v15 + 1) = *((float *)&v15 + 1)
                       + (float)((float)((float)(*(float *)&v14 * 0.0) - (float)(*((float *)&v14 + 1) * v2))
                               + (float)(*(float *)&v15 * 0.0));
  v6 = v11;
  a1[834].n64_u64[0] = v10.n64_u64[0];
  a1[835].n64_u64[0] = v6;
  v7 = v13;
  a1[836].n64_u64[0] = v12;
  a1[837].n64_u64[0] = v7;
  v8 = v15;
  a1[838].n64_u64[0] = v14;
  a1[839].n64_u64[0] = v8;
  return a1 + 838;
}
