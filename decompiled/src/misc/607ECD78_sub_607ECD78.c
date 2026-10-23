/* sub_607ECD78
 * address: 0x607ECD78   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607ECD78(int a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r1
  int v4; // r0
  int v5; // r0

  result = (StateMethodExecuter *)dword_60CA146C;
  if ( !FIELD_U8(dword_60CA146C, 279732) )
  {
    if ( FIELD_U8(dword_60CA146C, 279729) )
    {
      if ( FIELD_U32(dword_60C99DEC, 508) == 4 )
      {
        v3 = &dword_60CC5BCC;
      }
      else
      {
        sub_60515B5C(a1 + 14376);
        v3 = &dword_60CC5C2C;
      }
    }
    else if ( FIELD_U8(dword_60CA146C, 279728) )
    {
      v3 = &dword_60CC5C8C;
    }
    else
    {
      v4 = FIELD_U32(dword_60C99DEC, 508);
      if ( v4 == 4 )
      {
        v3 = &dword_60CC5D2C;
      }
      else if ( v4 == 1 )
      {
        v3 = &dword_60CC5D4C;
      }
      else if ( v4 )
      {
        v3 = &dword_60CC5D6C;
      }
      else
      {
        v5 = FIELD_U32(dword_60CC6E04, 40) + 520 * *(unsigned __int8 *)(FIELD_U32(dword_60CC6E04, 40) + 7);
        if ( FIELD_U8(v5, 16) && !FIELD_U8(v5, 3136) )
          v3 = &dword_60CC5D0C;
        else
          v3 = &dword_60CC5CEC;
      }
    }
    return StateMgr__changeState((StateMgr *)(a1 + 216), (StateBase *)v3);
  }
  return result;
}
