/* sub_60679CB0
 * address: 0x60679CB0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60679CB0(int a1)
{
  StateMethodExecuter *result; // r0
  StateMethodExecuter *v3; // r5
  int v4; // r0
  int v5; // [sp+4h] [bp-54h] BYREF
  _BYTE v6[80]; // [sp+8h] [bp-50h] BYREF

  result = (StateMethodExecuter *)sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66));
  v3 = result;
  if ( result )
  {
    memset(v6, 0, 64);
    v5 = 0;
    v4 = sub_606BAB1C(v6, &v5, a1 + 6104);
    result = (StateMethodExecuter *)sub_606BAAFC(v4);
    if ( result >= v3 )
      return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB7DD8);
  }
  return result;
}
