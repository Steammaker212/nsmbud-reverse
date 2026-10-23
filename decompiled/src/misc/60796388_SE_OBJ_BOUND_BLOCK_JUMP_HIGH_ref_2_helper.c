/* SE_OBJ_BOUND_BLOCK_JUMP_HIGH_ref_2_helper
 * address: 0x60796388   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_BOUND_BLOCK_JUMP_HIGH_ref_2_helper(int a1, float a2, float a3)
{
  int v6; // r5
  int v7; // r0
  int v8; // r6
  char v9; // r12
  int v10; // r2
  int *v11; // r1

  v6 = 0;
  if ( !sub_60766714(a1) && (FIELD_U8(a1, 6902) & 4) == 0 )
  {
    SE_OBJ_BOUND_BLOCK_JUMP_HIGH_ref_2_helper_helper_7624B4(a1);
    v7 = sub_607B939C(a1) - 1;
    if ( (FIELD_U8(a1, 6904) & 0x18) != 0 )
      v7 = -1;
    switch ( v7 )
    {
      case 0:
        FIELD_F32(a1, 88) = a3;
        Player_changeState(a1, (StateBase *)&dword_60CC4F4C, 2);
        v6 = 1;
        break;
      case 1:
        v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11408));
        if ( ((unsigned int)dword_60CAFA60 & ~(1618568288 << v9) & 1) == 0 && _cxa_guard_acquire(dword_60CAFA60) )
        {
          dword_60CAFA5C = (int)&off_60BDBC48;
          _cxa_guard_release(dword_60CAFA60);
        }
        v6 = 1;
        if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60CAFA5C) == 1 )
        {
          (*(void (__fastcall **)(int, int))(*(_DWORD *)v8 + 412))(v8, a1);
          v10 = 0;
          v11 = &dword_60CC4FAC;
          goto LABEL_16;
        }
        break;
      case 2:
        FIELD_U32(a1, 12084) = 0;
        sub_6079C40C(a1);
        v6 = 1;
        (*(void (__fastcall **)(int, int, int, _DWORD, float, float))(*(_DWORD *)a1 + 748))(a1, 1, 1, 0, a2, a3);
        break;
      case 4:
        v6 = 1;
        FIELD_U32(a1, 124) = 1082445005;
        v10 = sub_607B9CC8(a1, 2, 1);
        v11 = &dword_60CC4E0C;
        goto LABEL_16;
      default:
        FIELD_F32(a1, 124) = a2;
        FIELD_F32(a1, 88) = a3;
        v6 = 1;
        v10 = sub_607B9CC8(a1, 2, 1);
        v11 = &dword_60CC4E0C;
LABEL_16:
        Player_changeState(a1, (StateBase *)v11, v10);
        break;
    }
  }
  return v6;
}
