/* sub_601902FC
 * address: 0x601902FC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601902FC(_DWORD *a1)
{
  *a1 = off_60BD58DC;
  if ( (_DWORD *)dword_60C89968 == a1 )
  {
    dword_60C89968 = 0;
    dword_60C8996C = 0;
  }
  return sead__IDisposer__dtor(a1);
}
