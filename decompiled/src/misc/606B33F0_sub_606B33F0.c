/* sub_606B33F0
 * address: 0x606B33F0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_606B33F0(_DWORD *a1)
{
  *a1 = off_60C1AE3C;
  if ( (_DWORD *)dword_60CBA438 == a1 )
  {
    dword_60CBA438 = 0;
    dword_60CBA43C = 0;
  }
  return sead__IDisposer__dtor(a1);
}
