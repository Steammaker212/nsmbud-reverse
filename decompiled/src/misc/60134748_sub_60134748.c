/* sub_60134748
 * address: 0x60134748   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60134748(int a1)
{
  ActiveColliderMgr *v2; // r6
  int v3; // r4
  double (__fastcall **v4)(int); // t1
  int v5; // s2

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 296))(a1);
  FIELD_U32(a1, 568) |= 0xA0u;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 304))(a1);
  *(_DWORD *)(FIELD_U32(a1, 6128) + 32) = 2;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 352))(a1);
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6132))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 6132)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 6132));
  }
  v4 = *(double (__fastcall ***)(int))(a1 + 6440);
  v3 = a1 + 6440;
  FIELD_F64(v3, 4) = (*v4)(v3);
  FIELD_U32(v3, 12) = v5;
  return 1;
}
