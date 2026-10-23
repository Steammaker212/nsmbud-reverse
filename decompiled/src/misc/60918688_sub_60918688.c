/* sub_60918688
 * address: 0x60918688   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60918688(int a1, int a2)
{
  return *(_DWORD *)(FIELD_U32(a1, 64) + 8 * a2) + 2;
}
