/* sub_60854FF8
 * address: 0x60854FF8   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60854FF8(int a1)
{
  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 4) = 2;
  memset((void *)(a1 + 8), 0, 44);
  FIELD_U32(a1, 52) = 4;
  FIELD_U32(a1, 56) = 4;
  FIELD_U32(a1, 60) = 4;
  FIELD_U32(a1, 64) = 0;
  sub_6083651C(a1 + 72);
  sub_608353A4(a1 + 360);
  FIELD_U32(a1, 432) = 0;
  FIELD_U32(a1, 436) = 0;
  FIELD_U32(a1, 440) = 0;
  FIELD_U32(a1, 444) = 0;
  sub_608353A4(a1 + 448);
  FIELD_U32(a1, 520) = 0;
  FIELD_U32(a1, 524) = 0;
  FIELD_U32(a1, 528) = 0;
  FIELD_U32(a1, 532) = 0;
  FIELD_U32(a1, 536) = 0;
  FIELD_U32(a1, 540) = 0;
  sub_6083C510(a1 + 544);
  sub_6083C510(a1 + 584);
  sub_6083C510(a1 + 624);
  sub_6083C510(a1 + 664);
  sub_6083C510(a1 + 704);
  sub_6083C510(a1 + 744);
  FIELD_U16(a1, 784) = 0;
  return a1;
}
