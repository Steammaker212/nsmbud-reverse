/* sub_604D70FC
 * address: 0x604D70FC   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D70FC(int a1)
{
  int v2; // r2
  int v3; // r1
  unsigned int v4; // r0
  int v5; // r5
  int v6; // r4
  int v7; // r6
  int result; // r0

  sub_604D6794(a1);
  v2 = 0;
  v3 = 0;
  v4 = FIELD_U32(a1, 52620);
  if ( v4 < 0xD )
    v2 = FIELD_U32(a1, 52620);
  v5 = *(_DWORD *)(a1 + 4 * v2 + 3848);
  if ( v4 == 12 )
  {
    if ( FIELD_U8(a1, 52636) )
      v6 = FIELD_U32(a1, 3704);
    else
      v6 = FIELD_U32(a1, 3800);
  }
  else
  {
    if ( v4 < 0xC )
      v3 = FIELD_U32(a1, 52620);
    v6 = *(_DWORD *)(a1 + 12 * v3 + 52052);
  }
  FIELD_U8(v5, 64) |= 1u;
  v7 = FIELD_U32(v5, 12);
  if ( !v7 )
    goto LABEL_13;
  if ( v7 != v6 )
  {
    sub_60858A34(FIELD_U32(v5, 12));
    FIELD_U8(v7, 64) &= ~1u;
LABEL_13:
    sub_608589FC(v6, v5);
  }
  result = FIELD_U8(v6, 64) | 1;
  FIELD_U8(v6, 64) = result;
  return result;
}
