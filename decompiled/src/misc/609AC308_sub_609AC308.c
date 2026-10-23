/* sub_609AC308
 * address: 0x609AC308   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609AC308(int a1, int a2)
{
  _DWORD v5[8]; // [sp+0h] [bp-20h] BYREF

  if ( (FIELD_U8(a1, 5041) & 1) != 0 )
  {
    sub_609AC458(a1, a2);
    sub_60941B30(v5);
    sub_60943B88(a1 + 444);
    sub_60941B30(v5);
    sub_60943B88(a1 + 460);
    sub_60941B30(v5);
    sub_60943B88(a1 + 476);
  }
  else
  {
    sub_60941B30(v5);
    sub_60943B88(a1 + 444);
    sub_60941B30(v5);
    sub_60943B88(a1 + 460);
    sub_60941B30(v5);
    sub_60943B88(a1 + 476);
    sub_609AC458(a1, a2);
  }
  sub_609AD124(a1 + 4456, a2);
  sub_60941B30(v5);
  return sub_60943B88(a1 + 492);
}
