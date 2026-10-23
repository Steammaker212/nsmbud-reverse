/* sub_6098A12C
 * address: 0x6098A12C   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098A12C(int a1, signed int a2, int a3)
{
  __int64 v5; // r0
  int v6; // r0
  int result; // r0
  int v8; // r2
  int v9; // r1
  int v10; // r3
  int v11; // r5

  if ( a2 >= 1 )
  {
    v5 = 4LL * (unsigned int)a2;
    if ( !is_mul_ok(4u, a2) )
      HIDWORD(v5) = 1;
    if ( HIDWORD(v5) )
      LODWORD(v5) = -1;
    v6 = sub_608DE334(v5, a3, 4);
    if ( v6 )
    {
      FIELD_U32(a1, 4) = a2;
      FIELD_U32(a1, 8) = v6;
    }
  }
  result = FIELD_U32(a1, 4);
  if ( result >= 1 )
  {
    if ( (result & 3) != 0 )
    {
      v8 = 0;
      do
        *(_DWORD *)(FIELD_U32(a1, 8) + 4 * v8++) = 0;
      while ( (result & 3) != v8 );
    }
    else
    {
      v8 = 0;
    }
    if ( (unsigned int)(result - 1) >= 3 )
    {
      result = v8 - result;
      v9 = 4 * v8;
      v10 = 0;
      do
      {
        *(_DWORD *)(FIELD_U32(a1, 8) + v9 - 4 * v10) = 0;
        *(_DWORD *)(FIELD_U32(a1, 8) + v9 - 4 * v10 + 4) = 0;
        *(_DWORD *)(FIELD_U32(a1, 8) + v9 - 4 * v10 + 8) = 0;
        v11 = FIELD_U32(a1, 8) + v9 - 4 * v10;
        v10 -= 4;
        FIELD_U32(v11, 12) = 0;
      }
      while ( result != v10 );
    }
  }
  return result;
}
