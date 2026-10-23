/* sub_605B8DC4
 * address: 0x605B8DC4   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_605B8DC4()
{
  int v0; // r1
  int v1; // r0
  int v2; // r4
  int v3; // r5
  int v4; // r7
  int v5; // r1
  int v6; // r0

  v0 = sub_6078A030(PlayerMgr_instance);
  v1 = PlayerMgr_instance;
  v2 = 0;
  v3 = 0;
  if ( v0 >= 1 )
  {
    v4 = 0;
    do
    {
      ++v4;
      if ( ((int (__fastcall *)(int))loc_607892B4)(v1) )
        ++v3;
      v5 = sub_6078A030(PlayerMgr_instance);
      v1 = PlayerMgr_instance;
    }
    while ( v4 < v5 );
  }
  v6 = sub_607890A8(v1) - v3;
  if ( v6 > 0 )
    return v6;
  return v2;
}
