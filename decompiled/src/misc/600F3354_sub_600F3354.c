/* sub_600F3354
 * address: 0x600F3354   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F3354(int a1)
{
  int v2; // r0
  int *v3; // r5
  int v4; // r0
  ActiveColliderMgr *v5; // r6
  int result; // r0

  v3 = (int *)(a1 + 7180);
  v2 = FIELD_U32(a1, 7180);
  switch ( v2 )
  {
    case 2:
    case 4:
      v4 = FIELD_U32(a1, 7096);
      goto LABEL_4;
    case 3:
      v4 = FIELD_U32(a1, 7096);
LABEL_4:
      sub_60421AD4(v4);
      goto LABEL_6;
    case 5:
      KoopalingBase__vf5AC(a1);
LABEL_6:
      v2 = *v3;
      break;
    default:
      break;
  }
  if ( v2 >= 2 )
  {
    v5 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8120));
    ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)(a1 + 8120));
    ActiveColldierMgr_removeFromList3(v5, a1 + 8120);
  }
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1076))(a1);
  FIELD_U32(a1, 7128) = result;
  return result;
}
