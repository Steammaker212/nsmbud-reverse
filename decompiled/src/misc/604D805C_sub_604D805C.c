/* sub_604D805C
 * address: 0x604D805C   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D805C(int a1)
{
  int v2; // r3
  int v3; // r2
  int result; // r0
  char v5; // [sp+4h] [bp-1Ch] BYREF
  char v6; // [sp+5h] [bp-1Bh]
  int v7; // [sp+8h] [bp-18h]
  int v8; // [sp+Ch] [bp-14h]

  FIELD_U8(a1, 4735) = 0;
  FIELD_U8(a1, 4732) = 1;
  FIELD_U8(a1, 4736) = 1;
  FIELD_U8(a1, 4746) = 1;
  v8 = 4;
  v7 = 3;
  v5 = 1;
  v6 = 1;
  v2 = FIELD_U32(a1, 13276);
  v3 = 0;
  if ( v2 )
  {
    if ( v2 != 2 )
    {
LABEL_5:
      sub_60502D0C(a1 + 3692, 4);
      goto LABEL_7;
    }
    v3 = 1;
  }
  *(_BYTE *)((unsigned int)&v5 | v3) = 0;
  if ( v5 )
    goto LABEL_5;
  sub_60502B90(a1 + 3692, 4);
LABEL_7:
  if ( v6 )
    sub_60502D0C(a1 + 3692, 3);
  else
    sub_60502B90(a1 + 3692, 3);
  sub_604D9B70(a1);
  *(_BYTE *)(FIELD_U32(a1, 5772) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 5776) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 5780) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 5784) + 64) |= 1u;
  result = FIELD_U32(a1, 5788);
  FIELD_U8(result, 64) |= 1u;
  return result;
}
