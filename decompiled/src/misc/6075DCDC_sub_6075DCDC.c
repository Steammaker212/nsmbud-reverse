/* sub_6075DCDC
 * address: 0x6075DCDC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6075DCDC(_DWORD *a1)
{
  *a1 = off_60C241F4;
  if ( (_DWORD *)dword_60CBF350 == a1 )
  {
    dword_60CBF350 = 0;
    dword_60CBF354 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
