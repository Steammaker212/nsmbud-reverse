/* sub_603E7928
 * address: 0x603E7928   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E7928(int a1, int a2)
{
  int v4; // r4
  char v5; // r12
  unsigned int v6; // r0
  unsigned int v7; // r0
  int v8; // r0
  bool v9; // zf
  int ProfileId; // [sp+4h] [bp-14h] BYREF

  v4 = 1;
  if ( FIELD_U32(dword_60C96478, 104) != a2
    && Player_getActorSlotChecked(PlayerMgr_instance, FIELD_U32(a1, 32)) != a2 )
  {
    v6 = FIELD_U32(a1, 32);
    if ( v6 >= 4 )
      v6 = 0;
    if ( *(_DWORD *)(PlayerMgr_instance + 4 * v6 + 32) != a2 )
    {
      if ( FIELD_U8(a1, 128) )
      {
        if ( ((unsigned int)&dword_60C7B364 & ~(1614707128 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( !a2
          || (**(int (__fastcall ***)(int, int *))a2)(a2, &StageActor_RTTI) != 1
          || (v7 = FIELD_U8(a2, 533), v7 > 4)
          || ((1 << v7) & 0x16) == 0 )
        {
          if ( FIELD_U32(a1, 116) != a2 )
          {
            v8 = FIELD_U32(a1, 124);
            v9 = v8 == a2;
            if ( v8 != a2 )
              v9 = FIELD_U32(a1, 120) == a2;
            if ( !v9 )
            {
              ProfileId = Actor__getProfileId((Actor *)a2);
              if ( !sub_6000B0F8(&ProfileId) && ProfileId != 441 )
                return 0;
            }
          }
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return v4;
}
