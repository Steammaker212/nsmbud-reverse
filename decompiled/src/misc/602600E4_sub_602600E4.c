/* sub_602600E4
 * address: 0x602600E4   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602600E4(int a1)
{
  int v2; // r5
  int v3; // r6
  bool v4; // zf
  float v5; // s0
  float v6; // s2
  float v7; // s0
  float v8; // s2
  int v9; // r5
  int v10; // r0
  int v11; // r6
  float v12; // s2
  float v13; // s2
  float v15; // [sp+4h] [bp-7Ch] BYREF
  float v16; // [sp+8h] [bp-78h]
  float v17; // [sp+Ch] [bp-74h] BYREF
  float v18; // [sp+10h] [bp-70h]
  TileCheck v19; // [sp+14h] [bp-6Ch] BYREF
  TileCheck_Param v20; // [sp+60h] [bp-20h] BYREF
  int (**v21)(); // [sp+6Ch] [bp-14h] BYREF

  if ( !FIELD_U8(dword_60CC6D8C, 17) )
    return 0;
  v2 = 0;
  v21 = off_60BDB248;
  *(_WORD *)&v20.field_0 = 256;
  v20.field_2 = FIELD_U8(a1, 86);
  v20.field_3 = FIELD_U8(a1, 87);
  v20.field_4 = 0;
  v20.field_8 = (int)&v21;
  TileCheck_ctor(&v19, &v20);
  if ( FIELD_U8(a1, 2992) )
  {
    if ( !FIELD_U8(a1, 2996) )
      v2 = a1 + 3040;
  }
  else
  {
    v2 = FIELD_U8(a1, 3000);
    if ( FIELD_U8(a1, 3000) )
      v2 = a1 + 3088;
  }
  if ( FIELD_U8(a1, 2991) )
  {
    v3 = 0;
    if ( !FIELD_U8(a1, 2995) )
      v3 = a1 + 3028;
  }
  else
  {
    v3 = FIELD_U8(a1, 2999);
    if ( FIELD_U8(a1, 2999) )
      v3 = a1 + 3076;
  }
  v4 = v2 == 0;
  if ( v2 )
    v4 = v3 == 0;
  if ( !v4 )
  {
    v5 = FIELD_F32(v2, 8);
    v6 = FIELD_F32(a1, 112);
    v17 = FIELD_F32(a1, 108);
    v18 = v6 + v5;
    if ( sub_6015DD58((int)&v19, 0, (int)&v17) == 1 )
    {
      v7 = FIELD_F32(v3, 8);
      v8 = FIELD_F32(a1, 112);
      v15 = FIELD_F32(a1, 108);
      v16 = v8 + v7;
      if ( sub_6015DD58((int)&v19, 0, (int)&v15) )
        goto LABEL_26;
    }
  }
  if ( !FIELD_U8(a1, 2989) )
  {
    if ( FIELD_U8(a1, 2997) )
    {
      v10 = 3052;
      goto LABEL_24;
    }
    return 0;
  }
  v9 = 0;
  if ( FIELD_U8(a1, 2993) )
    return v9;
  v10 = 3004;
LABEL_24:
  v11 = a1 + v10;
  v9 = 0;
  v12 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  v17 = FIELD_F32(a1, 108) + *(float *)(a1 + v10 + 8);
  v18 = v12;
  if ( sub_6015DD58((int)&v19, 0, (int)&v17) == 1 )
  {
    v13 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    v15 = FIELD_F32(a1, 108) - FIELD_F32(v11, 8);
    v16 = v13;
    if ( sub_6015DD58((int)&v19, 0, (int)&v15) )
    {
LABEL_26:
      SE_EMY_DOWN_ref_2A7624(a1);
      return 1;
    }
  }
  return v9;
}
