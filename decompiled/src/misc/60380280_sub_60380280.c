/* sub_60380280
 * address: 0x60380280   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60380280(int result)
{
  int v1; // r1
  int v2; // r2
  int v3; // r5
  int v4; // r4

  v1 = FIELD_U32(result, 6300);
  v2 = v1;
  if ( v1 )
    v2 = 1;
  if ( v2 != v1 )
  {
    v3 = v1 - v2;
    v4 = FIELD_U32(result, 6304) + 4 * v2;
    do
    {
      result = *(_DWORD *)v4;
      if ( *(_BYTE *)(*(_DWORD *)v4 + 128) )
        result = sub_60386654(result + 12, 4);
      v4 += 4;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
