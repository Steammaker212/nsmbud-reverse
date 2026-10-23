/* sub_6055EFA8
 * address: 0x6055EFA8   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055EFA8(int a1)
{
  int v2; // r5
  int result; // r0
  _BYTE *v4; // r8
  _BYTE *v5; // r10
  _BYTE *v6; // r9
  _BYTE *v7; // r11
  _BYTE *v8; // r7
  _BYTE *v9; // r6
  _BYTE *v10; // r4
  int v11; // t1

  v2 = a1 + 44;
  sub_60473B58((_DWORD *)(a1 + 44), 0xEu, 0);
  v4 = (_BYTE *)(a1 + 13749);
  result = FIELD_U8(a1, 13749);
  if ( FIELD_U8(a1, 13749) )
  {
    v5 = (_BYTE *)(a1 + 13584);
    if ( FIELD_U8(a1, 13584) && (*(_BYTE *)(sub_6047482C(v2, 0) + 51) & 1) != 0 )
      *v5 = 0;
    v6 = (_BYTE *)(a1 + 13585);
    if ( FIELD_U8(a1, 13585) && (*(_BYTE *)(sub_6047482C(v2, 1u) + 51) & 1) != 0 )
      *v6 = 0;
    v7 = (_BYTE *)(a1 + 13586);
    if ( FIELD_U8(a1, 13586) && (*(_BYTE *)(sub_6047482C(v2, 2u) + 51) & 1) != 0 )
      *v7 = 0;
    v8 = (_BYTE *)(a1 + 13587);
    if ( FIELD_U8(a1, 13587) && (*(_BYTE *)(sub_6047482C(v2, 3u) + 51) & 1) != 0 )
      *v8 = 0;
    v9 = (_BYTE *)(a1 + 13588);
    if ( FIELD_U8(a1, 13588) && (*(_BYTE *)(sub_6047482C(v2, 4u) + 51) & 1) != 0 )
      *v9 = 0;
    v11 = FIELD_U8(a1, 13589);
    v10 = (_BYTE *)(a1 + 13589);
    if ( v11 && (*(_BYTE *)(sub_6047482C(v2, 5u) + 51) & 1) != 0 )
      *v10 = 0;
    result = (unsigned __int8)*v5;
    if ( !*v5 )
    {
      result = (unsigned __int8)*v6;
      if ( !*v6 )
      {
        result = (unsigned __int8)*v7;
        if ( !*v7 )
        {
          result = (unsigned __int8)*v8;
          if ( !*v8 )
          {
            result = (unsigned __int8)*v9;
            if ( !*v9 )
            {
              result = (unsigned __int8)*v10;
              if ( !*v10 )
              {
                *v4 = 0;
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
