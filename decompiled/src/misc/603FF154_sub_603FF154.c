/* sub_603FF154
 * address: 0x603FF154   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603FF154(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BF97F4;
  if ( (_DWORD *)dword_60C99E28 == a1 )
  {
    dword_60C99E28 = 0;
    (**(void (__fastcall ***)(int))dword_60C99E2C)(dword_60C99E2C);
    dword_60C99E2C = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
