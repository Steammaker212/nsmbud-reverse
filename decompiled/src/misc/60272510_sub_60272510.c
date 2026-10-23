/* sub_60272510
 * address: 0x60272510   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60272510(int a1)
{
  unsigned int result; // r0

  FIELD_U32(a1, 328) = 0;
  sub_6015913C((ActiveCollider *)(a1 + 188), 176);
  result = FIELD_U32(a1, 340) & 0xFFFFEFFF;
  FIELD_U32(a1, 340) = result;
  return result;
}
