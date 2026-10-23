/* sub_600F5D84
 * address: 0x600F5D84   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_600F5D84(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  _DWORD *v5; // r3
  ActiveCollider *v6; // r4
  ActiveColliderMgr *v7; // r5
  ActiveColliderMgr *result; // r0

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  v3 = (*(int (**)(void))(dword_60C85A58 + 8))();
  v4 = FIELD_U32(a1, 6308);
  FIELD_U32(a1, 120) = 0;
  v5 = &unk_60AF60AC;
  if ( v2 == v3 )
    v5 = &unk_60AF6098;
  FIELD_U32(a1, 124) = v5[v4];
  FIELD_U32(a1, 128) = 0;
  v6 = (ActiveCollider *)(a1 + 188);
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
