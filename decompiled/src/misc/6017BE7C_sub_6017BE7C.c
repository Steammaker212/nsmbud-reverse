/* sub_6017BE7C
 * address: 0x6017BE7C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6017BE7C(__int64 a1, int a2)
{
  int v2; // r4

  v2 = a1;
  FIELD_U32(a1, 20) = HIDWORD(a1);
  FIELD_U32(a1, 24) = a2;
  sub_6017BBCC(a1);
  return sub_6017BE9C(v2);
}
