/* sub_60959C28
 * address: 0x60959C28   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60959C28(int a1, int a2)
{
  sub_60917A78(a2 + 64);
  FIELD_U64(a1, 152) = FIELD_U32(a2, 256);
  return a1 + 8;
}
