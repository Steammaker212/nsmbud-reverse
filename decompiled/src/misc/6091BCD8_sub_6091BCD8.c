/* sub_6091BCD8
 * address: 0x6091BCD8   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091BCD8(int a1)
{
  *(_DWORD *)a1 = off_60C5D608;
  FIELD_U32(a1, 4) = 0;
  FIELD_U8(a1, 8) = 0;
  FIELD_U16(a1, 10) = 0;
  untitled_ref(a1 + 16);
  memset((void *)(a1 + 600), 0, 48);
  sub_60973ACC(a1 + 648);
  FIELD_U32(a1, 648) = &off_60C5D628;
  sub_60973ACC(a1 + 668);
  FIELD_U32(a1, 668) = &off_60C5D644;
  sub_60973ACC(a1 + 688);
  FIELD_U32(a1, 688) = &off_60C5D660;
  sub_60973ACC(a1 + 708);
  FIELD_U32(a1, 708) = &off_60C5D67C;
  FIELD_U32(a1, 920) = 0;
  FIELD_U32(a1, 924) = 0;
  FIELD_U16(a1, 928) = 0;
  return a1;
}
