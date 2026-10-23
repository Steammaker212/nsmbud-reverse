/* Actor_shafuruburoku_build_helper_helper_833954
 * address: 0x60833954   size: 392   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_shafuruburoku_build_helper_helper_833954(int a1)
{
  int v2; // r0
  signed int v3; // r5
  __int64 v4; // r0
  int v5; // r0
  float v6; // s0
  int v7; // r5
  int v8; // r0
  signed int v9; // r6
  __int64 v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r2
  int v14; // r3
  int v15; // r3
  signed int v16; // r5
  __int64 v17; // r0
  int v18; // r0
  int result; // r0
  int v20; // r2
  int v21; // r3
  int v22; // r3

  v2 = FIELD_U32(a1, 20);
  v3 = 2 * v2 - 3;
  if ( !FIELD_U8(a1, 12) )
    v3 = 2 * v2;
  if ( v3 >= 1 )
  {
    v4 = 12LL * (unsigned int)v3;
    if ( !is_mul_ok(0xCu, v3) )
      HIDWORD(v4) = 1;
    if ( HIDWORD(v4) )
      LODWORD(v4) = -1;
    v5 = sub_608DE334(v4, 0, 4);
    if ( v5 )
    {
      FIELD_U32(a1, 28) = v3;
      FIELD_U32(a1, 32) = v5;
    }
  }
  v6 = FIELD_F32(a1, 8);
  v7 = v3 / 2;
  LOBYTE(v8) = 2;
  if ( v6 > (float)FIELD_S32(a1, 28) )
    v8 = (int)v6 / v7;
  FIELD_U8(a1, 13) = v8;
  v9 = (unsigned __int8)v8 * v7;
  if ( v9 >= 1 )
  {
    v10 = 12LL * (unsigned int)v9;
    if ( !is_mul_ok(0xCu, v9) )
      HIDWORD(v10) = 1;
    if ( HIDWORD(v10) )
      LODWORD(v10) = -1;
    v11 = sub_608DE334(v10, 0, 4);
    if ( v11 )
    {
      FIELD_U32(a1, 36) = v9;
      FIELD_U32(a1, 40) = v11;
    }
  }
  v12 = FIELD_U32(a1, 36);
  if ( v12 >= 1 )
  {
    v13 = 0;
    do
    {
      v14 = FIELD_U32(a1, 40);
      --v12;
      *(_DWORD *)(v14 + v13) = 0;
      v15 = v14 + v13;
      v13 += 12;
      FIELD_U32(v15, 4) = 0;
      FIELD_U32(v15, 8) = 0;
    }
    while ( v12 );
  }
  v16 = FIELD_U8(a1, 13) * v7;
  if ( v16 >= 1 )
  {
    v17 = 12LL * (unsigned int)v16;
    if ( !is_mul_ok(0xCu, v16) )
      HIDWORD(v17) = 1;
    if ( HIDWORD(v17) )
      LODWORD(v17) = -1;
    v18 = sub_608DE334(v17, 0, 4);
    if ( v18 )
    {
      FIELD_U32(a1, 44) = v16;
      FIELD_U32(a1, 48) = v18;
    }
  }
  result = FIELD_U32(a1, 44);
  if ( result >= 1 )
  {
    v20 = 0;
    do
    {
      v21 = FIELD_U32(a1, 48);
      --result;
      *(_DWORD *)(v21 + v20) = 0;
      v22 = v21 + v20;
      v20 += 12;
      FIELD_U32(v22, 4) = 0;
      FIELD_U32(v22, 8) = 0;
    }
    while ( result );
  }
  return result;
}
