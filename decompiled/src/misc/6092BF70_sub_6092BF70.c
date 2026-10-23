/* sub_6092BF70
 * address: 0x6092BF70   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6092BF70(_DWORD *a1)
{
  _DWORD *v1; // r0

  *(a1 - 7) = off_60C5DF94;
  *a1 = off_60C5DFF8;
  a1[74] = &off_60C5E40C;
  a1[70] = &off_60C5E40C;
  a1[66] = &off_60C5E40C;
  a1[62] = &off_60C5E40C;
  a1[58] = &off_60C5E40C;
  a1[52] = &off_60C5E40C;
  a1[46] = &off_60C5E40C;
  a1[40] = &off_60C5E40C;
  a1[36] = &off_60C5E40C;
  v1 = sub_60922E14(a1 - 7);
  operator_delete(v1);
}
