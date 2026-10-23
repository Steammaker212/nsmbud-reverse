/* sub_602EA1BC
 * address: 0x602EA1BC   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EA1BC(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  int v4; // r5
  int *v5; // r4
  int v6; // t1
  int v7; // r1

  v2 = (ActiveCollider *)(a1 + 188);
  FIELD_U32(a1, 7436) = FIELD_U32(a1, 112);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  v4 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v4 == (*(int (**)(void))(dword_60C92544 + 8))() )
  {
    FIELD_U32(a1, 100) = -1082130432;
  }
  else
  {
    FIELD_U32(a1, 100) = -1103101952;
    if ( (*(_BYTE *)(FIELD_U32(a1, 56) + 6150) & 2) == 0 )
      goto LABEL_10;
  }
  FIELD_U8(a1, 7532) = 9;
  if ( !FIELD_U8(a1, 7531) )
    FIELD_U32(a1, 328) = 9;
  FIELD_U8(a1, 7527) = 1;
LABEL_10:
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 344) = sub_602EEA04;
  v6 = FIELD_U32(a1, 7440);
  v5 = (int *)(a1 + 7440);
  *v5 = v6 | 1;
  *(v5 - 1062) |= 0x80000000;
  *(v5 - 1061) |= 3u;
  v7 = *(v5 - 1063);
  *(v5 - 1065) |= 3u;
  *(v5 - 1063) = v7 | 3;
  *(v5 - 1059) |= 3u;
  return -4236;
}
