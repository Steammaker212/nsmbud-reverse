/* sub_607EEB90
 * address: 0x607EEB90   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607EEB90(_DWORD *result)
{
  int v1; // r3
  int v2; // lr
  unsigned int v3; // r12
  _DWORD *v4; // r0

  v1 = result[1];
  if ( v1 )
  {
    v2 = result[3];
    v3 = result[2];
    result = (_DWORD *)(v2 & 1 | v3);
    if ( result )
    {
      v4 = (_DWORD *)(v1 + (v2 >> 1));
      if ( (v2 & 1) != 0 )
        v3 = *(_DWORD *)(*v4 + v3);
      return (_DWORD *)((int (__fastcall *)(_DWORD *))v3)(v4);
    }
  }
  return result;
}
