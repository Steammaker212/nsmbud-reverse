/* sub_60982658
 * address: 0x60982658   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60982658(_DWORD *a1, int a2, signed int a3)
{
  int v6; // r0
  int v7; // r0
  int v8; // r2
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r2
  int v14; // r1
  int v15; // r0
  __int64 v16; // r0
  int v17; // r0
  int result; // r0
  int i; // r1
  int v20; // r3
  int v21; // r3

  if ( a3 >= 1 )
  {
    v6 = sub_608DE334(a3, a2, 4);
    if ( v6 )
    {
      a1[118] = a3;
      a1[119] = v6;
    }
  }
  v7 = a1[118];
  if ( v7 >= 1 )
  {
    if ( (v7 & 3) != 0 )
    {
      v8 = 0;
      do
        *(_BYTE *)(a1[119] + v8++) = 0;
      while ( (v7 & 3) != v8 );
    }
    else
    {
      v8 = 0;
    }
    if ( (unsigned int)(v7 - 1) >= 3 )
    {
      v9 = v8 + 3;
      v10 = -v7;
      do
      {
        *(_BYTE *)(a1[119] + v9 - 3) = 0;
        *(_BYTE *)(a1[119] + v9 - 2) = 0;
        *(_BYTE *)(a1[119] + v9 - 1) = 0;
        *(_BYTE *)(a1[119] + v9) = 0;
        v9 += 4;
      }
      while ( v10 + v9 != 3 );
    }
  }
  if ( a3 >= 1 )
  {
    v11 = sub_608DE334(a3, a2, 4);
    if ( v11 )
    {
      a1[120] = a3;
      a1[121] = v11;
    }
  }
  v12 = a1[120];
  if ( v12 >= 1 )
  {
    if ( (v12 & 3) != 0 )
    {
      v13 = 0;
      do
        *(_BYTE *)(a1[121] + v13++) = 0;
      while ( (v12 & 3) != v13 );
    }
    else
    {
      v13 = 0;
    }
    if ( (unsigned int)(v12 - 1) >= 3 )
    {
      v14 = v13 + 3;
      v15 = -v12;
      do
      {
        *(_BYTE *)(a1[121] + v14 - 3) = 0;
        *(_BYTE *)(a1[121] + v14 - 2) = 0;
        *(_BYTE *)(a1[121] + v14 - 1) = 0;
        *(_BYTE *)(a1[121] + v14) = 0;
        v14 += 4;
      }
      while ( v15 + v14 != 3 );
    }
  }
  if ( a3 >= 1 )
  {
    v16 = 8LL * (unsigned int)a3;
    if ( !is_mul_ok(8u, a3) )
      HIDWORD(v16) = 1;
    if ( HIDWORD(v16) )
      LODWORD(v16) = -1;
    v17 = sub_608DE334(v16, a2, 4);
    if ( v17 )
    {
      a1[122] = a3;
      a1[123] = v17;
    }
  }
  result = a1[122];
  if ( result >= 1 )
  {
    for ( i = 0; i != result; ++i )
    {
      v20 = a1[123];
      *(_DWORD *)(v20 + 8 * i) = 0;
      v21 = v20 + 8 * i;
      FIELD_U32(v21, 4) = 0;
    }
  }
  return result;
}
