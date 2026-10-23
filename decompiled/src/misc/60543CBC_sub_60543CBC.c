/* sub_60543CBC
 * address: 0x60543CBC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60543CBC(int a1)
{
  int v2; // r0

  FIELD_U8(a1, 33505) = 0;
  FIELD_U32(a1, 33472) = 9;
  v2 = dword_60CA059C;
  FIELD_U8(dword_60CA059C, 146844) = 1;
  FIELD_U32(v2, 146848) = 0;
  FIELD_U32(v2, 16) |= 1u;
  return sub_6050A950(v2 + 87952, 0);
}
