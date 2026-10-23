/* sub_6092A754
 * address: 0x6092A754   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6092A754(_DWORD *a1)
{
  _DWORD *v1; // r0

  *(a1 - 7) = off_60C5DCEC;
  *a1 = off_60C5DD50;
  a1[43] = &off_60C5E40C;
  a1[36] = &off_60C5E40C;
  v1 = sub_60922E14(a1 - 7);
  operator_delete(v1);
}
