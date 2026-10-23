/* sub_60387988
 * address: 0x60387988   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_60387988(int a1)
{
  int v1; // r1
  ActiveCollider *v2; // r5
  float v3; // s0
  ActiveColliderMgr *v4; // r4
  ActiveColliderMgr *result; // r0

  v1 = FIELD_U32(a1, 436);
  v2 = (ActiveCollider *)(a1 + 132);
  v3 = (float)(FIELD_F32(a1, 76) + 0.0) - FIELD_F32(v1, 112);
  FIELD_F32(a1, 248) = (float)(FIELD_F32(a1, 72) + 0.0) - FIELD_F32(v1, 108);
  FIELD_F32(a1, 252) = v3;
  FIELD_U32(a1, 256) = 1090519040;
  FIELD_U32(a1, 260) = 1090519040;
  v4 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(
                                  ActiveColliderMgr_instance,
                                  (ActiveCollider *)(a1 + 132));
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v4, v2);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v4, v2);
  }
  return result;
}
