/* sub_605854EC
 * address: 0x605854EC   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605854EC(int a1, int a2, int a3)
{
  _BYTE *v4; // r3
  int v5; // lr
  int result; // r0
  int v7; // r4
  bool v8; // zf
  _BYTE *v9; // r3
  bool v10; // cc
  int v11; // r3

  v4 = (_BYTE *)(a1 + 27686);
  v5 = FIELD_U8(LevelInfo_instance, 18);
  result = 0;
  while ( 1 )
  {
    if ( *v4 )
    {
      v7 = *(_DWORD *)(v4 - 10);
      v8 = v7 == a2;
      if ( v7 == a2 )
        v8 = (unsigned __int8)*(v4 - 1) == v5;
      if ( v8 )
        return result;
    }
    ++result;
    v4 += 24;
    if ( result >= 256 )
    {
      v9 = (_BYTE *)(a1 + 27710);
      result = 1;
      while ( *(v9 - 24) )
      {
        if ( !*v9 )
          goto LABEL_13;
        v9 += 48;
        v10 = result + 1 < 256;
        result += 2;
        if ( !v10 )
          return 256;
      }
      v9 -= 24;
      --result;
LABEL_13:
      *v9 = 1;
      v11 = a1 + 24 * result;
      FIELD_U8(v11, 27685) = v5;
      FIELD_U32(v11, 27676) = a2;
      FIELD_U32(v11, 27664) = 0;
      FIELD_U32(v11, 27668) = 0;
      FIELD_U32(v11, 27672) = 0;
      FIELD_U8(v11, 27684) = 0;
      FIELD_U32(v11, 27680) = a3;
      return result;
    }
  }
}
