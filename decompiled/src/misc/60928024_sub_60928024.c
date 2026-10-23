/* sub_60928024
 * address: 0x60928024   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60928024(_DWORD *a1)
{
  _DWORD *v1; // r0

  *(a1 - 7) = off_60C5DB24;
  *a1 = off_60C5DB88;
  a1[55] = &off_60C5E40C;
  a1[48] = &off_60C5E40C;
  a1[44] = &off_60C5E40C;
  a1[40] = &off_60C5E40C;
  a1[36] = &off_60C5E40C;
  v1 = sub_60922E14(a1 - 7);
  operator_delete(v1);
}
