/* sub_60377C40
 * address: 0x60377C40   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60377C40(int a1)
{
  return FIELD_U32(dword_60C995D0, 32) != 0 && FIELD_U32(dword_60C995D0, 32) == a1 + 128;
}
