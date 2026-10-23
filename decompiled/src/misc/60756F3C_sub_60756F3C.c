/* sub_60756F3C
 * address: 0x60756F3C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60756F3C(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C23D34;
  nullsub_407();
  *a1 = off_60C24A84;
  nullsub_407();
  v2 = sead__IDisposer::~IDisposer(a1);
  operator_delete(v2);
}
