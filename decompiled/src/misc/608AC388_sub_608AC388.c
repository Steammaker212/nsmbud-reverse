/* sub_608AC388
 * address: 0x608AC388   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608AC388(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60C5AEEC;
  v2 = a1 + 1;
  sub_608AC2F0((int)a1);
  sub_608C5BE4(a1 + 6);
  nn__os__FinalizeMutex(v2);
  operator_delete(a1);
}
