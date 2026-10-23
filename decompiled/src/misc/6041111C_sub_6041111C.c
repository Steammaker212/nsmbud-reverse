/* sub_6041111C
 * address: 0x6041111C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6041111C(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BF9C4C;
  a1[4] = &off_60BF9C5C;
  nullsub_124(a1);
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
