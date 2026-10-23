/* sub_602E8ECC
 * address: 0x602E8ECC   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_602E8ECC(int a1)
{
  ActiveCollider *v1; // r5
  int v2; // r3
  ActiveColliderMgr *v3; // r4
  ActiveColliderMgr *result; // r0

  v1 = (ActiveCollider *)(a1 + 188);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 3196) |= 3u;
  v2 = FIELD_U32(a1, 3188);
  FIELD_U32(a1, 3180) |= 3u;
  FIELD_U32(a1, 3188) = v2 | 3;
  FIELD_U32(a1, 3204) |= 3u;
  FIELD_U32(a1, 3176) |= 0x80000000;
  FIELD_U32(a1, 3184) |= 0x80000000;
  FIELD_U32(a1, 3200) |= 0x80000000;
  if ( !FIELD_U8(a1, 7535) )
    FIELD_U32(a1, 7448) = 0;
  FIELD_U8(a1, 7532) = 0;
  if ( !FIELD_U8(a1, 7531) )
    FIELD_U32(a1, 328) = 0;
  FIELD_U32(a1, 344) = sub_602EEFE4;
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
