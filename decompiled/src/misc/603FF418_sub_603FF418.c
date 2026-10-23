/* sub_603FF418
 * address: 0x603FF418   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603FF418(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BF9814;
  if ( (_DWORD *)dword_60C99E30 == a1 )
  {
    dword_60C99E30 = 0;
    sub_60500824(dword_60C99E34 + 16);
    dword_60C99E34 = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
