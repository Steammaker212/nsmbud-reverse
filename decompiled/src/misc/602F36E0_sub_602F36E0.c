/* sub_602F36E0
 * address: 0x602F36E0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_602F36E0(_BYTE *a1)
{
  int v2; // r5
  unsigned int v3; // r1
  int v4; // r0

  if ( a1[68] )
  {
    v2 = 1;
    a1[68] = 0;
    *a1 = 0;
    do
    {
      v3 = *(_DWORD *)&a1[4 * v2];
      if ( v3 )
      {
        v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
        if ( v4 )
          FIELD_U8(v4, 19) = 1;
        *(_DWORD *)&a1[4 * v2] = 0;
      }
      ++v2;
    }
    while ( v2 != 13 );
  }
  return a1;
}
