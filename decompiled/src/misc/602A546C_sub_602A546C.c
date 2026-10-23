/* sub_602A546C
 * address: 0x602A546C   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int64 __fastcall sub_602A546C(int **a1)
{
  int **v1; // r4
  const char *v2; // r1
  unsigned int v3; // r2
  int *v4; // t1
  int v5; // r0
  int (__fastcall *v6)(int, int (***)()); // r2
  int v7; // r0
  unsigned __int64 result; // r0
  int (**v9)(); // [sp+0h] [bp-70h] BYREF
  const char *v10; // [sp+4h] [bp-6Ch] BYREF
  unsigned int v11; // [sp+8h] [bp-68h] BYREF
  unsigned int v12; // [sp+Ch] [bp-64h]
  unsigned int v13; // [sp+1Ch] [bp-54h]
  float32x2_t v14; // [sp+30h] [bp-40h] BYREF
  int v15; // [sp+38h] [bp-38h]
  int *v16; // [sp+3Ch] [bp-34h]
  int v17; // [sp+40h] [bp-30h]
  int v18; // [sp+44h] [bp-2Ch]
  int v19; // [sp+48h] [bp-28h]
  int *v20; // [sp+4Ch] [bp-24h]
  int v21; // [sp+50h] [bp-20h]
  int v22; // [sp+54h] [bp-1Ch]
  int v23; // [sp+58h] [bp-18h]
  int *v24; // [sp+5Ch] [bp-14h]

  v1 = a1;
  v2 = (const char *)a1[40];
  v3 = (unsigned int)a1[41];
  v9 = (int (**)())a1[39];
  v10 = v2;
  v11 = v3;
  v14.n64_u64[0] = 1065353216;
  v15 = 0;
  v17 = 0;
  v18 = 1065353216;
  v19 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 1065353216;
  v16 = a1[27];
  v20 = a1[28];
  v24 = a1[29];
  Mtx34_rotateY(&v14, (unsigned int *)&v10);
  Mtx34_rotateX(&v14, (unsigned int *)&v9);
  Mtx34_rotateZ(&v14, &v11);
  v4 = v1[1526];
  v1 += 1526;
  (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)*v4 + 60))(*v4, &v14);
  (*(void (__fastcall **)(int, int **))(*(_DWORD *)**v1 + 68))(**v1, v1 - 1490);
  sub_604218E0(*v1);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v1 + 52))(**v1);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v1 + 56))(**v1);
  v5 = **v1;
  v6 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v5 + 84);
  v9 = &sead__SafeStringBase__vtable;
  v10 = "head";
  v7 = v6(v5, &v9);
  (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v1 + 108))(**v1, v7, &v9);
  result = __PAIR64__(v13, v12);
  *((_QWORD *)v1 + 8) = __PAIR64__(v13, v12);
  return result;
}
