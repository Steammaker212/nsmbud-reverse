/* sub_6035FB00
 * address: 0x6035FB00   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_6035FB00(int a1)
{
  unsigned int v2; // r0
  float v3; // s2
  float v4; // s2
  ActiveColliderMgr *v5; // r5
  ActiveCollider *v6; // r4
  ActiveColliderMgr *v7; // r5
  ActiveColliderMgr *result; // r0

  v2 = FIELD_U8(a1, 6921);
  FIELD_U32(a1, 80) = v2;
  if ( v2 - 2 < 2 )
  {
    v4 = FIELD_F32(a1, 6912);
    FIELD_F32(a1, 312) = v4 * 5.42;
    FIELD_F32(a1, 316) = v4 * 11.38;
    FIELD_U32(a1, 304) = -1095216660;
    FIELD_U32(a1, 308) = 1060655596;
    FIELD_U32(a1, 12412) = 1091567616;
    FIELD_U32(a1, 12416) = 1103101952;
  }
  else if ( v2 <= 1 )
  {
    v3 = FIELD_F32(a1, 6912);
    FIELD_F32(a1, 312) = v3 * 11.38;
    FIELD_F32(a1, 316) = v3 * 5.42;
    FIELD_U32(a1, 304) = 1060655596;
    FIELD_U32(a1, 308) = -1095216660;
  }
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 188));
  }
  v6 = (ActiveCollider *)(a1 + 12288);
  v7 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v6);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v7, v6);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v7, v6);
  }
  return result;
}
