/* sub_60696B74
 * address: 0x60696B74   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60696B74(int a1)
{
  signed int v2; // r1
  int result; // r0

  v2 = StageActor__beforeExecute((StageActor *)a1);
  result = 0;
  if ( v2 == 1 )
  {
    CollisionMgr_vf18((_BYTE *)(a1 + 648));
    return 1;
  }
  return result;
}
