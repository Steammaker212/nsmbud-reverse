/* sub_608C9D10
 * address: 0x608C9D10   size: 796   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_608C9D10(int a1, int a2, int a3, double a4, float32x2_t a5)
{
  int v5; // r12
  float v6; // s0
  _WORD *v7; // r12
  float v8; // s0
  float v9; // s0
  float v10; // s0
  float v11; // s0
  float v12; // s0
  float v13; // s0
  float v14; // s0
  float v15; // s0
  float v16; // s0
  float v17; // s0
  float v18; // s0
  float v19; // s0
  float v20; // s0
  float v21; // s0
  _WORD *result; // r0
  float v23; // s0
  float v24; // s0
  float v25; // s0

  LODWORD(a4) = 0;
  a5.n64_u32[0] = *(_DWORD *)a2;
  *(float *)&a4 = vmax_f32(a5, *(float32x2_t *)&a4).n64_f32[0];
  if ( *(float *)&a4 != *(float *)a3 )
  {
    *(_DWORD *)a3 = LODWORD(a4);
    FIELD_U16(a1, 424) |= 8u;
  }
  v5 = FIELD_U32(a2, 4);
  if ( v5 != FIELD_U32(a3, 4) )
  {
    FIELD_U32(a3, 4) = v5;
    FIELD_U16(a1, 424) |= 8u;
    v5 = FIELD_U32(a3, 4);
  }
  if ( v5 == 1 )
  {
    v6 = FIELD_F32(a2, 8);
    v7 = (_WORD *)(a1 + 424);
    if ( v6 != FIELD_F32(a3, 8) )
    {
      FIELD_F32(a3, 8) = v6;
      *v7 |= 8u;
    }
    v8 = FIELD_F32(a2, 12);
    if ( v8 != FIELD_F32(a3, 12) )
    {
      FIELD_F32(a3, 12) = v8;
      *v7 |= 8u;
    }
    v9 = FIELD_F32(a2, 16);
    if ( v9 != FIELD_F32(a3, 16) )
    {
      FIELD_F32(a3, 16) = v9;
      *v7 |= 8u;
    }
    v10 = FIELD_F32(a2, 20);
    if ( v10 != FIELD_F32(a3, 20) )
    {
      FIELD_F32(a3, 20) = v10;
      *v7 |= 8u;
    }
    v11 = FIELD_F32(a2, 24);
    if ( v11 != FIELD_F32(a3, 24) )
    {
      FIELD_F32(a3, 24) = v11;
      *v7 |= 8u;
    }
    v12 = FIELD_F32(a2, 28);
    if ( v12 != FIELD_F32(a3, 28) )
    {
      FIELD_F32(a3, 28) = v12;
      *v7 |= 8u;
    }
    v13 = FIELD_F32(a2, 32);
    if ( v13 != FIELD_F32(a3, 32) )
    {
      FIELD_F32(a3, 32) = v13;
      *v7 |= 8u;
    }
    v14 = FIELD_F32(a2, 36);
    if ( v14 != FIELD_F32(a3, 36) )
    {
      FIELD_F32(a3, 36) = v14;
      *v7 |= 8u;
    }
    v15 = FIELD_F32(a2, 40);
    if ( v15 != FIELD_F32(a3, 40) )
    {
      FIELD_F32(a3, 40) = v15;
      *v7 |= 8u;
    }
    v16 = FIELD_F32(a2, 44);
    if ( v16 != FIELD_F32(a3, 44) )
    {
      FIELD_F32(a3, 44) = v16;
      *v7 |= 8u;
    }
    v17 = FIELD_F32(a2, 48);
    if ( v17 != FIELD_F32(a3, 48) )
    {
      FIELD_F32(a3, 48) = v17;
      *v7 |= 8u;
    }
    v18 = FIELD_F32(a2, 52);
    if ( v18 != FIELD_F32(a3, 52) )
    {
      FIELD_F32(a3, 52) = v18;
      *v7 |= 8u;
    }
    v5 = FIELD_U32(a3, 4);
  }
  if ( !v5 )
  {
    v19 = FIELD_F32(a2, 56);
    if ( v19 != FIELD_F32(a3, 56) )
    {
      FIELD_F32(a3, 56) = v19;
      FIELD_U16(a1, 424) |= 8u;
    }
    v20 = FIELD_F32(a2, 60);
    if ( v20 != FIELD_F32(a3, 60) )
    {
      FIELD_F32(a3, 60) = v20;
      FIELD_U16(a1, 424) |= 8u;
    }
  }
  v21 = FIELD_F32(a2, 64);
  result = (_WORD *)(a1 + 424);
  if ( v21 != FIELD_F32(a3, 64) )
  {
    FIELD_F32(a3, 64) = v21;
    *result |= 8u;
  }
  v23 = FIELD_F32(a2, 68);
  if ( v23 != FIELD_F32(a3, 68) )
  {
    FIELD_F32(a3, 68) = v23;
    *result |= 8u;
  }
  v24 = FIELD_F32(a2, 72);
  if ( v24 != FIELD_F32(a3, 72) )
  {
    FIELD_F32(a3, 72) = v24;
    *result |= 8u;
  }
  v25 = FIELD_F32(a2, 76);
  if ( v25 != FIELD_F32(a3, 76) )
  {
    FIELD_F32(a3, 76) = v25;
    *result |= 8u;
  }
  return result;
}
