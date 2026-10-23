/* sub_605E78D4
 * address: 0x605E78D4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605E78D4(_DWORD *a1)
{
  *a1 = off_60C0B620;
  if ( (_DWORD *)dword_60CB1BE0 == a1 )
  {
    dword_60CB1BE0 = 0;
    dword_60CB1BE4 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
