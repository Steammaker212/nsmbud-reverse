/* sub_604F4DB8
 * address: 0x604F4DB8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604F4DB8(int a1)
{
  int v2; // r1
  int v3; // r2
  unsigned int v4; // r0
  unsigned int v5; // r1
  StateBase *v6; // r1

  v2 = *(_DWORD *)(FIELD_U32(a1, 9628) + 44);
  v3 = FIELD_U32(a1, 9632);
  v4 = FIELD_U32(v3, 20);
  v5 = FIELD_U32(v3, 24) + v2;
  if ( v4 <= v5 )
  {
    v6 = (StateBase *)&unk_60CA699C;
  }
  else
  {
    ItemStock_DelItem_ref(a1, v4 - v5);
    v6 = &stru_60CA693C;
  }
  return StateMgr__changeState((StateMgr *)(a1 + 24), v6);
}
