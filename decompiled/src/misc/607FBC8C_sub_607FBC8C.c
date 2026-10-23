/* sub_607FBC8C
 * address: 0x607FBC8C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607FBC8C(_DWORD *a1)
{
  *a1 = off_60C27D8C;
  if ( (_DWORD *)dword_60CC6480 == a1 )
  {
    dword_60CC6480 = 0;
    dword_60CC6484 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
