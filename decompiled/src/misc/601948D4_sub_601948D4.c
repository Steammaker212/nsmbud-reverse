/* sub_601948D4
 * address: 0x601948D4   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601948D4(int a1, float a2, float a3)
{
  StateMethodExecuter *result; // r0
  int v5; // r0
  bool v6; // nf
  StateBase *v7; // r1

  sub_60833AF0(a2, a3);
  result = (StateMethodExecuter *)(FIELD_U32(a1, 364) + 1);
  FIELD_U32(a1, 364) = result;
  if ( (int)result >= FIELD_U32(a1, 368) )
  {
    FIELD_U32(a1, 328) = FIELD_U32(a1, 352);
    FIELD_U32(a1, 332) = FIELD_U32(a1, 356);
    FIELD_U32(a1, 336) = FIELD_U32(a1, 360);
    FIELD_U32(a1, 324) = 1;
    v5 = FIELD_U32(a1, 320) + 1;
    v6 = FIELD_U32(a1, 320) - 19 < 0;
    FIELD_U32(a1, 320) = v5;
    if ( v6 ^ __OFSUB__(v5, 20) | (v5 == 20) )
    {
      v7 = &stru_60C89A98;
    }
    else
    {
      if ( sub_60235E50(a1 + 372) == 1 )
        EffectData_init((EffectData *)(a1 + 372));
      v7 = (StateBase *)&dword_60C89A74;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 304), v7);
  }
  return result;
}
