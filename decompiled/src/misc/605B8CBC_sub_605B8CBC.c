/* sub_605B8CBC
 * address: 0x605B8CBC   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605B8CBC(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0
  int v4; // r4
  _DWORD *v5; // r2
  unsigned int v6; // r12
  int v7; // r2
  int v8; // r2
  char *v9; // r4
  char *v10; // r3

  result = (_DWORD *)dword_60CB061C;
  if ( !dword_60CB061C )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0xF0DCu, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    v4 = -17 - (_DWORD)result;
    *result = off_60C0972C;
    v5 = result + 8;
    dword_60CB0618 = (int)result;
    result[15413] = 0;
    result[15414] = 0;
    if ( result + 400 > result + 8 )
      v5 = result + 400;
    v6 = (unsigned int)v5 + v4;
    v7 = ((unsigned __int8)(((unsigned int)v5 + v4) >> 4) + 1) & 3;
    if ( v7 )
    {
      v8 = -v7;
      v9 = (char *)result + 30;
      do
      {
        *(_DWORD *)(v9 - 2) = 0;
        ++v8;
        v9 += 16;
      }
      while ( v8 );
      v10 = v9 - 14;
      if ( v6 < 0x30 )
        goto LABEL_11;
    }
    else
    {
      v10 = (char *)(result + 4);
      if ( v6 < 0x30 )
      {
LABEL_11:
        dword_60CB061C = (int)result;
        return result;
      }
    }
    do
    {
      *((_DWORD *)v10 + 3) = 0;
      *((_DWORD *)v10 + 7) = 0;
      *((_DWORD *)v10 + 11) = 0;
      *((_DWORD *)v10 + 15) = 0;
      v10 += 64;
    }
    while ( v10 < (char *)result + 1600 );
    goto LABEL_11;
  }
  return result;
}
