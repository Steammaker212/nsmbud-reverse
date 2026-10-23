/* sub_6022A948
 * address: 0x6022A948   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6022A948(_DWORD *a1)
{
  *a1 = off_60BD9390;
  if ( (_DWORD *)dword_60C8D860 == a1 )
  {
    dword_60C8D860 = 0;
    dword_60C8D864 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
