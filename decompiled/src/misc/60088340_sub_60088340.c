/* sub_60088340
 * address: 0x60088340   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60088340(int a1)
{
  _DWORD *v2; // r0
  int v3; // r6
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  char v7; // r12
  int v8; // r5
  _DWORD *v9; // r1
  unsigned int v10; // r0
  _DWORD *v11; // r1
  unsigned int v12; // r0
  int v13; // r4
  char v14; // r12

  v3 = a1 + 7100;
  v2 = *(_DWORD **)(a1 + 7100);
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
  {
    v8 = FIELD_U32(EnemyCounterMaybe_instance, 24);
    if ( ((unsigned int)&dword_60C81200 & ~(1611170720 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C81200) )
    {
      dword_60C811FC = (int)&off_60BC210C;
      _cxa_guard_release(&dword_60C81200);
    }
    if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C811FC) == 1 )
      FIELD_U8(v8, 6222) = 1;
  }
  v9 = *(_DWORD **)(*(_DWORD *)v3 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v10 )
    v9 += v10;
  if ( sub_60418548(*v9 + 4) )
    sub_60813430(a1 + 6332, "SE_VOC_JR_CRYING", 0);
  v11 = *(_DWORD **)(*(_DWORD *)v3 + 12);
  v12 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v12 )
    v11 += v12;
  if ( sub_60418548(*v11 + 4) )
  {
    sub_60813430(a1 + 6332, "SE_BOSS_JR_JUMP_L", 0);
    sub_60813430(a1 + 6332, "SE_VOC_JR_ESCAPE", 0);
  }
  if ( FIELD_U16(a1, 6276) == 1 )
  {
    PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, a1 + 6644);
    v13 = FIELD_U32(EnemyCounterMaybe_instance, 24);
    if ( ((unsigned int)&dword_60C81200 & ~(1611171068 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C81200) )
    {
      dword_60C811FC = (int)&off_60BC210C;
      _cxa_guard_release(&dword_60C81200);
    }
    if ( v13 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v13)(v13, &dword_60C811FC) == 1 )
        FIELD_U8(v13, 6223) = 1;
    }
  }
}
