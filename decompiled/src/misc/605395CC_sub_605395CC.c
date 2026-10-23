/* sub_605395CC
 * address: 0x605395CC   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605395CC(int a1)
{
  *(_BYTE *)(FIELD_U32(a1, 52592) + 64) &= ~1u;
  nullsub_4390();
  nullsub_4390();
  nullsub_4390();
  FIELD_U32(a1, 83524) = 0;
  FIELD_U32(a1, 4056) = 0;
  FIELD_U32(a1, 8068) = 0;
  FIELD_U32(a1, 12080) = 0;
  FIELD_U8(a1, 83570) = 0;
  return 83570;
}
