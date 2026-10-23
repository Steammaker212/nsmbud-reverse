/* sub_60981200
 * address: 0x60981200   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60981200(_DWORD *a1, int a2)
{
  int v4; // r0
  float v5; // s16
  int v6; // r0
  int v7; // r1
  int result; // r0
  _DWORD *v9; // r5
  _DWORD *v10; // r4

  v4 = a1[15];
  if ( v4 )
  {
    v5 = FIELD_F32(v4, 16);
    if ( v5 == (float)(unsigned int)sub_608502E4(v4) )
    {
      v6 = a1[15];
      goto LABEL_6;
    }
    return 0;
  }
  v6 = a1[14];
  if ( !v6 )
  {
    result = 1;
    if ( a2 != 1 )
      return result;
    goto LABEL_12;
  }
  if ( FIELD_F32(v6, 16) != 0.0 )
    return 0;
LABEL_6:
  v7 = FIELD_U8(v6, 20);
  result = 0;
  if ( !v7 )
  {
    result = 1;
    if ( a2 == 1 )
    {
LABEL_12:
      v9 = a1 + 10;
      v10 = (_DWORD *)a1[11];
      if ( v10 == v9 )
        return 1;
      while ( sub_60981200(v10[2], 1) )
      {
        v10 = (_DWORD *)v10[1];
        if ( v10 == v9 )
          return 1;
      }
      return 0;
    }
  }
  return result;
}
