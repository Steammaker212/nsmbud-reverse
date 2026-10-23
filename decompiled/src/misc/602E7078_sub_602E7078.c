/* sub_602E7078
 * address: 0x602E7078   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E7078(int result, int a2)
{
  char *v2; // r1

  v2 = (char *)&unk_60AFECB4 + 8 * a2;
  *(_DWORD *)result = v2;
  FIELD_U32(result, 8) = *((_DWORD *)v2 + 1);
  FIELD_U8(result, 12) = 1;
  return result;
}
