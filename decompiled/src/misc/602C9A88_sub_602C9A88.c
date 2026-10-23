/* sub_602C9A88
 * address: 0x602C9A88   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int16 __fastcall sub_602C9A88(int a1)
{
  _DWORD *v2; // r6
  int v3; // r7
  int v4; // r5
  int v5; // r0
  unsigned int v6; // r1
  int v7; // r1
  int v8; // r0
  bool v9; // cc
  int *v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r1
  int v14; // r2

  v2 = *(_DWORD **)(a1 + 6376);
  if ( !v2 )
    goto LABEL_10;
  v3 = 0;
  do
  {
    v4 = *(_DWORD *)(*v2 + 2196);
    if ( FIELD_U8(v4, 533) == 1
      && v4
      && FIELD_U8(v4, 84) <= 4u
      && !sub_607B7028(*(_DWORD *)(*v2 + 2196)) )
    {
      v3 += 8 * (int)(float)((float)(FIELD_F32(a1, 108) - FIELD_F32(v4, 108)) * 4096.0);
    }
    v2 = (_DWORD *)v2[1];
  }
  while ( v2 );
  if ( !v3 )
  {
LABEL_10:
    v5 = FIELD_U32(a1, 164);
    v6 = v5;
    if ( v5 < 0 )
    {
      if ( v5 == 0x80000000 )
        goto LABEL_14;
      v6 = -v5;
    }
    v3 = 0;
    if ( v6 < 0x15555556 )
    {
LABEL_15:
      Animation_update(**(_DWORD **)(FIELD_U32(a1, 6104) + 12));
      goto LABEL_16;
    }
LABEL_14:
    v3 = 327680 * ((v5 >> 31) | 1);
    goto LABEL_15;
  }
LABEL_16:
  v7 = v3;
  LOWORD(v8) = -21846;
  if ( v3 >= 0x400000 )
    v7 = 0x400000;
  v9 = v3 < -4194304;
  LOWORD(v3) = -6448;
  HIWORD(v8) = 10922;
  if ( v9 )
    v7 = -4194304;
  HIWORD(v3) = -1;
  v10 = (int *)(a1 + 6612);
  v11 = v7 + FIELD_U32(a1, 6612);
  v12 = v11;
  if ( v11 >= 6291456 )
    v12 = 6291456;
  if ( v11 < -6291456 )
    v12 = -6291456;
  *v10 = v12;
  v14 = v12 + *(int *)((char *)v10 + v3);
  v13 = v14;
  *(int *)((char *)v10 + v3) = v14;
  if ( v14 >= 0 )
  {
LABEL_27:
    if ( v14 <= (unsigned int)v8 )
      return v8;
    goto LABEL_28;
  }
  if ( v14 != 0x80000000 )
  {
    v14 = -v14;
    goto LABEL_27;
  }
LABEL_28:
  if ( v13 < v8 )
    v8 = v13;
  if ( v13 < -715827882 )
    v8 = -715827882;
  FIELD_U32(a1, 164) = v8;
  LOWORD(v8) = (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C917E8);
  return v8;
}
