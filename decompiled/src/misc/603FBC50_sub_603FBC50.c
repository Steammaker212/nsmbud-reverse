/* sub_603FBC50
 * address: 0x603FBC50   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603FBC50(int a1)
{
  return (*(_BYTE *)(FIELD_U32(a1, 244) + 52) & 3) == 0;
}
