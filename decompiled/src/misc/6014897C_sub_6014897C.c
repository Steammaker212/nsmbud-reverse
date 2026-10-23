/* sub_6014897C
 * address: 0x6014897C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_6014897C(int a1)
{
  ActiveCollider *v1; // r5
  float v2; // s2
  ActiveColliderMgr *v3; // r4
  ActiveColliderMgr *result; // r0

  v1 = (ActiveCollider *)(a1 + 188);
  v2 = FIELD_F32(a1, 6756);
  FIELD_U32(a1, 340) = 4096;
  FIELD_F32(a1, 312) = v2 * 11.4;
  FIELD_F32(a1, 316) = v2 * 11.4;
  v3 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(
                                  ActiveColliderMgr_instance,
                                  (ActiveCollider *)(a1 + 188));
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v3, v1);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v3, v1);
  }
  return result;
}
