/* sub_6024F994
 * address: 0x6024F994   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024F994(int a1)
{
  signed int v2; // r1
  int result; // r0

  v2 = Enemy__beforeExecute((CollisionActor *)a1);
  result = 0;
  if ( v2 == 1 )
  {
    CollisionMgr_vf18((_BYTE *)(a1 + 6464));
    return 1;
  }
  return result;
}
