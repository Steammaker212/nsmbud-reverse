/* sub_605F3378
 * address: 0x605F3378   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F3378(int a1)
{
  unsigned int v1; // r4
  unsigned int v2; // r5
  int v3; // r0

  v1 = a1 + 6104;
  v2 = FIELD_U32(a1, 6100);
  if ( a1 + 6104 < v2 )
  {
    do
    {
      if ( !FIELD_U8(v1, 8) && *(_DWORD *)v1 )
      {
        v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)v1);
        if ( v3 )
          FIELD_U8(v3, 7482) = 1;
        else
          FIELD_U8(v1, 8) = 1;
        *(_DWORD *)v1 = 0;
      }
      v1 += 12;
    }
    while ( v1 < v2 );
  }
  return 1;
}
