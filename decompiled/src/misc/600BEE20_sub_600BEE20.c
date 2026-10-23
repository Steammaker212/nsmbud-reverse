/* sub_600BEE20
 * address: 0x600BEE20   size: 1828   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BEE20(int a1)
{
  int v1; // r4
  char v2; // r12
  int v3; // r9
  int v4; // r8
  unsigned int v5; // r0
  int v6; // r4
  char v7; // r12
  int *v8; // r7
  int v9; // r5
  int v10; // r0
  bool v11; // zf
  int result; // r0
  int *v13; // r6
  int v14; // r5
  int v15; // r0
  bool v16; // zf
  unsigned int v17; // r0
  _DWORD *v18; // r4
  unsigned int v19; // r0
  unsigned int v20; // r0
  unsigned int v21; // r0
  unsigned int v22; // r6
  int v23; // r0
  unsigned int v24; // r5
  int v25; // r1
  int v26; // r2
  _DWORD *v27; // r0
  float v28; // r2
  int v29; // r0
  int v30; // r12
  int Area; // r0
  int v32; // r0
  int v33; // r4
  unsigned int v34; // r0
  int v35; // r4
  unsigned int v36; // r0
  int v37; // r4
  unsigned int v38; // r0
  int v39; // r4
  unsigned int v40; // r0
  int v41; // r4
  int *v42; // [sp+4h] [bp-64h]
  int v43; // [sp+10h] [bp-58h]
  float *v44; // [sp+14h] [bp-54h]
  _DWORD *v45; // [sp+20h] [bp-48h]
  float v46[3]; // [sp+2Ch] [bp-3Ch] BYREF
  int v47; // [sp+38h] [bp-30h] BYREF
  int v48; // [sp+3Ch] [bp-2Ch]
  int v49; // [sp+40h] [bp-28h]

  v1 = a1;
  FIELD_U32(dword_60CC6484, 264) = FIELD_U32(a1, 7496);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6100));
  if ( FIELD_U32(v1, 7416) )
  {
    v42 = (int *)(v1 + 7416);
    v3 = 0;
    FIELD_F32(v1, 7468) = *(float *)&dword_60C83948 + FIELD_F32(v1, 7468);
    v43 = v1 + 7464;
    v44 = (float *)(v1 + 7488);
    do
    {
      v4 = v1;
      v5 = *(_DWORD *)(v1 + 4 * v3 + 7448);
      if ( v5 <= 3 )
      {
        v6 = *(_DWORD *)(PlayerMgr_instance + 4 * v5 + 32);
        if ( v6 )
        {
          if ( FIELD_F32(v6, 112) <= *v44 )
          {
            sub_6079D104(v6, &dword_60B3B944);
            v8 = *(int **)(ActorMgr__instance + 27172);
            if ( v8 != *(int **)(ActorMgr__instance + 27180) )
            {
              while ( 1 )
              {
                v9 = *v8;
                if ( ((unsigned int)&dword_60C83720 & ~(1611395004 << v7) & 1) == 0
                  && _cxa_guard_acquire(&dword_60C83720) )
                {
                  dword_60C8371C = (int)&off_60BC00E0;
                  _cxa_guard_release(&dword_60C83720);
                }
                if ( v9 )
                {
                  v10 = (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C8371C);
                  v11 = v10 == 1;
                  if ( v10 == 1 )
                    v11 = FIELD_U8(v9, 19) == 0;
                  if ( v11 )
                    break;
                }
                if ( ++v8 == *(int **)(ActorMgr__instance + 27180) )
                  goto LABEL_20;
              }
              sub_6079D0A0(v6, v9 + 108);
              if ( !FIELD_U8(v9, 6252) )
                sub_600BBE20(v9, FIELD_S8(v6, 84));
            }
          }
          else
          {
            sub_6079D104(v6, v43);
          }
        }
      }
LABEL_20:
      ++v3;
      v1 = v4;
    }
    while ( v3 != 4 );
    result = *v42 - 1;
    *v42 = result;
  }
  else
  {
    v45 = (_DWORD *)v1;
    v13 = *(int **)(ActorMgr__instance + 27172);
    if ( v13 == *(int **)(ActorMgr__instance + 27180) )
      goto LABEL_31;
    while ( 1 )
    {
      v14 = *v13;
      if ( ((unsigned int)&dword_60C83720 & ~(1611395288 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C83720) )
      {
        dword_60C8371C = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60C83720);
      }
      if ( v14 )
      {
        v15 = (**(int (__fastcall ***)(int, int *))v14)(v14, &dword_60C8371C);
        v16 = v15 == 1;
        if ( v15 == 1 )
          v16 = FIELD_U8(v14, 19) == 0;
        if ( v16 )
          break;
      }
      if ( ++v13 == *(int **)(ActorMgr__instance + 27180) )
        goto LABEL_31;
    }
    v34 = FIELD_U32(v1, 7448);
    if ( v34 < 4 )
    {
      v35 = *(_DWORD *)(PlayerMgr_instance + 4 * v34 + 32);
      if ( v35 )
      {
        sub_6079D104(*(_DWORD *)(PlayerMgr_instance + 4 * v34 + 32), &dword_60B3B944);
        sub_6079D0A0(v35, v14 + 108);
      }
    }
    v36 = v45[1863];
    if ( v36 < 4 )
    {
      v37 = *(_DWORD *)(PlayerMgr_instance + 4 * v36 + 32);
      if ( v37 )
      {
        sub_6079D104(*(_DWORD *)(PlayerMgr_instance + 4 * v36 + 32), &dword_60B3B944);
        sub_6079D0A0(v37, v14 + 108);
      }
    }
    v38 = v45[1864];
    if ( v38 <= 3 )
    {
      v39 = *(_DWORD *)(PlayerMgr_instance + 4 * v38 + 32);
      if ( v39 )
      {
        sub_6079D104(*(_DWORD *)(PlayerMgr_instance + 4 * v38 + 32), &dword_60B3B944);
        sub_6079D0A0(v39, v14 + 108);
      }
    }
    v40 = v45[1865];
    if ( v40 <= 3 )
    {
      v41 = *(_DWORD *)(PlayerMgr_instance + 4 * v40 + 32);
      if ( v41 )
      {
        sub_6079D104(*(_DWORD *)(PlayerMgr_instance + 4 * v40 + 32), &dword_60B3B944);
        sub_6079D0A0(v41, v14 + 108);
      }
    }
    result = FIELD_U8(v14, 6252);
    if ( FIELD_U8(v14, 6252) )
    {
      result = *(unsigned __int8 *)(**(_DWORD **)(FIELD_U32(v14, 6188) + 12) + 28);
      if ( (result & 0x20) != 0 )
      {
LABEL_31:
        v45[1867] = 0;
        v18 = v45 + 1862;
        v17 = v45[1862];
        if ( v17 <= 3 )
        {
          if ( FIELD_S32(dword_60CBFA90, 440) < 0 )
            FIELD_U32(dword_60CBFA90, 440) = v17;
          if ( *(_DWORD *)(PlayerMgr_instance + 4 * v17 + 32) )
            sub_6079D134(1.0);
        }
        v19 = v45[1863];
        if ( v19 < 4 )
        {
          if ( FIELD_S32(dword_60CBFA90, 440) < 0 )
            FIELD_U32(dword_60CBFA90, 440) = v19;
          if ( *(_DWORD *)(PlayerMgr_instance + 4 * v19 + 32) )
            sub_6079D134(1.0);
        }
        v20 = v45[1864];
        if ( v20 <= 3 )
        {
          if ( FIELD_S32(dword_60CBFA90, 440) < 0 )
            FIELD_U32(dword_60CBFA90, 440) = v20;
          if ( *(_DWORD *)(PlayerMgr_instance + 4 * v20 + 32) )
            sub_6079D134(1.0);
        }
        v21 = v45[1865];
        if ( v21 <= 3 )
        {
          if ( FIELD_S32(dword_60CBFA90, 440) < 0 )
            FIELD_U32(dword_60CBFA90, 440) = v21;
          if ( *(_DWORD *)(PlayerMgr_instance + 4 * v21 + 32) )
            sub_6079D134(1.0);
        }
        result = FIELD_U32(dword_60CBFA90, 440);
        if ( result >= 0 )
        {
          v22 = v45[5];
          v23 = (v22 >> 8) & 0xF;
          if ( v23 )
            v24 = v23 - 1;
          else
            v24 = FIELD_U8(LevelInfo_instance, 18);
          v25 = v45[28];
          v26 = v45[29];
          v47 = v45[27];
          v48 = v25;
          v49 = v26;
          if ( *v18 <= 3u )
          {
            v27 = *(_DWORD **)(PlayerMgr_instance + 4 * *v18 + 32);
            if ( v27 )
            {
              v47 = v27[27];
              v48 = v27[28];
              v49 = v27[29];
            }
          }
          sub_6023349C(dword_60C8D904, v46, &v47);
          sub_60833074(v46);
          v28 = v46[1];
          v29 = dword_60CC62E4;
          v30 = dword_60CC62E4 + 116;
          FIELD_F32(dword_60CC62E4, 116) = v46[0];
          FIELD_F32(v30, 4) = v28;
          FIELD_U32(v30, 8) = 0;
          FIELD_U32(v29, 108) = 589824;
          Area = Level_getArea(Level_instance, v24);
          v32 = sub_60727620(Area, *(unsigned __int8 *)(FIELD_U32(Area, 28) + 13), 0);
          sub_60023F84(v32);
          v33 = LevelInfo_instance;
          sub_6040D3A4(LevelInfo_instance, FIELD_U8(LevelInfo_instance, 16));
          sub_6040D3B8(v33, FIELD_U8(v33, 17));
          sub_6040D3CC(v33, (unsigned __int8)v24);
          sub_6040D3E0(v33, (unsigned __int8)v22);
          sub_6040D3F4(v33, 3);
          return sub_603F4960(AreaTask_intance);
        }
      }
    }
  }
  return result;
}
