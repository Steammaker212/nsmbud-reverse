/* sub_6015D180
 * address: 0x6015D180   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6015D180(int a1, int a2)
{
  __int64 v2; // r2
  signed int result; // r0
  int v5; // r4
  int v6; // r2
  int v7; // lr
  int v8; // r1
  int v9; // r1
  int i; // r2
  int v11; // r4

  HIDWORD(v2) = FIELD_U32(a2, 304);
  LODWORD(v2) = FIELD_U32(a2, 308);
  result = 0;
  if ( v2 )
  {
    v5 = FIELD_U32(a1, 4);
    v6 = FIELD_U32(a2, 308) & 0xF;
    if ( v5 == 1 )
    {
      if ( v6 || (unsigned int)WORD2(v2) - 2 < 3 )
        return result;
    }
    else if ( v5 == 2 )
    {
      if ( v6 || (unsigned int)WORD2(v2) - 2 > 2 )
        return result;
    }
    else if ( !v6 )
    {
      return result;
    }
    if ( FIELD_U8(a1, 2) == **(unsigned __int8 **)(a2 + 160)
      && (FIELD_U8(a1, 3) & **(_BYTE **)(a2 + 164)) != 0 )
    {
      result = 0;
      if ( (!FIELD_U8(a1, 1) || (HIDWORD(v2) & 0xFFFFFF) != 0x4000D) && !FIELD_U8(a2, 220) )
      {
        v7 = FIELD_U32(a2, 144);
        if ( v7 && !FIELD_U8(v7, 19) )
        {
          v8 = FIELD_U32(a2, 148);
          if ( !v8 || v8 != FIELD_U32(a1, 8) )
          {
            v9 = FIELD_U32(a1, 28);
            if ( v9 )
            {
              for ( i = FIELD_U32(a1, 24); ; ++i )
              {
                v11 = FIELD_U32(a1, 20);
                if ( i < v11 )
                  v11 = 0;
                if ( *(_DWORD *)(FIELD_U32(a1, 16) - 4 * v11 + 4 * i) == v7 )
                  break;
                if ( !--v9 )
                  return 1;
              }
            }
            else
            {
              return 1;
            }
          }
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}
