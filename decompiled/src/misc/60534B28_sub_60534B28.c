/* sub_60534B28
 * address: 0x60534B28   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60534B28(int a1)
{
  int v1; // r4
  _DWORD *v2; // r5
  int result; // r0

  v1 = a1;
  v2 = (_DWORD *)(a1 + 15740);
  sub_6047EFCC(a1 + 15740, 0);
  FIELD_U8(v1, 16200) = 1;
  v1 += 16200;
  sub_6047EFCC((int)v2, 1);
  FIELD_U8(v1, 1) = 1;
  sub_6047EFCC((int)v2, 2);
  FIELD_U8(v1, 2) = 1;
  sub_6047EFCC((int)v2, 3);
  FIELD_U8(v1, 3) = 1;
  *(_BYTE *)(FIELD_U32(v1, 36432) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v1, 36436) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v1, 36440) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v1, 36444) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v1, 36448) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v1, 36452) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v1, 36456) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v1, 36460) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v1, 36464) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v1, 36468) + 64) |= 1u;
  sub_6047F01C(v2, 0);
  *(_BYTE *)v1 = 1;
  sub_60473DE4((_DWORD *)(v1 - 4108), 0, &dword_60CAADD4, 0);
  FIELD_U8(v1, 67425) = 1;
  *(_BYTE *)(FIELD_U32(v1, 36400) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(v1, 36404) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(v1, 36408) + 64) &= ~1u;
  result = FIELD_U32(v1, 36412);
  FIELD_U8(result, 64) |= 1u;
  return result;
}
