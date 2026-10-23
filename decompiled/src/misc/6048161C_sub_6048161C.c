/* sub_6048161C
 * address: 0x6048161C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048161C(int a1)
{
  int result; // r0

  result = sub_6047459C(a1 + 40, 0);
  FIELD_U8(a1, 3669) = 0;
  return result;
}
