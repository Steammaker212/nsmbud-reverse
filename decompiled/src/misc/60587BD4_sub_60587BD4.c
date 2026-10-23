/* sub_60587BD4
 * address: 0x60587BD4   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60587BD4(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int result; // r0
  ActiveColliderMgr *v5; // r5

  result = Enemy__processCollision((Enemy *)a1, a2, a3, 0) | 2;
  if ( result != 2 )
  {
    v5 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
    ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)(a1 + 188));
    ActiveColldierMgr_removeFromList3(v5, a1 + 188);
    FIELD_U8(a1, 6340) = 1;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF284);
  }
  return result;
}
