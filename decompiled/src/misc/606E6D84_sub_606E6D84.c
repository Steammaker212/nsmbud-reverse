/* sub_606E6D84
 * address: 0x606E6D84   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606E6D84(int a1)
{
  CollisionMgr_vf18((_BYTE *)(a1 + 6672));
  CollisionMgr_vf18((_BYTE *)(a1 + 17376));
  CollisionMgr_vf18((_BYTE *)(a1 + 12024));
  CollisionMgr_vf18((_BYTE *)(a1 + 22728));
  return Enemy__beforeExecute((CollisionActor *)a1);
}
