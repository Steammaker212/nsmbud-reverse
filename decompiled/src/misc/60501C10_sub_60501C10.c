/* sub_60501C10
 * address: 0x60501C10   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60501C10(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r5
  unsigned int v4; // r0
  int *v5; // r1

  result = (StateMethodExecuter *)FIELD_U8(a1, 1052);
  if ( result )
  {
    v3 = 0;
    FIELD_U8(a1, 1052) = 0;
    sub_604020F0((_BYTE *)dword_60C99E68, FIELD_U32(a1, 1036));
    v4 = FIELD_U32(a1, 1028);
    if ( v4 == 256 )
    {
      v5 = &dword_60CA765C;
    }
    else
    {
      if ( v4 < 0x100 )
        v3 = FIELD_U32(a1, 1028);
      if ( (*(_DWORD *)(a1 + 4 * v3 + 1056) | 2) == 2 )
        v5 = &dword_60CA765C;
      else
        v5 = &dword_60CA769C;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v5);
  }
  return result;
}
