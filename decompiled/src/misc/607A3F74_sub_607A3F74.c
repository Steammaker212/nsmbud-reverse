/* sub_607A3F74
 * address: 0x607A3F74   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A3F74(int a1)
{
  sub_60794954(a1 + 11356, 58, 0.0, 0.0);
  FIELD_U32(a1, 1224) &= ~0x100000u;
  FIELD_U32(a1, 9712) = 30;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 160) = 0x80000000;
  sub_6000AFC4((float *)(a1 + 108));
  return sub_607780C4(dword_60CBFA90, 1);
}
