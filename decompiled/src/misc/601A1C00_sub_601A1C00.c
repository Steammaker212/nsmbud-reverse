/* sub_601A1C00
 * address: 0x601A1C00   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A1C00(int a1)
{
  _BYTE *v2; // r7
  int v3; // r6
  StateMethodExecuter *result; // r0
  int *v5; // r1

  v2 = (_BYTE *)(a1 + 299213);
  v3 = dword_60C99DD0;
  if ( !FIELD_U8(a1, 299213) && (sub_604B7FC8(dword_60C99DD0 + 16) || sub_604B80D0(v3 + 16) == 1) )
  {
    *v2 = 1;
    if ( FIELD_U32(v3, 3668) )
    {
      if ( sub_604B6E00() == 1 && FIELD_U8(a1, 299218) )
      {
        FIELD_U8(a1, 299218) = 0;
        sub_608169AC(dword_60CC6B68);
      }
    }
  }
  result = (StateMethodExecuter *)FIELD_U8(v3, 3793);
  if ( !FIELD_U8(v3, 3793) )
  {
    if ( FIELD_U32(v3, 3668) && sub_604B6F58() == 1 )
      v5 = &dword_60C89EBC;
    else
      v5 = &dword_60C89E1C;
    return StateMgr__changeState((StateMgr *)(a1 + 2864), (StateBase *)v5);
  }
  return result;
}
