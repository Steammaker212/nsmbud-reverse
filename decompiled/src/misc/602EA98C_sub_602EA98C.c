/* sub_602EA98C
 * address: 0x602EA98C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EA98C(int a1)
{
  int v2; // r0
  int v3; // r1
  ActiveColliderMgr *v4; // r5
  int result; // r0

  FIELD_U32(a1, 100) = -1103101952;
  v2 = FIELD_U32(a1, 136);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = v2;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 3192) |= 0xC0000000;
  FIELD_U32(a1, 3196) |= 3u;
  v3 = FIELD_U32(a1, 3188);
  FIELD_U32(a1, 3180) |= 3u;
  FIELD_U32(a1, 3188) = v3 | 3;
  FIELD_U32(a1, 3204) |= 3u;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 344) = sub_602EEA04;
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
  }
  *(_BYTE *)(FIELD_U32(a1, 7368) + 69) = 0;
  result = FIELD_U32(a1, 7440) | 1;
  FIELD_U32(a1, 7440) = result;
  return result;
}
