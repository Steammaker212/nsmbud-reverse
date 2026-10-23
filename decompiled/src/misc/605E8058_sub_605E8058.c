/* sub_605E8058
 * address: 0x605E8058   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E8058(int a1, int a2)
{
  int result; // r0
  int v5; // r1
  bool v6; // zf
  int *v7; // r5
  int v8; // r2
  int v9; // r3
  int i; // r5
  int v11; // r7
  int v12; // r7
  int v13; // r6
  bool v14; // zf
  int v15; // r1
  int v16; // [sp+4h] [bp-1Ch]

  result = FIELD_U32(a1, 304);
  if ( result == -1 || FIELD_U8(a1, 309) )
    return result;
  v16 = FIELD_U32(dword_60CC6D78, 32);
  if ( v16 == 2 )
  {
    result = sub_605E815C(a1);
    if ( result != 1 )
      return result;
    result = FIELD_U32(a1, 304);
    goto LABEL_21;
  }
  if ( v16 == 3 )
  {
    v5 = FIELD_U8(dword_60CC6D78, 109032);
    v6 = v5 == 0;
    if ( FIELD_U8(dword_60CC6D78, 109032) )
    {
      v5 = FIELD_U32(a1, 36);
      v6 = v5 == 0;
    }
    if ( !v6 )
    {
      v7 = (int *)(a1 + 24);
      v8 = *v7;
      v9 = v7[1];
      for ( i = v7[2]; ; ++i )
      {
        v11 = v9;
        if ( i < v9 )
          v11 = 0;
        v12 = *(_DWORD *)(v8 - 4 * v11 + 4 * i);
        v13 = FIELD_U32(v12, 6256);
        v14 = v13 == 1;
        if ( v13 == 1 )
          v14 = FIELD_U32(v12, 6252) == result;
        if ( v14 && (FIELD_U8(v12, 6267) & 0x10) != 0 )
          break;
        if ( !--v5 )
          return result;
      }
LABEL_21:
      v15 = 15;
      if ( result == 1 )
        v15 = 11;
      if ( !result )
        v15 = 10;
      FIELD_U32(a2, 500) = v15;
    }
  }
  return result;
}
