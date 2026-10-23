/* sub_6066B39C
 * address: 0x6066B39C   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066B39C(int a1)
{
  float v2; // s8
  float v3; // s10
  int v5; // [sp+4h] [bp-3Ch] BYREF
  float32x2_t v6; // [sp+8h] [bp-38h] BYREF
  float v7; // [sp+10h] [bp-30h]
  float v8; // [sp+14h] [bp-2Ch]
  float v9; // [sp+18h] [bp-28h]
  float v10; // [sp+1Ch] [bp-24h]
  float v11; // [sp+20h] [bp-20h]
  float v12; // [sp+24h] [bp-1Ch]
  float v13; // [sp+28h] [bp-18h]
  float v14; // [sp+2Ch] [bp-14h]
  float v15; // [sp+30h] [bp-10h]
  float v16; // [sp+34h] [bp-Ch]

  v6.n64_u64[0] = 1065353216;
  v7 = 0.0;
  v9 = 0.0;
  v10 = 1.0;
  v11 = 0.0;
  v13 = 0.0;
  v14 = 0.0;
  v15 = 1.0;
  v8 = FIELD_F32(a1, 108);
  v12 = FIELD_F32(a1, 112);
  v16 = FIELD_F32(a1, 116);
  v5 = FIELD_U32(a1, 164) & 0x7FFFFFFF;
  Mtx34_rotateZ(&v6, (unsigned int *)&v5);
  if ( FIELD_U8(a1, 6914) || FIELD_U8(a1, 6936) )
  {
    v2 = FIELD_F32(a1, 6928);
    v3 = FIELD_F32(a1, 6924);
    v8 = v8 + (float)((float)((float)(v2 * v6.n64_f32[1]) + (float)(v3 * v6.n64_f32[0])) + (float)(v7 * 0.0));
    v12 = v12 + (float)((float)((float)(v2 * v10) + (float)(v3 * v9)) + (float)(v11 * 0.0));
    v16 = v16 + (float)((float)((float)(v2 * v14) + (float)(v3 * v13)) + (float)(v15 * 0.0));
  }
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6916) + 60))(**(_DWORD **)(a1 + 6916), &v6);
  return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6916));
}
