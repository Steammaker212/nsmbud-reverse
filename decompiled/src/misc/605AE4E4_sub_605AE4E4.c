/* sub_605AE4E4
 * address: 0x605AE4E4   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605AE4E4(_DWORD *a1, int *a2, unsigned int *a3)
{
  float *v5; // r6
  int v6; // r7
  int v7; // r0
  float *v8; // r2
  float v9; // s0
  float v10; // s2
  _DWORD **v11; // r4
  _DWORD *v12; // t1
  int v14; // [sp+0h] [bp-50h] BYREF
  int v15; // [sp+4h] [bp-4Ch] BYREF
  float32x2_t v16; // [sp+8h] [bp-48h] BYREF
  int v17; // [sp+10h] [bp-40h]
  int v18; // [sp+14h] [bp-3Ch]
  int v19; // [sp+18h] [bp-38h]
  int v20; // [sp+1Ch] [bp-34h]
  int v21; // [sp+20h] [bp-30h]
  int v22; // [sp+24h] [bp-2Ch]
  int v23; // [sp+28h] [bp-28h]
  int v24; // [sp+2Ch] [bp-24h]
  int v25; // [sp+30h] [bp-20h]
  int v26; // [sp+34h] [bp-1Ch]

  v15 = *a2;
  v14 = a2[1];
  v5 = (float *)(a1 + 1682);
  v6 = a2[2];
  v7 = (*(int (__fastcall **)(_DWORD *))(*a1 + 212))(a1);
  v8 = (float *)&v14;
  v9 = *v5;
  if ( v7 )
    v8 = (float *)&v15;
  v16.n64_u64[0] = 1065353216;
  v10 = *v8;
  v17 = 0;
  v19 = 0;
  v20 = 1065353216;
  v21 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 1065353216;
  *v8 = v9 + v10;
  v18 = v15;
  v22 = v14;
  v26 = v6;
  Mtx34_rotateZ(&v16, a3 + 2);
  Mtx34_rotateY(&v16, a3 + 1);
  Mtx34_rotateX(&v16, a3);
  v12 = (_DWORD *)a1[1526];
  v11 = (_DWORD **)(a1 + 1526);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v12 + 60))(*v12, &v16);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(*(_DWORD *)**v11 + 68))(**v11, v11 - 1490);
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v11 + 56))(**v11);
}
