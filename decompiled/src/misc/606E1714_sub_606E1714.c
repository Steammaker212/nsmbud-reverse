/* sub_606E1714
 * address: 0x606E1714   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_606E1714(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  ColliderListNode *result; // r0

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 268))(a1);
  result = (ColliderListNode *)FIELD_U8(a1, 535);
  if ( FIELD_U8(a1, 535) )
    return ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6176));
  return result;
}
