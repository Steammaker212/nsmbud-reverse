/* sub_609088D0
 * address: 0x609088D0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_609088D0(_DWORD *a1)
{
  _DWORD *v1; // r0

  *a1 = off_60C5CE38;
  a1[6] = &off_60C5CE8C;
  a1[30] = 3;
  v1 = sub_609084A8(a1);
  operator_delete(v1);
}
