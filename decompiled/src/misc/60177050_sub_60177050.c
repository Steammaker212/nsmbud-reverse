/* sub_60177050
 * address: 0x60177050   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60177050(_DWORD *a1)
{
  *a1 = off_60BD4EE8;
  if ( (_DWORD *)dword_60C88E5C == a1 )
  {
    dword_60C88E5C = 0;
    dword_60C88E60 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
