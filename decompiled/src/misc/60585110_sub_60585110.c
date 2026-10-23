/* sub_60585110
 * address: 0x60585110   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60585110(int result, int a2, int a3, int a4, int a5, char a6)
{
  int v6; // r6
  _BYTE *v7; // r5
  int v8; // r4
  int v9; // r7
  bool v10; // zf
  int v11; // r6
  _BYTE *v12; // r5
  bool v13; // cc
  int v14; // r0

  if ( a3 )
  {
    v6 = 0;
    v7 = (_BYTE *)(result + 20520);
    v8 = FIELD_U8(LevelInfo_instance, 18);
    while ( 1 )
    {
      if ( *v7 )
      {
        v9 = (unsigned __int8)*(v7 - 3);
        v10 = v9 == v8;
        if ( v9 == v8 )
          v10 = (unsigned __int8)*(v7 - 2) == a2;
        if ( v10 )
          break;
      }
      ++v6;
      v7 += 28;
      if ( v6 >= 256 )
      {
        v11 = 1;
        v12 = (_BYTE *)(result + 20548);
        while ( *(v12 - 28) )
        {
          if ( !*v12 )
            goto LABEL_14;
          v12 += 56;
          v13 = v11 + 1 < 256;
          v11 += 2;
          if ( !v13 )
            return result;
        }
        v12 -= 28;
        --v11;
LABEL_14:
        v14 = result + 28 * v11;
        FIELD_U8(v14, 20517) = v8;
        FIELD_U8(v14, 20518) = a2;
        FIELD_U32(v14, 20500) = a3;
        FIELD_U32(v14, 20504) = a4;
        FIELD_U32(v14, 20512) = a5;
        FIELD_U8(v14, 20516) = a6;
        FIELD_U32(v14, 20508) = 0;
        FIELD_U8(v14, 20519) = 0;
        *v12 = 1;
        return 1;
      }
    }
  }
  return result;
}
