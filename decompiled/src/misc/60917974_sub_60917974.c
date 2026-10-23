/* sub_60917974
 * address: 0x60917974   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60917974(int a1, const void *a2, int a3)
{
  int v6; // r1
  int result; // r0

  v6 = FIELD_U32(a1, 192);
  if ( v6 != -1 && sub_60916A94(dword_60CCFC8C, v6) == 1 && (FIELD_U8(a1, 196) & 1) != 0 )
  {
    dword_60CC7568(a1);
    FIELD_U8(a1, 196) &= ~1u;
  }
  FIELD_U32(a1, 192) = -1;
  qmemcpy((void *)a1, a2, 0xC0u);
  result = FIELD_U8(a1, 196) & 0xFE;
  FIELD_U8(a1, 196) = result;
  FIELD_U32(a1, 192) = a3;
  if ( a3 != -1 )
  {
    result = sub_60916A58(dword_60CCFC8C, a3);
    if ( !result )
    {
      FIELD_U8(a1, 196) |= 1u;
      result = sub_60916740(dword_60CCFC8C, a1, 0);
      FIELD_U32(a1, 192) = result;
    }
  }
  return result;
}
