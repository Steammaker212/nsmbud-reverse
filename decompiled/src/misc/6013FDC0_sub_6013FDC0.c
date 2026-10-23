/* sub_6013FDC0
 * address: 0x6013FDC0   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013FDC0(int a1)
{
  unsigned int v2; // r3
  unsigned int v3; // r7
  unsigned int v4; // r6
  float v5; // r0
  float v6; // r2
  float v7; // r1
  unsigned int v9; // [sp+4h] [bp-5Ch] BYREF
  float32x2_t v10; // [sp+8h] [bp-58h] BYREF
  float v11; // [sp+10h] [bp-50h]
  float v12; // [sp+14h] [bp-4Ch]
  float v13; // [sp+18h] [bp-48h]
  float v14; // [sp+1Ch] [bp-44h]
  float v15; // [sp+20h] [bp-40h]
  float v16; // [sp+24h] [bp-3Ch]
  float v17; // [sp+28h] [bp-38h]
  float v18; // [sp+2Ch] [bp-34h]
  float v19; // [sp+30h] [bp-30h]
  float v20; // [sp+34h] [bp-2Ch]
  unsigned int v21; // [sp+38h] [bp-28h] BYREF
  unsigned int v22; // [sp+3Ch] [bp-24h] BYREF
  unsigned int v23; // [sp+40h] [bp-20h] BYREF

  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v5 = FIELD_F32(a1, 112);
  v6 = FIELD_F32(a1, 108);
  v7 = FIELD_F32(a1, 116);
  v23 = v4;
  v22 = v3;
  v21 = v2;
  v10.n64_u64[0] = 1065353216;
  v11 = 0.0;
  v13 = 0.0;
  v14 = 1.0;
  v15 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v19 = 1.0;
  v12 = v6;
  v16 = v5;
  v20 = v7;
  Mtx34_rotateY(&v10, &v22);
  if ( FIELD_U8(a1, 11844) )
  {
    v12 = v12 + (float)((float)((float)(v10.n64_f32[1] * 6.0) + (float)(v10.n64_f32[0] * 0.0)) + (float)(v11 * 0.0));
    v16 = v16 + (float)((float)((float)(v14 * 6.0) + (float)(v13 * 0.0)) + (float)(v15 * 0.0));
    v20 = v20 + (float)((float)((float)(v18 * 6.0) + (float)(v17 * 0.0)) + (float)(v19 * 0.0));
  }
  Mtx34_rotateX(&v10, &v21);
  v9 = FIELD_U32(a1, 11848);
  Mtx34_rotateY(&v10, &v9);
  if ( FIELD_U8(a1, 11844) )
  {
    v12 = v12 + (float)((float)((float)(v10.n64_f32[0] * 0.0) - (float)(v10.n64_f32[1] * 6.0)) + (float)(v11 * 0.0));
    v16 = v16 + (float)((float)((float)(v13 * 0.0) - (float)(v14 * 6.0)) + (float)(v15 * 0.0));
    v20 = v20 + (float)((float)((float)(v17 * 0.0) - (float)(v18 * 6.0)) + (float)(v19 * 0.0));
  }
  Mtx34_rotateZ(&v10, &v23);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 11824) + 60))(**(_DWORD **)(a1 + 11824), &v10);
  return (*(int (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 11824) + 68))(**(_DWORD **)(a1 + 11824), a1 + 6444);
}
