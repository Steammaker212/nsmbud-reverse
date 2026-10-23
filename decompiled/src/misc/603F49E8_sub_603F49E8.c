/* sub_603F49E8
 * address: 0x603F49E8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F49E8(int result)
{
  int v1; // r1

  v1 = dword_60CC6D78;
  FIELD_U32(dword_60CC6D78, 32) = 2;
  FIELD_U32(v1, 36) = 0;
  FIELD_U32(result, 1832) = 2;
  return result;
}
