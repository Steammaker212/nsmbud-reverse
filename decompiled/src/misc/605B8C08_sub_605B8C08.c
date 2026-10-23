/* sub_605B8C08
 * address: 0x605B8C08   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605B8C08(_DWORD *a1)
{
  *a1 = off_60C0972C;
  if ( (_DWORD *)dword_60CB0618 == a1 )
  {
    dword_60CB0618 = 0;
    dword_60CB061C = 0;
  }
  return sead__IDisposer__dtor(a1);
}
