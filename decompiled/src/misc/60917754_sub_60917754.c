/* sub_60917754
 * address: 0x60917754   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60917754(int a1, int a2)
{
  int v4; // r1
  int v5; // r1

  v4 = FIELD_U32(a1, 192);
  if ( v4 != -1 && sub_60916A94(dword_60CCFC8C, v4) == 1 && (FIELD_U8(a1, 196) & 1) != 0 )
  {
    dword_60CC7568(a1);
    FIELD_U8(a1, 196) &= ~1u;
  }
  FIELD_U32(a1, 192) = -1;
  qmemcpy((void *)a1, (const void *)a2, 0xC0u);
  v5 = FIELD_U32(a2, 192);
  FIELD_U32(a1, 192) = v5;
  FIELD_U8(a1, 196) = FIELD_U8(a2, 196);
  if ( v5 != -1 && !sub_60916A58(dword_60CCFC8C, v5) )
  {
    FIELD_U8(a1, 196) |= 1u;
    FIELD_U32(a1, 192) = sub_60916740(dword_60CCFC8C, a1, 0);
  }
  return a1;
}
