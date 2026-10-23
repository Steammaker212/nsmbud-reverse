/* sub_60543E60
 * address: 0x60543E60   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60543E60()
{
  int v1; // r0

  v1 = dword_60CA059C;
  FIELD_U8(dword_60CA059C, 146844) = 0;
  FIELD_U32(v1, 146848) = 0;
  FIELD_U32(v1, 16) |= 1u;
  return sub_6050A950(v1 + 87952, 0);
}
