/* sub_603CD750
 * address: 0x603CD750   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CD750(int a1)
{
  int result; // r0
  __int16 v3; // r1
  int v4; // t1
  bool v5; // zf
  __int16 v6; // r1

  v4 = FIELD_U16(a1, 6102);
  result = a1 + 6102;
  v3 = v4;
  v5 = v4 == 0;
  if ( v4 )
  {
    v6 = v3 - 1;
    *(_WORD *)result = v6;
    result = 0xFFFF;
    v5 = v6 == 0;
  }
  if ( v5 )
  {
    result = sub_600085D0(ActorMgr__instance, 674);
    if ( !result )
      return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C98B58);
  }
  return result;
}
