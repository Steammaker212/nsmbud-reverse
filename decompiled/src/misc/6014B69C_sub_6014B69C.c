/* sub_6014B69C
 * address: 0x6014B69C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6014B69C(int a1)
{
  int v1; // r4
  int v2; // r1
  int v3; // r5

  v1 = 0;
  if ( (FIELD_U8(a1, 2224) & 1) != 0 )
  {
    v2 = FIELD_U32(a1, 2572);
    if ( v2 <= 5 )
    {
      v3 = a1 + 56 * v2;
      if ( ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v3, 3628)) )
        return FIELD_U32(v3, 3632);
    }
  }
  return v1;
}
