/* sub_60736A74
 * address: 0x60736A74   size: 1800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60736A74(int a1)
{
  char v1; // r12
  _BYTE *v3; // r7
  int v4; // r0
  unsigned int *v5; // r8
  int v6; // r9
  int (__fastcall ***v7)(_DWORD, int *); // r5
  char v8; // r12
  int (__fastcall ***v9)(_DWORD, int *); // r5
  int v10; // r0
  _WORD *v11; // r4
  __int16 v12; // t1
  int v13; // r0
  unsigned int v14; // r7
  int (__fastcall ***v15)(_DWORD, int *); // r5
  float *v16; // r0
  float v17; // s28
  float v18; // s30
  float v19; // s20
  float v20; // s22
  float v21; // s18
  float v22; // s16
  float v23; // s0
  float v24; // s0
  unsigned int v25; // r0
  int (__fastcall ***v26)(_DWORD, int *); // r5
  float *v27; // r1
  float v28; // s18
  float v29; // s20
  char v30; // r12
  float v31; // s18
  int v32; // r0
  int (__fastcall ***v33)(_DWORD, int *); // r5
  float *v34; // r1
  float v35; // s18
  float v36; // s20
  char v37; // r12
  float v38; // s18
  int v39; // r0
  char v40; // r12
  unsigned __int16 v41; // r0
  int *v42; // r0
  int v43; // r1
  int v44; // r2
  int v45; // r0
  int (__fastcall ***v46)(_DWORD, int *); // r8
  int v47; // r0

  v3 = (_BYTE *)(a1 + 7402);
  switch ( FIELD_U8(a1, 7402) )
  {
    case 0:
      v4 = sub_60834288(a1 + 7464, FIELD_U16(a1, 7404));
      sub_608332CC(a1 + 108, v4, 0.2, 10.0, 0.2);
      ++FIELD_U16(a1, 7404);
      if ( sub_6083424C(a1 + 7464) - 2 < FIELD_U16(a1, 7404) )
      {
        *v3 = 2;
        FIELD_U32(a1, 7456) = 0x40000000;
      }
      break;
    case 2:
      v5 = (unsigned int *)(a1 + 7456);
      v6 = FIELD_U32(a1, 7456);
      v7 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
      if ( ((unsigned int)&dword_60CBDD28 & ~(1618176848 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD28) )
      {
        dword_60CBDD24 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60CBDD28);
      }
      if ( v7 && (**v7)(v7, &dword_60CBDD24) == 1 )
      {
        v9 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
        if ( ((unsigned int)&dword_60CBDD28 & ~(1618176968 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD28) )
        {
          dword_60CBDD24 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60CBDD28);
        }
        if ( v9 )
        {
          v10 = (**v9)(v9, &dword_60CBDD24);
          if ( v10 )
            v10 = (int)v9;
        }
        else
        {
          v10 = 0;
        }
        v25 = *v5 - (int)(float)((float)(sub_6073AF5C(v10) * 2147500000.0) / 180.0);
        *v5 = v25;
        v26 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
        v27 = (float *)((char *)sinLutTable + ((v25 >> 20) & 0xFF0));
        v28 = v27[2];
        v29 = v27[3] * (float)(v25 & 0xFFFFFF);
        if ( ((unsigned int)&dword_60CBDD28 & ~(1618177700 << v30) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD28) )
        {
          dword_60CBDD24 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60CBDD28);
        }
        v31 = v28 + (float)(v29 * 0.000000059605);
        if ( v26 )
        {
          v32 = (**v26)(v26, &dword_60CBDD24);
          if ( v32 )
            v32 = (int)v26;
        }
        else
        {
          v32 = 0;
        }
        FIELD_F32(a1, 7444) = FIELD_F32(a1, 7584) + (float)(v31 * sub_6073AF6C(v32));
        v33 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
        v34 = (float *)((char *)sinLutTable + ((*v5 >> 20) & 0xFF0));
        v35 = *v34;
        v36 = (float)(*v5 & 0xFFFFFF) * v34[1];
        if ( ((unsigned int)&dword_60CBDD28 & ~(1618177912 << v37) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD28) )
        {
          dword_60CBDD24 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60CBDD28);
        }
        v38 = v35 + (float)(v36 * 0.000000059605);
        if ( v33 )
        {
          v39 = (**v33)(v33, &dword_60CBDD24);
          if ( v39 )
            v39 = (int)v33;
        }
        else
        {
          v39 = 0;
        }
        FIELD_F32(a1, 7448) = FIELD_F32(a1, 7588) + (float)(v38 * sub_6073AF6C(v39));
        FIELD_U32(a1, 7452) = FIELD_U32(a1, 116);
      }
      sub_608332CC(a1 + 108, a1 + 7444, 0.2, 10.0, 0.2);
      if ( !FIELD_U8(a1, 7392) && v6 >= 0x40000000 && FIELD_U8(a1, 7460) && (int)*v5 < 0x40000000 )
      {
        v46 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
        if ( ((unsigned int)&dword_60CBDD28 & ~(1618178300 << v40) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD28) )
        {
          dword_60CBDD24 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60CBDD28);
        }
        if ( v46 )
        {
          v47 = (**v46)(v46, &dword_60CBDD24);
          if ( v47 )
            v47 = (int)v46;
        }
        else
        {
          v47 = 0;
        }
        sub_6073BA88(v47);
        FIELD_U8(a1, 7461) = 1;
      }
      if ( FIELD_U8(a1, 7461) )
      {
        *v3 = 3;
        v41 = sub_6083424C(a1 + 7524) - 2;
        FIELD_U16(a1, 7404) = v41;
        v42 = (int *)sub_60834288(a1 + 7524, v41);
        v43 = *v42;
        v44 = v42[1];
        v45 = v42[2];
        FIELD_U32(a1, 7444) = v43;
        FIELD_U32(a1, 7448) = v44;
        FIELD_U32(a1, 7452) = v45;
        sub_608332CC(a1 + 108, a1 + 7444, 0.2, 10.0, 0.2);
      }
      break;
    case 3:
      v12 = FIELD_U16(a1, 7404);
      v11 = (_WORD *)(a1 + 7404);
      FIELD_U16(a1, 7404) = v12 - 1;
      v13 = sub_60834288(a1 + 7524, (unsigned __int16)(v12 - 1));
      sub_608332CC(v11 - 3648, v13, 0.2, 10.0, 0.2);
      if ( !*v11 )
        *v3 = 4;
      break;
    case 4:
      v14 = FIELD_U8(a1, 7424);
      v15 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
      if ( ((unsigned int)&dword_60CBDD28 & ~(1618177192 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD28) )
      {
        dword_60CBDD24 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60CBDD28);
      }
      if ( v15 && (**v15)(v15, &dword_60CBDD24) == 1 )
      {
        if ( v14 >= 5 )
          v14 = 0;
        v16 = (float *)&v15[3 * v14 + 1535];
      }
      else
      {
        v16 = (float *)(a1 + 108);
      }
      v17 = v16[1];
      v18 = v16[2];
      v19 = v17 - FIELD_F32(a1, 112);
      v20 = *v16 - FIELD_F32(a1, 108);
      v21 = v18 - FIELD_F32(a1, 116);
      v22 = (float)((float)(v19 * v19) + (float)(v20 * v20)) + (float)(v21 * v21);
      if ( sqrtf(v22) >= 10.0 )
      {
        v23 = sqrtf(v22);
        if ( v23 > 0.0 )
        {
          v24 = 1.0 / v23;
          v21 = v21 * v24;
          v19 = v19 * v24;
          v20 = v20 * v24;
        }
        FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + (float)(v20 * 10.0);
        FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + (float)(v19 * 10.0);
        FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + (float)(v21 * 10.0);
      }
      else
      {
        FIELD_F32(a1, 108) = *v16;
        FIELD_F32(a1, 112) = v17;
        FIELD_F32(a1, 116) = v18;
        FIELD_U8(a1, 7392) = FIELD_U8(a1, 7424);
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBDEA0);
      }
      break;
    default:
      return;
  }
}
