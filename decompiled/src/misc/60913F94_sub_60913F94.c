/* sub_60913F94
 * address: 0x60913F94   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60913F94(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // r3
  int v5; // r2
  int result; // r0

  a1[1] = a2;
  a1[2] = a3;
  a1[3] = a4 + 16;
  result = a4;
  a1[4] = a4;
  v5 = FIELD_U32(a4, 280);
  if ( v5 )
  {
    result = 1;
    do
    {
      v4 = v5;
      ++result;
      v5 = FIELD_U32(v5, 24);
    }
    while ( v5 );
    FIELD_U32(v4, 24) = a1;
  }
  else
  {
    FIELD_U32(a4, 280) = a1;
  }
  return result;
}
