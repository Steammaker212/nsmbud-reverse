/* sub_606BEB10
 * address: 0x606BEB10   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BEB10(int a1)
{
  float v2; // r1
  int v3; // r2
  int **v4; // r4
  _DWORD *v5; // t1
  int v6; // r0
  int (__fastcall *v7)(int, float32x2_t *); // r2
  int v8; // r6
  float v9; // s0
  float32x2_t v11[2]; // [sp+0h] [bp-88h] BYREF
  float v12; // [sp+10h] [bp-78h]
  float v13; // [sp+20h] [bp-68h]
  float32x2_t v14; // [sp+30h] [bp-58h] BYREF
  int v15; // [sp+38h] [bp-50h]
  int v16; // [sp+3Ch] [bp-4Ch]
  int v17; // [sp+40h] [bp-48h]
  int v18; // [sp+44h] [bp-44h]
  int v19; // [sp+48h] [bp-40h]
  float v20; // [sp+4Ch] [bp-3Ch]
  int v21; // [sp+50h] [bp-38h]
  int v22; // [sp+54h] [bp-34h]
  int v23; // [sp+58h] [bp-30h]
  int v24; // [sp+5Ch] [bp-2Ch]
  int v25; // [sp+60h] [bp-28h] BYREF
  float v26; // [sp+64h] [bp-24h]
  int v27; // [sp+68h] [bp-20h]

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  v25 = FIELD_U32(a1, 108);
  v26 = v2;
  v27 = v3;
  if ( (FIELD_U8(a1, 6124) & 4) != 0 )
    sub_605CC78C(a1, (float *)&v25);
  v14.n64_u64[0] = 1065353216;
  v15 = 0;
  v17 = 0;
  v18 = 1065353216;
  v19 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 1065353216;
  v26 = v26 + 8.0;
  v16 = v25;
  v20 = v26;
  v24 = v27;
  Mtx34_rotateY(&v14, (unsigned int *)(a1 + 160));
  Mtx34_rotateX(&v14, (unsigned int *)(a1 + 156));
  Mtx34_rotateZ(&v14, (unsigned int *)(a1 + 164));
  v5 = *(_DWORD **)(a1 + 6152);
  v4 = (int **)(a1 + 6152);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v5 + 60))(*v5, &v14);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v4 + 52))(**v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v4 + 56))(**v4);
  (*(void (__fastcall **)(int, int, int **))(*(_DWORD *)**v4 + 108))(**v4, 1, v4 + 263);
  *((float *)v4 + 266) = *((float *)v4 + 266) + 0.0;
  *((float *)v4 + 270) = *((float *)v4 + 270) + 10.0;
  *((float *)v4 + 274) = *((float *)v4 + 274) + 0.0;
  v6 = **v4;
  v7 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v6 + 84);
  v11[0].n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v11[0].n64_u32[1] = (unsigned __int32)&unk_60AD77CE;
  v8 = v7(v6, v11);
  (*(void (__fastcall **)(int, int, float32x2_t *))(*(_DWORD *)**v4 + 108))(**v4, v8, v11);
  Mtx34_rotateY(v11, (unsigned int *)v4 + 261);
  v9 = *((float *)v4 + 262);
  v11[0].n64_f32[0] = v9 * v11[0].n64_f32[0];
  v12 = v9 * v12;
  v13 = v9 * v13;
  (*(void (__fastcall **)(int, int, float32x2_t *))(*(_DWORD *)**v4 + 104))(**v4, v8, v11);
  return sub_600213C4((int)(v4 + 166), v4 + 263);
}
