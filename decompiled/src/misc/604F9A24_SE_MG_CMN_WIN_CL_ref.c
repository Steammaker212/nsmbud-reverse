/* SE_MG_CMN_WIN_CL_ref
 * address: 0x604F9A24   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_MG_CMN_WIN_CL_ref(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  int *v4; // r1
  StateMgr *v5; // r0

  result = *(StateMethodExecuter **)(a1 + 4112);
  if ( result == (StateMethodExecuter *)2 )
  {
    if ( dword_60C9CF0C )
    {
      if ( (FIELD_U8(dword_60C9CF0C, 21) & 8) != 0 )
      {
LABEL_21:
        sub_60807EF0(SoundSystem_instance, "SE_MG_CMN_WIN_CLK", 0, 1);
        v5 = (StateMgr *)(a1 + 24);
        if ( FIELD_U32(a1, 4100) >= FIELD_U32(a1, 4104) )
          v4 = &dword_60CA6F74;
        else
          v4 = &dword_60CA6FB4;
        return StateMgr__changeState(v5, (StateBase *)v4);
      }
    }
    else if ( (FIELD_U8(a1, 3697) & 0x20) != 0 )
    {
      goto LABEL_21;
    }
    result = (StateMethodExecuter *)(a1 + 4120);
    v3 = FIELD_U32(a1, 4120);
    if ( !v3 )
    {
      if ( FIELD_U32(a1, 4100) < FIELD_U32(a1, 4104) )
      {
        v4 = &dword_60CA6FD4;
        goto LABEL_29;
      }
LABEL_28:
      sub_60807EF0(SoundSystem_instance, "SE_MG_CMN_WIN_CLOSE", 0, 1);
      v4 = &dword_60CA6F94;
      goto LABEL_29;
    }
LABEL_19:
    FIELD_U32(result, 0x0) = (void *)(v3 - 1);
    return result;
  }
  if ( result == (StateMethodExecuter *)1 )
  {
    result = (StateMethodExecuter *)(a1 + 4120);
    v3 = FIELD_U32(a1, 4120);
    if ( !v3 )
    {
      if ( FIELD_U32(a1, 4100) < FIELD_U32(a1, 4104) )
      {
        v4 = &dword_60CA6FD4;
LABEL_29:
        v5 = (StateMgr *)(a1 + 24);
        return StateMgr__changeState(v5, (StateBase *)v4);
      }
      goto LABEL_28;
    }
    goto LABEL_19;
  }
  if ( !result )
  {
    if ( dword_60C9CF0C )
    {
      result = (StateMethodExecuter *)FIELD_U8(dword_60C9CF0C, 21);
      if ( ((unsigned __int8)result & 8) == 0 )
        return result;
    }
    else
    {
      result = (StateMethodExecuter *)FIELD_U8(a1, 3697);
      if ( ((unsigned __int8)result & 0x20) == 0 )
        return result;
    }
    sub_60807EF0(SoundSystem_instance, "SE_MG_CMN_WIN_CLK", 0, 1);
    v5 = (StateMgr *)(a1 + 24);
    if ( FIELD_U32(a1, 4100) >= FIELD_U32(a1, 4104) )
      v4 = &dword_60CA6F74;
    else
      v4 = &dword_60CA6FB4;
    return StateMgr__changeState(v5, (StateBase *)v4);
  }
  return result;
}
