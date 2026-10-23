/* sub_603AAEBC
 * address: 0x603AAEBC   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603AAEBC(int a1)
{
  _DWORD *v2; // r5
  StateMethodExecuter *result; // r0
  int v4; // r1
  unsigned int v5; // r0

  v2 = (_DWORD *)(a1 + 6104);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6104));
  result = (StateMethodExecuter *)dword_60C97A54[5 * v2[2] + 3];
  if ( result != (StateMethodExecuter *)1 )
  {
    v4 = *(_DWORD *)(*v2 + 12);
    v5 = *(_DWORD *)(*v2 + 68);
    if ( *(_DWORD *)(*v2 + 8) > v5 )
      v4 += 4 * v5;
    result = (StateMethodExecuter *)*(unsigned __int8 *)(*(_DWORD *)v4 + 28);
    if ( ((unsigned __int8)result & 0x20) != 0 )
      return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C97AE8);
  }
  return result;
}
