/* sub_6002DF48
 * address: 0x6002DF48   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002DF48(int a1)
{
  ActiveCollider *v1; // r5
  ActiveColliderMgr *v2; // r4
  int result; // r0

  v1 = (ActiveCollider *)(a1 + 188);
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v2, v1) )
  {
    ActiveColliderMgr_addToCreateList(v2, v1);
  }
  result = dword_60CC6484;
  FIELD_U32(dword_60CC6484, 260) = 0;
  return result;
}
