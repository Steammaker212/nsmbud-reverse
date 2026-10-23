/* sub_60703E9C
 * address: 0x60703E9C   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60703E9C(_DWORD *a1, float32x2_t *a2)
{
  float *v4; // r5
  float v5; // s0
  float v6; // s3
  float v7; // s1
  _DWORD *v8; // r0
  float v9; // s2
  float v10; // s0
  unsigned int *v11; // r4
  int v12; // t1
  float v13; // s0
  int result; // r0
  int v15; // [sp+0h] [bp-28h] BYREF
  int v16; // [sp+4h] [bp-24h] BYREF

  v4 = (float *)(a1 + 1737);
  if ( a1[1736] )
  {
    v5 = 1.0;
    v6 = 0.1;
    v7 = 0.5;
    v8 = a1 + 1737;
    v9 = 1.0;
  }
  else
  {
    v5 = 0.0;
    v7 = 0.025;
    v9 = 0.01;
    v6 = 0.00000001;
    v8 = a1 + 1737;
  }
  ((void (__fastcall *)(_DWORD *, float, float, float, float))loc_60832560)(v8, v5, v7, v9, v6);
  Mtx34_rotateZ(a2, a1 + 1738);
  v10 = (float)(*v4 * 0.0) + 1.07;
  FIELD_F32(a2, 0x0)[1] = FIELD_F32(a2, 0x0)[1] * v10;
  a2[2].n64_f32[1] = v10 * a2[2].n64_f32[1];
  a2[4].n64_f32[1] = v10 * a2[4].n64_f32[1];
  v16 = -a1[1738];
  Mtx34_rotateZ(a2, (unsigned int *)&v16);
  a1[1738] += (int)(float)((float)(*v4 * 150730000.0) + 0.0) + 16384000;
  v12 = a1[1739];
  v11 = a1 + 1739;
  v15 = -v12;
  Mtx34_rotateZ(a2, (unsigned int *)&v15);
  v13 = (float)(*v4 * 0.0) + 1.03;
  FIELD_F32(a2, 0x0)[1] = FIELD_F32(a2, 0x0)[1] * v13;
  a2[2].n64_f32[1] = v13 * a2[2].n64_f32[1];
  a2[4].n64_f32[1] = v13 * a2[4].n64_f32[1];
  Mtx34_rotateZ(a2, v11);
  result = *v11 + (int)(float)((float)(*v4 * 157290000.0) + 0.0) + 9830400;
  *v11 = result;
  return result;
}
