/* sub_607674FC
 * address: 0x607674FC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607674FC(int a1)
{
  unsigned int result; // r0
  unsigned int v3; // r1

  sub_607865BC(a1 + 688, 10);
  result = FIELD_U32(a1, 1232) & 0xFCFFFFFF;
  v3 = FIELD_U32(a1, 1236) & 0xFFFEFFFF;
  FIELD_U32(a1, 1232) = result;
  FIELD_U32(a1, 1236) = v3;
  return result;
}
