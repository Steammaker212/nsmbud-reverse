/* sub_602AD0EC
 * address: 0x602AD0EC   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_602AD0EC(int a1)
{
  int v1; // r2
  int v2; // r12
  int v3; // r1
  int v4; // r2
  __n128 result; // q0
  int v6; // r2
  int v7; // r12
  int v8; // r1
  int v9; // r2
  int v10; // r2
  int v11; // r12
  int v12; // r1
  int v13; // r2
  _DWORD *v14; // r0
  int v15; // t1
  int v16; // r3
  int v17; // r0
  int v18; // r1

  v1 = FIELD_U32(a1, 6800);
  v2 = FIELD_U32(a1, 6408);
  FIELD_U32(v1, 4) = FIELD_U32(a1, 6404);
  FIELD_U32(v1, 8) = v2;
  if ( !FIELD_U8(a1, 536) )
  {
    v3 = FIELD_U32(a1, 6800);
    v4 = FIELD_U32(v3, 332);
    if ( v4 )
    {
      result.n128_f32[0] = FIELD_F32(v3, 4) - FIELD_F32(v4, 108);
      result.n128_f32[2] = (float)(FIELD_F32(v3, 8) - FIELD_F32(v4, 112)) + (float)(FIELD_F32(v3, 20) * 4.0);
      FIELD_U32(v3, 144) = result.n128_u32[0];
      FIELD_U32(v3, 148) = result.n128_u32[2];
    }
  }
  v6 = FIELD_U32(a1, 6804);
  v7 = FIELD_U32(a1, 6504);
  FIELD_U32(v6, 4) = FIELD_U32(a1, 6500);
  FIELD_U32(v6, 8) = v7;
  if ( !FIELD_U8(a1, 536) )
  {
    v8 = FIELD_U32(a1, 6804);
    v9 = FIELD_U32(v8, 332);
    if ( v9 )
    {
      result.n128_f32[0] = FIELD_F32(v8, 4) - FIELD_F32(v9, 108);
      result.n128_f32[2] = (float)(FIELD_F32(v8, 8) - FIELD_F32(v9, 112)) + (float)(FIELD_F32(v8, 20) * 4.0);
      FIELD_U32(v8, 144) = result.n128_u32[0];
      FIELD_U32(v8, 148) = result.n128_u32[2];
    }
  }
  v10 = FIELD_U32(a1, 6808);
  v11 = FIELD_U32(a1, 6600);
  FIELD_U32(v10, 4) = FIELD_U32(a1, 6596);
  FIELD_U32(v10, 8) = v11;
  if ( !FIELD_U8(a1, 536) )
  {
    v12 = FIELD_U32(a1, 6808);
    v13 = FIELD_U32(v12, 332);
    if ( v13 )
    {
      result.n128_f32[0] = FIELD_F32(v12, 4) - FIELD_F32(v13, 108);
      result.n128_f32[2] = (float)(FIELD_F32(v12, 8) - FIELD_F32(v13, 112)) + (float)(FIELD_F32(v12, 20) * 4.0);
      FIELD_U32(v12, 144) = result.n128_u32[0];
      FIELD_U32(v12, 148) = result.n128_u32[2];
    }
  }
  v15 = FIELD_U32(a1, 6812);
  v14 = (_DWORD *)(a1 + 6812);
  v16 = *(v14 - 29);
  FIELD_U32(v15, 4) = *(v14 - 30);
  FIELD_U32(v15, 8) = v16;
  if ( !*((_BYTE *)v14 - 6276) )
  {
    v17 = *v14;
    v18 = FIELD_U32(v17, 332);
    if ( v18 )
    {
      result.n128_f32[0] = FIELD_F32(v17, 4) - FIELD_F32(v18, 108);
      result.n128_f32[2] = (float)(FIELD_F32(v17, 8) - FIELD_F32(v18, 112)) + (float)(FIELD_F32(v17, 20) * 4.0);
      FIELD_U32(v17, 144) = result.n128_u32[0];
      FIELD_U32(v17, 148) = result.n128_u32[2];
    }
  }
  return result;
}
