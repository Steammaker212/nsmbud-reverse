/* sub_60855AD8
 * address: 0x60855AD8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60855AD8(int a1, int a2)
{
  int i; // lr
  int v3; // r3
  int v4; // r2
  int v5; // r12

  for ( i = FIELD_U32(a1, 4); i != a1; i = FIELD_U32(i, 4) )
  {
    v5 = i - 4;
    v3 = 0;
    while ( 1 )
    {
      v4 = FIELD_U32(i, 16);
      if ( *(unsigned __int8 *)(v4 + v3) != *(unsigned __int8 *)(a2 + v3) )
        break;
      if ( *(_BYTE *)(v4 + v3) )
      {
        if ( ++v3 < 32 )
          continue;
      }
      return v5;
    }
  }
  return 0;
}
