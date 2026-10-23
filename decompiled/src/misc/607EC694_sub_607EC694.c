/* sub_607EC694
 * address: 0x607EC694   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607EC694(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0
  int *v4; // r1

  result = (StateMethodExecuter *)sub_607F6ABC(dword_60CC62E4);
  if ( !result )
  {
    v3 = dword_60C99DEC;
    if ( FIELD_U8(dword_60C99DEC, 524) )
    {
      FIELD_U8(a1, 66762) = 1;
      FIELD_U8(v3, 524) = 0;
      FIELD_U32(v3, 508) = 2;
      v4 = &dword_60CC5C2C;
    }
    else
    {
      v4 = &dword_60CC5BCC;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 216), (StateBase *)v4);
  }
  return result;
}
