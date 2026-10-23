/* sub_60536140
 * address: 0x60536140   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60536140(int a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r0

  v2 = (_DWORD *)(a1 + 15740);
  sub_6047EFCC(a1 + 15740, 0);
  FIELD_U8(a1, 16200) = 1;
  sub_6047EFCC((int)v2, 1);
  FIELD_U8(a1, 16201) = 1;
  sub_6047EFCC((int)v2, 2);
  FIELD_U8(a1, 16202) = 1;
  sub_6047EFCC((int)v2, 3);
  FIELD_U8(a1, 16203) = 1;
  *(_BYTE *)(FIELD_U32(a1, 52632) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52636) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52640) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52644) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52648) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52652) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52656) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52660) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52664) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52668) + 64) |= 1u;
  v3 = FIELD_U32(a1, 83612);
  FIELD_U32(a1, 83616) = v3;
  v4 = dword_60B03A3C[v3];
  FIELD_U32(a1, 16728) = v4;
  FIELD_U32(a1, 16732) = v4;
  FIELD_U8(a1, 83625) = 0;
  FIELD_U8(a1, 83629) = 0;
  sub_60502548(a1 + 15700);
  FIELD_U16(a1, 16752) = 0;
  return sub_6047EABC(v2);
}
