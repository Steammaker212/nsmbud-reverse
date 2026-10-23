/* Player_animSetCarry_load
 * address: 0x6078F32C   size: 6892   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078F32C(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v9; // r7
  int v10; // r0
  int *v11; // r10
  const void **v12; // r10
  _BYTE *v13; // t1
  void *v14; // r7
  const void *v15; // r11
  _BYTE *v16; // r0
  signed int v17; // r6
  bool v18; // cc
  char *v19; // r7
  signed int v20; // r5
  signed int v21; // r0
  int v22; // r0
  signed int v23; // r0
  const char *v24; // r1
  signed int v25; // r0
  signed int v26; // r0
  signed int v27; // r0
  signed int v28; // r0
  signed int v29; // r0
  signed int v30; // r0
  signed int v31; // r0
  signed int v32; // r0
  signed int v33; // r0
  signed int v34; // r0
  signed int v35; // r0
  signed int v36; // r0
  signed int v37; // r0
  signed int v38; // r0
  signed int v39; // r0
  signed int v40; // r0
  signed int v41; // r0
  signed int v42; // r0
  signed int v43; // r0
  signed int v44; // r0
  signed int v45; // r0
  signed int v46; // r0
  signed int v47; // r0
  signed int v48; // r0
  signed int v49; // r0
  signed int v50; // r0
  signed int v51; // r0
  signed int v52; // r0
  signed int v53; // r0
  signed int v54; // r0
  signed int v55; // r0
  signed int v56; // r0
  signed int v57; // r0
  signed int v58; // r0
  signed int v59; // r0
  signed int v60; // r0
  signed int v61; // r0
  signed int v62; // r0
  signed int v63; // r0
  signed int v64; // r0
  signed int v65; // r0

  v9 = 1;
  if ( !(*(int (__fastcall **)(_DWORD *, int, int, int))(*a1 + 108))(a1, a4, a5, a6)
    && !sub_6079104C(a1, a2, a4, a5, a6) )
  {
    v10 = a1[75];
    v9 = 0;
    if ( v10 == 4 )
    {
      switch ( a5 )
      {
        case 19:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_hip_to_stoop" )
            goto LABEL_485;
          v20 = 0;
          break;
        case 20:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_stoop" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMStoop[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMStoop[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v25 = FIELD_U32(a4, 8);
          if ( v20 >= v25 )
            v20 = v25 - 1;
          v24 = "M_stoop";
          goto LABEL_484;
        case 21:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_stoop_start" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMStoopStart[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMStoopStart[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v26 = FIELD_U32(a4, 8);
          if ( v20 >= v26 )
            v20 = v26 - 1;
          v24 = "M_stoop_start";
          goto LABEL_484;
        case 22:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_slip" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMSlip[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMSlip[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v27 = FIELD_U32(a4, 8);
          if ( v20 >= v27 )
            v20 = v27 - 1;
          v24 = "M_slip";
          goto LABEL_484;
        case 23:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_sliped" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMSliped[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMSliped[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v28 = FIELD_U32(a4, 8);
          if ( v20 >= v28 )
            v20 = v28 - 1;
          v24 = "M_sliped";
          goto LABEL_484;
        case 24:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_slip_to_stoop" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMSlipToStoop[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMSlipToStoop[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v29 = FIELD_U32(a4, 8);
          if ( v20 >= v29 )
            v20 = v29 - 1;
          v24 = "M_slip_to_stoop";
          goto LABEL_484;
        case 25:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_carry_walk" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMCarryWalk[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMCarryWalk[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v30 = FIELD_U32(a4, 8);
          if ( v20 >= v30 )
            v20 = v30 - 1;
          v24 = "M_carry_walk";
          goto LABEL_484;
        case 26:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_carry_throw" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMCarryThrow[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMCarryThrow[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v31 = FIELD_U32(a4, 8);
          if ( v20 >= v31 )
            v20 = v31 - 1;
          v24 = "M_carry_throw";
          goto LABEL_484;
        case 27:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_carry_wait" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMCarryWait[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMCarryWait[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v32 = FIELD_U32(a4, 8);
          if ( v20 >= v32 )
            v20 = v32 - 1;
          v24 = "M_carry_wait";
          goto LABEL_484;
        case 38:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_swim_wait" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMSwimWait[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMSwimWait[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v33 = FIELD_U32(a4, 8);
          if ( v20 >= v33 )
            v20 = v33 - 1;
          v24 = "M_swim_wait";
          goto LABEL_484;
        case 40:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_swim_walk" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMSwimWalk[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMSwimWalk[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v34 = FIELD_U32(a4, 8);
          if ( v20 >= v34 )
            v20 = v34 - 1;
          v24 = "M_swim_walk";
          goto LABEL_484;
        case 41:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_swim_standing" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMSwimStanding[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMSwimStanding[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v35 = FIELD_U32(a4, 8);
          if ( v20 >= v35 )
            v20 = v35 - 1;
          v24 = "M_swim_standing";
          goto LABEL_484;
        case 42:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_paddle_1" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMPaddle1[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMPaddle1[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v36 = FIELD_U32(a4, 8);
          if ( v20 >= v36 )
            v20 = v36 - 1;
          v24 = "M_paddle_1";
          goto LABEL_484;
        case 43:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_paddle_2" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMPaddle2[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMPaddle2[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v37 = FIELD_U32(a4, 8);
          if ( v20 >= v37 )
            v20 = v37 - 1;
          v24 = "M_paddle_2";
          goto LABEL_484;
        case 45:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_tree_start" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMTreeStart[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMTreeStart[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v38 = FIELD_U32(a4, 8);
          if ( v20 >= v38 )
            v20 = v38 - 1;
          v24 = "M_tree_start";
          goto LABEL_484;
        case 46:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_tree_wait" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMTreeWait[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMTreeWait[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v39 = FIELD_U32(a4, 8);
          if ( v20 >= v39 )
            v20 = v39 - 1;
          v24 = "M_tree_wait";
          goto LABEL_484;
        case 47:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_tree_climb" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMTreeClimb[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMTreeClimb[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v40 = FIELD_U32(a4, 8);
          if ( v20 >= v40 )
            v20 = v40 - 1;
          v24 = "M_tree_climb";
          goto LABEL_484;
        case 48:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_tree_pose" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMTreePose[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMTreePose[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v41 = FIELD_U32(a4, 8);
          if ( v20 >= v41 )
            v20 = v41 - 1;
          v24 = "M_tree_pose";
          goto LABEL_484;
        case 54:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_net_wait" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMNetWait[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMNetWait[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v42 = FIELD_U32(a4, 8);
          if ( v20 >= v42 )
            v20 = v42 - 1;
          v24 = "M_net_wait";
          goto LABEL_484;
        case 55:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_net_walk1" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMNetWalk1[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMNetWalk1[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v43 = FIELD_U32(a4, 8);
          if ( v20 >= v43 )
            v20 = v43 - 1;
          v24 = "M_net_walk1";
          goto LABEL_484;
        case 56:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_net_walk2" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMNetWalk2[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMNetWalk2[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v44 = FIELD_U32(a4, 8);
          if ( v20 >= v44 )
            v20 = v44 - 1;
          v24 = "M_net_walk2";
          goto LABEL_484;
        case 57:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_net_attack" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMNetAttack[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMNetAttack[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v45 = FIELD_U32(a4, 8);
          if ( v20 >= v45 )
            v20 = v45 - 1;
          v24 = "M_net_attack";
          goto LABEL_484;
        case 58:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_pea_plant" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMPeaPlant[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMPeaPlant[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v46 = FIELD_U32(a4, 8);
          if ( v20 >= v46 )
            v20 = v46 - 1;
          v24 = "M_pea_plant";
          goto LABEL_484;
        case 59:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_pea_plant_st" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMPeaPlantSt[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMPeaPlantSt[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v47 = FIELD_U32(a4, 8);
          if ( v20 >= v47 )
            v20 = v47 - 1;
          v24 = "M_pea_plant_st";
          goto LABEL_484;
        case 60:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_pea_plant_wait" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMPeaPlantWait[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMPeaPlantWait[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v48 = FIELD_U32(a4, 8);
          if ( v20 >= v48 )
            v20 = v48 - 1;
          v24 = "M_pea_plant_wait";
          goto LABEL_484;
        case 64:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_hang_start" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMHangStart[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMHangStart[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v49 = FIELD_U32(a4, 8);
          if ( v20 >= v49 )
            v20 = v49 - 1;
          v24 = "M_hang_start";
          goto LABEL_484;
        case 65:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_hang_up" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMHangUp[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMHangUp[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v50 = FIELD_U32(a4, 8);
          if ( v20 >= v50 )
            v20 = v50 - 1;
          v24 = "M_hang_up";
          goto LABEL_484;
        case 66:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_hang_wait" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMHangWait[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMHangWait[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v51 = FIELD_U32(a4, 8);
          if ( v20 >= v51 )
            v20 = v51 - 1;
          v24 = "M_hang_wait";
          goto LABEL_484;
        case 67:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_hang_walk_l" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMHangWalkL[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMHangWalkL[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v52 = FIELD_U32(a4, 8);
          if ( v20 >= v52 )
            v20 = v52 - 1;
          v24 = "M_hang_walk_l";
          goto LABEL_484;
        case 68:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_hang_walk_r" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMHangWalkR[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMHangWalkR[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v53 = FIELD_U32(a4, 8);
          if ( v20 >= v53 )
            v20 = v53 - 1;
          v24 = "M_hang_walk_r";
          goto LABEL_484;
        case 72:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_jump_hang" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMJumpHang[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMJumpHang[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v54 = FIELD_U32(a4, 8);
          if ( v20 >= v54 )
            v20 = v54 - 1;
          v24 = "M_jump_hang";
          goto LABEL_484;
        case 114:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_carryP_start" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMCarrypStart[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMCarrypStart[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v55 = FIELD_U32(a4, 8);
          if ( v20 >= v55 )
            v20 = v55 - 1;
          v24 = "M_carryP_start";
          goto LABEL_484;
        case 115:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_carryP_walk" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMCarrypWalk[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMCarrypWalk[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v56 = FIELD_U32(a4, 8);
          if ( v20 >= v56 )
            v20 = v56 - 1;
          v24 = "M_carryP_walk";
          goto LABEL_484;
        case 116:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_carryP_throw" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMCarrypThrow[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMCarrypThrow[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v57 = FIELD_U32(a4, 8);
          if ( v20 >= v57 )
            v20 = v57 - 1;
          v24 = "M_carryP_throw";
          goto LABEL_484;
        case 117:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_carryP_wait" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMCarrypWait[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMCarrypWait[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v58 = FIELD_U32(a4, 8);
          if ( v20 >= v58 )
            v20 = v58 - 1;
          v24 = "M_carryP_wait";
          goto LABEL_484;
        case 123:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_Sjump" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMSjump[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMSjump[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v59 = FIELD_U32(a4, 8);
          if ( v20 >= v59 )
            v20 = v59 - 1;
          v24 = "M_Sjump";
          goto LABEL_484;
        case 124:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_Sjump2" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMSjump2[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMSjump2[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v60 = FIELD_U32(a4, 8);
          if ( v20 >= v60 )
            v20 = v60 - 1;
          v24 = "M_Sjump2";
          goto LABEL_484;
        case 125:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_Sjumped" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMSjumped[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMSjumped[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v61 = FIELD_U32(a4, 8);
          if ( v20 >= v61 )
            v20 = v61 - 1;
          v24 = "M_Sjumped";
          goto LABEL_484;
        case 162:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_carryP_waitL" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMCarrypWaitl[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMCarrypWaitl[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v62 = FIELD_U32(a4, 8);
          if ( v20 >= v62 )
            v20 = v62 - 1;
          v24 = "M_carryP_waitL";
          goto LABEL_484;
        case 163:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_carryP_waitR" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMCarrypWaitr[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMCarrypWaitr[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v63 = FIELD_U32(a4, 8);
          if ( v20 >= v63 )
            v20 = v63 - 1;
          v24 = "M_carryP_waitR";
          goto LABEL_484;
        case 164:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_carry_waitL" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMCarryWaitl[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMCarryWaitl[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v64 = FIELD_U32(a4, 8);
          if ( v20 >= v64 )
            v20 = v64 - 1;
          v24 = "M_carry_waitL";
          goto LABEL_484;
        case 165:
          v19 = *(char **)(a4 + 4);
          if ( v19 == "M_carry_waitR" )
            goto LABEL_485;
          v20 = 0;
          while ( 2 )
          {
            if ( aMCarryWaitr[v20] )
            {
              if ( v20 > 0x7FFFF )
              {
                v20 = 0;
              }
              else
              {
                if ( aMCarryWaitr[v20 + 1] )
                {
                  v20 += 2;
                  continue;
                }
                ++v20;
              }
            }
            break;
          }
          v65 = FIELD_U32(a4, 8);
          if ( v20 >= v65 )
            v20 = v65 - 1;
          v24 = "M_carry_waitR";
LABEL_484:
          qmemcpy(v19, v24, v20);
          v19[v20] = 0;
LABEL_485:
          if ( !a6 )
            a1[49] |= 0x400000u;
          v22 = a1[50] | 0x400000;
          goto LABEL_488;
        default:
          return v9;
      }
      while ( 1 )
      {
        if ( !aMHipToStoop[v20] )
          goto LABEL_317;
        if ( v20 > 0x7FFFF )
          break;
        if ( !aMHipToStoop[v20 + 1] )
        {
          ++v20;
LABEL_317:
          v23 = FIELD_U32(a4, 8);
          if ( v20 >= v23 )
            v20 = v23 - 1;
          v24 = "M_hip_to_stoop";
          goto LABEL_484;
        }
        v20 += 2;
      }
      v20 = 0;
      goto LABEL_317;
    }
    if ( v10 == 3 )
    {
      v11 = &dword_60CBFBC4[13 * a5];
      v13 = (_BYTE *)v11[7];
      v12 = (const void **)(v11 + 7);
      if ( *v13 )
      {
        v14 = *(void **)(a4 + 4);
        (*((void (__fastcall **)(const void **))*(v12 - 1) + 3))(v12 - 1);
        v15 = *v12;
        if ( v14 != *v12 )
        {
          (*((void (__fastcall **)(const void **))*(v12 - 1) + 3))(v12 - 1);
          v16 = *v12;
          v17 = 0;
          while ( v16[v17] )
          {
            if ( !v16[v17 + 1] )
            {
              ++v17;
              break;
            }
            if ( !v16[v17 + 2] )
            {
              v17 += 2;
              break;
            }
            v18 = v17 + 2 <= 0x7FFFF;
            v17 += 3;
            if ( !v18 )
            {
              v17 = 0;
              break;
            }
          }
          v21 = FIELD_U32(a4, 8);
          if ( v17 >= v21 )
            v17 = v21 - 1;
          qmemcpy(v14, v15, v17);
          *((_BYTE *)v14 + v17) = 0;
        }
        if ( !a6 )
          a1[49] |= 0x800000u;
        v22 = a1[50] | 0x800000;
LABEL_488:
        v9 = 1;
        a1[50] = v22;
      }
    }
  }
  return v9;
}
