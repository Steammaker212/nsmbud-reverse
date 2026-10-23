/* sub_600CD604
 * address: 0x600CD604   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600CD604(int a1)
{
  float v2; // s2

  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_600CD484((_DWORD *)a1);
  FIELD_F32(a1, 6684) = (float)(FIELD_F32(a1, 144) * 12.0) * 0.95;
  CircularCollider_execute(a1 + 6320);
  v2 = FIELD_F32(a1, 148);
  FIELD_F32(a1, 312) = FIELD_F32(a1, 144) * 12.0;
  FIELD_F32(a1, 316) = v2 * 12.0;
  FIELD_U32(a1, 6720) = -1090519040;
  FIELD_U32(a1, 6724) = 1056964608;
  FIELD_F32(a1, 6728) = v2 * -12.0;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, (CollisionMgr_Sensor *)(a1 + 6720), 0, 0);
  return 1;
}
