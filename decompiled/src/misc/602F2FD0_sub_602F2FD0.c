/* sub_602F2FD0
 * address: 0x602F2FD0   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F2FD0(int a1, int *a2, int a3)
{
  int v5; // r0
  bool v6; // zf
  int v7; // r2
  char v8; // r0
  int v9; // r2
  int v10; // r1
  int v12; // [sp+4h] [bp-1Ch] BYREF
  int v13; // [sp+8h] [bp-18h]
  int v14; // [sp+Ch] [bp-14h]

  v5 = FIELD_U8(a1, 561);
  if ( v5 == 2 )
  {
    if ( a3 )
      goto LABEL_10;
    FIELD_U8(a1, 248) = 0;
    v9 = a2[1];
    v12 = *a2;
    v13 = v9;
    v14 = 1166843904;
    sub_602F2BF8(FIELD_U32(a1, 8), (int)&v12, a1 + 548, FIELD_U8(a1, 560), 0);
    v8 = 1;
LABEL_9:
    FIELD_U8(a1, 561) = v8;
    goto LABEL_10;
  }
  v6 = v5 == 1;
  if ( v5 == 1 )
    v6 = a3 == 1;
  if ( v6 )
  {
    FIELD_U8(a1, 120) = 0;
    v7 = a2[1];
    v12 = *a2;
    v13 = v7;
    v14 = 1166843904;
    sub_602F2BF8(FIELD_U32(a1, 12), (int)&v12, a1 + 548, FIELD_U8(a1, 560), 0);
    v8 = 2;
    goto LABEL_9;
  }
LABEL_10:
  v10 = a2[1];
  v12 = *a2;
  v13 = v10;
  v14 = 1166843904;
  sub_602F2C4C(*(unsigned __int8 **)a1);
  sub_602F2C4C(*(unsigned __int8 **)(a1 + 4));
  sub_602F2C4C(*(unsigned __int8 **)(a1 + 8));
  sub_602F2C4C(*(unsigned __int8 **)(a1 + 12));
  sub_602F2C4C(*(unsigned __int8 **)(a1 + 16));
  sub_602F2C4C(*(unsigned __int8 **)(a1 + 20));
  sub_602F2C4C(*(unsigned __int8 **)(a1 + 24));
  sub_602F2C4C(*(unsigned __int8 **)(a1 + 28));
  sub_602F2C4C(*(unsigned __int8 **)(a1 + 32));
  sub_602F2C4C(*(unsigned __int8 **)(a1 + 36));
  sub_602F2C4C(*(unsigned __int8 **)(a1 + 40));
  sub_602F2C4C(*(unsigned __int8 **)(a1 + 44));
  return sub_602F2C4C(*(unsigned __int8 **)(a1 + 48));
}
