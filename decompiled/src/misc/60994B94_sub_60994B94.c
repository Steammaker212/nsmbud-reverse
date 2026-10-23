/* sub_60994B94
 * address: 0x60994B94   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60994B94(int a1)
{
  return *(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 44) + 12) + 51) & 1;
}
