/* sub_60755C38
 * address: 0x60755C38   size: 896   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60755C38(int a1, _DWORD *a2, int a3, int a4)
{
  int v8; // r6
  int v9; // r5
  char *v10; // r6
  signed int i; // r7
  char *v12; // r8
  signed int j; // r7
  int v14; // r6
  signed int v16; // r0
  signed int v17; // r0
  int v18; // r1
  int v19; // r5
  const char *v20[10]; // [sp+0h] [bp-28h] BYREF

  if ( Player_registerRideAnimations() == 1 )
  {
    v8 = **(_DWORD **)(FIELD_U32(a1, 292) + 12);
    SkeletalAnim_play(v8, FIELD_U32(a1, 544), (const char **)&dword_60CBECA0);
    v9 = 1;
    AnimationCtrl_setRepeat((ModelAnimation *)(v8 + 4), 1);
    FIELD_U32(v8, 24) = 1065353216;
    FIELD_U32(v8, 20) = 0;
    FIELD_U32(v8, 28) |= 2u;
    (*(void (__fastcall **)(_DWORD, _DWORD, float))(***(_DWORD ***)(a1 + 292) + 164))(**(_DWORD **)(a1 + 292), 0, 1.0);
    sub_60448AF4(**(_DWORD **)(FIELD_U32(a1, 292) + 12), 0);
LABEL_22:
    sub_6040EB10(a1 + 564, 20.0);
    return v9;
  }
  if ( FIELD_U32(a1, 300) == 5 )
  {
    *a2 = FIELD_U32(a1, 1056);
    if ( a4 == 98 )
    {
      v10 = *(char **)(a3 + 4);
      if ( v10 != "goal_puton_cap" )
      {
        for ( i = 0; aGoalPutonCap[i]; i += 2 )
        {
          if ( i > 0x7FFFF )
          {
            i = 0;
            break;
          }
          if ( !aGoalPutonCap[i + 1] )
          {
            ++i;
            break;
          }
        }
        v16 = FIELD_U32(a3, 8);
        if ( i >= v16 )
          i = v16 - 1;
        qmemcpy(*(void **)(a3 + 4), "goal_puton_cap", i);
        v10[i] = 0;
      }
      v9 = 1;
      FIELD_U8(a1, 905) = 1;
    }
    else
    {
      v9 = 1;
      FIELD_U8(a1, 905) = a4 == 91;
    }
  }
  else
  {
    if ( a4 != 98 )
    {
      v14 = **(_DWORD **)(FIELD_U32(a1, 292) + 12);
      SkeletalAnim_play(v14, FIELD_U32(a1, 544), (const char **)&dword_60CBECA0);
      AnimationCtrl_setRepeat((ModelAnimation *)(v14 + 4), 1);
      v9 = 0;
      FIELD_U32(v14, 24) = 1065353216;
      FIELD_U32(v14, 20) = 0;
      FIELD_U32(v14, 28) |= 2u;
      (*(void (__fastcall **)(_DWORD, _DWORD, float))(***(_DWORD ***)(a1 + 292) + 164))(**(_DWORD **)(a1 + 292), 0, 1.0);
      sub_60448AF4(**(_DWORD **)(FIELD_U32(a1, 292) + 12), 0);
      goto LABEL_22;
    }
    v12 = *(char **)(a3 + 4);
    if ( v12 != "CB_Rgoal_puton_cap" )
    {
      for ( j = 0; aCbRgoalPutonCa[j]; j += 2 )
      {
        if ( j > 0x7FFFF )
        {
          j = 0;
          break;
        }
        if ( !aCbRgoalPutonCa[j + 1] )
        {
          ++j;
          break;
        }
      }
      v17 = FIELD_U32(a3, 8);
      if ( j >= v17 )
        j = v17 - 1;
      qmemcpy(*(void **)(a3 + 4), "CB_Rgoal_puton_cap", j);
      v12[j] = 0;
    }
    *a2 = FIELD_U32(a1, 544);
    FIELD_U32(a1, 196) |= 0x200000u;
    FIELD_U32(a1, 200) |= 0x200000u;
    v18 = FIELD_U32(a1, 544);
    v20[0] = (const char *)&sead__SafeStringBase__vtable;
    v20[1] = "CH_Rgoal_puton_cap";
    v19 = **(_DWORD **)(FIELD_U32(a1, 292) + 12);
    SkeletalAnim_play(v19, v18, v20);
    AnimationCtrl_setRepeat((ModelAnimation *)(v19 + 4), 0);
    FIELD_U32(v19, 24) = 1065353216;
    FIELD_U32(v19, 20) = 0;
    FIELD_U32(v19, 28) |= 2u;
    (*(void (__fastcall **)(_DWORD, _DWORD, float))(***(_DWORD ***)(a1 + 292) + 164))(**(_DWORD **)(a1 + 292), 0, 1.0);
    sub_60448AF4(**(_DWORD **)(FIELD_U32(a1, 292) + 12), 0);
    sub_6040EB10(a1 + 564, 20.0);
    return 1;
  }
  return v9;
}
