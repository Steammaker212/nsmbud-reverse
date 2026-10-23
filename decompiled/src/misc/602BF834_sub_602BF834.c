/* sub_602BF834
 * address: 0x602BF834   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BF834(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r2
  int v7; // r1
  unsigned int v8; // r1
  int v9; // r12
  bool v10; // zf
  int v11; // r1
  int result; // r0

  v4 = FIELD_U8(a1, 6485);
  v2 = (_BYTE *)(a1 + 6485);
  v3 = v4;
  if ( v4 )
  {
    v5 = v3 - 1;
    if ( v5 )
      v6 = FIELD_U32(a1, 160) + dword_60C911E4;
    else
      v6 = 0;
    FIELD_U32(a1, 160) = v6;
    *v2 = v5;
  }
  v7 = FIELD_U32(a1, 6500);
  if ( v7 == 2 )
  {
    v10 = --FIELD_U8(a1, 6481) == 0;
    if ( !v10 )
      goto LABEL_16;
    FIELD_U8(a1, 6482) = 3;
    v11 = 1;
LABEL_15:
    FIELD_U32(a1, 6500) = v11;
    goto LABEL_16;
  }
  if ( v7 == 1 )
  {
    v8 = FIELD_U32(a1, 6468) + 0x10000000;
    FIELD_U32(a1, 6468) = v8;
    v9 = FIELD_U32(a1, 6464);
    FIELD_U32(a1, 164) = (int)(float)((float)(*(float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0))
                                               + (float)((float)((float)(v8 & 0xFFFFFF)
                                                               * *(float *)((char *)&sinLutTable[1]
                                                                          + ((v8 >> 20) & 0xFF0)))
                                                       * 0.000000059605))
                                       * 67109000.0)
                          + v9;
    if ( !v8 )
    {
      v10 = --FIELD_U8(a1, 6482) == 0;
      if ( v10 )
      {
        FIELD_U8(a1, 6481) = 30;
        FIELD_U32(a1, 164) = v9;
        v11 = 2;
        goto LABEL_15;
      }
    }
  }
LABEL_16:
  result = sub_602C22A8(a1, 40.0);
  if ( result == 1 )
  {
    if ( FIELD_U8(a1, 6473) )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9135C);
    result = FIELD_U8(a1, 6479);
    switch ( result )
    {
      case 3:
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9139C);
      case 2:
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9137C);
      case 1:
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9135C);
    }
  }
  return result;
}
