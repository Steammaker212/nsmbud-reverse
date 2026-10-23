/* sub_601C3AA4
 * address: 0x601C3AA4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601C3AA4(_DWORD *result, unsigned int a2)
{
  int v2; // r1
  bool v3; // zf
  int v4; // r3

  if ( a2 <= 0x27 )
  {
    v2 = dword_60AFC160[a2];
    v3 = v2 == -1;
    if ( v2 != -1 )
      v3 = result[266] == v2;
    if ( !v3 )
    {
      v4 = -1;
      if ( (unsigned int)(v2 - 24) <= 6 )
        v4 = dword_60AFC140[v2 - 24];
      result[265] = v4;
      result[266] = v2;
      return (_DWORD *)sub_605EAB48(result[236], 0.0);
    }
  }
  return result;
}
