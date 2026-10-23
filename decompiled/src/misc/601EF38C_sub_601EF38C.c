/* sub_601EF38C
 * address: 0x601EF38C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601EF38C(int a1)
{
  int v2; // r0
  StateMethodExecuter *result; // r0
  unsigned int v4; // r0
  StateBase *v5; // r1
  int speed; // [sp+4h] [bp-Ch] BYREF

  v2 = FIELD_U32(a1, 376);
  if ( v2 )
  {
    result = (StateMethodExecuter *)(v2 - 1);
    FIELD_U32(a1, 376) = result;
  }
  else
  {
    speed = 0x20000000;
    moveValueTo((int *)(a1 + 180), (int *)(a1 + 412), &speed);
    result = *(StateMethodExecuter **)(a1 + 180);
    if ( result == *(StateMethodExecuter **)(a1 + 412) )
    {
      v4 = FIELD_U32(dword_60CC6D78, 412);
      if ( v4 > 4 || FIELD_U32(a1, 364) )
      {
        v5 = (StateBase *)&unk_60C8B4A0;
      }
      else
      {
        FIELD_U32(a1, 424) = dword_60AFD244[v4];
        v5 = (StateBase *)&unk_60C8B47C;
      }
      return StateMgr__changeState((StateMgr *)(a1 + 300), v5);
    }
  }
  return result;
}
