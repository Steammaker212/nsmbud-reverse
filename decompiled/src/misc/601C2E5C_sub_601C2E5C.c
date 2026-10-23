/* sub_601C2E5C
 * address: 0x601C2E5C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C2E5C(int a1, float a2)
{
  FIELD_U32(a1, 1108) &= ~0x800u;
  return sub_601BA0F8(a1, 0, 0.0, a2);
}
