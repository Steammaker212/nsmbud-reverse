/* sub_604AFF74
 * address: 0x604AFF74   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AFF74(int a1)
{
  *(_BYTE *)(FIELD_U32(a1, 6148) + 64) |= 1u;
  return sub_60502B04(a1 + 3608, &unk_60B02E6C, 1);
}
