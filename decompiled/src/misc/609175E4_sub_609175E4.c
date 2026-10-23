/* sub_609175E4
 * address: 0x609175E4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609175E4(int a1)
{
  int v2; // r1

  v2 = FIELD_U32(a1, 192);
  if ( v2 != -1 && sub_60916A94(dword_60CCFC8C, v2) == 1 && (FIELD_U8(a1, 196) & 1) != 0 )
  {
    dword_60CC7568(a1);
    FIELD_U8(a1, 196) &= ~1u;
  }
  FIELD_U32(a1, 192) = -1;
  return a1;
}
