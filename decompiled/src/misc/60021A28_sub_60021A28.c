/* sub_60021A28
 * address: 0x60021A28   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60021A28(_DWORD *a1)
{
  *a1 = off_60BC148C;
  if ( (_DWORD *)dword_60C7F528 == a1 )
  {
    dword_60C7F528 = 0;
    dword_60C7F52C = 0;
  }
  return sead__IDisposer__dtor(a1);
}
