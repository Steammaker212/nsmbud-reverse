/* sub_606752C8
 * address: 0x606752C8   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_606752C8(int a1)
{
  int v2; // r5
  int v3; // r6
  ColliderListNode *result; // r0

  sub_606753A0();
  v2 = FIELD_U8(a1, 8384);
  v3 = **(_DWORD **)(a1 + 6116);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 52))(v3);
  sub_60675744(a1, v3, v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 56))(v3);
  FIELD_U8(a1, 8384) = 1;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6392));
  if ( FIELD_U8(a1, 7704) )
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 7048));
  result = (ColliderListNode *)FIELD_U8(a1, 8368);
  if ( FIELD_U8(a1, 8368) )
    return ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 7712));
  return result;
}
