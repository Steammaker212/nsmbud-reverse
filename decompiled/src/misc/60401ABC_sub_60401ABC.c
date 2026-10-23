/* sub_60401ABC
 * address: 0x60401ABC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60401ABC(_DWORD *a1)
{
  int v2; // r7

  *a1 = off_60BF9A28;
  if ( (_DWORD *)dword_60C99E64 == a1 )
  {
    dword_60C99E64 = 0;
    v2 = dword_60C99E68;
    sub_60402278(dword_60C99E68 + 89816);
    sub_604023AC(v2 + 16);
    dword_60C99E68 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
