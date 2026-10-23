/* sub_6085768C
 * address: 0x6085768C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085768C(int a1, int a2)
{
  int v2; // lr
  int i; // r12
  int v4; // r3
  int result; // r0

  v2 = FIELD_U32(a1, 44);
  for ( i = a1 + 40; v2 != i; v2 = FIELD_U32(v2, 4) )
  {
    result = v2 - 172;
    v4 = 0;
    while ( *(unsigned __int8 *)(a2 + v4) == *(unsigned __int8 *)(v2 - 36 + v4) )
    {
      if ( *(_BYTE *)(a2 + v4) )
      {
        if ( ++v4 < 24 )
          continue;
      }
      return result;
    }
  }
  return 0;
}
