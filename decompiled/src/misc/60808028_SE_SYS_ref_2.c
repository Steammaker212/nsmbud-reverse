/* SE_SYS_ref_2
 * address: 0x60808028   size: 768   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_ref_2(_DWORD *a1, float *a2, int a3)
{
  int v5; // s0
  float v6; // s16
  int v7; // r5
  const char *v8; // r2
  int v9; // r3
  int v10; // r3
  int v11; // r3
  int v12; // r3
  _DWORD *v13; // r6
  float v14; // s16
  int v15; // r6
  float v16; // s0
  int v17; // r2
  _DWORD v19[9]; // [sp+4h] [bp-24h] BYREF

  v5 = (int)(float)(a2[1] - *(float *)&dword_60C2817C);
  v6 = 1.0;
  v7 = 1;
  v8 = "SE_SYS_AP_PUT_COIN_BLOCK";
  switch ( a3 )
  {
    case 0:
      if ( v5 < 11 )
      {
        if ( v5 > -11 )
        {
          v8 = "SE_SYS_AP_PUT_BLOCK";
        }
        else
        {
          v11 = dword_60C28174 + 1;
          if ( dword_60C28174 > 7 )
            v11 = 2;
          dword_60C28174 = v11;
          v8 = "SE_SYS_AP_PUT_BLOCK_UP";
        }
      }
      else
      {
        v9 = dword_60C28174 - 1;
        if ( dword_60C28174 < 3 )
          v9 = 8;
        dword_60C28174 = v9;
        v8 = "SE_SYS_AP_PUT_BLOCK_DOWN";
      }
      goto LABEL_23;
    case 1:
      goto LABEL_23;
    case 2:
      v8 = "SE_SYS_AP_TOUCH_BLOCK";
      goto LABEL_23;
    case 3:
      v8 = "SE_SYS_CMN_TOUCH";
      goto LABEL_23;
    case 4:
    case 6:
      return v7;
    case 5:
      v6 = 0.0;
      v8 = "SE_SYS_CE_INVALID";
      goto LABEL_23;
    case 7:
      if ( v5 < 11 )
      {
        if ( v5 > -11 )
        {
          v8 = "SE_SYS_AP_PUT_SMALLBLOCK";
        }
        else
        {
          v12 = dword_60C28174 + 1;
          if ( dword_60C28174 > 7 )
            v12 = 2;
          dword_60C28174 = v12;
          v8 = "SE_SYS_AP_PUT_SMALLBLOCK_UP";
        }
      }
      else
      {
        v10 = dword_60C28174 - 1;
        if ( dword_60C28174 < 3 )
          v10 = 8;
        dword_60C28174 = v10;
        v8 = "SE_SYS_AP_PUT_SMALLBLOCK_DOWN";
      }
LABEL_23:
      v13 = a1 + 20;
      v7 = (*(int (__fastcall **)(_DWORD *, _DWORD *, const char *, float))(*a1 + 24))(a1, a1 + 20, v8, *(float *)&v5);
      if ( *v13 )
      {
        sub_608B0390(*v13, 1);
        if ( *v13 )
          sub_608B0444(*v13, 0, v6);
      }
      sub_608A8604(v19, v13);
      v14 = -1.0;
      v15 = dword_60C28174;
      v16 = sub_6080E4E0(*a2, 12.0, 1268.0, -1.0, 1.0);
      if ( v16 >= -1.0 )
      {
        v14 = v16;
        if ( v16 > 1.0 )
          v14 = 1.0;
      }
      v17 = 2;
      switch ( v15 )
      {
        case 1:
          break;
        case 2:
          v17 = 3;
          break;
        case 3:
          v17 = 5;
          break;
        case 4:
          v17 = 7;
          break;
        case 5:
          v17 = 8;
          break;
        case 6:
          v17 = 10;
          break;
        case 7:
          v17 = 12;
          break;
        case 8:
          v17 = 14;
          break;
        case 9:
          v17 = 15;
          break;
        case 10:
          v17 = 17;
          break;
        default:
          v17 = 0;
          break;
      }
      if ( v19[0] )
      {
        sub_608B7318(v19[0], 0, v17);
        if ( v19[0] )
          SE_SYS_ref_2_helper(v19[0], 0xFFFF, v14);
      }
      dword_60C28178 = *(_DWORD *)a2;
      dword_60C2817C = *((_DWORD *)a2 + 1);
      sub_608A86F0(v19);
      break;
    default:
      v7 = 0;
      break;
  }
  return v7;
}
