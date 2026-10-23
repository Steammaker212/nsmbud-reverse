/* sub_607FF264
 * address: 0x607FF264   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FF264(int a1)
{
  *(_BYTE *)a1 = 0;
  FIELD_U8(a1, 1) = 0;
  FIELD_U8(a1, 2) = 0;
  FIELD_U32(a1, 4) = 2139095039;
  FIELD_U32(a1, 8) = 2139095039;
  FIELD_U32(a1, 12) = -8388609;
  FIELD_U32(a1, 16) = -8388609;
  sub_60804D58(a1 + 20, 0, 0);
  sub_60804D58(a1 + 28, 0, 0);
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 40) = 0;
  return a1;
}
