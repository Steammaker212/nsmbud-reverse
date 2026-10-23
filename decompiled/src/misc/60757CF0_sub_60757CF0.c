/* sub_60757CF0
 * address: 0x60757CF0   size: 1888   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60757CF0(int a1, int a2)
{
  char *v4; // r5
  signed int v5; // r6
  const char *v6; // r1
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r2
  int *v10; // r0
  int v11; // r4
  int (**v12)(); // [sp+4h] [bp-44h] BYREF
  char *v13; // [sp+8h] [bp-40h]
  int v14; // [sp+Ch] [bp-3Ch]
  char v15; // [sp+10h] [bp-38h] BYREF

  v13 = &v15;
  v12 = &BufferedSafeStringBase_char_vtable_probably;
  v14 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v12);
  switch ( a2 )
  {
    case 2:
      v4 = v13;
      if ( v13 == "KH_goal_puton_cap" )
        goto LABEL_136;
      v5 = 0;
      break;
    case 4:
      v4 = v13;
      if ( v13 == "KH_P_goal_puton_cap" )
        goto LABEL_136;
      v5 = 0;
      while ( 2 )
      {
        if ( aKhPGoalPutonCa[v5] )
        {
          if ( v5 > 0x7FFFF )
          {
            v5 = 0;
          }
          else
          {
            if ( aKhPGoalPutonCa[v5 + 1] )
            {
              v5 += 2;
              continue;
            }
            ++v5;
          }
        }
        break;
      }
      if ( v5 >= v14 )
        v5 = v14 - 1;
      v6 = "KH_P_goal_puton_cap";
      goto LABEL_135;
    case 5:
      v4 = v13;
      if ( v13 == "KH_M_goal_puton_cap" )
        goto LABEL_136;
      v5 = 0;
      while ( 2 )
      {
        if ( aKhMGoalPutonCa[v5] )
        {
          if ( v5 > 0x7FFFF )
          {
            v5 = 0;
          }
          else
          {
            if ( aKhMGoalPutonCa[v5 + 1] )
            {
              v5 += 2;
              continue;
            }
            ++v5;
          }
        }
        break;
      }
      if ( v5 >= v14 )
        v5 = v14 - 1;
      v6 = "KH_M_goal_puton_cap";
      goto LABEL_135;
    case 7:
      v4 = v13;
      if ( v13 == "KH_M_Rgoal_puton_cap" )
        goto LABEL_136;
      v5 = 0;
      while ( 2 )
      {
        if ( aKhMRgoalPutonC[v5] )
        {
          if ( v5 > 0x7FFFF )
          {
            v5 = 0;
          }
          else
          {
            if ( aKhMRgoalPutonC[v5 + 1] )
            {
              v5 += 2;
              continue;
            }
            ++v5;
          }
        }
        break;
      }
      if ( v5 >= v14 )
        v5 = v14 - 1;
      v6 = "KH_M_Rgoal_puton_cap";
      goto LABEL_135;
    case 20:
      v4 = v13;
      if ( v13 == "KH_dm_glad_wait" )
        goto LABEL_136;
      v5 = 0;
      while ( 2 )
      {
        if ( aKhDmGladWait[v5] )
        {
          if ( v5 > 0x7FFFF )
          {
            v5 = 0;
          }
          else
          {
            if ( aKhDmGladWait[v5 + 1] )
            {
              v5 += 2;
              continue;
            }
            ++v5;
          }
        }
        break;
      }
      if ( v5 >= v14 )
        v5 = v14 - 1;
      v6 = "KH_dm_glad_wait";
      goto LABEL_135;
    case 23:
      v4 = v13;
      if ( v13 == "KH_MG_glad" )
        goto LABEL_136;
      v5 = 0;
      while ( 2 )
      {
        if ( aKhMgGlad[v5] )
        {
          if ( v5 > 0x7FFFF )
          {
            v5 = 0;
          }
          else
          {
            if ( aKhMgGlad[v5 + 1] )
            {
              v5 += 2;
              continue;
            }
            ++v5;
          }
        }
        break;
      }
      if ( v5 >= v14 )
        v5 = v14 - 1;
      v6 = "KH_MG_glad";
      goto LABEL_135;
    case 24:
      v4 = v13;
      if ( v13 == "KH_MG_sad" )
        goto LABEL_136;
      v5 = 0;
      while ( 2 )
      {
        if ( aKhMgSad[v5] )
        {
          if ( v5 > 0x7FFFF )
          {
            v5 = 0;
          }
          else
          {
            if ( aKhMgSad[v5 + 1] )
            {
              v5 += 2;
              continue;
            }
            ++v5;
          }
        }
        break;
      }
      if ( v5 >= v14 )
        v5 = v14 - 1;
      v6 = "KH_MG_sad";
      goto LABEL_135;
    case 27:
      v4 = v13;
      if ( v13 == "KH_dm_thanksgift" )
        goto LABEL_136;
      v5 = 0;
      while ( 2 )
      {
        if ( aKhDmThanksgift[v5] )
        {
          if ( v5 > 0x7FFFF )
          {
            v5 = 0;
          }
          else
          {
            if ( aKhDmThanksgift[v5 + 1] )
            {
              v5 += 2;
              continue;
            }
            ++v5;
          }
        }
        break;
      }
      if ( v5 >= v14 )
        v5 = v14 - 1;
      v6 = "KH_dm_thanksgift";
      goto LABEL_135;
    case 28:
      v4 = v13;
      if ( v13 == "KH_dm_hail" )
        goto LABEL_136;
      v5 = 0;
      while ( 2 )
      {
        if ( aKhDmHail[v5] )
        {
          if ( v5 > 0x7FFFF )
          {
            v5 = 0;
          }
          else
          {
            if ( aKhDmHail[v5 + 1] )
            {
              v5 += 2;
              continue;
            }
            ++v5;
          }
        }
        break;
      }
      if ( v5 >= v14 )
        v5 = v14 - 1;
      v6 = "KH_dm_hail";
      goto LABEL_135;
    case 29:
      v4 = v13;
      if ( v13 == "KH_dm_damage" )
        goto LABEL_136;
      v5 = 0;
      while ( 2 )
      {
        if ( aKhDmDamage[v5] )
        {
          if ( v5 > 0x7FFFF )
          {
            v5 = 0;
          }
          else
          {
            if ( aKhDmDamage[v5 + 1] )
            {
              v5 += 2;
              continue;
            }
            ++v5;
          }
        }
        break;
      }
      if ( v5 >= v14 )
        v5 = v14 - 1;
      v6 = "KH_dm_damage";
      goto LABEL_135;
    case 30:
      v4 = v13;
      if ( v13 == "KH_dm_awawa" )
        goto LABEL_136;
      v5 = 0;
      while ( 2 )
      {
        if ( aKhDmAwawa[v5] )
        {
          if ( v5 > 0x7FFFF )
          {
            v5 = 0;
          }
          else
          {
            if ( aKhDmAwawa[v5 + 1] )
            {
              v5 += 2;
              continue;
            }
            ++v5;
          }
        }
        break;
      }
      if ( v5 >= v14 )
        v5 = v14 - 1;
      v6 = "KH_dm_awawa";
      goto LABEL_135;
    case 31:
      v4 = v13;
      if ( v13 == "KH_dm_shoot" )
        goto LABEL_136;
      v5 = 0;
      while ( 2 )
      {
        if ( aKhDmShoot[v5] )
        {
          if ( v5 > 0x7FFFF )
          {
            v5 = 0;
          }
          else
          {
            if ( aKhDmShoot[v5 + 1] )
            {
              v5 += 2;
              continue;
            }
            ++v5;
          }
        }
        break;
      }
      if ( v5 >= v14 )
        v5 = v14 - 1;
      v6 = "KH_dm_shoot";
LABEL_135:
      qmemcpy(v4, v6, v5);
      v4[v5] = 0;
LABEL_136:
      v7 = FIELD_U32(a1, 292);
      v8 = FIELD_U32(a1, 16);
      v9 = FIELD_U32(v7, 16);
      v10 = *(int **)(v7 + 20);
      if ( v9 > 1 )
        ++v10;
      v11 = *v10;
      TexAnim_play(*v10, v8, &v12);
      AnimationCtrl_setRepeat((ModelAnimation *)(v11 + 4), 0);
      return;
    default:
      sub_6078F234(a1, a2);
      return;
  }
  while ( 1 )
  {
    if ( !aKhGoalPutonCap[v5] )
      goto LABEL_88;
    if ( v5 > 0x7FFFF )
      break;
    if ( !aKhGoalPutonCap[v5 + 1] )
    {
      ++v5;
LABEL_88:
      if ( v5 >= v14 )
        v5 = v14 - 1;
      v6 = "KH_goal_puton_cap";
      goto LABEL_135;
    }
    v5 += 2;
  }
  v5 = 0;
  goto LABEL_88;
}
