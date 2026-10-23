/* sub_601E4EA4
 * address: 0x601E4EA4   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E4EA4(int a1, int a2, int a3, int a4, int a5)
{
  _BYTE *v5; // r4
  int v6; // lr
  int v7; // r5
  bool v8; // cc
  int v9; // r12
  int v10; // r5
  int v11; // r0

  v5 = (_BYTE *)(a1 + 96);
  v6 = 0;
  v7 = 1;
  while ( *v5 )
  {
    if ( !v5[48] )
    {
      v6 = v7;
      break;
    }
    v5 += 96;
    v6 += 2;
    v8 = v7 + 1 < 30;
    v7 += 2;
    if ( !v8 )
      break;
  }
  v9 = -1;
  if ( v6 == 30 )
    v6 = -1;
  if ( a2 != 238 && v6 >= 0 )
  {
    v10 = 0;
    v9 = v6;
    if ( (unsigned int)v6 < 0x1E )
      v10 = v6;
    v11 = a1 + 48 * v10;
    FIELD_U32(v11, 52) = a2;
    FIELD_U32(v11, 56) = 0;
    FIELD_U32(v11, 60) = 0;
    FIELD_U32(v11, 64) = a4;
    FIELD_U32(v11, 80) = a3;
    FIELD_U32(v11, 84) = a5;
    FIELD_U32(v11, 88) = 0;
    FIELD_U32(v11, 92) = 10;
    FIELD_U8(v11, 96) = 1;
  }
  return v9;
}
