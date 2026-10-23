/* sub_605E995C
 * address: 0x605E995C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605E995C(int a1)
{
  StateMethodExecuter *result; // r0
  bool v3; // zf
  int v4; // r5
  int i; // r6
  int v6; // r1
  int v7; // r2

  result = (StateMethodExecuter *)FIELD_U8(dword_60CC6D78, 109032);
  v3 = result == 0;
  if ( FIELD_U8(dword_60CC6D78, 109032) )
  {
    result = *(StateMethodExecuter **)(a1 + 36);
    v3 = result == 0;
  }
  if ( !v3 )
  {
    result = StateMgr__changeState((StateMgr *)(a1 + 332), (StateBase *)&dword_60CB1BE8);
    v4 = FIELD_U32(a1, 36);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = FIELD_U32(a1, 28);
        v7 = FIELD_U32(a1, 32);
        if ( i + v7 >= v6 )
          v7 -= v6;
        result = (StateMethodExecuter *)sub_605E1DAC(*(_DWORD *)(FIELD_U32(a1, 24) + 4 * (i + v7)));
      }
    }
  }
  return result;
}
