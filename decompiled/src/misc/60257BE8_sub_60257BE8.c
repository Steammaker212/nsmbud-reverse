/* sub_60257BE8
 * address: 0x60257BE8   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60257BE8(_DWORD ***a1, float a2)
{
  _DWORD **v3; // r1
  unsigned int v4; // r2
  int v5; // s2
  _DWORD **v6; // r0
  _DWORD **v7; // r1
  int v9; // [sp+4h] [bp-64h] BYREF
  _DWORD **v10; // [sp+8h] [bp-60h] BYREF
  _DWORD **v11; // [sp+Ch] [bp-5Ch] BYREF
  unsigned int v12; // [sp+10h] [bp-58h] BYREF
  float32x2_t v13; // [sp+18h] [bp-50h] BYREF
  float v14; // [sp+20h] [bp-48h]
  float v15; // [sp+24h] [bp-44h]
  float v16; // [sp+28h] [bp-40h]
  float v17; // [sp+2Ch] [bp-3Ch]
  float v18; // [sp+30h] [bp-38h]
  float v19; // [sp+34h] [bp-34h]
  float v20; // [sp+38h] [bp-30h]
  float v21; // [sp+3Ch] [bp-2Ch]
  float v22; // [sp+40h] [bp-28h]
  float v23; // [sp+44h] [bp-24h]

  v3 = a1[6];
  v4 = (unsigned int)a1[7];
  v10 = a1[5];
  v11 = v3;
  v12 = v4;
  v5 = (int)a1[12];
  v6 = a1[2];
  v7 = a1[3];
  v13.n64_u64[0] = 1065353216;
  v14 = 0.0;
  v16 = 0.0;
  v17 = 1.0;
  v18 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  v22 = 1.0;
  v15 = *(float *)&v6;
  v19 = *(float *)&v7;
  v23 = a2 + (float)((float)v5 * -10.0);
  v9 = ((int (__fastcall *)(_DWORD ***, _DWORD ***))(*a1)[8])(a1, &v11);
  Mtx34_rotateY(&v13, (unsigned int *)&v9);
  Mtx34_rotateX(&v13, (unsigned int *)&v10);
  v15 = v15 + (float)((float)((float)(v13.n64_f32[1] * 40.0) + (float)(v13.n64_f32[0] * 0.0)) + (float)(v14 * 0.0));
  v19 = v19 + (float)((float)((float)(v17 * 40.0) + (float)(v16 * 0.0)) + (float)(v18 * 0.0));
  v23 = v23 + (float)((float)((float)(v21 * 40.0) + (float)(v20 * 0.0)) + (float)(v22 * 0.0));
  Mtx34_rotateZ(&v13, &v12);
  v15 = v15 + (float)((float)((float)(v13.n64_f32[0] * 0.0) - (float)(v13.n64_f32[1] * 40.0)) + (float)(v14 * 0.0));
  v19 = v19 + (float)((float)((float)(v16 * 0.0) - (float)(v17 * 40.0)) + (float)(v18 * 0.0));
  v23 = v23 + (float)((float)((float)(v20 * 0.0) - (float)(v21 * 40.0)) + (float)(v22 * 0.0));
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(**a1[1] + 60))(*a1[1], &v13);
  (*(void (__fastcall **)(_DWORD, _DWORD ***))(**a1[1] + 68))(*a1[1], a1 + 8);
  sub_604218E0(a1[1]);
  (*(void (__fastcall **)(_DWORD))(**a1[1] + 52))(*a1[1]);
  ((void (__fastcall *)(_DWORD ***))(*a1)[4])(a1);
  (*(void (__fastcall **)(_DWORD))(**a1[1] + 56))(*a1[1]);
  ((void (__fastcall *)(_DWORD ***))(*a1)[5])(a1);
  return ((int (__fastcall *)(_DWORD ***, _DWORD **))(*a1)[10])(a1, a1[1]);
}
