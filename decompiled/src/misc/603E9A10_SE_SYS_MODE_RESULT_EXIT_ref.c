/* SE_SYS_MODE_RESULT_EXIT_ref
 * address: 0x603E9A10   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_MODE_RESULT_EXIT_ref(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  unsigned int i; // r6
  unsigned int v6; // r1
  int v7; // r2
  unsigned int v8; // r1
  unsigned int v9; // r3
  int v10; // r5
  StateMethodExecuter *result; // r0

  v2 = FIELD_U32(a1, 32);
  if ( v2 >= 1 )
  {
    v3 = v2 - 1;
    FIELD_U32(a1, 32) = v3;
    if ( !v3 )
    {
      v4 = FIELD_U32(a1, 60);
      if ( v4 >= 1 )
      {
        for ( i = 0; (int)i < v4; ++i )
        {
          v6 = 0;
          v7 = FIELD_U8(a1, 84);
          if ( i < 4 )
            v6 = i;
          v8 = *(_DWORD *)(a1 + 4 * v6 + 64);
          if ( (v7 & (1 << v8)) == 0 )
          {
            v9 = 0;
            if ( v8 < 4 )
              v9 = v8;
            v10 = *(_DWORD *)(PlayerMgr_instance + 4 * v9 + 32);
            if ( (FIELD_U8(v10, 1204) & 0x10) != 0 )
            {
              ++FIELD_U32(a1, 32);
            }
            else
            {
              FIELD_U8(a1, 84) = (1 << v8) | v7;
              sub_60768F28(v10, 191, 0);
              FIELD_U32(v10, 1208) |= 0x2000000u;
              v4 = FIELD_U32(a1, 60);
            }
          }
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
