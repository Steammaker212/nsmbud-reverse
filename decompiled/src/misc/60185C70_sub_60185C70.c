/* sub_60185C70
 * address: 0x60185C70   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_60185C70(Actor *a1, unsigned __int8 *a2)
{
  Actor *result; // r0

  result = sub_60168634(a1, (int)a2);
  FIELD_U32(result, 0x0) = (int)off_60BD5200;
  result[2].field_3C = 1065353216;
  result[2].field_40 = 1065353216;
  result[2].field_44 = 1065353216;
  result[2].field_48 = 0;
  result[2].field_4C = 0;
  result[3].vtable = a2[34];
  result[3].heap = a2[32];
  result[3].id = a2[36];
  result[3].profile = (Profile *)a2[33];
  *(_DWORD *)&result[3].field_10 = 0;
  LOBYTE(result[3].settings1) = 0;
  return result;
}
