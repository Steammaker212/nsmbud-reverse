/* sub_605ED2AC
 * address: 0x605ED2AC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605ED2AC(int result)
{
  unsigned int v1; // r1
  _DWORD *v2; // r2
  __int16 v3; // r3
  int v4; // r3
  int v5; // r5
  int v6; // r6

  if ( FIELD_U8(result, 10569) )
  {
    v1 = result + 24 * FIELD_U8(result, 10569) + 6108;
    v2 = (_DWORD *)(result + 6108);
    v3 = FIELD_U16(result, 10564) - 32;
    do
    {
      v4 = v3 & 0x1FF;
      v5 = result + 8 * v4;
      v3 = v4 - 24;
      v6 = FIELD_U32(v5, 6472);
      *v2 = FIELD_U32(v5, 6468);
      v2[1] = v6;
      v2[2] = 1141473280;
      v2 += 6;
    }
    while ( (unsigned int)v2 < v1 );
  }
  return result;
}
