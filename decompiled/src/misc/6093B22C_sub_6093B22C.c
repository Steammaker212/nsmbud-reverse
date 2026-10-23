/* sub_6093B22C
 * address: 0x6093B22C   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6093B22C(int a1, float *a2, float a3, float a4, float a5)
{
  float v8; // s20
  float v9; // s22
  float v10; // r1
  float v11; // s24
  int v12; // s6
  int v13; // s0
  float v14; // s4
  int v15; // s0
  float v16; // s2
  float v17; // s4
  int v19; // [sp+0h] [bp-90h]
  int v20; // [sp+0h] [bp-90h]
  int v21; // [sp+0h] [bp-90h]
  int v22; // [sp+4h] [bp-8Ch] BYREF
  float v23; // [sp+Ch] [bp-84h]
  _DWORD v24[4]; // [sp+10h] [bp-80h] BYREF
  _DWORD v25[4]; // [sp+20h] [bp-70h] BYREF
  _DWORD v26[5]; // [sp+30h] [bp-60h] BYREF
  float v27; // [sp+44h] [bp-4Ch] BYREF
  float v28; // [sp+48h] [bp-48h]
  float v29; // [sp+4Ch] [bp-44h]

  v27 = a2[3];
  v8 = v27;
  v28 = a2[7];
  v9 = v28;
  v10 = a2[11];
  v26[2] = 0;
  v26[1] = 0;
  v26[0] = 1065353216;
  *(float *)&v26[3] = a5;
  v29 = v10;
  v11 = v10;
  v25[2] = 0;
  v25[1] = 1065353216;
  v25[0] = 0;
  *(float *)&v25[3] = a5;
  v24[2] = 1065353216;
  v24[1] = 0;
  v24[0] = 0;
  *(float *)&v24[3] = a5;
  *(float *)&v12 = v27 + (float)(*a2 * a3);
  *(float *)&v13 = v28 + (float)(a2[4] * a3);
  v23 = v10 + (float)(a2[8] * a3);
  sub_6093AD38(a1, &v27, &v22, (int)v26, v19, v12, v13);
  v14 = a2[9];
  *(float *)&v15 = v9 + (float)(a2[5] * a3);
  *(float *)&v22 = v8 + (float)(a2[1] * a3);
  v23 = v11 + (float)(v14 * a3);
  sub_6093AD38(a1, &v27, &v22, (int)v25, v20, v22, v15);
  v16 = a2[6];
  v17 = a2[10];
  *(float *)&v22 = v8 + (float)(a2[2] * a3);
  v23 = v11 + (float)(v17 * a3);
  return sub_6093AD38(a1, &v27, &v22, (int)v24, v21, v22, COERCE_INT(v9 + (float)(v16 * a3)));
}
