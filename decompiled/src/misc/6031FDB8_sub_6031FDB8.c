/* sub_6031FDB8
 * address: 0x6031FDB8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031FDB8(int a1)
{
  float v2; // r0
  float v3; // r2
  int v4; // r3
  ActiveColliderMgr *v5; // r5

  v2 = FIELD_F32(a1, 108);
  FIELD_F32(a1, 6332) = v2;
  v3 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 6336) = v3;
  FIELD_U32(a1, 6340) = FIELD_U32(a1, 116);
  v4 = dword_60CC6484;
  FIELD_F32(a1, 6332) = v2 - FIELD_F32(dword_60CC6484, 112);
  FIELD_F32(a1, 6336) = FIELD_F32(v4, 124) - v3;
  sub_60321CD4(a1, 6332, LODWORD(v3));
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 188));
  }
  sub_60321FA0(a1);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
}
