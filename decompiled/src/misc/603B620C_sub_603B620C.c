/* sub_603B620C
 * address: 0x603B620C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B620C(unsigned int *a1)
{
  unsigned int *v1; // r4
  _DWORD *v2; // t1
  int v4; // [sp+4h] [bp-44h] BYREF
  float32x2_t v5; // [sp+8h] [bp-40h] BYREF
  int v6; // [sp+10h] [bp-38h]
  unsigned int v7; // [sp+14h] [bp-34h]
  int v8; // [sp+18h] [bp-30h]
  int v9; // [sp+1Ch] [bp-2Ch]
  int v10; // [sp+20h] [bp-28h]
  unsigned int v11; // [sp+24h] [bp-24h]
  int v12; // [sp+28h] [bp-20h]
  int v13; // [sp+2Ch] [bp-1Ch]
  int v14; // [sp+30h] [bp-18h]
  unsigned int v15; // [sp+34h] [bp-14h]

  v1 = a1;
  v5.n64_u64[0] = 1065353216;
  v6 = 0;
  v8 = 0;
  v9 = 1065353216;
  v10 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 1065353216;
  v7 = a1[27];
  v11 = a1[28];
  v15 = a1[29];
  Mtx34_rotateY(&v5, a1 + 40);
  v4 = v1[2982] + v1[41];
  Mtx34_rotateZ(&v5, (unsigned int *)&v4);
  Mtx34_rotateX(&v5, v1 + 39);
  v2 = (_DWORD *)v1[1575];
  v1 += 1575;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v2 + 60))(*v2, &v5);
  (*(void (__fastcall **)(_DWORD, unsigned int *))(**(_DWORD **)*v1 + 68))(*(_DWORD *)*v1, v1 + 12);
  return ModelWrapper_updateModel((ModelWrapper *)*v1);
}
