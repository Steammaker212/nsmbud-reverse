/* sub_603FF3A8
 * address: 0x603FF3A8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603FF3A8(_DWORD *a1)
{
  *a1 = off_60BF9814;
  if ( (_DWORD *)dword_60C99E30 == a1 )
  {
    dword_60C99E30 = 0;
    sub_60500824(dword_60C99E34 + 16);
    dword_60C99E34 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
