/* sub_60833B74
 * address: 0x60833B74   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60833B74(_DWORD *a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r4

  sub_60833BCC();
  result = sub_60834010(a1);
  v3 = a1[9];
  if ( v3 >= 1 )
  {
    result = 0;
    v4 = 0;
    do
    {
      v5 = a1[10];
      if ( v3 > (unsigned int)v4++ )
        v5 += result;
      result += 12;
      FIELD_U32(v5, 8) = *(_DWORD *)(a1[6] + 8);
      v3 = a1[9];
    }
    while ( v4 < v3 );
  }
  return result;
}
