/* sub_606B59D8
 * address: 0x606B59D8   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B59D8(int a1)
{
  int result; // r0
  int v3; // t1
  ActiveColliderMgr *v4; // r5
  ActiveColliderMgr *v5; // r5
  ActiveColliderMgr *v6; // r5

  v3 = FIELD_U32(a1, 7224);
  result = a1 + 7224;
  if ( v3 )
  {
    result = FIELD_U8(a1, 7228);
    if ( !FIELD_U8(a1, 7228) )
    {
      result = dword_60CC6484;
      if ( (float)(FIELD_F32(dword_60CC6484, 124) + 32.0) <= FIELD_F32(a1, 112) )
        return result;
      v6 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
        && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 188)) )
      {
        ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 188));
      }
      if ( FIELD_U8(a1, 6144) )
        ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6632));
      result = 1;
      goto LABEL_20;
    }
    if ( FIELD_F32(a1, 124) > 0.0 )
    {
      result = dword_60CC6484;
      if ( (float)(FIELD_F32(dword_60CC6484, 124) + 48.0) <= FIELD_F32(a1, 112) )
      {
        v4 = ActiveColliderMgr_instance;
        ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
        ActiveColldierMgr_removeFromCreateList(v4, (ActiveCollider *)(a1 + 188));
        ActiveColldierMgr_removeFromList3(v4, a1 + 188);
        if ( FIELD_U8(a1, 6144) )
          ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6632));
        result = 0;
LABEL_20:
        FIELD_U8(a1, 7228) = result;
      }
    }
  }
  else if ( FIELD_F32(dword_60CC6484, 124) > FIELD_F32(a1, 112) )
  {
    *(_DWORD *)result = 1;
    v5 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 188));
    }
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6632));
    FIELD_U8(a1, 7228) = 1;
    return 7228;
  }
  return result;
}
