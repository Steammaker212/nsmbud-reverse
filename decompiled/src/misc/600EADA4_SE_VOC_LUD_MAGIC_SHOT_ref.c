/* SE_VOC_LUD_MAGIC_SHOT_ref
 * address: 0x600EADA4   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_LUD_MAGIC_SHOT_ref(int a1)
{
  int v2; // r6
  _BYTE *v3; // r7
  ActiveColliderMgr *v4; // r6
  int result; // r0

  v2 = a1;
  v3 = (_BYTE *)(a1 + 8132);
  if ( FIELD_U8(a1, 8132) )
    v2 = FIELD_U32(a1, 56);
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 716))(v2) )
    (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 720))(v2);
  sub_60421AD4(FIELD_U32(a1, 7096));
  ActiveCollider__init((ActiveCollider *)(a1 + 7184), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BCE2E8, 0);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7184))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 7184)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 7184));
  }
  FIELD_U32(a1, 7092) = 1;
  result = (unsigned __int8)*v3;
  if ( !*v3 )
    return sub_608134CC(a1 + 6332, "SE_VOC_LUD_MAGIC_SHOT", FIELD_S16(a1, 6640), 0);
  return result;
}
