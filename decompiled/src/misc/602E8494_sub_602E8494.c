/* sub_602E8494
 * address: 0x602E8494   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_602E8494(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  int v4; // r1
  unsigned int result; // r0

  v2 = (ActiveCollider *)(a1 + 188);
  FIELD_U32(a1, 7424) = 1060320051;
  FIELD_U32(a1, 7428) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 7448) = 0;
  FIELD_U8(a1, 7536) = 0;
  FIELD_U8(a1, 7532) = 0;
  if ( !FIELD_U8(a1, 7531) )
    FIELD_U32(a1, 328) = 0;
  FIELD_U32(a1, 344) = sub_602EEFE4;
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  FIELD_U32(a1, 3196) |= 3u;
  v4 = FIELD_U32(a1, 3188);
  FIELD_U32(a1, 3180) |= 3u;
  FIELD_U32(a1, 3188) = v4 | 3;
  FIELD_U32(a1, 3204) |= 3u;
  FIELD_U32(a1, 3176) |= 0x80000000;
  FIELD_U32(a1, 3184) |= 0x80000000;
  result = FIELD_U32(a1, 3200) | 0x80000000;
  FIELD_U32(a1, 3200) = result;
  return result;
}
