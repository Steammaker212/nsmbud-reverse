/* sub_609AC458
 * address: 0x609AC458   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609AC458(int a1)
{
  int v2; // r6
  _DWORD *result; // r0
  _DWORD v4[8]; // [sp+0h] [bp-20h] BYREF

  v2 = a1 + 524;
  sub_60941B30(v4);
  sub_60943B88(v2);
  result = (_DWORD *)FIELD_U8(a1, 5040);
  if ( ((unsigned __int8)result & 0x80) != 0 )
  {
    sub_60941B30(v4);
    sub_60943B88(a1 + 540);
    sub_60941B30(v4);
    sub_60943B88(a1 + 596);
    sub_60941B30(v4);
    sub_60943B88(a1 + 652);
    sub_60941B30(v4);
    sub_60943B88(a1 + 568);
    sub_60941B30(v4);
    sub_60943B88(a1 + 624);
    sub_60941B30(v4);
    sub_60943B88(a1 + 668);
    sub_60941B30(v4);
    sub_60943B88(a1 + 684);
    sub_60941B30(v4);
    sub_60943B88(a1 + 700);
    sub_60941B30(v4);
    return sub_60943B88(a1 + 716);
  }
  return result;
}
