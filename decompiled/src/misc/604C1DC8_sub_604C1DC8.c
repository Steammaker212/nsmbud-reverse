/* sub_604C1DC8
 * address: 0x604C1DC8   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C1DC8(int a1)
{
  _DWORD *v2; // r5
  int result; // r0

  v2 = (_DWORD *)(a1 + 48);
  sub_604741D8((_DWORD *)(a1 + 48), 0, &dword_60CA2AD4, 0);
  FIELD_U8(a1, 13892) = 1;
  sub_6047455C((int)v2, 0, 1.0);
  sub_60473DE4(v2, 0xCu, &dword_60CA2AFC, 0);
  FIELD_F32(a1, 14124) = sub_604745C0((int)v2, 0xCu);
  FIELD_U8(a1, 14168) = 0;
  *(_BYTE *)(FIELD_U32(a1, 13884) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 13888) + 64) &= ~1u;
  result = FIELD_U32(a1, 13872);
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
