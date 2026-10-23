/* sub_603F7F14
 * address: 0x603F7F14   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603F7F14(_DWORD *a1)
{
  *a1 = off_60BF9580;
  if ( (_DWORD *)dword_60C99DCC == a1 )
  {
    dword_60C99DCC = 0;
    sub_604B622C(dword_60C99DD0 + 16);
    dword_60C99DD0 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
