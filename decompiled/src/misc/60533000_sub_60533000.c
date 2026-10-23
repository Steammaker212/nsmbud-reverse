/* sub_60533000
 * address: 0x60533000   size: 1036   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60533000(int a1)
{
  int v2; // r7
  int v3; // r5
  unsigned int v4; // r2
  _BYTE *v5; // r1
  int v6; // r0
  int v7; // r0
  char v8; // r1
  float *v9; // r6
  float v10; // s0

  sub_605390B8(a1, 0);
  v2 = FIELD_U32(a1, 4048);
  sub_605390B8(a1, 1);
  v3 = FIELD_U32(a1, 8060);
  sub_605390B8(a1, 2);
  v4 = v2 == 0;
  if ( !v3 )
    ++v4;
  v5 = (_BYTE *)(a1 + 83632);
  if ( !FIELD_U32(a1, 12072) )
    ++v4;
  v6 = FIELD_U32(a1, 52552);
  if ( v4 < 3 )
  {
    *v5 = 0;
    FIELD_U8(v6, 64) |= 1u;
    v7 = FIELD_U32(a1, 52556);
    v8 = FIELD_U8(v7, 64) | 1;
  }
  else
  {
    *v5 = 1;
    FIELD_U8(v6, 64) &= ~1u;
    v7 = FIELD_U32(a1, 52556);
    v8 = FIELD_U8(v7, 64) & 0xFE;
  }
  FIELD_U8(v7, 64) = v8;
  FIELD_U32(a1, 83596) = 0;
  FIELD_U32(a1, 83600) = 0;
  v9 = (float *)(a1 + 83600);
  sub_60531DEC(a1 + 56);
  sub_605324A4(a1 + 56, 0);
  if ( FIELD_F32(a1, 83600) < 0.0 )
    *v9 = sub_60532800(a1 + 56);
  sub_60531DEC(a1 + 4068);
  sub_605324A4(a1 + 4068, 1u);
  if ( *v9 < 0.0 )
    *v9 = sub_60532800(a1 + 4068);
  sub_60531DEC(a1 + 8080);
  sub_605324A4(a1 + 8080, 2u);
  if ( *v9 < 0.0 )
    *v9 = sub_60532800(a1 + 8080);
  sub_6047EFCC(a1 + 15740, 0);
  FIELD_U8(a1, 16200) = 1;
  sub_6047EFCC(a1 + 15740, 1);
  FIELD_U8(a1, 16201) = 1;
  sub_6047EFCC(a1 + 15740, 2);
  FIELD_U8(a1, 16202) = 1;
  sub_6047EFCC(a1 + 15740, 3);
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
  FIELD_U8(a1, 83631) = 0;
  *(_BYTE *)(FIELD_U32(a1, 52600) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52604) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52608) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52612) + 64) |= 1u;
  sub_60502548(a1 + 15700);
  FIELD_U16(a1, 16752) = 0;
  sub_6047EABC((_DWORD *)(a1 + 15740));
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    sub_60473DE4((_DWORD *)(a1 + 12092), 1u, &dword_60CAADCC, 0);
    v10 = sub_604745C0(a1 + 12092, 1u);
    sub_6047455C(a1 + 12092, 1u, v10);
  }
  sub_60474420((_DWORD *)(a1 + 12092), 2u, &dword_60CAADB4, FIELD_U32(a1, 54696), 0);
  sub_6047455C(a1 + 12092, 2u, 0.0);
  sub_60474420((_DWORD *)(a1 + 12092), 3u, &dword_60CAADB4, FIELD_U32(a1, 54700), 0);
  sub_6047455C(a1 + 12092, 3u, 0.0);
  FIELD_U32(a1, 83584) = 0;
  return 83584;
}
