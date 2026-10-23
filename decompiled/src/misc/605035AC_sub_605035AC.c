/* sub_605035AC
 * address: 0x605035AC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605035AC(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r5
  unsigned int v4; // r0
  int *v5; // r1

  result = (StateMethodExecuter *)FIELD_U8(a1, 740);
  if ( result )
  {
    v3 = 0;
    FIELD_U8(a1, 740) = 0;
    sub_604020F0((_BYTE *)dword_60C99E68, FIELD_U32(a1, 724));
    v4 = FIELD_U32(a1, 716);
    if ( v4 == 99 )
    {
      v5 = &dword_60CA7708;
    }
    else
    {
      if ( v4 < 0x63 )
        v3 = FIELD_U32(a1, 716);
      if ( (*(_DWORD *)(a1 + 4 * v3 + 744) | 2) == 2 )
        v5 = &dword_60CA7708;
      else
        v5 = &dword_60CA7748;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v5);
  }
  return result;
}
