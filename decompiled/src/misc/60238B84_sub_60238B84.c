/* sub_60238B84
 * address: 0x60238B84   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60238B84(int a1, int a2)
{
  int v4; // r5
  int v5; // r7
  int *v6; // r0
  int v7; // r1
  int v8; // r6
  unsigned int v9; // r0
  int v10; // r1
  int v11; // r6
  int v13; // r0
  float v14; // s0
  char v16; // [sp+0h] [bp-38h]
  char v17; // [sp+1h] [bp-37h]
  char v18; // [sp+2h] [bp-36h]
  char v19; // [sp+3h] [bp-35h]
  char v20; // [sp+4h] [bp-34h]
  char v21; // [sp+5h] [bp-33h]
  char v22; // [sp+6h] [bp-32h]
  char v23; // [sp+7h] [bp-31h]

  sub_608908F8(FIELD_U32(a1, 16));
  FIELD_U8(a1, 2315) = 1;
  sub_60890264(FIELD_U32(a1, 16));
  if ( a2 )
  {
    LOBYTE(v4) = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 1;
    v20 = 0;
    v23 = 0;
    v22 = 0;
    v21 = 0;
  }
  else
  {
    v4 = (unsigned __int8)sub_60237BA0(0);
    v16 = v4;
    v17 = sub_60237BA0(1u);
    v18 = sub_60237BA0(2u);
    v19 = sub_60237BA0(3u);
    v20 = sub_60237BA0(4u);
    v21 = sub_60237BA0(5u);
    v22 = sub_60237BA0(6u);
    v23 = sub_60237BA0(7u);
  }
  v5 = FIELD_U32(a1, 228);
  if ( v5 != a1 + 224 )
  {
    v6 = (int *)(v5 + 4);
    do
    {
      v7 = v5;
      v5 = *v6;
      v8 = FIELD_U32(v7, 8);
      v9 = sub_6023611C(v8 + 16);
      v10 = 1;
      if ( v9 <= 7 )
      {
        v10 = (unsigned __int8)*(&v16 + v9);
        if ( *(&v16 + v9) )
          v10 = 1;
      }
      if ( FIELD_U8(v8, 100) )
      {
        FIELD_U8(v8, 100) = 0;
      }
      else if ( v10 == 1 )
      {
        sub_60237560(v8);
      }
      v6 = (int *)(v5 + 4);
    }
    while ( v5 != a1 + 224 );
  }
  v11 = 0;
  if ( (_BYTE)v4 )
    goto LABEL_17;
  while ( v11 != 7 )
  {
    if ( *(&v17 + v11++) )
    {
LABEL_17:
      sub_6090B310(dword_60CCF464);
      v13 = FIELD_U32(a1, 16);
      if ( (unsigned __int8)v11 != 63 )
        goto LABEL_21;
      if ( !FIELD_U32(v13, 3560) )
        goto LABEL_23;
      if ( FIELD_U8(v13, 7308) )
        v14 = 0.0;
      else
LABEL_21:
        v14 = 1.0;
      sub_6089063C(v14);
LABEL_23:
      sub_6090B32C(dword_60CCF464);
    }
  }
  return sub_60238D98(a1);
}
