/* KoopaTroopa_onExecute_helper_4094BC
 * address: 0x604094BC   size: 456   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KoopaTroopa_onExecute_helper_4094BC(int a1)
{
  char v1; // r12
  int result; // r0
  _BYTE *v4; // r11
  int *v5; // r7
  int *v6; // r5
  int v7; // r6
  int ProfileId; // r0
  bool v9; // zf
  unsigned int v10; // r0
  _DWORD *v11; // r2
  char v12; // r3

  v4 = (_BYTE *)(a1 + 6559);
  result = FIELD_U8(a1, 6559);
  if ( result == 1 )
  {
    result = FIELD_U8(a1, 6476);
    if ( result == 3 )
    {
      result = FIELD_U8(a1, 6478);
      if ( result == 3 )
      {
        v5 = *(int **)(ActorMgr__instance + 27172);
        v6 = *(int **)(ActorMgr__instance + 27180);
        if ( v5 == v6 )
        {
LABEL_15:
          v10 = FIELD_U8(a1, 6481);
          FIELD_U32(a1, 6504) = v10;
          v11 = *(_DWORD **)(a1 + 6472);
          if ( v11 && ((v12 = 2, v11[23] <= v10) || (v12 = 1, v11[22] <= v10) || (v12 = 0, v11[21] <= v10)) )
          {
            *v4 = 2;
            FIELD_U8(a1, 6560) = v12;
            return 6560;
          }
          else
          {
            result = 3;
            *v4 = 3;
          }
        }
        else
        {
          while ( 1 )
          {
            v7 = *v5;
            if ( ((unsigned int)&dword_60C7B364 & ~(1614845324 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
            {
              StageActor_RTTI = (int)&off_60BC0098;
              _cxa_guard_release(&dword_60C7B364);
            }
            if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &StageActor_RTTI) == 1 )
            {
              ProfileId = Actor__getProfileId((Actor *)v7);
              v9 = ProfileId == 512;
              if ( ProfileId != 512 )
                v9 = ProfileId == 441;
              if ( !v9 )
              {
                result = FIELD_U8(v7, 533);
                if ( result == 3 )
                  break;
              }
            }
            if ( v6 == ++v5 )
              goto LABEL_15;
          }
        }
      }
    }
  }
  return result;
}
