/* sub_6046DF74
 * address: 0x6046DF74   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046DF74(int a1)
{
  int **v2; // r6
  int result; // r0
  int v4; // r0
  int (__fastcall *v5)(int, _DWORD *); // r2
  int v6; // r0
  _DWORD v7[11]; // [sp+0h] [bp-80h] BYREF
  int v8; // [sp+2Ch] [bp-54h]
  float32x2_t v9; // [sp+30h] [bp-50h] BYREF
  float v10; // [sp+38h] [bp-48h]
  float v11; // [sp+3Ch] [bp-44h]
  float v12; // [sp+40h] [bp-40h]
  float v13; // [sp+44h] [bp-3Ch]
  float v14; // [sp+48h] [bp-38h]
  float v15; // [sp+4Ch] [bp-34h]
  float v16; // [sp+50h] [bp-30h]
  float v17; // [sp+54h] [bp-2Ch]
  float v18; // [sp+58h] [bp-28h]
  float v19; // [sp+5Ch] [bp-24h]

  v9.n64_u64[0] = 1065353216;
  v10 = 0.0;
  v12 = 0.0;
  v13 = 1.0;
  v14 = 0.0;
  v16 = 0.0;
  v17 = 0.0;
  v18 = 1.0;
  v11 = FIELD_F32(a1, 108);
  v15 = FIELD_F32(a1, 112);
  v19 = FIELD_F32(a1, 116);
  Mtx34_rotateY(&v9, (unsigned int *)(a1 + 160));
  Mtx34_rotateX(&v9, (unsigned int *)(a1 + 156));
  v11 = v11 + (float)((float)((float)(v9.n64_f32[1] * 8.0) + (float)(v9.n64_f32[0] * 0.0)) + (float)(v10 * 0.0));
  v15 = v15 + (float)((float)((float)(v13 * 8.0) + (float)(v12 * 0.0)) + (float)(v14 * 0.0));
  v19 = v19 + (float)((float)((float)(v17 * 8.0) + (float)(v16 * 0.0)) + (float)(v18 * 0.0));
  Mtx34_rotateZ(&v9, (unsigned int *)(a1 + 164));
  v11 = v11 + (float)((float)((float)(v9.n64_f32[0] * 0.0) - (float)(v9.n64_f32[1] * 8.0)) + (float)(v10 * 0.0));
  v15 = v15 + (float)((float)((float)(v12 * 0.0) - (float)(v13 * 8.0)) + (float)(v14 * 0.0));
  v19 = v19 + (float)((float)((float)(v16 * 0.0) - (float)(v17 * 8.0)) + (float)(v18 * 0.0));
  v2 = (int **)(a1 + 6100);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6100) + 60))(**(_DWORD **)(a1 + 6100), &v9);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)**v2 + 68))(**v2, a1 + 144);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v2 + 52))(**v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v2 + 56))(**v2);
  result = FIELD_U32(a1, 6140);
  if ( result == 1 )
  {
    v4 = **v2;
    v5 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v4 + 84);
    v7[0] = &sead__SafeStringBase__vtable;
    v7[1] = "star";
    v6 = v5(v4, v7);
    (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v2 + 108))(**v2, v6, v7);
    FIELD_U32(a1, 6128) = v7[3];
    FIELD_U32(a1, 6132) = v7[7];
    result = v8;
    FIELD_U32(a1, 6136) = v8;
  }
  return result;
}
