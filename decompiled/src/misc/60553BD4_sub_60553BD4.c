/* sub_60553BD4
 * address: 0x60553BD4   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60553BD4(int a1, int a2)
{
  int v4; // r5
  int v5; // r0
  int v6; // r7
  int v7; // r1
  _DWORD *v8; // r4
  int v9; // t1
  int result; // r0

  *(_BYTE *)(FIELD_U32(a1, 19920) + 64) = *(_BYTE *)(FIELD_U32(a1, 19920) + 64) & 0xFE | a2;
  v4 = a1 + 17892;
  v5 = sub_608DE61C(a1 + 17892, 0);
  v6 = a2;
  v9 = FIELD_U32(a1, 17904);
  v8 = (_DWORD *)(a1 + 17904);
  v7 = v9;
  if ( a2 )
    v6 = 9;
  *(_DWORD *)(v5 - v7 + 196) = v6;
  *(_DWORD *)(sub_608DE61C(v4, 0) - *v8 + 200) = v6;
  *(_BYTE *)(v8[505] + 64) = *(_BYTE *)(v8[505] + 64) & 0xFE | a2;
  *(_DWORD *)(sub_608DE61C(v4, 1) - *v8 + 196) = v6;
  *(_DWORD *)(sub_608DE61C(v4, 1) - *v8 + 200) = v6;
  *(_BYTE *)(v8[506] + 64) = *(_BYTE *)(v8[506] + 64) & 0xFE | a2;
  *(_DWORD *)(sub_608DE61C(v4, 2) - *v8 + 196) = v6;
  result = sub_608DE61C(v4, 2) - *v8;
  FIELD_U32(result, 200) = v6;
  return result;
}
