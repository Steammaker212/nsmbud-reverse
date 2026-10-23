/* sub_60542B54
 * address: 0x60542B54   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60542B54(int a1, unsigned int a2)
{
  _DWORD *v4; // r5

  if ( FIELD_U8(dword_60CAADA8, 83637) )
  {
    FIELD_U8(dword_60CAADA8, 83637) = 0;
    sub_60473DE4((_DWORD *)(a1 + 4), 0, &off_60C00604, 0);
  }
  v4 = (_DWORD *)(a1 + 4);
  if ( FIELD_U8(dword_60CAB438, 83576) )
  {
    FIELD_U8(dword_60CAB438, 83576) = 0;
    sub_604741D8(v4, 0, &off_60C00604, 0);
  }
  return sub_60473B58(v4, a2, 0);
}
