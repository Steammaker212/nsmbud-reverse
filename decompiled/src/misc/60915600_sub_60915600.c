/* sub_60915600
 * address: 0x60915600   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60915600(int a1, int a2)
{
  sead__PtrArrayImpl__allocBuffer(a1 + 56, 4096, a2, 4);
  FIELD_U32(a1, 56) = 0;
  return 0;
}
