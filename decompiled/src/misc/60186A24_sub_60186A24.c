/* sub_60186A24
 * address: 0x60186A24   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60186A24(int a1)
{
  FIELD_U8(a1, 216) |= 2u;
  FIELD_U32(a1, 312) = 5;
  sub_60186FC0(dword_60CC6D78 + 984, FIELD_U32(a1, 240), FIELD_U32(a1, 352), a1 + 300);
  FIELD_U8(a1, 19) = 1;
  return 1;
}
