/* sub_60539474
 * address: 0x60539474   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60539474(_DWORD *a1)
{
  *a1 = off_60C0047C;
  if ( (_DWORD *)dword_60CAB434 == a1 )
  {
    dword_60CAB434 = 0;
    sub_6053CF68(dword_60CAB438);
    dword_60CAB438 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
