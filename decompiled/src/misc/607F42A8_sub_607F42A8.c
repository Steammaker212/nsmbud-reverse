/* sub_607F42A8
 * address: 0x607F42A8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F42A8(int a1)
{
  unsigned int v2; // r1
  int v3; // r0

  FIELD_U32(a1, 44) = 0;
  v2 = FIELD_U32(a1, 40);
  v3 = dword_60CA059C;
  FIELD_U8(dword_60CA059C, 146844) = 0;
  FIELD_U32(v3, 146848) = v2;
  FIELD_U32(v3, 16) |= 1u;
  return sub_6050A950(v3 + 87952, v2);
}
