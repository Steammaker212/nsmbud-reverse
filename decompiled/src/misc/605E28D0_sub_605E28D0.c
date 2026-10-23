/* sub_605E28D0
 * address: 0x605E28D0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605E28D0(int a1)
{
  int v2; // r5
  unsigned int result; // r0

  v2 = a1 + 6064;
  sub_605EAE4C(a1 + 6064, 3, 0.0);
  sub_605EB5E4(v2);
  result = FIELD_U32(a1, 6240) & 0xFFFFFFEF;
  FIELD_U32(a1, 6240) = result;
  return result;
}
