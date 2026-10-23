/* sub_601F56CC
 * address: 0x601F56CC   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F56CC(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r7
  int v5; // r2
  _DWORD *v6; // r0
  _DWORD v8[2]; // [sp+4h] [bp-24h] BYREF
  int v9; // [sp+Ch] [bp-1Ch]

  v2 = FIELD_U32(a1, 240);
  if ( v2 == 7 )
  {
    v3 = 4;
    v4 = 10;
    v5 = 0x100000;
    goto LABEL_5;
  }
  if ( v2 == 4 )
  {
    sub_601F2688(a1, 0, 1, 0, 0.0, 1.0);
    v3 = 7;
    v4 = 12;
    v5 = 0x200000;
LABEL_5:
    v8[0] = -1;
    v8[1] = -1;
    v9 = -1;
    sub_601FA238(dword_60C8BF58, v8, v5, v3);
    FIELD_U32(a1, 248) = v9;
    FIELD_U32(a1, 240) = v3;
    FIELD_U32(a1, 592) = v4;
    sub_6019EC34((_DWORD *)(dword_60CC6D78 + 456), v8);
    v6 = (_DWORD *)sub_601E0040((int)v8);
    FIELD_U32(a1, 80) = *v6;
    FIELD_U32(a1, 84) = v6[1];
    FIELD_U32(a1, 88) = v6[2];
  }
  FIELD_U8(a1, 932) = 1;
  return 1;
}
