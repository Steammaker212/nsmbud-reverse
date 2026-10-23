/* sub_605E6738
 * address: 0x605E6738   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E6738(int a1)
{
  FIELD_U32(a1, 6260) |= 0x3000u;
  return sub_605E540C((_DWORD *)a1, dword_60B05A98[FIELD_U32(a1, 6252)], FIELD_S8(a1, 6336));
}
