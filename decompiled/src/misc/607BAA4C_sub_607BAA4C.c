/* sub_607BAA4C
 * address: 0x607BAA4C   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BAA4C(int a1)
{
  int v1; // r2
  _BYTE *v2; // lr
  int v3; // r1
  _DWORD *v4; // r12
  int v5; // r4
  _DWORD *v6; // r5
  char v7; // r3
  int v8; // r4
  _BOOL4 v9; // r6
  char v10; // r4
  _DWORD *v11; // r1
  int v12; // r5
  int v13; // r5
  _BOOL4 v14; // r5
  char v15; // r1
  _DWORD *v16; // r0
  int v17; // r2
  int v18; // t1
  int v19; // r2
  _BOOL4 v20; // r2
  int result; // r0

  v1 = 0;
  FIELD_U8(a1, 15020) = 0;
  v2 = (_BYTE *)(a1 + 15020);
  v4 = (_DWORD *)(a1 + 15004);
  v3 = FIELD_U32(a1, 15004);
  if ( v3 )
  {
    v1 = v3 - 1;
    *v4 = v3 - 1;
  }
  ++FIELD_U32(a1, 15000);
  v6 = (_DWORD *)(a1 + 15008);
  v5 = FIELD_U32(a1, 15008);
  v7 = FIELD_U8(dword_60C9CF0C, 1361);
  if ( v5 )
  {
    v8 = v5 - 1;
    v9 = v8 == 0;
    *v6 = v8;
  }
  else
  {
    v9 = 1;
  }
  v10 = 0;
  if ( (v7 & 0x10) != 0 && v9 )
  {
    *v6 = 5;
    v10 = 1;
    *v2 = 1;
    FIELD_U32(a1, 15000) = 0;
  }
  v11 = (_DWORD *)(a1 + 15012);
  v12 = FIELD_U32(a1, 15012);
  if ( v12 )
  {
    v13 = v12 - 1;
    *v11 = v13;
    v14 = v13 == 0;
    if ( (v7 & 2) == 0 )
      goto LABEL_17;
  }
  else
  {
    v14 = 1;
    if ( (v7 & 2) == 0 )
    {
LABEL_17:
      v15 = v10;
      goto LABEL_18;
    }
  }
  if ( !v14 )
    goto LABEL_17;
  *v11 = 5;
  v15 = v10 | 2;
  *v2 = v10 | 2;
  if ( v1 )
  {
    v15 = v10 | 6;
    *v2 = v10 | 6;
  }
LABEL_18:
  v18 = FIELD_U32(a1, 15016);
  v16 = (_DWORD *)(a1 + 15016);
  v17 = v18;
  if ( v18 )
  {
    v19 = v17 - 1;
    *v16 = v19;
    v20 = v19 == 0;
    if ( (v7 & 4) == 0 )
      goto LABEL_24;
  }
  else
  {
    v20 = 1;
    if ( (v7 & 4) == 0 )
      goto LABEL_24;
  }
  if ( v20 )
  {
    v15 |= 4u;
    *v16 = 5;
    *v2 = v15;
    *v4 = 30;
  }
LABEL_24:
  result = v15 & 6;
  if ( result == 6 )
  {
    *v2 = v15 & 0xFD;
    return v15 & 0xFD;
  }
  return result;
}
