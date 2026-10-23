/* sub_602B6AE8
 * address: 0x602B6AE8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B6AE8(int a1)
{
  _DWORD *v2; // r0
  int v3; // t1
  _BYTE *v4; // r4
  int v5; // t1

  FIELD_U32(a1, 6320) = 30;
  v3 = FIELD_U32(a1, 6308);
  v2 = (_DWORD *)(a1 + 6308);
  if ( v3 != 1 )
  {
    *v2 = 1;
    sub_60421AD4(FIELD_U32(a1, 6304));
  }
  FIELD_U32(a1, 96) = -1073741824;
  FIELD_U32(a1, 100) = -1102263091;
  FIELD_U32(a1, 6324) = 0;
  v5 = FIELD_U8(a1, 6318);
  v4 = (_BYTE *)(a1 + 6318);
  *v4 = v5 | 1;
  *(v4 - 1) = 0;
  return v5 | 1;
}
