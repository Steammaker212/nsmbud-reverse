/* sub_60814FCC
 * address: 0x60814FCC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60814FCC(_DWORD *a1)
{
  *a1 = off_60C2A094;
  if ( (_DWORD *)dword_60CC6B64 == a1 )
  {
    dword_60CC6B64 = 0;
    dword_60CC6B68 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
