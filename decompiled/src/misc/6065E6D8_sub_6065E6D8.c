/* sub_6065E6D8
 * address: 0x6065E6D8   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065E6D8(_DWORD *a1)
{
  int *v2; // r10
  int v3; // r9
  int *v4; // r5
  int v5; // r0
  int v6; // r11
  int v7; // r0
  char v8; // r7
  _DWORD *v9; // r8
  int v10; // r0
  int v11; // r2
  int v12; // r1
  int v13; // r0
  int v14; // r1
  int result; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // [sp+4h] [bp-3Ch] BYREF
  int v20; // [sp+8h] [bp-38h] BYREF
  int v21; // [sp+Ch] [bp-34h]
  int v22; // [sp+10h] [bp-30h]
  int v23; // [sp+14h] [bp-2Ch]

  v2 = a1 + 1769;
  v3 = a1[1767];
  v4 = a1 + 1768;
  v5 = a1[1768] + a1[1769];
  v6 = v5;
  if ( v5 >= 8323072 )
    v6 = 8323072;
  if ( v5 < -8323072 )
    v6 = -8323072;
  v7 = v6 + *(v2 - 1728);
  if ( v7 <= v3 && (v3 = -v3, v7 >= v3) )
    v3 = v6 + *(v2 - 1728);
  else
    v6 /= -2;
  v8 = 0;
  v23 = 0;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v9 = (_DWORD *)a1[1666];
  if ( !v9 )
    goto LABEL_16;
  do
  {
    if ( *v9 )
      v8 |= sub_6065F60C(a1, *(_DWORD *)(*v9 + 2196), &v19, &v20);
    v9 = (_DWORD *)v9[1];
  }
  while ( v9 );
  if ( (v8 & 1) == 0 )
  {
LABEL_16:
    v11 = v22;
    v12 = v21;
    v13 = v20;
    a1[1763] = v23;
    a1[1762] = v11;
    a1[1761] = v12;
    a1[1760] = v13;
    goto LABEL_17;
  }
  v10 = v19;
  if ( v19 > -3 )
  {
    if ( v19 < 3 )
      goto LABEL_32;
    v10 = 2;
  }
  else
  {
    v10 = -2;
  }
  v19 = v10;
LABEL_32:
  *v4 = -131072 * v10;
  v16 = v20;
  v17 = v21;
  v18 = v22;
  a1[1763] = v23;
  a1[1762] = v18;
  a1[1761] = v17;
  a1[1760] = v16;
  if ( v10 )
  {
    result = v6;
    goto LABEL_28;
  }
LABEL_17:
  if ( v3 < -67108863 )
  {
    v14 = (((unsigned int)v6 >> 15) & 0x10000) + 0x10000;
  }
  else if ( v3 >= 0x4000000 )
  {
    v14 = -65536;
    if ( v6 > 0 )
      v14 = -131072;
  }
  else
  {
    if ( v6 < 0 )
    {
      result = -1048576;
      v14 = 0;
      if ( v6 < -1048576 )
        result = v6;
      goto LABEL_27;
    }
    v14 = 0;
    if ( v6 <= 0x100000 )
      v6 = 0x100000;
  }
  result = v6;
LABEL_27:
  *v4 = v14;
LABEL_28:
  *v2 = result;
  a1[41] = v3;
  return result;
}
