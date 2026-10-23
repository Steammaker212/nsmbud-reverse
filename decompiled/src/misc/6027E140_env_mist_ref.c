/* env_mist_ref
 * address: 0x6027E140   size: 1724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall env_mist_ref(int a1)
{
  int v2; // r6
  unsigned __int8 v3; // r0
  unsigned int v4; // r3
  int v5; // r1
  unsigned __int8 *v6; // r10
  int v7; // r1
  int v8; // r2
  int v9; // r7
  int v10; // r1
  unsigned int v11; // r0
  unsigned __int8 *v12; // r5
  int Area; // r0
  int v14; // r0
  float v15; // s0
  int v16; // r5
  unsigned int v17; // r7
  float *v18; // r6
  float v19; // s0
  int (**v22)(); // [sp+Ch] [bp-34h] BYREF
  const char *v23; // [sp+10h] [bp-30h]
  int (**v24)(); // [sp+14h] [bp-2Ch] BYREF
  const char *v25; // [sp+18h] [bp-28h]

  v2 = dword_60CC6484;
  FIELD_U32(a1, 16540) = 0;
  FIELD_U32(a1, 16524) = 0;
  FIELD_U8(a1, 6504) = FIELD_U32(a1, 20) & 0xF;
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
  FIELD_U8(a1, 6505) = v3;
  switch ( v3 )
  {
    case 9u:
      goto LABEL_4;
    case 5u:
      v4 = FIELD_U32(a1, 76) | 4;
      break;
    case 1u:
LABEL_4:
      v4 = FIELD_U32(a1, 76) & 0xFFFFFFF9;
      break;
    default:
      v4 = FIELD_U32(a1, 76) | 6;
      break;
  }
  FIELD_U32(a1, 76) = v4;
  if ( (FIELD_U8(a1, 21) & 1) != 0 )
    FIELD_U32(a1, 76) = v4 & 0xFFFFFFFD;
  if ( v3 != 5 || (v5 = 2, FIELD_U32(dword_60C99DD4, 764) != 3) )
  {
    v6 = (unsigned __int8 *)(a1 + 6505);
    FIELD_U32(a1, 16512) = 1045220557;
    FIELD_U32(a1, 6500) = 0;
    FIELD_U32(a1, 6496) = 0;
    v7 = TileMgr_instance;
    if ( !FIELD_U8(TileMgr_instance, 41464) )
    {
      FIELD_U8(TileMgr_instance, 41464) = 1;
      v22 = &sead__SafeStringBase__vtable;
      v24 = &sead__SafeStringBase__vtable;
      v25 = "env_mist";
      v23 = "wny_mist.0";
      output_bfres_ref_448C14(&v24, &v22, v7 + 41472, (_DWORD *)(a1 + 6300), 0);
      v22 = &sead__SafeStringBase__vtable;
      v24 = &sead__SafeStringBase__vtable;
      v25 = "env_mist";
      v23 = "wny_mist.1";
      output_bfres_ref_448C14(&v24, &v22, TileMgr_instance + 41744, (_DWORD *)(a1 + 6300), 0);
      v22 = &sead__SafeStringBase__vtable;
      v24 = &sead__SafeStringBase__vtable;
      v25 = "env_mist";
      v23 = "wny_mist.2";
      output_bfres_ref_448C14(&v24, &v22, TileMgr_instance + 42016, (_DWORD *)(a1 + 6300), 0);
      v22 = &sead__SafeStringBase__vtable;
      v24 = &sead__SafeStringBase__vtable;
      v25 = "env_mist";
      v23 = "wny_mist.3";
      output_bfres_ref_448C14(&v24, &v22, TileMgr_instance + 42288, (_DWORD *)(a1 + 6300), 0);
      v22 = &sead__SafeStringBase__vtable;
      v24 = &sead__SafeStringBase__vtable;
      v25 = "env_mist";
      v23 = "wny_mist.4";
      output_bfres_ref_448C14(&v24, &v22, TileMgr_instance + 42560, (_DWORD *)(a1 + 6300), 0);
      v22 = &sead__SafeStringBase__vtable;
      v24 = &sead__SafeStringBase__vtable;
      v25 = "env_mist";
      v23 = "wny_mist.5";
      output_bfres_ref_448C14(&v24, &v22, TileMgr_instance + 42832, (_DWORD *)(a1 + 6300), 0);
      v22 = &sead__SafeStringBase__vtable;
      v24 = &sead__SafeStringBase__vtable;
      v25 = "env_mist";
      v23 = "wny_mist.6";
      output_bfres_ref_448C14(&v24, &v22, TileMgr_instance + 43104, (_DWORD *)(a1 + 6300), 0);
      v22 = &sead__SafeStringBase__vtable;
      v24 = &sead__SafeStringBase__vtable;
      v25 = "env_mist";
      v23 = "wny_mist.7";
      output_bfres_ref_448C14(&v24, &v22, TileMgr_instance + 43376, (_DWORD *)(a1 + 6300), 0);
      v22 = &sead__SafeStringBase__vtable;
      v24 = &sead__SafeStringBase__vtable;
      v25 = "env_mist";
      v23 = "wny_mist.8";
      output_bfres_ref_448C14(&v24, &v22, TileMgr_instance + 43648, (_DWORD *)(a1 + 6300), 0);
      v22 = &sead__SafeStringBase__vtable;
      v24 = &sead__SafeStringBase__vtable;
      v25 = "env_mist";
      v23 = "wny_mist.9";
      output_bfres_ref_448C14(&v24, &v22, TileMgr_instance + 43920, (_DWORD *)(a1 + 6300), 0);
      v22 = &sead__SafeStringBase__vtable;
      v24 = &sead__SafeStringBase__vtable;
      v25 = "env_mist";
      v23 = "wny_mist.10";
      output_bfres_ref_448C14(&v24, &v22, TileMgr_instance + 44192, (_DWORD *)(a1 + 6300), 0);
      v22 = &sead__SafeStringBase__vtable;
      v24 = &sead__SafeStringBase__vtable;
      v25 = "env_mist";
      v23 = "wny_mist.11";
      output_bfres_ref_448C14(&v24, &v22, TileMgr_instance + 44464, (_DWORD *)(a1 + 6300), 0);
      v3 = *v6;
    }
    if ( v3 <= 8u )
    {
      if ( ((1 << v3) & 0x15) != 0 )
      {
        v8 = 42560;
        v9 = 42832;
        v10 = 42288;
LABEL_21:
        sub_604490E4(a1 + 6304, TileMgr_instance + v10, TileMgr_instance + v8, TileMgr_instance + v9, -1, 22);
        goto LABEL_22;
      }
      if ( ((1 << v3) & 0x180) != 0 )
      {
        sub_604490E4(a1 + 6304, TileMgr_instance + 41472, TileMgr_instance + 41744, TileMgr_instance + 42016, -1, 22);
LABEL_22:
        v11 = *v6;
        if ( v11 <= 7 )
        {
          v12 = (unsigned __int8 *)(a1 + 6504);
          if ( ((1 << v11) & 0x95) != 0 )
          {
            Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
            LevelArea_getLocation(Area, (float *)(a1 + 6464), *v12);
            FIELD_F32(a1, 108) = FIELD_F32(a1, 6464) + (float)(FIELD_F32(a1, 6472) - FIELD_F32(a1, 6464));
            FIELD_F32(a1, 112) = (float)-FIELD_F32(a1, 6468)
                                 - (float)(FIELD_F32(a1, 6476) - FIELD_F32(a1, 6468));
          }
          else if ( v11 == 5 )
          {
            v14 = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
            LevelArea_getLocation(v14, (float *)(a1 + 6464), *v12);
            FIELD_U32(a1, 108) = FIELD_U32(a1, 6464);
            FIELD_U32(a1, 112) = 0;
            v15 = FIELD_F32(v2, 108) / (float)(FIELD_F32(a1, 6476) - FIELD_F32(a1, 6468));
            FIELD_F32(a1, 16556) = (float)((float)(v15 * (float)(v15 * v15)) * 0.4) + 0.6;
          }
        }
        v16 = 0;
        FIELD_U32(a1, 6492) = 0;
        FIELD_U32(a1, 6488) = 0;
        FIELD_U32(a1, 6484) = 0;
        FIELD_U32(a1, 6480) = 0;
        FIELD_F32(a1, 16516) = sub_6000A42C(EnemyCounterMaybe_instance) + 4800.0;
        FIELD_U8(a1, 16528) = 0;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
        v5 = 1;
        if ( *v6 == 5 )
        {
          v17 = 0;
          do
          {
            v18 = *(float **)(a1 + 6376);
            v19 = FIELD_F32(a1, 16552);
            if ( FIELD_U32(a1, 6372) > v17++ )
              v18 = (float *)((char *)v18 + v16);
            v16 += 12;
            if ( *v18 > v19 )
              *v18 = v19;
          }
          while ( v17 != 400 );
        }
        return v5;
      }
      if ( v3 == 5 )
      {
        v8 = 44192;
        v9 = 44464;
        v10 = 43920;
        goto LABEL_21;
      }
    }
    v8 = 43376;
    v9 = 43648;
    v10 = 43104;
    goto LABEL_21;
  }
  return v5;
}
