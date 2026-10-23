/* sub_6067FBB8
 * address: 0x6067FBB8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067FBB8(int a1)
{
  _WORD *v2; // r6
  unsigned int v3; // r5

  v2 = (_WORD *)(a1 + 10196);
  v3 = sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66));
  if ( v3 && sub_606BAAFC((unsigned __int16)*v2) >= v3 )
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB7F50);
  *v2 = FIELD_U16(a1, 10184);
  return sub_6067C904(a1);
}
