/* SE_MG_CMN_WIN_ref_2
 * address: 0x6052E8F0   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_MG_CMN_WIN_ref_2(int a1)
{
  _BYTE *v2; // r5
  StateMethodExecuter *result; // r0
  int v4; // r1

  v2 = (_BYTE *)(a1 + 10981);
  if ( !FIELD_U8(a1, 10981) )
  {
    result = (StateMethodExecuter *)FIELD_U8(a1, 10978);
    if ( !FIELD_U8(a1, 10978) )
      return result;
    result = *(StateMethodExecuter **)(a1 + 11392);
    if ( result != (StateMethodExecuter *)2 )
    {
      if ( result != (StateMethodExecuter *)1 )
      {
        if ( result )
          return result;
        if ( dword_60C9CF0C )
        {
          result = (StateMethodExecuter *)FIELD_U8(dword_60C9CF0C, 21);
          if ( ((unsigned __int8)result & 8) == 0 )
            return result;
        }
        else
        {
          result = (StateMethodExecuter *)FIELD_U8(a1, 10989);
          if ( ((unsigned __int8)result & 0x20) == 0 )
            return result;
        }
        goto LABEL_17;
      }
      result = (StateMethodExecuter *)(a1 + 11400);
      v4 = FIELD_U32(a1, 11400);
      if ( !v4 )
      {
LABEL_23:
        sub_60807EF0(SoundSystem_instance, "SE_MG_CMN_WIN_CLOSE", 0, 1);
        return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CAA880);
      }
LABEL_20:
      FIELD_U32(result, 0x0) = (void *)(v4 - 1);
      return result;
    }
    if ( dword_60C9CF0C )
    {
      if ( (FIELD_U8(dword_60C9CF0C, 21) & 8) != 0 )
      {
LABEL_17:
        sub_60807EF0(SoundSystem_instance, "SE_MG_CMN_WIN_CLK", 0, 1);
        return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CAA880);
      }
    }
    else if ( (FIELD_U8(a1, 10989) & 0x20) != 0 )
    {
      goto LABEL_17;
    }
    result = (StateMethodExecuter *)(a1 + 11400);
    v4 = FIELD_U32(a1, 11400);
    if ( !v4 )
      goto LABEL_23;
    goto LABEL_20;
  }
  result = (StateMethodExecuter *)sub_6050A95C(a1 + 3760);
  if ( result == (StateMethodExecuter *)1 )
  {
    *v2 = 0;
    return 0;
  }
  return result;
}
