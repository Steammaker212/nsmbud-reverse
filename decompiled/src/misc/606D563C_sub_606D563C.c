/* sub_606D563C
 * address: 0x606D563C   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D563C(int a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r5
  unsigned int v5; // r1
  unsigned int v6; // r2
  _DWORD **v7; // r4
  _DWORD *v8; // t1
  unsigned int v9; // [sp+0h] [bp-58h] BYREF
  unsigned int v10; // [sp+4h] [bp-54h] BYREF
  unsigned int v11; // [sp+8h] [bp-50h] BYREF
  float32x2_t v12; // [sp+10h] [bp-48h] BYREF
  int v13; // [sp+18h] [bp-40h]
  int v14; // [sp+1Ch] [bp-3Ch]
  int v15; // [sp+20h] [bp-38h]
  int v16; // [sp+24h] [bp-34h]
  int v17; // [sp+28h] [bp-30h]
  int v18; // [sp+2Ch] [bp-2Ch]
  int v19; // [sp+30h] [bp-28h]
  int v20; // [sp+34h] [bp-24h]
  int v21; // [sp+38h] [bp-20h]
  int v22; // [sp+3Ch] [bp-1Ch]

  v2 = sub_606D5768();
  result = 2;
  if ( v2 == 1 )
  {
    FIELD_U32(a1, 144) = 1065353216;
    v4 = a1 + 144;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBB678);
    v5 = FIELD_U32(a1, 160);
    v6 = FIELD_U32(a1, 164);
    v9 = FIELD_U32(a1, 156);
    v10 = v5;
    v11 = v6;
    v12.n64_u64[0] = 1065353216;
    v13 = 0;
    v15 = 0;
    v16 = 1065353216;
    v17 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 1065353216;
    v14 = FIELD_U32(a1, 108);
    v18 = FIELD_U32(a1, 112);
    v22 = FIELD_U32(a1, 116);
    Mtx34_rotateY(&v12, &v10);
    Mtx34_rotateX(&v12, &v9);
    Mtx34_rotateZ(&v12, &v11);
    v8 = *(_DWORD **)(a1 + 6104);
    v7 = (_DWORD **)(a1 + 6104);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v8 + 60))(*v8, &v12);
    (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v7 + 68))(**v7, v4);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v7 + 52))(**v7);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v7 + 56))(**v7);
    return 1;
  }
  return result;
}
