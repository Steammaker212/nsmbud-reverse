/* sub_6080650C
 * address: 0x6080650C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6080650C(_DWORD *a1)
{
  *a1 = off_60C2804C;
  a1[1] = &off_60C28094;
  a1[49] = off_60C5B6CC;
  nn__os__FinalizeMutex(a1 + 80);
  nn__os__FinalizeMutex(a1 + 75);
  a1[49] = &off_60C5B694;
  nn__os__FinalizeMutex(a1 + 50);
  *a1 = off_60C5BD18;
  a1[1] = &off_60C5BD60;
  sead__CriticalSection__dtor(a1 + 36);
  operator_delete(a1);
}
