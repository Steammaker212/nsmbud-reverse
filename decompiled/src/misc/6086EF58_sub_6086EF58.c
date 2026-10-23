/* sub_6086EF58
 * address: 0x6086EF58   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086EF58(int a1, int a2, int a3, int a4)
{
  int v5; // r6
  int result; // r0
  int v9; // r4
  int v10; // r5

  v5 = a4;
  result = FIELD_U32(a1, 136);
  if ( result )
  {
    result = FIELD_U32(a1, 144);
    if ( result )
    {
      result = FIELD_U32(result, 8);
      v5 = a4 - a1 + result;
    }
  }
  v9 = FIELD_U16(a1, 188);
  if ( FIELD_U16(a1, 188) )
  {
    v10 = 0;
    do
    {
      result = sub_60870AA0(FIELD_U32(a1, 40) + v10, a2, a3, v5);
      v10 += 120;
      --v9;
    }
    while ( v9 );
  }
  return result;
}
