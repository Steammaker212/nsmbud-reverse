/* sub_604A17D0
 * address: 0x604A17D0   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A17D0(int a1)
{
  int v2; // r5
  int result; // r0
  _BYTE *v4; // r8
  _BYTE *v5; // r7
  _BYTE *v6; // r6
  _BYTE *v7; // r4
  int v8; // t1

  v2 = a1 + 44;
  sub_60473B58((_DWORD *)(a1 + 44), 5u, 0);
  v4 = (_BYTE *)(a1 + 22501);
  result = FIELD_U8(a1, 22501);
  if ( FIELD_U8(a1, 22501) )
  {
    v5 = (_BYTE *)(a1 + 20308);
    if ( FIELD_U8(a1, 20308) && (*(_BYTE *)(sub_6047482C(v2, 0) + 51) & 1) != 0 )
      *v5 = 0;
    v6 = (_BYTE *)(a1 + 20309);
    if ( FIELD_U8(a1, 20309) && (*(_BYTE *)(sub_6047482C(v2, 1u) + 51) & 1) != 0 )
      *v6 = 0;
    v8 = FIELD_U8(a1, 20310);
    v7 = (_BYTE *)(a1 + 20310);
    if ( v8 && (*(_BYTE *)(sub_6047482C(v2, 2u) + 51) & 1) != 0 )
      *v7 = 0;
    result = (unsigned __int8)*v5;
    if ( !*v5 )
    {
      result = (unsigned __int8)*v6;
      if ( !*v6 )
      {
        result = (unsigned __int8)*v7;
        if ( !*v7 )
        {
          *v4 = 0;
          return 0;
        }
      }
    }
  }
  return result;
}
