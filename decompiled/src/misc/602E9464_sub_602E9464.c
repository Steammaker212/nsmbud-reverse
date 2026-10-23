/* sub_602E9464
 * address: 0x602E9464   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_602E9464(int a1)
{
  ActiveColliderMgr *v2; // r5
  int v3; // r1
  unsigned int result; // r0

  *(_BYTE *)(FIELD_U32(a1, 7368) + 69) = 0;
  FIELD_U32(a1, 7424) = 1056964608;
  FIELD_U32(a1, 7428) = 0;
  FIELD_U8(a1, 7536) = 0;
  FIELD_U8(a1, 7532) = 0;
  if ( !FIELD_U8(a1, 7531) )
    FIELD_U32(a1, 328) = 0;
  FIELD_U32(a1, 344) = sub_602EEFE4;
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
  }
  FIELD_U32(a1, 3196) |= 3u;
  v3 = FIELD_U32(a1, 3188);
  FIELD_U32(a1, 3180) |= 3u;
  FIELD_U32(a1, 3188) = v3 | 3;
  FIELD_U32(a1, 3204) |= 3u;
  FIELD_U32(a1, 3176) |= 0x80000000;
  FIELD_U32(a1, 3184) |= 0x80000000;
  result = FIELD_U32(a1, 3200) | 0x80000000;
  FIELD_U32(a1, 3200) = result;
  return result;
}
