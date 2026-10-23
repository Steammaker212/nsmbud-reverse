/* sub_6076A68C
 * address: 0x6076A68C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6076A68C(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  StateMethodExecuter **v6; // r5
  StateMethodExecuter *result; // r0
  StateBase *v8; // r1

  FIELD_U32(a1, 9876) = a2;
  FIELD_U32(a1, 9836) = *a3;
  FIELD_U32(a1, 9840) = a3[1];
  FIELD_U32(a1, 9844) = a3[2];
  FIELD_U32(a1, 9820) = a5;
  v6 = (StateMethodExecuter **)(a1 + 9820);
  result = (StateMethodExecuter *)sub_60769C48(a1, a4);
  if ( result == (StateMethodExecuter *)1 )
  {
    sub_607292EC(dword_60CBD8A4, FIELD_U8(LevelInfo_instance, 18), FIELD_U8(a1, 9724));
    result = *v6;
    if ( (unsigned int)&(*v6)[-1].currentState + 2 < 2 )
    {
      v8 = (StateBase *)&unk_60CBF508;
    }
    else
    {
      if ( (unsigned int)result > 1 )
        return result;
      v8 = (StateBase *)&unk_60CBF4E4;
    }
    return sub_60766314(a1, v8, 0);
  }
  return result;
}
