/* sub_60872068
 * address: 0x60872068   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60872068(int result, char a2)
{
  int v2; // r12
  int v3; // r3
  int v4; // r2
  int v5; // r5
  int v6; // r4

  v2 = FIELD_U8(result, 85);
  if ( FIELD_U8(result, 85) )
  {
    v3 = 0;
    if ( (v2 & 1) != 0 )
    {
      **(_DWORD **)(result + 48) = FIELD_U32(result, 40);
      v3 = 1;
    }
    if ( v2 != 1 )
    {
      v4 = 72 * v3;
      do
      {
        *(_DWORD *)(FIELD_U32(result, 48) + 4 * v3) = FIELD_U32(result, 40) + v4;
        v5 = FIELD_U32(result, 40) + v4;
        v6 = FIELD_U32(result, 48) + 4 * v3;
        v3 += 2;
        v4 += 144;
        FIELD_U32(v6, 4) = v5 + 72;
      }
      while ( v2 != v3 );
    }
  }
  if ( (a2 & 1) == 0 )
    FIELD_U32(result, 72) = 0;
  return result;
}
