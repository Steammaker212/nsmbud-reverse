/* sub_6076504C
 * address: 0x6076504C   size: 996   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076504C(int a1)
{
  int v2; // r5
  char v4; // r0
  _BOOL4 v5; // r0
  bool v6; // zf
  char v7; // r0
  ActiveColliderMgr *v8; // r6
  ActiveColliderMgr *v9; // r6
  ActiveColliderMgr *v10; // r6
  ActiveColliderMgr *v11; // r6
  int v12; // r0
  ActiveCollider *v13; // r6
  ActiveColliderMgr *v14; // r7
  ActiveColliderMgr *v15; // r7
  ActiveColliderMgr *v16; // r6
  _BOOL4 v17; // r0
  bool v18; // zf
  bool v19; // zf
  ActiveColliderMgr *v20; // r6
  ActiveCollider *v21; // r4
  ActiveColliderMgr *v22; // r6
  ActiveColliderMgr *v23; // r0
  ActiveCollider *v24; // r1
  ActiveCollider *v25; // r1
  ActiveColliderMgr *v26; // r4

  v2 = 0;
  if ( (FIELD_U32(a1, 1204) & 0x24000) != 0 )
    return v2;
  v4 = FIELD_U8(a1, 86);
  FIELD_U8(a1, 297) = v4;
  FIELD_U8(a1, 7549) = v4;
  FIELD_U8(a1, 7853) = v4;
  FIELD_U8(a1, 8157) = v4;
  FIELD_U8(a1, 8765) = v4;
  FIELD_U8(a1, 8461) = v4;
  v5 = sub_6075EE0C(a1);
  v6 = v5;
  if ( v5 )
    v6 = FIELD_U32(a1, 1320) == 9;
  if ( v6 )
  {
    v7 = FIELD_U8(a1, 86);
    FIELD_U8(a1, 9069) = v7;
    FIELD_U8(a1, 9373) = v7;
  }
  if ( FIELD_U32(a1, 8492) )
  {
    v8 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8352))
      && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 8352)) )
    {
      ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 8352));
    }
  }
  if ( FIELD_U32(a1, 8796) )
  {
    v9 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8656))
      && !ActiveColliderMgr_isInCreateList(v9, (ActiveCollider *)(a1 + 8656)) )
    {
      ActiveColliderMgr_addToCreateList(v9, (ActiveCollider *)(a1 + 8656));
    }
  }
  if ( FIELD_U32(a1, 7884) )
  {
    v10 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7744))
      && !ActiveColliderMgr_isInCreateList(v10, (ActiveCollider *)(a1 + 7744)) )
    {
      ActiveColliderMgr_addToCreateList(v10, (ActiveCollider *)(a1 + 7744));
    }
  }
  if ( FIELD_U32(a1, 8188) )
  {
    v11 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8048))
      && !ActiveColliderMgr_isInCreateList(v11, (ActiveCollider *)(a1 + 8048)) )
    {
      ActiveColliderMgr_addToCreateList(v11, (ActiveCollider *)(a1 + 8048));
    }
  }
  v12 = FIELD_U32(a1, 1236);
  v13 = (ActiveCollider *)(a1 + 188);
  if ( (v12 & 0x10000) != 0 )
  {
    v2 = 1;
    if ( (v12 & 0x20000) == 0 )
      return v2;
    v25 = (ActiveCollider *)(a1 + 188);
    v26 = ActiveColliderMgr_instance;
    if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v25) || ActiveColliderMgr_isInCreateList(v26, v13) )
      return v2;
    v23 = v26;
    v24 = v13;
  }
  else
  {
    if ( (v12 & 0x4000) != 0 )
    {
      v14 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7136))
        && !ActiveColliderMgr_isInCreateList(v14, (ActiveCollider *)(a1 + 7136)) )
      {
        ActiveColliderMgr_addToCreateList(v14, (ActiveCollider *)(a1 + 7136));
      }
    }
    v15 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v15, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v15, (ActiveCollider *)(a1 + 188));
    }
    v16 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7440))
      && !ActiveColliderMgr_isInCreateList(v16, (ActiveCollider *)(a1 + 7440)) )
    {
      ActiveColliderMgr_addToCreateList(v16, (ActiveCollider *)(a1 + 7440));
    }
    v17 = sub_6075EE0C(a1);
    v18 = v17;
    v2 = 1;
    if ( v17 )
      v18 = FIELD_U32(a1, 1320) == 9;
    if ( !v18 )
      return v2;
    v19 = (FIELD_U8(a1, 6900) & 1) == 0;
    if ( (FIELD_U8(a1, 6900) & 1) == 0 )
      v19 = (FIELD_U8(a1, 1214) & 0x20) == 0;
    if ( !v19 || FIELD_F32(a1, 124) >= 0.0 )
      return v2;
    v20 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8960))
      && !ActiveColliderMgr_isInCreateList(v20, (ActiveCollider *)(a1 + 8960)) )
    {
      ActiveColliderMgr_addToCreateList(v20, (ActiveCollider *)(a1 + 8960));
    }
    v21 = (ActiveCollider *)(a1 + 9264);
    v22 = ActiveColliderMgr_instance;
    if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v21) || ActiveColliderMgr_isInCreateList(v22, v21) )
      return v2;
    v23 = v22;
    v24 = v21;
  }
  ActiveColliderMgr_addToCreateList(v23, v24);
  return 1;
}
