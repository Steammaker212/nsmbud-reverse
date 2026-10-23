/* sub_604FDEF8
 * address: 0x604FDEF8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FDEF8(int result, int a2)
{
  int v2; // r5
  int v3; // r10
  int v4; // r6
  int v5; // r4
  _DWORD *v6; // r7
  int v7; // r1
  int v8; // r9
  _DWORD *v9; // [sp+0h] [bp-40h]
  int v10; // [sp+4h] [bp-3Ch]

  v2 = dword_60C99E1C;
  if ( dword_60C99E1C )
  {
    v3 = result + 40014;
    v9 = (_DWORD *)(result + 35572);
    v10 = result + 35560;
    v4 = 9 * a2 - 1;
    v5 = 9 * a2 + 8;
    v6 = (_DWORD *)(dword_60C99E1C + 36 * a2 + 16);
    do
    {
      result = v4++;
      if ( v4 >= 54 || (unsigned int)v4 >= 0x36 )
        goto LABEL_14;
      if ( *v6 > 0x35u )
        goto LABEL_14;
      v7 = v2 + 4424 * *v6;
      if ( FIELD_U32(v7, 236) != 1 )
        goto LABEL_14;
      result += v3;
      v8 = FIELD_U8(v7, 244);
      if ( v8 == FIELD_U8(result, 1) )
        goto LABEL_14;
      FIELD_U8(result, 1) = v8;
      result = sub_608DE61C(v10, dword_60B035D8[v4 % 9]);
      if ( v8 )
      {
        if ( !result )
          goto LABEL_14;
        result -= *v9;
        if ( !result )
          goto LABEL_14;
      }
      else
      {
        if ( !result )
          goto LABEL_14;
        result -= *v9;
        if ( !result )
          goto LABEL_14;
      }
      result = sub_60478880(result);
LABEL_14:
      ++v6;
    }
    while ( v4 < v5 );
  }
  return result;
}
