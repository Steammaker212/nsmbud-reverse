/* rakka_anim_ref
 * address: 0x6062209C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall rakka_anim_ref(int a1)
{
  ActiveColliderMgr *v2; // r5
  const char *v3[8]; // [sp+0h] [bp-20h] BYREF

  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 100) = -1105199104;
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
  }
  FIELD_U32(a1, 7372) = 8;
  FIELD_U32(a1, 7376) = 0;
  FIELD_U8(a1, 7364) = 0;
  FIELD_U32(a1, 7368) = 0;
  v3[0] = (const char *)&sead__SafeStringBase__vtable;
  v3[1] = "rakka_anim";
  sub_60621520(a1, v3, 1);
}
