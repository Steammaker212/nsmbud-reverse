/* sub_602E7574
 * address: 0x602E7574   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_602E7574(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r0
  int v5; // r1
  ActiveColliderMgr *v6; // r6
  unsigned int result; // r0

  v2 = FIELD_U32(a1, 56);
  v3 = FIELD_U32(v2, 120);
  v4 = FIELD_U32(v2, 124);
  FIELD_U32(a1, 120) = v3;
  FIELD_U32(a1, 124) = v4;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 116) = 1152090112;
  FIELD_U32(a1, 3192) |= 0x80000000;
  FIELD_U32(a1, 3196) |= 3u;
  v5 = FIELD_U32(a1, 3188);
  FIELD_U32(a1, 3180) |= 3u;
  FIELD_U32(a1, 3188) = v5 | 3;
  FIELD_U32(a1, 3204) |= 3u;
  FIELD_U32(a1, 344) = sub_602EEA04;
  FIELD_U8(a1, 7532) = 9;
  if ( !FIELD_U8(a1, 7531) )
    FIELD_U32(a1, 328) = 9;
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 188));
  }
  result = FIELD_U32(a1, 7440) & 0xFFFFFFFD;
  FIELD_U32(a1, 7440) = result;
  return result;
}
