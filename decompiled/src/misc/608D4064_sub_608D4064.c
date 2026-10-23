/* sub_608D4064
 * address: 0x608D4064   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608D4064(int a1)
{
  *(_DWORD *)(a1 - 12) = off_60C5B7E4;
  *(_DWORD *)a1 = off_60C5B804;
  if ( !FIELD_U8(a1, 597) )
  {
    FIELD_U16(a1, 596) = 256;
    sub_608B2C20(a1, 0);
  }
  return sub_608B2C00((_DWORD *)a1);
}
