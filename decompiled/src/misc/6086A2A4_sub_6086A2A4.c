/* sub_6086A2A4
 * address: 0x6086A2A4   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086A2A4(int result, unsigned __int16 a2)
{
  unsigned int v2; // r2
  int v3; // lr
  int v4; // r2
  int v5; // r3
  int v6; // r2
  int v7; // r4

  FIELD_U16(result, 10) = a2;
  v2 = FIELD_U16(result, 8);
  if ( a2 > v2 )
    LOWORD(v2) = a2;
  v3 = (unsigned __int16)v2;
  if ( (_WORD)v2 )
  {
    v4 = v2 & 3;
    v5 = 0;
    if ( (v3 & 3) != 0 )
    {
      do
        *(_DWORD *)(*(_DWORD *)result + 4 * v5++) = -1;
      while ( v4 != v5 );
    }
    if ( (unsigned int)(v3 - 1) >= 3 )
    {
      v6 = -v5;
      do
      {
        *(_DWORD *)(*(_DWORD *)result - 4 * v6) = -1;
        *(_DWORD *)(*(_DWORD *)result - 4 * v6 + 4) = -1;
        *(_DWORD *)(*(_DWORD *)result - 4 * v6 + 8) = -1;
        v7 = *(_DWORD *)result - 4 * v6;
        v6 -= 4;
        FIELD_U32(v7, 12) = -1;
      }
      while ( -v3 != v6 );
    }
  }
  return result;
}
