/* sub_6079E494
 * address: 0x6079E494   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6079E494(int a1)
{
  int v2; // r0
  bool v3; // zf
  unsigned int v4; // r1
  int v5; // r5
  char v6; // r12

  if ( !sub_60766708(a1) && (FIELD_U8(a1, 1224) & 0x10) != 0 && (FIELD_U8(a1, 1238) & 1) == 0 )
  {
    v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1);
    v3 = v2 == 0;
    if ( !v2 )
      v3 = (FIELD_U8(a1, 1206) & 8) == 0;
    if ( v3 )
    {
      v4 = FIELD_U32(a1, 12148);
      if ( v4 )
      {
        v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v4);
        if ( ((unsigned int)&dword_60C7B364 & ~(1618601252 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v5
          && (**(int (__fastcall ***)(int, int *))v5)(v5, &StageActor_RTTI) == 1
          && (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 88))(v5) == 1
          && !((int (__fastcall *)(int))loc_60763E28)(a1) )
        {
          sub_6079E27C(a1, FIELD_U32(a1, 12148), 0);
        }
      }
    }
  }
}
