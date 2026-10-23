/* sub_6075D574
 * address: 0x6075D574   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075D574(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  int v9; // r9
  char *v10; // r8
  signed int v11; // r5
  signed int v12; // r0
  const char *v13; // r1
  signed int v14; // r0
  signed int v15; // r0
  signed int v16; // r0

  v9 = 1;
  if ( !Player_animSetCarry_load(a1, a2, (int)a3, a4, a5, a6) )
  {
    switch ( a5 )
    {
      case '[':
        v10 = *(char **)(a4 + 4);
        if ( v10 == "MiiB_goal_puton_cap" )
          goto LABEL_49;
        v11 = 0;
        break;
      case '\\':
        v10 = *(char **)(a4 + 4);
        if ( v10 == "PLMiiB_goal_puton_cap" )
          goto LABEL_49;
        v11 = 0;
        while ( 2 )
        {
          if ( aPlmiibGoalPuto[v11] )
          {
            if ( v11 > 0x7FFFF )
            {
              v11 = 0;
            }
            else
            {
              if ( aPlmiibGoalPuto[v11 + 1] )
              {
                v11 += 2;
                continue;
              }
              ++v11;
            }
          }
          break;
        }
        v14 = FIELD_U32(a4, 8);
        if ( v11 >= v14 )
          v11 = v14 - 1;
        v13 = "PLMiiB_goal_puton_cap";
        goto LABEL_48;
      case ']':
        v10 = *(char **)(a4 + 4);
        if ( v10 == "PMiiB_goal_puton_cap" )
          goto LABEL_49;
        v11 = 0;
        while ( 2 )
        {
          if ( aPmiibGoalPuton[v11] )
          {
            if ( v11 > 0x7FFFF )
            {
              v11 = 0;
            }
            else
            {
              if ( aPmiibGoalPuton[v11 + 1] )
              {
                v11 += 2;
                continue;
              }
              ++v11;
            }
          }
          break;
        }
        v15 = FIELD_U32(a4, 8);
        if ( v11 >= v15 )
          v11 = v15 - 1;
        v13 = "PMiiB_goal_puton_cap";
        goto LABEL_48;
      case '^':
        v10 = *(char **)(a4 + 4);
        if ( v10 == "MMiiB_goal_puton_cap" )
          goto LABEL_49;
        v11 = 0;
        while ( 2 )
        {
          if ( aMmiibGoalPuton[v11] )
          {
            if ( v11 > 0x7FFFF )
            {
              v11 = 0;
            }
            else
            {
              if ( aMmiibGoalPuton[v11 + 1] )
              {
                v11 += 2;
                continue;
              }
              ++v11;
            }
          }
          break;
        }
        v16 = FIELD_U32(a4, 8);
        if ( v11 >= v16 )
          v11 = v16 - 1;
        v13 = "MMiiB_goal_puton_cap";
LABEL_48:
        qmemcpy(v10, v13, v11);
        v10[v11] = 0;
LABEL_49:
        *a3 = a1[136];
        if ( !a6 )
          a1[49] |= 0x2000000u;
        a1[50] |= 0x2000000u;
        return v9;
      default:
        return 0;
    }
    while ( 1 )
    {
      if ( !aMiibGoalPutonC[v11] )
        goto LABEL_33;
      if ( v11 > 0x7FFFF )
        break;
      if ( !aMiibGoalPutonC[v11 + 1] )
      {
        ++v11;
LABEL_33:
        v12 = FIELD_U32(a4, 8);
        if ( v11 >= v12 )
          v11 = v12 - 1;
        v13 = "MiiB_goal_puton_cap";
        goto LABEL_48;
      }
      v11 += 2;
    }
    v11 = 0;
    goto LABEL_33;
  }
  return v9;
}
