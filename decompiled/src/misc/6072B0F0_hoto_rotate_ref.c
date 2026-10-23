/* hoto_rotate_ref
 * address: 0x6072B0F0   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall hoto_rotate_ref(int a1)
{
  unsigned int *v1; // r4
  int v2; // r0
  int (__fastcall *v3)(int, int (***)()); // r2
  int v4; // r6
  int v5; // r0
  int (__fastcall *v6)(int, int (***)()); // r2
  int v7; // r0
  _DWORD *result; // r0
  _DWORD v9[3]; // [sp+0h] [bp-68h] BYREF
  int (**v10)(); // [sp+Ch] [bp-5Ch] BYREF
  const char *v11; // [sp+10h] [bp-58h]
  float32x2_t v12; // [sp+18h] [bp-50h] BYREF
  int v13; // [sp+20h] [bp-48h]
  _DWORD *v14; // [sp+24h] [bp-44h]
  int v15; // [sp+28h] [bp-40h]
  int v16; // [sp+2Ch] [bp-3Ch]
  int v17; // [sp+30h] [bp-38h]
  _DWORD *v18; // [sp+34h] [bp-34h]
  int v19; // [sp+38h] [bp-30h]
  int v20; // [sp+3Ch] [bp-2Ch]
  int v21; // [sp+40h] [bp-28h]
  _DWORD *v22; // [sp+44h] [bp-24h]

  v1 = (unsigned int *)(a1 + 6300);
  Animation_update(**(_DWORD **)(FIELD_U32(a1, 6300) + 12));
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)*v1 + 52))(*(_DWORD *)*v1);
  v12.n64_u64[0] = 1065353216;
  v13 = 0;
  v15 = 0;
  v16 = 1065353216;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 1065353216;
  v14 = (_DWORD *)*(v1 - 1548);
  v18 = (_DWORD *)*(v1 - 1547);
  v22 = (_DWORD *)*(v1 - 1546);
  Mtx34_rotateY(&v12, v1 - 1535);
  Mtx34_rotateX(&v12, v1 - 1536);
  Mtx34_rotateZ(&v12, v1 - 1534);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(**(_DWORD **)*v1 + 68))(*(_DWORD *)*v1, (_DWORD **)v1 - 1539);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(**(_DWORD **)*v1 + 60))(*(_DWORD *)*v1, &v12);
  v2 = *(_DWORD *)*v1;
  v3 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v2 + 84);
  v10 = &sead__SafeStringBase__vtable;
  v11 = "hoto_rotate";
  v4 = v3(v2, &v10);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int (***)()))(**(_DWORD **)*v1 + 100))(
    *(_DWORD *)*v1,
    v4,
    &v12,
    &v10);
  Mtx34_rotateZ(&v12, v1 + 7);
  v9[0] = 1065353216;
  v9[1] = 1065353216;
  v9[2] = 1065353216;
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _DWORD *))(**(_DWORD **)*v1 + 96))(*(_DWORD *)*v1, v4, &v12, v9);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)*v1 + 56))(*(_DWORD *)*v1);
  v5 = *(_DWORD *)*v1;
  v6 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v5 + 84);
  v10 = &sead__SafeStringBase__vtable;
  v11 = "coin";
  v7 = v6(v5, &v10);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(**(_DWORD **)*v1 + 108))(*(_DWORD *)*v1, v7, &v12);
  v1[3] = (unsigned int)v14;
  v1[4] = (unsigned int)v18;
  result = v22;
  v1[5] = (unsigned int)v22;
  return result;
}
