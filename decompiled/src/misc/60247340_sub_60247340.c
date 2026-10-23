/* sub_60247340
 * address: 0x60247340   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60247340(int a1)
{
  _DWORD *v2; // r6
  _BYTE *v3; // r7
  StateBase *CurrentState; // r0
  int v5; // r5
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r2
  int v10; // r2
  int v11; // r1
  int result; // r0

  FIELD_U32(a1, 6532) = 0;
  v2 = (_DWORD *)(a1 + 6532);
  FIELD_U8(a1, 6526) = 1;
  v3 = (_BYTE *)(a1 + 6313);
  if ( !FIELD_U8(a1, 6313) && FIELD_U8(PlayerMgr_instance, 156)
    || (CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
        v5 == (*(int (**)(void))(dword_60C8DBA4 + 8))()) )
  {
    FIELD_U32(a1, 6528) = 0;
    return 6528;
  }
  else
  {
    v6 = FIELD_U32(a1, 6316);
    if ( v6 == 1 )
    {
      FIELD_U32(a1, 6528) = 5;
      v7 = FIELD_S8(a1, 6314);
LABEL_5:
      v8 = dword_60C99D6C;
      v9 = 20;
      return sub_603EFEAC(v8, v7, v9);
    }
    if ( FIELD_U32(a1, 6320) != 1 )
    {
      v7 = FIELD_S8(a1, 6314);
      if ( (FIELD_U8(dword_60C9CF0C, 1404) & (1 << v7)) == 0 )
      {
        FIELD_U32(a1, 6528) = 2;
        v9 = 25;
        v8 = dword_60C99D6C;
        return sub_603EFEAC(v8, v7, v9);
      }
    }
    if ( v6 == 2 )
    {
      FIELD_U32(a1, 6528) = 3;
      sub_603EFEAC(dword_60C99D6C, FIELD_S8(a1, 6314), 26);
      *v2 = 120;
      return 120;
    }
    else
    {
      result = a1 + 6528;
      if ( FIELD_U8(dword_60C99D88, 31) )
      {
        *(_DWORD *)result = 5;
        if ( !*v3 )
        {
          v7 = FIELD_S8(a1, 6314);
          goto LABEL_5;
        }
        v10 = ((int (__fastcall *)(int))loc_60245C6C)(a1);
        v11 = FIELD_S8(a1, 6314);
        if ( v10 == 1 )
        {
          sub_603EFEAC(dword_60C99D6C, v11, 30);
          result = 4;
        }
        else
        {
          sub_603EFEAC(dword_60C99D6C, v11, 20);
          result = 2;
        }
        FIELD_U32(a1, 6540) = result;
      }
      else
      {
        *(_DWORD *)result = 4;
      }
    }
  }
  return result;
}
