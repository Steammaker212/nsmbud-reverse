/* sub_60386364
 * address: 0x60386364   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60386364(int a1, float *a2, unsigned int a3, int a4)
{
  unsigned int v7; // r6
  int *v8; // r2
  unsigned int v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r2
  float v12; // r0
  int v13; // r1
  float v14; // s0
  int v15; // r6
  float32x2_t v17; // [sp+0h] [bp-30h] BYREF
  int v18; // [sp+8h] [bp-28h]
  float v19; // [sp+Ch] [bp-24h]
  int v20; // [sp+10h] [bp-20h]
  int v21; // [sp+14h] [bp-1Ch]
  int v22; // [sp+18h] [bp-18h]
  int v23; // [sp+1Ch] [bp-14h]
  int v24; // [sp+20h] [bp-10h]
  int v25; // [sp+24h] [bp-Ch]
  int v26; // [sp+28h] [bp-8h]
  float v27; // [sp+2Ch] [bp-4h]
  unsigned int v28; // [sp+30h] [bp+0h] BYREF
  unsigned int v29; // [sp+34h] [bp+4h] BYREF
  unsigned int v30; // [sp+38h] [bp+8h] BYREF

  v7 = 0;
  v8 = (int *)(a2 + 3);
  v9 = *((_DWORD *)a2 + 3);
  v10 = *((_DWORD *)a2 + 4);
  v11 = v8[2];
  v28 = v9;
  v29 = v10;
  v30 = v11;
  v12 = *a2;
  v13 = *((_DWORD *)a2 + 1);
  v14 = a2[2];
  v17.n64_u64[0] = 1065353216;
  v18 = 0;
  v20 = 0;
  v21 = 1065353216;
  v22 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 1065353216;
  v19 = v12;
  v23 = v13;
  v27 = v14 + (float)((float)a4 * 16.0);
  Mtx34_rotateY(&v17, &v29);
  Mtx34_rotateX(&v17, &v28);
  Mtx34_rotateZ(&v17, &v30);
  if ( a3 < 2 )
    v7 = a3;
  v15 = a1 + 4 * v7;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(v15 + 8) + 60))(**(_DWORD **)(v15 + 8), &v17);
  (*(void (__fastcall **)(_DWORD, int *))(***(_DWORD ***)(v15 + 8) + 68))(**(_DWORD **)(v15 + 8), (int *)a2 + 6);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(v15 + 8) + 52))(**(_DWORD **)(v15 + 8));
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(v15 + 8) + 56))(**(_DWORD **)(v15 + 8));
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}
