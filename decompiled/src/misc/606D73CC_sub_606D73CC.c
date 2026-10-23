/* sub_606D73CC
 * address: 0x606D73CC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D73CC(int a1)
{
  int v2; // r1

  sub_605C9DD8((_DWORD *)a1);
  v2 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3176) |= 0xC000600u;
  FIELD_U32(a1, 3184) = v2 | 0xC000600;
  FIELD_U8(a1, 6849) = 0;
  return 6849;
}
