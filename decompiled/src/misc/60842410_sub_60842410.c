/* sub_60842410
 * address: 0x60842410   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60842410(int a1)
{
  *(_DWORD *)a1 = 0;
  sub_6083D4A0(a1 + 8);
  sub_608353A4(a1 + 80);
  sub_608353A4(a1 + 152);
  sub_608353A4(a1 + 224);
  sub_608353A4(a1 + 296);
  FIELD_U8(a1, 368) = 0;
  sub_6083CD98(a1 + 376);
  FIELD_U32(a1, 448) = 0;
  FIELD_U32(a1, 452) = 0;
  FIELD_U32(a1, 456) = 0;
  FIELD_U32(a1, 460) = 0;
  return a1;
}
