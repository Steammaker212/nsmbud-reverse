/* SE_SYS_CB_RESULT_COIN_FINISH_ref
 * address: 0x6052B25C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_CB_RESULT_COIN_FINISH_ref(int a1)
{
  StateMethodExecuter *result; // r0
  _BYTE *v3; // r1
  unsigned int v4; // r2
  bool v5; // zf

  result = *(StateMethodExecuter **)(a1 + 3084);
  if ( result )
  {
    result = (StateMethodExecuter *)FIELD_U8(a1, 2940);
    if ( !FIELD_U8(a1, 2940) )
    {
      result = (StateMethodExecuter *)FIELD_U8(a1, 2988);
      if ( !FIELD_U8(a1, 2988) )
      {
        result = (StateMethodExecuter *)FIELD_U8(a1, 3036);
        if ( !FIELD_U8(a1, 3036) )
        {
LABEL_14:
          FIELD_U8(a1, 56) = 0;
          return StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)&dword_60CAA454);
        }
      }
    }
  }
  else
  {
    v3 = (_BYTE *)(a1 + 60);
    v4 = 0;
    while ( 1 )
    {
      v5 = *v3 == 0;
      if ( !*v3 )
        v5 = v3[48] == 0;
      if ( !v5 )
        break;
      v4 += 2;
      v3 += 96;
      if ( v4 >= 0x3C )
      {
        if ( !FIELD_U8(a1, 3229) )
          sub_60807EF0(SoundSystem_instance, "SE_SYS_CB_RESULT_COIN_FINISH", 0, 1);
        goto LABEL_14;
      }
    }
  }
  return result;
}
