/* sub_60769BBC
 * address: 0x60769BBC   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60769BBC(int a1)
{
  return !FIELD_U8(dword_60CC6D78, 109032)
      && !FIELD_U8(dword_60C9A1F0, 6516)
      && !sub_60766764(a1)
      && (FIELD_U32(a1, 1204) & 0x80080) == 0
      && (FIELD_U8(a1, 1219) & 8) == 0;
}
