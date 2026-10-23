/* sub_6098A224
 * address: 0x6098A224   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098A224(int result, int a2, int a3)
{
  int v3; // r3
  int v4; // r12
  int v5; // r2
  int v6; // r1
  int v7; // r4

  if ( a2 >= 1 && a3 )
  {
    FIELD_U32(result, 4) = a2;
    FIELD_U32(result, 8) = a3;
  }
  else
  {
    a2 = FIELD_U32(result, 4);
    if ( a2 < 1 )
      return result;
  }
  if ( (a2 & 3) != 0 )
  {
    v3 = 0;
    do
      *(_DWORD *)(FIELD_U32(result, 8) + 4 * v3++) = 0;
    while ( (a2 & 3) != v3 );
  }
  else
  {
    v3 = 0;
  }
  if ( (unsigned int)(a2 - 1) >= 3 )
  {
    v4 = v3 - a2;
    v5 = 4 * v3;
    v6 = 0;
    do
    {
      *(_DWORD *)(FIELD_U32(result, 8) + v5 - 4 * v6) = 0;
      *(_DWORD *)(FIELD_U32(result, 8) + v5 - 4 * v6 + 4) = 0;
      *(_DWORD *)(FIELD_U32(result, 8) + v5 - 4 * v6 + 8) = 0;
      v7 = FIELD_U32(result, 8) + v5 - 4 * v6;
      v6 -= 4;
      FIELD_U32(v7, 12) = 0;
    }
    while ( v4 != v6 );
  }
  return result;
}
