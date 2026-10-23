/* sub_6082B7E8
 * address: 0x6082B7E8   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6082B7E8(int a1, int a2)
{
  int *result; // r0
  int v4; // r6
  __int64 v5; // r8
  unsigned __int64 v6; // r0
  _DWORD *v7; // r6
  unsigned int v8; // t1
  char v9; // r2
  _DWORD *v10; // r5
  __int64 v11; // r8
  unsigned __int64 v12; // r0
  unsigned int v13; // r0
  unsigned int v14; // r1
  int v15; // r3
  char *v16; // r0
  char v17; // r2
  int **v18; // r5
  int *v19; // t1
  int *v20; // r1
  char v21; // r2
  int v22; // r1
  _DWORD *v23; // r5
  int v24; // t1
  int v25; // r2
  char v26; // r3

  result = *(int **)(a2 + 492);
  switch ( (unsigned int)result )
  {
    case 0u:
      result = (int *)sub_6082BA24(a1);
      goto LABEL_5;
    case 1u:
      result = (int *)sub_6082BCA8(a1);
      goto LABEL_5;
    case 2u:
      result = (int *)sub_6082BE88(a1);
LABEL_5:
      if ( result )
        return sub_6082756C(a1);
      return result;
    case 3u:
      result = 0;
      if ( **(_BYTE **)(dword_60CC6D78 + 140) )
        return result;
      v4 = FIELD_U32(a1, 40);
      v5 = FIELD_U64(dword_60CC6BE4, 200);
      v6 = (v5 - FIELD_U64(a1, 72)) / 0x3CuLL;
      if ( (unsigned int)v6 >= 0x3C )
      {
        v8 = FIELD_U32(v4, 44152);
        v7 = (_DWORD *)(v4 + 44152);
        HIDWORD(v6) = v8;
        LODWORD(v6) = v8 + (unsigned int)v6 / 0x3C;
        if ( (unsigned int)v6 < v8 )
          LODWORD(v6) = -1;
        *v7 = v6;
        v9 = FIELD_U8(a1, 48);
        if ( HIDWORD(v6) != (_DWORD)v6 )
          v9 |= 1u;
        FIELD_U8(a1, 48) = v9;
        FIELD_U64(a1, 72) = v5;
      }
      return sub_6082756C(a1);
    case 4u:
      v10 = *(_DWORD **)(a1 + 40);
      if ( **(_BYTE **)(dword_60CC6D78 + 140) )
      {
        v19 = (int *)v10[11058];
        v18 = (int **)(v10 + 11058);
        result = v19;
        v20 = v19;
        if ( v19 != (int *)-1 )
          v20 = (int *)((char *)v20 + 1);
        *v18 = v20;
        v21 = FIELD_U8(a1, 48);
        if ( result != v20 )
          v21 |= 1u;
        FIELD_U8(a1, 48) = v21;
      }
      else
      {
        v11 = FIELD_U64(dword_60CC6BE4, 200);
        v12 = (v11 - FIELD_U64(a1, 72)) / 0x3CuLL;
        if ( (unsigned int)v12 <= 0x3B )
        {
          v16 = (char *)(a1 + 48);
        }
        else
        {
          v13 = (unsigned int)v12 / 0x3C;
          v14 = v10[11036];
          v15 = v14 + v13;
          if ( v14 + v13 < v14 )
            v15 = -1;
          v10[11036] = v15;
          v16 = (char *)(a1 + 48);
          v17 = FIELD_U8(a1, 48);
          if ( v14 != v15 )
            v17 |= 1u;
          *v16 = v17;
          FIELD_U64(a1, 72) = v11;
        }
        v24 = v10[11056];
        v23 = v10 + 11056;
        v22 = v24;
        v25 = v24;
        if ( v24 != -1 )
          ++v25;
        *v23 = v25;
        v26 = *v16;
        if ( v22 != v25 )
          v26 |= 1u;
        *v16 = v26;
        return sub_6082756C(a1);
      }
      return result;
    default:
      return result;
  }
}
