/* sub_603293D4
 * address: 0x603293D4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603293D4(CollisionActor *a1)
{
  signed int v2; // r1
  int result; // r0

  v2 = Enemy__beforeExecute(a1);
  result = 0;
  if ( v2 == 1 )
  {
    CollisionMgr_vf18(FIELD_U8(a1, 0x288));
    return 1;
  }
  return result;
}
