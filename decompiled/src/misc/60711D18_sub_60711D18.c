/* sub_60711D18
 * address: 0x60711D18   size: 1476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60711D18(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // r5
  int Area; // r0
  int v6; // r11
  int result; // r0
  int v8; // r7
  float v9; // s0
  int v10; // r0
  unsigned int v11; // r4
  float v12; // s22
  float v13; // s24
  int v14; // r9
  int TileLayer; // r0
  float v16; // s0
  float v17; // s26
  unsigned __int16 *TilePtr; // r0
  __int16 v19; // r0
  int v20; // r3
  int v21; // r0
  int *v22; // r1
  bool v23; // cc
  float v24; // s26
  int v25; // r3
  int v26; // r0
  int *v27; // r1
  unsigned __int8 v28; // r1
  unsigned __int8 v29; // r0
  int v30; // r5
  int v31; // r1
  int *v32; // r2
  int v33; // r2
  int v34; // r2
  int v35; // r2
  int v36; // r1
  _DWORD *v37; // r0
  int v38; // r3
  int v39; // r3
  int v40; // r0
  int *v41; // r1
  int v42; // r2
  int v43; // r1
  int v44; // [sp+Ch] [bp-7Ch]
  int v45; // [sp+10h] [bp-78h]
  void **v46; // [sp+18h] [bp-70h]
  void **v47; // [sp+1Ch] [bp-6Ch]
  float v48; // [sp+20h] [bp-68h] BYREF
  float v49; // [sp+24h] [bp-64h]
  float v50; // [sp+28h] [bp-60h]
  float v51; // [sp+2Ch] [bp-5Ch]

  a1[3638] = operator_new_8DE09C(0x1000u);
  a1[3639] = operator_new_8DE09C(0x1000u);
  a1[3640] = operator_new_8DE09C(0x1000u);
  v2 = a1 + 3642;
  v47 = (void **)(a1 + 3638);
  v46 = (void **)(a1 + 3639);
  v3 = 40;
  do
  {
    if ( *((_BYTE *)v2 + 17) )
    {
      --*((_BYTE *)v2 + 17);
    }
    else
    {
      *((_BYTE *)v2 + 16) = 0;
      *v2 = 0;
      v2[1] = 0;
      v2[2] = 0;
      v2[3] = 0;
    }
    --v3;
    v2 += 5;
  }
  while ( v3 );
  memset(*v47, 255, 0x1000u);
  memset(*v46, 255, 0x1000u);
  memset((void *)a1[3640], 255, 0x1000u);
  v4 = 0;
  a1[3641] = 0;
  memset(a1 + 4042, 255, 0x64u);
  a1[4067] = 0;
  v48 = 3.4028e38;
  v49 = 3.4028e38;
  v50 = -3.4028e38;
  v51 = -3.4028e38;
  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  sub_60727620(Area, FIELD_U8(LevelInfo_instance, 20), &v48);
  v6 = (int)(float)(v51 * -0.0625);
  if ( v6 <= 0 )
    v6 = 0;
  if ( (int)(float)(v48 * 0.0625) > 0 )
    v4 = (int)(float)(v48 * 0.0625);
  result = (int)(float)(v49 * -0.0625);
  v45 = v4;
  v44 = result;
  if ( v6 <= result )
  {
    v8 = (int)(float)(v50 * 0.0625);
    while ( v45 > v8 )
    {
LABEL_62:
      result = v6 + 1;
      v23 = v6++ < v44;
      if ( !v23 )
        return result;
    }
    v9 = (float)v6 * 16.0;
    v10 = v45;
    v11 = (unsigned int)v9;
    v12 = -(float)(v9 + 16.0);
    v13 = -(float)(16.0 - (float)(40.0 - v9));
    while ( 1 )
    {
      v14 = v10;
      TileLayer = TilesetManager_getTileLayer(TilesetMgr_instance, FIELD_U8(LevelInfo_instance, 18), 0);
      v16 = (float)v14;
      if ( TileLayer )
      {
        v17 = v16 * 16.0;
        TilePtr = (unsigned __int16 *)TileLayer_getTilePtr(TileLayer, (unsigned int)(float)(v16 * 16.0), v11, 0);
        if ( TilePtr )
        {
          v19 = sub_6071B734(*TilePtr);
          if ( (unsigned __int16)(v19 - 178) > 4u )
          {
            if ( (unsigned __int16)(v19 - 210) > 2u )
            {
              if ( (unsigned __int16)(v19 - 213) > 2u )
                goto LABEL_61;
              v28 = v19 + 44;
              v24 = v17 + 8.0;
              v29 = v19 + 43;
              v30 = 1;
              v31 = v28 | 0xFF00;
              v32 = (int *)((char *)*v47 + 28);
              while ( *((unsigned __int8 *)v32 - 16) < 0xFEu )
              {
                if ( *(unsigned __int8 *)v32 > 0xFDu )
                  goto LABEL_45;
                v32 += 8;
                v23 = v30 + 1 < 256;
                v30 += 2;
                if ( !v23 )
                  goto LABEL_46;
              }
              v32 -= 4;
              --v30;
LABEL_45:
              v38 = (int)*v47 + 16 * v30;
              FIELD_U32(v38, 8) = -1027080192;
              *(float *)v38 = v24;
              FIELD_F32(v38, 4) = v12;
              *v32 = v31;
LABEL_46:
              v39 = 1;
              v40 = v29 | 0xFF00;
              v41 = (int *)((char *)*v46 + 28);
              while ( *((unsigned __int8 *)v41 - 16) < 0xFEu )
              {
                if ( *(unsigned __int8 *)v41 > 0xFDu )
                  goto LABEL_52;
                v41 += 8;
                v23 = v39 + 1 < 256;
                v39 += 2;
                if ( !v23 )
                  goto LABEL_53;
              }
              v41 -= 4;
              --v39;
LABEL_52:
              v42 = (int)*v46 + 16 * v39;
              FIELD_U32(v42, 8) = 1137180672;
              *(float *)v42 = v24;
              FIELD_F32(v42, 4) = v12;
              *v41 = v40;
LABEL_53:
              if ( (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 6) > 1 )
                goto LABEL_61;
              v35 = 1;
              v36 = FIELD_U32(TileMgr_instance, 14560);
              v37 = (_DWORD *)(v36 + 28);
              while ( *((unsigned __int8 *)v37 - 16) < 0xFEu )
              {
                if ( *(unsigned __int8 *)v37 > 0xFDu )
                  goto LABEL_60;
                v37 += 8;
                v23 = v35 + 1 < 256;
                v35 += 2;
                if ( !v23 )
                  goto LABEL_61;
              }
              goto LABEL_59;
            }
            v24 = v17 + 8.0;
            v25 = 1;
            v26 = (unsigned __int8)(v19 + 46) | 0xFF00;
            v27 = (int *)((char *)*v46 + 28);
            while ( *((unsigned __int8 *)v27 - 16) < 0xFEu )
            {
              if ( *(unsigned __int8 *)v27 > 0xFDu )
                goto LABEL_37;
              v27 += 8;
              v23 = v25 + 1 < 256;
              v25 += 2;
              if ( !v23 )
                goto LABEL_38;
            }
            v27 -= 4;
            --v25;
LABEL_37:
            v34 = (int)*v46 + 16 * v25;
            FIELD_U32(v34, 8) = 1137180672;
            *(float *)v34 = v24;
            FIELD_F32(v34, 4) = v12;
            *v27 = v26;
LABEL_38:
            if ( (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 7) == 0 )
            {
              v35 = 1;
              v36 = FIELD_U32(TileMgr_instance, 14560);
              v37 = (_DWORD *)(v36 + 28);
              while ( *((unsigned __int8 *)v37 - 16) < 0xFEu )
              {
                if ( *(unsigned __int8 *)v37 > 0xFDu )
                  goto LABEL_60;
                v37 += 8;
                v23 = v35 + 1 < 256;
                v35 += 2;
                if ( !v23 )
                  goto LABEL_61;
              }
LABEL_59:
              v37 -= 4;
              --v35;
LABEL_60:
              v43 = v36 + 16 * v35;
              FIELD_U32(v43, 8) = 1137180672;
              *(float *)v43 = v24;
              FIELD_F32(v43, 4) = v13;
              *v37 = 65280;
            }
          }
          else
          {
            v20 = 1;
            v21 = (unsigned __int8)(v19 + 78) | 0xFF00;
            v22 = (int *)((char *)*v47 + 28);
            while ( *((unsigned __int8 *)v22 - 16) < 0xFEu )
            {
              if ( *(unsigned __int8 *)v22 > 0xFDu )
                goto LABEL_35;
              v22 += 8;
              v23 = v20 + 1 < 256;
              v20 += 2;
              if ( !v23 )
                goto LABEL_61;
            }
            v22 -= 4;
            --v20;
LABEL_35:
            v33 = (int)*v47 + 16 * v20;
            FIELD_U32(v33, 8) = -1027080192;
            *(float *)v33 = v17 + 8.0;
            FIELD_F32(v33, 4) = v12;
            *v22 = v21;
          }
        }
      }
LABEL_61:
      v10 = v14 + 1;
      if ( v14 >= v8 )
        goto LABEL_62;
    }
  }
  return result;
}
