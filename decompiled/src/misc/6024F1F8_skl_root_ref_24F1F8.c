/* skl_root_ref_24F1F8
 * address: 0x6024F1F8   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_24F1F8(int a1)
{
  unsigned int v2; // r3
  unsigned int v3; // r6
  unsigned int v4; // r5
  float v5; // r0
  float v6; // r1
  float v7; // r2
  int **v8; // r6
  int result; // r0
  int v10; // r0
  int (__fastcall *v11)(int, _DWORD *); // r2
  int v12; // r0
  _DWORD **v13; // r4
  _DWORD *v14; // t1
  _DWORD v15[12]; // [sp+0h] [bp-90h] BYREF
  unsigned int v16; // [sp+30h] [bp-60h] BYREF
  unsigned int v17; // [sp+34h] [bp-5Ch] BYREF
  unsigned int v18; // [sp+38h] [bp-58h] BYREF
  float32x2_t v19; // [sp+40h] [bp-50h] BYREF
  float v20; // [sp+48h] [bp-48h]
  float v21; // [sp+4Ch] [bp-44h]
  float v22; // [sp+50h] [bp-40h]
  float v23; // [sp+54h] [bp-3Ch]
  float v24; // [sp+58h] [bp-38h]
  float v25; // [sp+5Ch] [bp-34h]
  float v26; // [sp+60h] [bp-30h]
  float v27; // [sp+64h] [bp-2Ch]
  float v28; // [sp+68h] [bp-28h]
  float v29; // [sp+6Ch] [bp-24h]

  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v5 = FIELD_F32(a1, 112);
  v6 = FIELD_F32(a1, 116);
  v7 = FIELD_F32(a1, 108);
  v18 = v4;
  v17 = v3;
  v16 = v2;
  v19.n64_u64[0] = 1065353216;
  v20 = 0.0;
  v22 = 0.0;
  v23 = 1.0;
  v24 = 0.0;
  v26 = 0.0;
  v27 = 0.0;
  v28 = 1.0;
  v21 = v7;
  v25 = v5;
  v29 = v6;
  Mtx34_rotateY(&v19, &v17);
  v21 = v21 + (float)((float)((float)(v19.n64_f32[1] * 4.0) + (float)(v19.n64_f32[0] * 0.0)) + (float)(v20 * 0.0));
  v25 = v25 + (float)((float)((float)(v23 * 4.0) + (float)(v22 * 0.0)) + (float)(v24 * 0.0));
  v29 = v29 + (float)((float)((float)(v27 * 4.0) + (float)(v26 * 0.0)) + (float)(v28 * 0.0));
  Mtx34_rotateX(&v19, &v16);
  v21 = v21 + (float)((float)((float)(v19.n64_f32[0] * 0.0) - (float)(v19.n64_f32[1] * 4.0)) + (float)(v20 * 0.0));
  v25 = v25 + (float)((float)((float)(v22 * 0.0) - (float)(v23 * 4.0)) + (float)(v24 * 0.0));
  v29 = v29 + (float)((float)((float)(v26 * 0.0) - (float)(v27 * 4.0)) + (float)(v28 * 0.0));
  Mtx34_rotateZ(&v19, &v18);
  v8 = (int **)(a1 + 6304);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6304) + 60))(**(_DWORD **)(a1 + 6304), &v19);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)**v8 + 68))(**v8, a1 + 12144);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
  sub_604218E0(*(_DWORD **)(a1 + 6304));
  sub_60421880(FIELD_U32(a1, 6304));
  result = FIELD_U32(a1, 6336);
  if ( result )
  {
    result = FIELD_U8(a1, 536);
    if ( !FIELD_U8(a1, 536) )
    {
      v10 = **v8;
      v11 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v10 + 84);
      v15[0] = &sead__SafeStringBase__vtable;
      v15[1] = "skl_root";
      v12 = v11(v10, v15);
      (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v8 + 108))(**v8, v12, v15);
      v15[11] = 1172475904;
      v14 = *(_DWORD **)(a1 + 6308);
      v13 = (_DWORD **)(a1 + 6308);
      (*(void (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)*v14 + 60))(*v14, v15);
      j_ModelWrapper_updateAnims(*v13);
      sub_604218E0(*v13);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v13 + 52))(**v13);
      return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v13 + 56))(**v13);
    }
  }
  return result;
}
