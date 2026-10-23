/* SE_SYS_BACK_ref_49E394
 * address: 0x6049E394   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_BACK_ref_49E394(int a1)
{
  int result; // r0
  int v3; // r1
  int *v4; // r1
  int v5; // r2
  int v6; // r3
  __int16 v7; // r2
  int *v8; // r0
  StateMgr *v9; // r0

  v3 = a1 + 4664;
  result = FIELD_U32(a1, 4664);
  if ( !FIELD_U8(v3, 14) )
  {
    if ( FIELD_U8(a1, 4679) )
    {
      if ( result == 5 )
      {
        v9 = (StateMgr *)(a1 + 24);
        if ( FIELD_U32(a1, 22480) == 2 )
          v4 = &dword_60CA0F8C;
        else
          v4 = &dword_60CA0E6C;
        return (int)StateMgr__changeState(v9, (StateBase *)v4);
      }
      if ( result != 4 )
        return result;
      v4 = &dword_60CA0DAC;
    }
    else
    {
      v5 = FIELD_U32(a1, 20316);
      if ( (v5 & 0x4000) != 0 || (v6 = FIELD_U32(a1, 21932), (v6 & 0x4000) != 0) )
      {
        sub_60502548(v3 - 1028);
        sub_60807EF0(SoundSystem_instance, "SE_SYS_BACK", 0, 1);
        v4 = &dword_60CA0DAC;
      }
      else
      {
        v7 = v5 | v6;
        if ( (v7 & 0x80) != 0 )
        {
          *(_DWORD *)v3 = 5;
          return 5;
        }
        if ( (v7 & 0x40) != 0 )
        {
          *(_DWORD *)v3 = 4;
          return 4;
        }
        if ( (v7 & 0x2000) == 0 )
          return result;
        if ( result == 4 )
        {
          v8 = &dword_60CA0DAC;
        }
        else
        {
          v8 = &dword_60CA0E6C;
          if ( FIELD_U32(a1, 22480) == 2 )
            v8 = &dword_60CA0F8C;
        }
        FIELD_U32(a1, 40) = v8;
        v4 = &dword_60CA0C4C;
      }
    }
    v9 = (StateMgr *)(a1 + 24);
    return (int)StateMgr__changeState(v9, (StateBase *)v4);
  }
  return result;
}
