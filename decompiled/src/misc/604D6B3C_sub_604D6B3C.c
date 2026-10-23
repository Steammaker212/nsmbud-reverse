/* sub_604D6B3C
 * address: 0x604D6B3C   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D6B3C(int result)
{
  unsigned int v1; // r4
  int *v2; // r12
  int v3; // r1
  int v4; // r2
  int *v5; // lr
  int v6; // r1
  int v7; // r4
  int v8; // r7
  int v9; // r6
  int v10; // r7
  int v11; // r7

  v2 = (int *)(result + 4928);
  v1 = FIELD_U32(result, 4928);
  if ( v1 != 12 )
  {
    v3 = 0;
    v4 = 0;
    if ( v1 < 0xC )
      v3 = FIELD_U32(result, 4928);
    if ( *(_BYTE *)(result + 12 * v3 + 52060) )
    {
      v5 = (int *)(result + 52200);
      v6 = FIELD_U32(result, 52196);
      v7 = v1 + v6 + 1;
      while ( 1 )
      {
        v8 = v7 + dword_60B02F9C[v4];
        v9 = v6 + 1;
        if ( v8 > v6 )
        {
          if ( v8 > *v5 )
            v8 = *v5;
          v9 = v8;
        }
        v10 = 0;
        if ( (unsigned int)v9 < 0xD )
          v10 = v9;
        if ( (*(_BYTE *)(*(_DWORD *)(result + 4 * v10 + 3848) + 64) & 1) != 0 )
        {
          v11 = result;
          if ( (unsigned int)v9 < 0xC )
            v11 = result + v9;
          if ( FIELD_U8(v11, 45) )
            break;
        }
        if ( (unsigned int)++v4 >= 0xB )
          goto LABEL_17;
      }
      *v2 = v9;
      if ( v9 >= 0 )
        return result;
LABEL_17:
      result = FIELD_U8(result, 52637);
      if ( result )
        return result;
      result = 12;
    }
    else
    {
      result = FIELD_U8(result, 52637);
      if ( result )
        return result;
      result = 12;
    }
    *v2 = 12;
  }
  return result;
}
