/* sub_60437A1C
 * address: 0x60437A1C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60437A1C(int a1)
{
  *(_DWORD *)a1 = &off_60BFA918;
  FIELD_U8(a1, 4) = 0;
  FIELD_U8(a1, 5) = 0;
  FIELD_U8(a1, 6) = 1;
  FIELD_U8(a1, 7) = 0;
  FIELD_U8(a1, 8) = 0;
  FIELD_U8(a1, 9) = 0;
  FIELD_U32(a1, 12) = 0;
  sub_6090B350(a1 + 16);
  return a1;
}
