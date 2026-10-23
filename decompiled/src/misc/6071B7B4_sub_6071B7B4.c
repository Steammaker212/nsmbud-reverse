/* sub_6071B7B4
 * address: 0x6071B7B4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6071B7B4(_DWORD *a1)
{
  *a1 = off_60C21D44;
  if ( (_DWORD *)dword_60CBD82C == a1 )
  {
    dword_60CBD82C = 0;
    sub_6071BD2C(dword_60CBD830);
    dword_60CBD830 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
