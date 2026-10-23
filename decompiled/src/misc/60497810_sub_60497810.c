/* sub_60497810
 * address: 0x60497810   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60497810(int a1)
{
  int v2; // r5
  int *v3; // r0
  StateBase *v4; // r1

  if ( FIELD_U8(a1, 146855) )
    v2 = sub_60515AC0(a1 + 98748);
  else
    v2 = FIELD_U32(a1, 146864);
  if ( sub_6045A444(dword_60C9CFB8, v2) == 1 )
  {
    sub_6045BE8C(dword_60C9CFB8, v2);
    v3 = (int *)(a1 + 146864);
    if ( dword_60C99DD4 && *v3 >= v2 )
    {
      if ( FIELD_U32(a1, 146848) >= v2 )
        FIELD_U32(a1, 146848) = 0;
      FIELD_U8(a1, 56) = 1;
      v4 = (StateBase *)&dword_60CA05A0;
    }
    else
    {
      *v3 = v2;
      FIELD_U8(a1, 56) = 1;
      v4 = (StateBase *)&unk_60CA0620;
    }
  }
  else if ( *(_DWORD *)(sub_60834614() + 492) )
  {
    FIELD_U8(a1, 146852) = 1;
    FIELD_U8(a1, 56) = 1;
    v4 = (StateBase *)&dword_60CA05A0;
  }
  else
  {
    sub_60515B5C(a1 + 98748);
    FIELD_U8(a1, 56) = 1;
    v4 = (StateBase *)&unk_60CA05E0;
  }
  return StateMgr__changeState((StateMgr *)(a1 + 40), v4);
}
