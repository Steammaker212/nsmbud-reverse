/* SE_SYS_MODE_RESULT_EXIT_ref_3E9C18
 * address: 0x603E9C18   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_MODE_RESULT_EXIT_ref_3E9C18(int a1)
{
  int v2; // r0
  unsigned int v3; // r1
  int v4; // r3
  int v5; // r5
  int v6; // r5
  StateMethodExecuter *result; // r0

  v2 = FIELD_U32(a1, 32);
  if ( v2 >= 1 )
  {
    FIELD_U32(a1, 32) = v2 - 1;
    if ( v2 == 1 )
    {
      v3 = FIELD_U32(a1, 36);
      v4 = FIELD_U8(a1, 84);
      if ( (v4 & (1 << v3)) == 0 )
      {
        v5 = FIELD_U32(a1, 36);
        if ( v3 >= 4 )
          v5 = 0;
        v6 = *(_DWORD *)(PlayerMgr_instance + 4 * v5 + 32);
        if ( (FIELD_U8(v6, 1204) & 0x10) != 0 )
        {
          FIELD_U32(a1, 32) = 1;
        }
        else
        {
          FIELD_U8(a1, 84) = (1 << v3) | v4;
          sub_60768F28(v6, 191, 0);
          FIELD_U32(v6, 1208) |= 0x2000000u;
        }
      }
    }
  }
  result = (StateMethodExecuter *)FIELD_U8(dword_60C9CF0C, 21);
  if ( ((unsigned __int8)result & 8) != 0 )
  {
    sub_60807EF0(SoundSystem_instance, "SE_SYS_MODE_RESULT_EXIT", 0, 1);
    return StateMgr__changeState((StateMgr *)(a1 + 108), (StateBase *)&dword_60C99A00);
  }
  return result;
}
