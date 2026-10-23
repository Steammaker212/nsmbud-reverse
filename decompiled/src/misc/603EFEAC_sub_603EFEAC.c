/* sub_603EFEAC
 * address: 0x603EFEAC   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603EFEAC(int result, unsigned int a2, int a3)
{
  __int16 v3; // r3
  unsigned int v4; // r6
  __int16 v5; // r9
  int v6; // r6
  int v7; // r2
  int v8; // r6
  int v9; // r2
  int v10; // r6
  int v11; // r2

  v3 = FIELD_U8(result, 5762);
  if ( (!FIELD_U8(result, 5762) || FIELD_U32(result, 5740) != a2)
    && (!FIELD_U8(result, 11514) || FIELD_U32(result, 11492) != a2)
    && (!FIELD_U8(result, 17266) || FIELD_U32(result, 17244) != a2)
    && (!FIELD_U8(result, 23018) || FIELD_U32(result, 22996) != a2)
    && (!FIELD_U8(result, 28770) || FIELD_U32(result, 28748) != a2)
    && (!FIELD_U8(result, 34522) || FIELD_U32(result, 34500) != a2) )
  {
    v4 = 0;
    v5 = 0;
    if ( a2 < 6 )
      v4 = a2;
    if ( (*(_DWORD *)(dword_60C99DD4 + 72 * v4 + 4 * (a3 >> 5) + 324) & (1 << (a3 & 0x1F))) == 0 )
    {
      v6 = 0;
      if ( FIELD_U8(result, 5762) )
        v3 = 1;
      else
        v6 = 1;
      v7 = v6 | (FIELD_U8(result, 11514) == 0);
      v8 = 0;
      if ( !v7 )
        v3 = 2;
      if ( !FIELD_U8(result, 17266) )
        v8 = 1;
      v9 = v7 | v8;
      v10 = 0;
      if ( !v9 )
        v3 = 3;
      if ( !FIELD_U8(result, 23018) )
        v10 = 1;
      v11 = v9 | v10;
      if ( !v11 )
        v3 = 4;
      if ( !FIELD_U8(result, 34522) )
        v5 = 5;
      if ( !FIELD_U8(result, 28770) )
        v5 = v3;
      if ( v11 )
        v5 = v3;
      return sub_604E278C(5752 * v5 + result + 16);
    }
  }
  return result;
}
