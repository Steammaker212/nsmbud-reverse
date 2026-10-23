/* sub_607F42CC
 * address: 0x607F42CC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F42CC(int a1)
{
  int v2; // r0
  bool v3; // cc
  StateMethodExecuter *result; // r0

  v2 = FIELD_U32(a1, 44);
  if ( v2 )
  {
    v3 = v2 <= 1;
    result = (StateMethodExecuter *)(v2 - 1);
    FIELD_U32(a1, 44) = result;
    if ( v3 )
    {
      FIELD_U32(a1, 40) = FIELD_U32(dword_60CA059C, 146848);
      FIELD_U32(a1, 52) = 0;
      return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CC6160);
    }
  }
  else
  {
    sub_60499498(dword_60CA059C);
    result = (StateMethodExecuter *)FIELD_U8(dword_60CA059C, 146856);
    if ( !FIELD_U8(dword_60CA059C, 146856) )
    {
      FIELD_U32(a1, 44) = 1;
      return (StateMethodExecuter *)1;
    }
  }
  return result;
}
