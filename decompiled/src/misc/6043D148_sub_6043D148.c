/* sub_6043D148
 * address: 0x6043D148   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6043D148(int a1)
{
  int v2; // r1

  *(_DWORD *)a1 = off_60BFAA38;
  FIELD_U16(a1, 68) = 0;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 64) = 0;
  memset((void *)(a1 + 4), 0, 41);
  FIELD_U32(a1, 112) = 0;
  memset((void *)(a1 + 72), 0, 37);
  sub_60913BB4(a1 + 116);
  FIELD_U32(a1, 116) = off_60BF9C1C;
  FIELD_U32(a1, 144) = 0;
  sub_6083651C(a1 + 152, v2);
  return a1;
}
