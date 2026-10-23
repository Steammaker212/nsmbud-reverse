/* sub_60696BA0
 * address: 0x60696BA0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60696BA0(int a1)
{
  int v2; // r0

  StageActor__cullCheck((StageActor *)a1, 0);
  if ( !v2 )
  {
    StateMgr__execute((StateMgr *)(a1 + 6104));
    sub_60718420(TileMgr_instance, FIELD_U8(a1, 6264), 0, FIELD_F32(a1, 108));
  }
  return 1;
}
