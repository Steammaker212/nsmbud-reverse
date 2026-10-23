/* sub_60501D28
 * address: 0x60501D28   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60501D28(int result, int a2, int a3, int a4)
{
  int v4; // r1
  int v5; // r2
  bool v6; // zf
  int v7; // lr
  int v8; // r12
  int v9; // r4
  int v10; // r3

  if ( !FIELD_U8(result, 1043) )
  {
    v4 = FIELD_U32(result, 68);
    v5 = FIELD_U8(v4, 208);
    if ( !FIELD_U8(v4, 208) )
    {
      v5 = FIELD_U32(result, 1028);
      FIELD_U32(result, 1032) = v5;
    }
    v6 = v4 == 0;
    if ( v4 )
    {
      v5 = FIELD_U32(result, 56);
      a4 = result + 52;
      v6 = v5 == result + 52;
    }
    if ( !v6 )
    {
      v7 = FIELD_U32(result, 64);
      v8 = a4 - v7;
      v9 = v5 - v7;
      v10 = 0;
      while ( v9 != v4 )
      {
        v5 = FIELD_U32(v5, 4);
        ++v10;
        v9 = v5 - v7;
        if ( v5 - v7 == v8 )
          goto LABEL_12;
      }
      FIELD_U32(result, 1028) = v10;
    }
LABEL_12:
    FIELD_U8(result, 1042) = 1;
    FIELD_U8(result, 1053) = 1;
    return sub_6040200C(dword_60C99E68, v4, FIELD_U32(result, 1036));
  }
  return result;
}
