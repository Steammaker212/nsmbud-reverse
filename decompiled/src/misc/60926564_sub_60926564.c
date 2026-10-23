/* sub_60926564
 * address: 0x60926564   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60926564(_DWORD *result, int a2)
{
  int v2; // r4
  int v3; // r6
  int v4; // r0
  int v5; // r5

  v2 = a2;
  result[41] = a2;
  v3 = result[49];
  if ( v3 )
  {
    v4 = result[50];
    if ( a2 )
      v2 = a2 + 28;
    v5 = v4 + 28;
    do
    {
      result = (_DWORD *)sub_6094083C(v5, v2);
      v5 += 164;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
