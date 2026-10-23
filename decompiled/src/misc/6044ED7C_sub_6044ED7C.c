/* sub_6044ED7C
 * address: 0x6044ED7C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6044ED7C(_DWORD *a1)
{
  *a1 = off_60BFB07C;
  if ( (_DWORD *)dword_60C9CEEC == a1 )
  {
    dword_60C9CEEC = 0;
    sub_6045077C(dword_60C9CEF0);
    dword_60C9CEF0 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
