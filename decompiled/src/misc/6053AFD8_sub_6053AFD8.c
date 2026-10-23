/* sub_6053AFD8
 * address: 0x6053AFD8   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053AFD8(int a1)
{
  int v1; // r4
  _DWORD *v2; // r5
  int result; // r0

  v1 = a1;
  v2 = (_DWORD *)(a1 + 15720);
  sub_6047EFCC(a1 + 15720, 0);
  FIELD_U8(v1, 16180) = 1;
  v1 += 16180;
  sub_6047EFCC((int)v2, 1);
  FIELD_U8(v1, 1) = 1;
  sub_6047EFCC((int)v2, 2);
  FIELD_U8(v1, 2) = 1;
  sub_6047EFCC((int)v2, 3);
  FIELD_U8(v1, 3) = 1;
  *(_BYTE *)(FIELD_U32(v1, 36400) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v1, 36404) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v1, 36408) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v1, 36412) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v1, 36416) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v1, 36420) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v1, 36424) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v1, 36428) + 64) |= 1u;
  sub_6047F01C(v2, 0);
  *(_BYTE *)v1 = 1;
  sub_60473DE4((_DWORD *)(v1 - 4088), 0, &dword_60CAB464, 0);
  FIELD_U8(v1, 67385) = 1;
  *(_BYTE *)(FIELD_U32(v1, 36380) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v1, 36384) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(v1, 36388) + 64) &= ~1u;
  result = FIELD_U32(v1, 36392);
  FIELD_U8(result, 64) |= 1u;
  return result;
}
