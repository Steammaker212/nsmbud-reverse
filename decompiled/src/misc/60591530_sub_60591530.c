/* sub_60591530
 * address: 0x60591530   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60591530(_DWORD *a1)
{
  int result; // r0

  result = 2;
  if ( !FIELD_U8(dword_60C99DD4, 194) )
  {
    a1[29] = -985137152;
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CAF6F4);
    ship_bottom_waku_ref_2(a1);
    sub_6059170C(a1);
    return 1;
  }
  return result;
}
