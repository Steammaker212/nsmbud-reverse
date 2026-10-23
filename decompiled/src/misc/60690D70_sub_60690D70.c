/* sub_60690D70
 * address: 0x60690D70   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60690D70(int a1)
{
  return FIELD_U8(a1, 28) && (*(_BYTE *)(**(_DWORD **)(FIELD_U32(a1, 12) + 20) + 28) & 0x20) == 0;
}
