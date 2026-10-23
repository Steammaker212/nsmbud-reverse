/* sub_602CB83C
 * address: 0x602CB83C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_602CB83C(int a1)
{
  int v2; // r6
  ActiveCollider *v3; // r6
  ActiveColliderMgr *v4; // r5
  int v5; // r8
  int i; // r7
  ActiveColliderMgr *v7; // r5
  ActiveColliderMgr *result; // r0

  v2 = *(_DWORD *)a1;
  guru_iron_ball_ref((int *)a1);
  FIELD_U8(a1, 40) = 1;
  sub_602CB558((float *)a1);
  v3 = (ActiveCollider *)(v2 + 188);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v3) && !ActiveColliderMgr_isInCreateList(v4, v3) )
    ActiveColliderMgr_addToCreateList(v4, v3);
  v5 = a1 + 44;
  for ( i = 0; i != 6080; i += 304 )
  {
    v7 = ActiveColliderMgr_instance;
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(
                                    ActiveColliderMgr_instance,
                                    (ActiveCollider *)(v5 + i));
    if ( !result )
    {
      result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(v5 + i));
      if ( !result )
        result = ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(v5 + i));
    }
  }
  return result;
}
