/* sub_608307B0
 * address: 0x608307B0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_608307B0(int a1)
{
  int v1; // r1
  int v2; // r3

  v1 = a1 + 6100;
  v2 = FIELD_U32(dword_60C995D0, 32);
  if ( v2 && v2 == v1 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CC7148);
  else
    return (StateMethodExecuter *)sub_603E552C((sead_ListNode *)dword_60C995D0, v1);
}
