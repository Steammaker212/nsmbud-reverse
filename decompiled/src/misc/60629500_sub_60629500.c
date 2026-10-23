/* sub_60629500
 * address: 0x60629500   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60629500(unsigned int *a1)
{
  unsigned int *v1; // r4
  _DWORD *v2; // r2
  unsigned int v3; // r0
  int v4; // r1
  int v5; // r2
  unsigned int v6; // t1
  unsigned int v7; // r0
  int (__fastcall *v8)(unsigned int, _DWORD *); // r2
  int v9; // r6
  unsigned int result; // r0
  _DWORD v11[3]; // [sp+4h] [bp-8Ch] BYREF
  _DWORD v12[3]; // [sp+10h] [bp-80h] BYREF
  unsigned int v13; // [sp+1Ch] [bp-74h]
  unsigned int v14; // [sp+2Ch] [bp-64h]
  unsigned int v15; // [sp+3Ch] [bp-54h]
  float32x2_t v16; // [sp+40h] [bp-50h] BYREF
  int v17; // [sp+48h] [bp-48h]
  unsigned int v18; // [sp+4Ch] [bp-44h]
  int v19; // [sp+50h] [bp-40h]
  int v20; // [sp+54h] [bp-3Ch]
  int v21; // [sp+58h] [bp-38h]
  int v22; // [sp+5Ch] [bp-34h]
  int v23; // [sp+60h] [bp-30h]
  int v24; // [sp+64h] [bp-2Ch]
  int v25; // [sp+68h] [bp-28h]
  int v26; // [sp+6Ch] [bp-24h]

  v1 = a1;
  v2 = a1 + 27;
  v3 = a1[27];
  v4 = v2[1];
  v5 = v2[2];
  v16.n64_u64[0] = 1065353216;
  v17 = 0;
  v21 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 1065353216;
  v18 = v3;
  v19 = 0;
  v20 = 1065353216;
  v22 = v4;
  v26 = v5;
  Mtx34_rotateY(&v16, v1 + 40);
  Mtx34_rotateX(&v16, v1 + 39);
  Mtx34_rotateZ(&v16, v1 + 41);
  v6 = v1[1536];
  v1 += 1536;
  (*(void (__fastcall **)(unsigned int, float32x2_t *))(*(_DWORD *)v6 + 60))(v6, &v16);
  (*(void (__fastcall **)(unsigned int))(*(_DWORD *)*v1 + 52))(*v1);
  v7 = *v1;
  v8 = *(int (__fastcall **)(unsigned int, _DWORD *))(*(_DWORD *)*v1 + 84);
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "j_spring";
  v9 = v8(v7, v12);
  (*(void (__fastcall **)(unsigned int, int, _DWORD *, _DWORD *))(*(_DWORD *)*v1 + 100))(*v1, v9, v12, v11);
  v11[0] = v1[4];
  v11[1] = 1065353216;
  v11[2] = 1065353216;
  (*(void (__fastcall **)(unsigned int, int, _DWORD *, _DWORD *))(*(_DWORD *)*v1 + 96))(*v1, v9, v12, v11);
  (*(void (__fastcall **)(unsigned int))(*(_DWORD *)*v1 + 56))(*v1);
  (*(void (__fastcall **)(unsigned int, _DWORD, _DWORD *))(*(_DWORD *)*v1 + 108))(*v1, 0, v12);
  v1[10] = v13;
  v1[11] = v14;
  v1[12] = v15;
  (*(void (__fastcall **)(unsigned int, int, _DWORD *))(*(_DWORD *)*v1 + 108))(*v1, 2, v12);
  v1[7] = v13;
  v1[8] = v14;
  result = v15;
  v1[9] = v15;
  return result;
}
