/* sub_60604128
 * address: 0x60604128   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60604128(int a1)
{
  _QWORD *v1; // r1
  int v2; // r2
  int v3; // r4
  __int64 v4; // r2
  unsigned int v5; // lr
  int v6; // r5
  unsigned int v7; // r4
  int v8; // r0
  int v9; // r4
  unsigned int v10; // r5
  int v11; // r0
  int result; // r0
  int v13; // r4
  unsigned int v14; // r5

  FIELD_U32(a1, 6104) = 0;
  v1 = (_QWORD *)(a1 + 6104);
  FIELD_U32(a1, 6108) = 0;
  FIELD_U32(a1, 6112) = 0;
  FIELD_U32(a1, 6116) = 0;
  FIELD_U8(a1, 6122) = FIELD_U8(a1, 539) - 1;
  v2 = FIELD_U8(a1, 540);
  if ( FIELD_U8(a1, 540) )
  {
    v3 = v2 - 33;
    HIDWORD(v4) = 1u >> (33 - v2);
    LODWORD(v4) = 1 << (v2 - 1);
    if ( v3 >= 0 )
    {
      HIDWORD(v4) = 1 << v3;
      LODWORD(v4) = 0;
    }
    *v1 = v4;
  }
  else
  {
    v4 = 0;
  }
  v5 = FIELD_U32(a1, 20);
  if ( HIBYTE(v5) )
  {
    v6 = HIBYTE(v5) - 33;
    v7 = 1u >> (33 - HIBYTE(v5));
    v8 = 1 << (HIBYTE(v5) - 1);
    if ( v6 >= 0 )
    {
      v7 = 1 << v6;
      v8 = 0;
    }
    HIDWORD(v4) |= v7;
    LODWORD(v4) = v4 | v8;
    *v1 = v4;
  }
  if ( BYTE2(v5) )
  {
    v9 = BYTE2(v5) - 33;
    v10 = 1u >> (33 - BYTE2(v5));
    v11 = 1 << (BYTE2(v5) - 1);
    if ( v9 >= 0 )
    {
      v10 = 1 << v9;
      v11 = 0;
    }
    HIDWORD(v4) |= v10;
    LODWORD(v4) = v4 | v11;
    *v1 = v4;
  }
  result = BYTE1(v5);
  if ( BYTE1(v5) )
  {
    v13 = BYTE1(v5) - 33;
    v14 = 1u >> (33 - BYTE1(v5));
    result = 1 << (BYTE1(v5) - 1);
    if ( v13 >= 0 )
    {
      v14 = 1 << v13;
      result = 0;
    }
    HIDWORD(v4) |= v14;
    LODWORD(v4) = v4 | result;
    *v1 = v4;
  }
  return result;
}
