/* sub_604B4A78
 * address: 0x604B4A78   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B4A78(int a1)
{
  int v2; // r6
  _BYTE *v3; // r0
  _BYTE *v4; // r5
  _DWORD *v5; // r0
  int result; // r0
  int v7; // r1

  v2 = 0;
  v3 = (_BYTE *)dword_60C9CF0C;
  FIELD_U8(a1, 14795) = FIELD_U8(dword_60C9CF0C, 5126) ^ 1;
  FIELD_U8(a1, 14794) = v3[5127] ^ 1;
  FIELD_U8(a1, 14796) = v3[5128] ^ 1;
  FIELD_U8(a1, 14797) = v3[5129] ^ 1;
  v4 = (_BYTE *)(a1 + 14798);
  do
  {
    result = FIELD_U32(a1, 16);
    v7 = *(_DWORD *)(result + 4 * v2);
    if ( !FIELD_U8(v7, 160) )
    {
      if ( (v2 | 1) == 5 && (FIELD_U8(v7, 8) & 0x10) == 0 )
        FIELD_U8(a1, 14945) = 1;
      if ( *(v4 - 6) )
      {
        v5 = *(_DWORD **)(result + 4 * v2);
        if ( *v4 )
        {
          result = sub_60478650(v5);
          *v4 = 0;
        }
        else
        {
          result = sub_604784EC((int)v5);
        }
      }
      else
      {
        result = sub_60478344(*(_DWORD *)(result + 4 * v2));
        *v4 = 1;
      }
    }
    ++v2;
    ++v4;
  }
  while ( v2 != 6 );
  return result;
}
