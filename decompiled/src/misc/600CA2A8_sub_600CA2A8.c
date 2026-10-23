/* sub_600CA2A8
 * address: 0x600CA2A8   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600CA2A8(int a1)
{
  int v2; // r4
  int v3; // r5
  int result; // r0
  int i; // r6
  int v6; // r7
  int v7; // r1
  int v8; // r0
  Actor *v9; // r0
  bool v10; // zf

  v2 = PlayerMgr_instance;
  v3 = dword_60CBFA90;
  if ( sub_6077A158(dword_60CBFA90) )
  {
    FIELD_U32(a1, 6220) = 0;
    FIELD_U32(a1, 6216) = 0;
    return (int)StateMgr__changeState((StateMgr *)(a1 + 6244), (StateBase *)&dword_60C83EE0);
  }
  else
  {
    for ( i = 0; i != 4; ++i )
    {
      result = FIELD_U16(v2, 66) & (1 << i);
      if ( (FIELD_U16(v2, 66) & (unsigned __int16)(1 << i)) != 0 )
      {
        result = Player_getActorSlotChecked(v2, i);
        v6 = result;
        if ( result )
        {
          result = sub_60779FD8(v3);
          v7 = FIELD_U32(v6, 6900);
          if ( (v7 & 1) != 0 )
          {
            result ^= 1u;
            if ( !result )
              goto LABEL_8;
          }
          if ( (v7 & 1) != 0 )
          {
            if ( (FIELD_U8(v6, 6905) & 8) == 0 )
              goto LABEL_16;
            v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 80))(v6);
            if ( !v8 )
              goto LABEL_16;
            v9 = (Actor *)sub_6014B69C(v8);
            v10 = v9 == 0;
            if ( v9 )
            {
              v9 = (Actor *)v9[1].field_40;
              v10 = v9 == 0;
            }
            if ( v10 || (result = Actor__getProfileId(v9), result != 264) )
            {
LABEL_16:
              FIELD_U32(v6, 1232) |= 0x4000000u;
              result = sub_60779F74(v3, i);
              if ( result == 1 )
LABEL_8:
                result = sub_60768D14(v6, 1);
            }
          }
        }
      }
    }
  }
  return result;
}
