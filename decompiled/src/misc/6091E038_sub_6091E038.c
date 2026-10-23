/* sub_6091E038
 * address: 0x6091E038   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091E038(int a1)
{
  int v1; // r1
  int result; // r0
  int v3; // r1
  int v4; // r2
  _BYTE *v5; // r1

  *(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 4) + 12) + 8) |= 2u;
  v1 = FIELD_U32(a1, 4);
  result = FIELD_U32(v1, 16);
  if ( result )
  {
    v3 = FIELD_U32(v1, 20);
    v4 = 0;
    if ( (result & 1) != 0 )
    {
      FIELD_U8(v3, 8) |= 2u;
      v4 = 1;
    }
    if ( result != 1 )
    {
      result -= v4;
      v5 = (_BYTE *)(936 * (__int16)v4 + v3 + 944);
      do
      {
        result -= 2;
        *(v5 - 936) |= 2u;
        *v5 |= 2u;
        v5 += 1872;
      }
      while ( result );
    }
  }
  return result;
}
