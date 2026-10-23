/* sub_6075A8E0
 * address: 0x6075A8E0   size: 1988   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075A8E0(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  int v9; // r1
  int result; // r0
  char *v11; // r8
  signed int i; // r7
  signed int v13; // r0
  const char *v14; // r1
  signed int v15; // r0
  signed int v16; // r0
  signed int v17; // r0
  signed int v18; // r0
  signed int v19; // r0
  signed int v20; // r0
  signed int v21; // r0
  signed int v22; // r0
  signed int v23; // r0
  signed int v24; // r0

  v9 = Player_animSetCarry_load(a1, a2, (int)a3, a4, a5, a6);
  result = 1;
  if ( v9 )
    return result;
  result = 0;
  if ( a1[41] != 1 )
    return result;
  if ( a5 > 140 )
  {
    switch ( a5 )
    {
      case 141:
      case 151:
        v11 = *(char **)(a4 + 4);
        if ( v11 == "LB_waitL" )
          goto LABEL_130;
        i = 0;
        break;
      case 142:
      case 150:
        v11 = *(char **)(a4 + 4);
        if ( v11 == "LB_waitR" )
          goto LABEL_130;
        i = 0;
        while ( 2 )
        {
          if ( aLbWaitr[i] )
          {
            if ( i > 0x7FFFF )
            {
              i = 0;
            }
            else
            {
              if ( aLbWaitr[i + 1] )
              {
                i += 2;
                continue;
              }
              ++i;
            }
          }
          break;
        }
        v15 = FIELD_U32(a4, 8);
        if ( i >= v15 )
          i = v15 - 1;
        v14 = "LB_waitR";
        goto LABEL_129;
      case 152:
        v11 = *(char **)(a4 + 4);
        if ( v11 == "LB_waitR3" )
          goto LABEL_130;
        i = 0;
        while ( 2 )
        {
          if ( aLbWaitr3[i] )
          {
            if ( i > 0x7FFFF )
            {
              i = 0;
            }
            else
            {
              if ( aLbWaitr3[i + 1] )
              {
                i += 2;
                continue;
              }
              ++i;
            }
          }
          break;
        }
        v17 = FIELD_U32(a4, 8);
        if ( i >= v17 )
          i = v17 - 1;
        v14 = "LB_waitR3";
        goto LABEL_129;
      case 153:
        v11 = *(char **)(a4 + 4);
        if ( v11 == "LB_waitL3" )
          goto LABEL_130;
        i = 0;
        while ( 2 )
        {
          if ( aLbWaitl3[i] )
          {
            if ( i > 0x7FFFF )
            {
              i = 0;
            }
            else
            {
              if ( aLbWaitl3[i + 1] )
              {
                i += 2;
                continue;
              }
              ++i;
            }
          }
          break;
        }
        v18 = FIELD_U32(a4, 8);
        if ( i >= v18 )
          i = v18 - 1;
        v14 = "LB_waitL3";
        goto LABEL_129;
      case 160:
        v11 = *(char **)(a4 + 4);
        if ( v11 == "LB_slope_waitL2" )
          goto LABEL_130;
        i = 0;
        while ( 2 )
        {
          if ( aLbSlopeWaitl2[i] )
          {
            if ( i > 0x7FFFF )
            {
              i = 0;
            }
            else
            {
              if ( aLbSlopeWaitl2[i + 1] )
              {
                i += 2;
                continue;
              }
              ++i;
            }
          }
          break;
        }
        v19 = FIELD_U32(a4, 8);
        if ( i >= v19 )
          i = v19 - 1;
        v14 = "LB_slope_waitL2";
        goto LABEL_129;
      case 161:
        v11 = *(char **)(a4 + 4);
        if ( v11 == "LB_slope_waitR2" )
          goto LABEL_130;
        i = 0;
        while ( 2 )
        {
          if ( aLbSlopeWaitr2[i] )
          {
            if ( i > 0x7FFFF )
            {
              i = 0;
            }
            else
            {
              if ( aLbSlopeWaitr2[i + 1] )
              {
                i += 2;
                continue;
              }
              ++i;
            }
          }
          break;
        }
        v20 = FIELD_U32(a4, 8);
        if ( i >= v20 )
          i = v20 - 1;
        v14 = "LB_slope_waitR2";
        goto LABEL_129;
      case 221:
        v11 = *(char **)(a4 + 4);
        if ( v11 == "LB_ending_wait" )
          goto LABEL_130;
        i = 0;
        while ( 2 )
        {
          if ( aLbEndingWait[i] )
          {
            if ( i > 0x7FFFF )
            {
              i = 0;
            }
            else
            {
              if ( aLbEndingWait[i + 1] )
              {
                i += 2;
                continue;
              }
              ++i;
            }
          }
          break;
        }
        v21 = FIELD_U32(a4, 8);
        if ( i >= v21 )
          i = v21 - 1;
        v14 = "LB_ending_wait";
        goto LABEL_129;
      case 223:
        v11 = *(char **)(a4 + 4);
        if ( v11 == "LB_jump_stoop" )
          goto LABEL_130;
        i = 0;
        while ( 2 )
        {
          if ( aLbJumpStoop[i] )
          {
            if ( i > 0x7FFFF )
            {
              i = 0;
            }
            else
            {
              if ( aLbJumpStoop[i + 1] )
              {
                i += 2;
                continue;
              }
              ++i;
            }
          }
          break;
        }
        v22 = FIELD_U32(a4, 8);
        if ( i >= v22 )
          i = v22 - 1;
        v14 = "LB_jump_stoop";
        goto LABEL_129;
      default:
        return result;
    }
    while ( 1 )
    {
      if ( !aLbWaitl[i] )
        goto LABEL_86;
      if ( i > 0x7FFFF )
        break;
      if ( !aLbWaitl[i + 1] )
      {
        ++i;
LABEL_86:
        v13 = FIELD_U32(a4, 8);
        if ( i >= v13 )
          i = v13 - 1;
        v14 = "LB_waitL";
        goto LABEL_129;
      }
      i += 2;
    }
    i = 0;
    goto LABEL_86;
  }
  if ( a5 )
  {
    if ( a5 != 1 )
    {
      if ( a5 != 2 )
        return result;
      v11 = *(char **)(a4 + 4);
      if ( v11 == "LB_run" )
        goto LABEL_130;
      for ( i = 0; aLbRun[i]; i += 2 )
      {
        if ( i > 0x7FFFF )
        {
          i = 0;
          break;
        }
        if ( !aLbRun[i + 1] )
        {
          ++i;
          break;
        }
      }
      v16 = FIELD_U32(a4, 8);
      if ( i >= v16 )
        i = v16 - 1;
      v14 = "LB_run";
      goto LABEL_129;
    }
    v11 = *(char **)(a4 + 4);
    if ( v11 != "LB_walk" )
    {
      for ( i = 0; aLbWalk[i]; i += 2 )
      {
        if ( i > 0x7FFFF )
        {
          i = 0;
          break;
        }
        if ( !aLbWalk[i + 1] )
        {
          ++i;
          break;
        }
      }
      v24 = FIELD_U32(a4, 8);
      if ( i >= v24 )
        i = v24 - 1;
      v14 = "LB_walk";
LABEL_129:
      qmemcpy(v11, v14, i);
      v11[i] = 0;
    }
  }
  else
  {
    v11 = *(char **)(a4 + 4);
    if ( v11 != "LB_wait" )
    {
      for ( i = 0; aLbWait[i]; i += 2 )
      {
        if ( i > 0x7FFFF )
        {
          i = 0;
          break;
        }
        if ( !aLbWait[i + 1] )
        {
          ++i;
          break;
        }
      }
      v23 = FIELD_U32(a4, 8);
      if ( i >= v23 )
        i = v23 - 1;
      v14 = "LB_wait";
      goto LABEL_129;
    }
  }
LABEL_130:
  *a3 = a1[136];
  if ( !a6 )
    a1[49] |= 0x100000u;
  a1[50] |= 0x100000u;
  return 1;
}
