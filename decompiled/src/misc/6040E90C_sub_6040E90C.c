/* sub_6040E90C
 * address: 0x6040E90C   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040E90C(int a1, signed int a2)
{
  signed int v3; // r5
  int v4; // r0
  unsigned int v5; // r6
  int v6; // r0
  __int64 v7; // r0
  int v8; // r0
  int v9; // r0
  __int64 v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r1
  int v15; // r3
  int v16; // r7

  v3 = a2;
  *(_DWORD *)a1 = &off_60BF9BF4;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 36) = a2;
  FIELD_U16(a1, 60) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 40) = 0;
  if ( a2 >= 1 )
  {
    v4 = (12 * (unsigned __int64)(unsigned int)a2) >> 32;
    v5 = 12 * a2;
    if ( !is_mul_ok(0xCu, a2) )
      v4 = 1;
    if ( v4 )
      v5 = -1;
    v6 = sub_608DE334(v5, 0, 4);
    if ( v6 )
    {
      FIELD_U32(a1, 4) = v3;
      FIELD_U32(a1, 8) = v6;
    }
    v7 = 16LL * (unsigned int)v3;
    if ( !is_mul_ok(0x10u, v3) )
      HIDWORD(v7) = 1;
    if ( HIDWORD(v7) )
      LODWORD(v7) = -1;
    v8 = sub_608DE334(v7, 0, 4);
    if ( v8 )
    {
      FIELD_U32(a1, 12) = v3;
      FIELD_U32(a1, 16) = v8;
    }
    v9 = sub_608DE334(v5, 0, 4);
    if ( v9 )
    {
      FIELD_U32(a1, 20) = v3;
      FIELD_U32(a1, 24) = v9;
    }
    v10 = 4LL * (unsigned int)v3;
    if ( !is_mul_ok(v3, 4u) )
      HIDWORD(v10) = 1;
    if ( HIDWORD(v10) )
      LODWORD(v10) = -1;
    v11 = sub_608DE334(v10, 0, 4);
    if ( v11 )
    {
      FIELD_U32(a1, 28) = v3;
      FIELD_U32(a1, 32) = v11;
      if ( v3 < 1 )
        return a1;
    }
    else
    {
      v3 = FIELD_U32(a1, 28);
      if ( v3 < 1 )
        return a1;
    }
    if ( (v3 & 3) != 0 )
    {
      v12 = 0;
      do
        *(_DWORD *)(FIELD_U32(a1, 32) + 4 * v12++) = 0;
      while ( (v3 & 3) != v12 );
    }
    else
    {
      v12 = 0;
    }
    if ( (unsigned int)(v3 - 1) >= 3 )
    {
      v13 = v12 - v3;
      v14 = 4 * v12;
      v15 = 0;
      do
      {
        *(_DWORD *)(FIELD_U32(a1, 32) + v14 - 4 * v15) = 0;
        *(_DWORD *)(FIELD_U32(a1, 32) + v14 - 4 * v15 + 4) = 0;
        *(_DWORD *)(FIELD_U32(a1, 32) + v14 - 4 * v15 + 8) = 0;
        v16 = FIELD_U32(a1, 32) + v14 - 4 * v15;
        v15 -= 4;
        FIELD_U32(v16, 12) = 0;
      }
      while ( v13 != v15 );
    }
  }
  return a1;
}
