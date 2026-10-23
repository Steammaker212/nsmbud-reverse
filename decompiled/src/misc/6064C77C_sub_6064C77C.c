/* sub_6064C77C
 * address: 0x6064C77C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064C77C(int a1)
{
  unsigned int v2; // r0
  int result; // r0

  sub_606C5EC4(a1 + 7456);
  v2 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 8487) = v2 & 0xF;
  FIELD_U32(a1, 8480) = (char *)&dword_60CB60D8 + ((v2 >> 21) & 8);
  result = (v2 >> 12) & 3;
  FIELD_U8(a1, 7259) = result;
  return result;
}
