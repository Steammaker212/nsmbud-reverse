/* sub_6080A7DC
 * address: 0x6080A7DC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6080A7DC(_DWORD *a1)
{
  *a1 = off_60C28188;
  if ( (_DWORD *)dword_60CC6B08 == a1 )
  {
    dword_60CC6B08 = 0;
    dword_60CC6B0C = 0;
  }
  return sead__IDisposer__dtor(a1);
}
