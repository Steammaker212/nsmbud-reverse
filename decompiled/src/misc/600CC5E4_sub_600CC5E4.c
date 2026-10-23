/* sub_600CC5E4
 * address: 0x600CC5E4   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600CC5E4(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1

  v4 = FIELD_U32(a1, 6280);
  v2 = (_DWORD *)(a1 + 6280);
  v3 = v4;
  if ( !v4 || (v5 = v3 - 1, (*v2 = v5) == 0) )
    FIELD_U32(a1, 116) = 1153138688;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_600CC43C(a1);
  LightSource_update1((LightSource *)(a1 + 6204), 40, (Vec3 *)(a1 + 108), 0, (float *)(a1 + 144), 0, 0, 0, 0);
  StageActor__cullCheck((StageActor *)a1, 4);
  return 1;
}
