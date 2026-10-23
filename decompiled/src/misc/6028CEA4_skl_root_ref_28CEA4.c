/* skl_root_ref_28CEA4
 * address: 0x6028CEA4   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall skl_root_ref_28CEA4(unsigned int *a1)
{
  unsigned int *v1; // r4
  _DWORD *v2; // t1
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  int v5; // r0
  unsigned int result; // r0
  _DWORD v7[11]; // [sp+0h] [bp-70h] BYREF
  unsigned int v8; // [sp+2Ch] [bp-44h]
  float32x2_t v9; // [sp+30h] [bp-40h] BYREF
  int v10; // [sp+38h] [bp-38h]
  unsigned int v11; // [sp+3Ch] [bp-34h]
  int v12; // [sp+40h] [bp-30h]
  int v13; // [sp+44h] [bp-2Ch]
  int v14; // [sp+48h] [bp-28h]
  unsigned int v15; // [sp+4Ch] [bp-24h]
  int v16; // [sp+50h] [bp-20h]
  int v17; // [sp+54h] [bp-1Ch]
  int v18; // [sp+58h] [bp-18h]
  unsigned int v19; // [sp+5Ch] [bp-14h]

  v1 = a1;
  v9.n64_u64[0] = 1065353216;
  v10 = 0;
  v12 = 0;
  v13 = 1065353216;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 1065353216;
  v11 = a1[27];
  v15 = a1[28];
  v19 = a1[29];
  Mtx34_rotateY(&v9, a1 + 40);
  Mtx34_rotateX(&v9, v1 + 39);
  Mtx34_rotateZ(&v9, v1 + 41);
  v2 = (_DWORD *)v1[1575];
  v1 += 1575;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v2 + 60))(*v2, &v9);
  (*(void (__fastcall **)(_DWORD, unsigned int *))(**(_DWORD **)*v1 + 68))(*(_DWORD *)*v1, v1 - 1539);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)*v1 + 52))(*(_DWORD *)*v1);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)*v1 + 56))(*(_DWORD *)*v1);
  v3 = *(_DWORD *)*v1;
  v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v3 + 84);
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "skl_root";
  v5 = v4(v3, v7);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(**(_DWORD **)*v1 + 108))(*(_DWORD *)*v1, v5, v7);
  v1[5] = v7[3];
  v1[6] = v7[7];
  result = v8;
  v1[7] = v8;
  return result;
}
