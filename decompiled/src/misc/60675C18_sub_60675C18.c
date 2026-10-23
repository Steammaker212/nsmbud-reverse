/* sub_60675C18
 * address: 0x60675C18   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60675C18(int a1)
{
  float v2; // s8
  float v3; // s10
  float32x2_t v5; // [sp+0h] [bp-38h] BYREF
  float v6; // [sp+8h] [bp-30h]
  float v7; // [sp+Ch] [bp-2Ch]
  float v8; // [sp+10h] [bp-28h]
  float v9; // [sp+14h] [bp-24h]
  float v10; // [sp+18h] [bp-20h]
  float v11; // [sp+1Ch] [bp-1Ch]
  float v12; // [sp+20h] [bp-18h]
  float v13; // [sp+24h] [bp-14h]
  float v14; // [sp+28h] [bp-10h]
  float v15; // [sp+2Ch] [bp-Ch]

  v5.n64_u64[0] = 1065353216;
  v6 = 0.0;
  v8 = 0.0;
  v9 = 1.0;
  v10 = 0.0;
  v12 = 0.0;
  v13 = 0.0;
  v14 = 1.0;
  v7 = FIELD_F32(a1, 108);
  v11 = FIELD_F32(a1, 112);
  v15 = FIELD_F32(a1, 116);
  Mtx34_rotateZ(&v5, (unsigned int *)(a1 + 164));
  if ( FIELD_U8(a1, 6914) )
  {
    v2 = FIELD_F32(a1, 6924);
    v3 = FIELD_F32(a1, 6920);
    v7 = v7 + (float)((float)((float)(v2 * v5.n64_f32[1]) + (float)(v3 * v5.n64_f32[0])) + (float)(v6 * 0.0));
    v11 = v11 + (float)((float)((float)(v2 * v9) + (float)(v3 * v8)) + (float)(v10 * 0.0));
    v15 = v15 + (float)((float)((float)(v2 * v13) + (float)(v3 * v12)) + (float)(v14 * 0.0));
  }
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6916) + 60))(**(_DWORD **)(a1 + 6916), &v5);
  return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6916));
}
