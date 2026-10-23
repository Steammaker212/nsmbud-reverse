/* Player_registerRideAnimations
 * address: 0x607915D4   size: 2116   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Player_registerRideAnimations(_DWORD *a1, int a2, int a3, int a4)
{
  int result; // r0
  char *v6; // r8
  signed int v7; // r6
  signed int v8; // r0
  const char *v9; // r1
  signed int v10; // r0
  signed int v11; // r0
  signed int v12; // r0
  signed int v13; // r0
  signed int v14; // r0
  signed int v15; // r0
  signed int v16; // r0
  signed int v17; // r0
  signed int v18; // r0
  signed int v19; // r0
  signed int v20; // r0

  result = 0;
  if ( a1[75] == 3 )
  {
    switch ( a4 )
    {
      case 19:
        v6 = *(char **)(a3 + 4);
        if ( v6 == "P_Rhip_to_stoop" )
          goto LABEL_136;
        v7 = 0;
        break;
      case 20:
        v6 = *(char **)(a3 + 4);
        if ( v6 == "P_Rstoop" )
          goto LABEL_136;
        v7 = 0;
        while ( 2 )
        {
          if ( aPRstoop[v7] )
          {
            if ( v7 > 0x7FFFF )
            {
              v7 = 0;
            }
            else
            {
              if ( aPRstoop[v7 + 1] )
              {
                v7 += 2;
                continue;
              }
              ++v7;
            }
          }
          break;
        }
        v10 = FIELD_U32(a3, 8);
        if ( v7 >= v10 )
          v7 = v10 - 1;
        v9 = "P_Rstoop";
        goto LABEL_135;
      case 21:
        v6 = *(char **)(a3 + 4);
        if ( v6 == "P_Rstoop_start" )
          goto LABEL_136;
        v7 = 0;
        while ( 2 )
        {
          if ( aPRstoopStart[v7] )
          {
            if ( v7 > 0x7FFFF )
            {
              v7 = 0;
            }
            else
            {
              if ( aPRstoopStart[v7 + 1] )
              {
                v7 += 2;
                continue;
              }
              ++v7;
            }
          }
          break;
        }
        v11 = FIELD_U32(a3, 8);
        if ( v7 >= v11 )
          v7 = v11 - 1;
        v9 = "P_Rstoop_start";
        goto LABEL_135;
      case 24:
        v6 = *(char **)(a3 + 4);
        if ( v6 == "P_Rslip_to_stoop" )
          goto LABEL_136;
        v7 = 0;
        while ( 2 )
        {
          if ( aPRslipToStoop[v7] )
          {
            if ( v7 > 0x7FFFF )
            {
              v7 = 0;
            }
            else
            {
              if ( aPRslipToStoop[v7 + 1] )
              {
                v7 += 2;
                continue;
              }
              ++v7;
            }
          }
          break;
        }
        v12 = FIELD_U32(a3, 8);
        if ( v7 >= v12 )
          v7 = v12 - 1;
        v9 = "P_Rslip_to_stoop";
        goto LABEL_135;
      case 108:
        v6 = *(char **)(a3 + 4);
        if ( v6 == "P_RSeat" )
          goto LABEL_136;
        v7 = 0;
        while ( 2 )
        {
          if ( aPRseat[v7] )
          {
            if ( v7 > 0x7FFFF )
            {
              v7 = 0;
            }
            else
            {
              if ( aPRseat[v7 + 1] )
              {
                v7 += 2;
                continue;
              }
              ++v7;
            }
          }
          break;
        }
        v13 = FIELD_U32(a3, 8);
        if ( v7 >= v13 )
          v7 = v13 - 1;
        v9 = "P_RSeat";
        goto LABEL_135;
      case 109:
        v6 = *(char **)(a3 + 4);
        if ( v6 == "P_RSeat_out" )
          goto LABEL_136;
        v7 = 0;
        while ( 2 )
        {
          if ( aPRseatOut[v7] )
          {
            if ( v7 > 0x7FFFF )
            {
              v7 = 0;
            }
            else
            {
              if ( aPRseatOut[v7 + 1] )
              {
                v7 += 2;
                continue;
              }
              ++v7;
            }
          }
          break;
        }
        v14 = FIELD_U32(a3, 8);
        if ( v7 >= v14 )
          v7 = v14 - 1;
        v9 = "P_RSeat_out";
        goto LABEL_135;
      case 110:
        v6 = *(char **)(a3 + 4);
        if ( v6 == "P_RSeat_success" )
          goto LABEL_136;
        v7 = 0;
        while ( 2 )
        {
          if ( aPRseatSuccess[v7] )
          {
            if ( v7 > 0x7FFFF )
            {
              v7 = 0;
            }
            else
            {
              if ( aPRseatSuccess[v7 + 1] )
              {
                v7 += 2;
                continue;
              }
              ++v7;
            }
          }
          break;
        }
        v15 = FIELD_U32(a3, 8);
        if ( v7 >= v15 )
          v7 = v15 - 1;
        v9 = "P_RSeat_success";
        goto LABEL_135;
      case 111:
        v6 = *(char **)(a3 + 4);
        if ( v6 == "P_RSeat_fail" )
          goto LABEL_136;
        v7 = 0;
        while ( 2 )
        {
          if ( aPRseatFail[v7] )
          {
            if ( v7 > 0x7FFFF )
            {
              v7 = 0;
            }
            else
            {
              if ( aPRseatFail[v7 + 1] )
              {
                v7 += 2;
                continue;
              }
              ++v7;
            }
          }
          break;
        }
        v16 = FIELD_U32(a3, 8);
        if ( v7 >= v16 )
          v7 = v16 - 1;
        v9 = "P_RSeat_fail";
        goto LABEL_135;
      case 112:
        v6 = *(char **)(a3 + 4);
        if ( v6 == "P_RSeat_successB" )
          goto LABEL_136;
        v7 = 0;
        while ( 2 )
        {
          if ( aPRseatSuccessb[v7] )
          {
            if ( v7 > 0x7FFFF )
            {
              v7 = 0;
            }
            else
            {
              if ( aPRseatSuccessb[v7 + 1] )
              {
                v7 += 2;
                continue;
              }
              ++v7;
            }
          }
          break;
        }
        v17 = FIELD_U32(a3, 8);
        if ( v7 >= v17 )
          v7 = v17 - 1;
        v9 = "P_RSeat_successB";
        goto LABEL_135;
      case 123:
        v6 = *(char **)(a3 + 4);
        if ( v6 == "P_Rsjump" )
          goto LABEL_136;
        v7 = 0;
        while ( 2 )
        {
          if ( aPRsjump[v7] )
          {
            if ( v7 > 0x7FFFF )
            {
              v7 = 0;
            }
            else
            {
              if ( aPRsjump[v7 + 1] )
              {
                v7 += 2;
                continue;
              }
              ++v7;
            }
          }
          break;
        }
        v18 = FIELD_U32(a3, 8);
        if ( v7 >= v18 )
          v7 = v18 - 1;
        v9 = "P_Rsjump";
        goto LABEL_135;
      case 124:
        v6 = *(char **)(a3 + 4);
        if ( v6 == "P_RSjump2" )
          goto LABEL_136;
        v7 = 0;
        while ( 2 )
        {
          if ( aPRsjump2[v7] )
          {
            if ( v7 > 0x7FFFF )
            {
              v7 = 0;
            }
            else
            {
              if ( aPRsjump2[v7 + 1] )
              {
                v7 += 2;
                continue;
              }
              ++v7;
            }
          }
          break;
        }
        v19 = FIELD_U32(a3, 8);
        if ( v7 >= v19 )
          v7 = v19 - 1;
        v9 = "P_RSjump2";
        goto LABEL_135;
      case 125:
        v6 = *(char **)(a3 + 4);
        if ( v6 == "P_RSjumped" )
          goto LABEL_136;
        v7 = 0;
        while ( 2 )
        {
          if ( aPRsjumped[v7] )
          {
            if ( v7 > 0x7FFFF )
            {
              v7 = 0;
            }
            else
            {
              if ( aPRsjumped[v7 + 1] )
              {
                v7 += 2;
                continue;
              }
              ++v7;
            }
          }
          break;
        }
        v20 = FIELD_U32(a3, 8);
        if ( v7 >= v20 )
          v7 = v20 - 1;
        v9 = "P_RSjumped";
LABEL_135:
        qmemcpy(v6, v9, v7);
        v6[v7] = 0;
LABEL_136:
        a1[49] |= 0x800000u;
        a1[50] |= 0x800000u;
        return 1;
      default:
        return result;
    }
    while ( 1 )
    {
      if ( !aPRhipToStoop[v7] )
        goto LABEL_88;
      if ( v7 > 0x7FFFF )
        break;
      if ( !aPRhipToStoop[v7 + 1] )
      {
        ++v7;
LABEL_88:
        v8 = FIELD_U32(a3, 8);
        if ( v7 >= v8 )
          v7 = v8 - 1;
        v9 = "P_Rhip_to_stoop";
        goto LABEL_135;
      }
      v7 += 2;
    }
    v7 = 0;
    goto LABEL_88;
  }
  return result;
}
