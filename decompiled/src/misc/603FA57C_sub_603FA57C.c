/* sub_603FA57C
 * address: 0x603FA57C   size: 1912   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FA57C(int a1)
{
  int result; // r0
  int v3; // r7
  int v4; // r5
  int v5; // r6
  __int64 v6; // r0
  int v7; // r1
  bool v8; // zf
  int v9; // r1
  bool v10; // zf
  int v11; // r1
  bool v12; // zf
  int v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r0
  unsigned int v17; // r1
  int v18; // r6
  int v19; // r7
  int v20; // r1
  int v21; // r1
  int v22; // r1
  float32x2_t v23; // d0
  float32x2_t v24; // d1
  float v25; // s4
  int v26; // r7
  int v27; // r1
  unsigned int v28; // r2
  unsigned __int8 v29; // r6
  unsigned __int8 v30; // r0
  int (__fastcall *v31)(int); // r0
  int (__fastcall *v32)(int); // r0
  int v33; // r1
  int v34; // r3
  float32x2_t v35; // d0
  float32x2_t v36; // d1
  int v37; // r0
  float v38; // s4
  int v39; // r6
  unsigned int v40; // r2
  unsigned __int8 v41; // r8
  unsigned __int8 v42; // r0
  int v43; // r0
  int (__fastcall *v44)(int); // r0
  int v45; // r0
  int v46; // r1
  bool v47; // zf
  int v48; // r2
  bool v49; // zf
  int v50; // [sp+8h] [bp-28h] BYREF
  int (__fastcall *v51)(int); // [sp+Ch] [bp-24h]

  if ( FIELD_U8(dword_60C9A230, 2084) )
    return PlayerStates_updateModelAndAnims_helper_40C134(dword_60C9A230, a1);
  v3 = dword_60C99DEC;
  v4 = dword_60CC62E4;
  v5 = FIELD_U32(dword_60CC62E4, 108);
  if ( FIELD_U32(dword_60CC6D78, 32) == 3 )
  {
    LODWORD(v6) = sub_603FD0B4(dword_60C99DEC + 16);
    if ( FIELD_U8(v3, 36) )
    {
      v7 = FIELD_U32(v3, 40);
      v8 = v7 == 0;
      if ( !v7 )
      {
        LODWORD(v6) = v6 - 1;
        v8 = (_DWORD)v6 == 0;
      }
      if ( v8 )
        goto LABEL_18;
    }
    if ( FIELD_U8(v3, 108) )
    {
      v9 = FIELD_U32(v3, 112);
      v10 = v9 == 0;
      if ( !v9 )
      {
        LODWORD(v6) = v6 - 1;
        v10 = (_DWORD)v6 == 0;
      }
      if ( v10 )
        goto LABEL_18;
    }
    if ( FIELD_U8(v3, 180) )
    {
      v11 = FIELD_U32(v3, 184);
      v12 = v11 == 0;
      if ( !v11 )
      {
        LODWORD(v6) = v6 - 1;
        v12 = (_DWORD)v6 == 0;
      }
      if ( v12 )
        goto LABEL_18;
    }
    if ( FIELD_U8(v3, 252) )
    {
      HIDWORD(v6) = FIELD_U32(v3, 256);
      if ( v6 == 1 )
      {
LABEL_18:
        v50 = 2;
        v51 = GameOverScene_create;
        result = SceneMgr_doSceneChange(v4, a1, (int)&v50, 196608, 0);
        FIELD_U32(v4, 108) = 196608;
        return result;
      }
    }
  }
  result = FIELD_U32(v3, 508);
  switch ( result )
  {
    case 0:
      v13 = sub_6040E438(LevelInfo_instance);
      v14 = 9;
      if ( !v13 )
      {
        if ( sub_6040E3D0(LevelInfo_instance) )
        {
          v14 = 524297;
        }
        else
        {
          v43 = FIELD_U32(dword_60CC6D78, 32);
          switch ( v43 )
          {
            case 1:
              v14 = 131081;
              break;
            case 3:
              v14 = 196617;
              break;
            case 2:
              sub_6040E4C8(LevelInfo_instance);
              v14 = 589833;
              break;
            default:
              v14 = v5;
              break;
          }
        }
      }
      if ( FIELD_U8(v3, 36) && !FIELD_U32(v3, 40)
        || FIELD_U8(v3, 108) && !FIELD_U32(v3, 112)
        || FIELD_U8(v3, 180) && !FIELD_U32(v3, 184)
        || FIELD_U8(v3, 252) && !FIELD_U32(v3, 256) )
      {
        v14 &= 0xFFFF0000;
        v50 = 2;
        v44 = GameOverScene_create;
      }
      else
      {
        v45 = dword_60CC6D78;
        v46 = FIELD_U32(dword_60CC6D78, 32);
        v47 = v46 == 2;
        if ( v46 == 2 )
          v47 = (FIELD_U8(dword_60CC6D78, 44) & 3) == 0;
        if ( !v47 )
          goto LABEL_99;
        v48 = FIELD_U8(LevelInfo_instance, 16);
        v49 = v48 == 7;
        if ( v48 == 7 )
          v49 = FIELD_U8(LevelInfo_instance, 17) == 42;
        if ( v49 )
        {
          FIELD_U8(dword_60CC6D78, 507) = 1;
          FIELD_U16(v45, 109048) = 10;
          v50 = 2;
          v44 = (int (__fastcall *)(int))DarkCloudDemoScene_create;
        }
        else
        {
LABEL_99:
          v50 = 2;
          v44 = (int (__fastcall *)(int))CourseSelectTask_create;
        }
      }
      goto LABEL_101;
    case 1:
      v15 = FIELD_U32(dword_60CC6D78, 32);
      if ( v15 == 3 )
      {
        sub_607FABF8(dword_60C9A1E0 + 708);
        if ( FIELD_U32(a1, 764) == 1 )
        {
          sub_603FC760(dword_60C99DE4);
          v36.n64_u32[0] = 1176256502;
          v37 = dword_60C9A1E0;
          v38 = FIELD_F32(dword_60C9A1E0, 696);
          if ( v38 > 10000.0 )
          {
            v38 = 10000.0;
            FIELD_U32(dword_60C9A1E0, 696) = 1176256502;
          }
          v35.n64_f32[0] = v35.n64_f32[0] + v38;
          FIELD_U32(v37, 696) = vmin_f32(v35, v36).n64_u32[0];
          FIELD_U8(v37, 700) = 1;
        }
        if ( FIELD_U32(dword_60C99DEC, 40) )
        {
          v39 = 0;
          v40 = FIELD_U32(dword_60C9A1E0, 532);
          if ( v40 >= 0x20 )
            v40 = 0;
          v41 = sub_60406440(dword_60C9A1E0 + 16 * v40 + 20, FIELD_U32(dword_60C9A1E0, 540));
          if ( FIELD_U32(dword_60C9A1E0, 532) < 0x20u )
            v39 = FIELD_U32(dword_60C9A1E0, 532);
          v42 = sub_60406450(dword_60C9A1E0 + 16 * v39 + 20, FIELD_U32(dword_60C9A1E0, 540));
          sub_607F65E0(v4, a1, v41, v42);
          result = 196608;
          goto LABEL_73;
        }
        v33 = a1;
        v34 = 196608;
        v50 = 2;
        v51 = GameOverScene_create;
        return SceneMgr_doSceneChange(v4, v33, (int)&v50, v34, 0);
      }
      if ( v15 != 2 )
      {
        v50 = 2;
        v31 = sub_603EA668;
LABEL_81:
        v51 = v31;
        v33 = a1;
        v34 = 131074;
        return SceneMgr_doSceneChange(v4, v33, (int)&v50, v34, 0);
      }
      sub_607FAC54(dword_60C9A1E0 + 708);
      v16 = dword_60C9A1E0;
      v17 = FIELD_U32(dword_60C9A1E0, 532);
      v18 = FIELD_U32(dword_60C9A1E0, 540);
      if ( v17 >= 0x20 )
        v17 = 0;
      v19 = *(_DWORD *)(dword_60C9A1E0 + 16 * v17 + 24) - 1;
      if ( FIELD_U32(a1, 764) == 1 )
      {
        v20 = FIELD_S8(a1, 733);
        if ( v20 >= 0 )
        {
          if ( (unsigned __int8)v20 >= 4u )
            v20 = 0;
          ++*(_DWORD *)(dword_60C9A1E0 + 36 * v20 + 552);
        }
        v21 = FIELD_S8(a1, 734);
        if ( v21 >= 0 )
        {
          if ( (unsigned __int8)v21 >= 4u )
            v21 = 0;
          ++*(_DWORD *)(v16 + 36 * v21 + 552);
        }
        v22 = FIELD_S8(a1, 735);
        if ( v22 >= 0 )
        {
          if ( (unsigned __int8)v22 >= 4u )
            v22 = 0;
          ++*(_DWORD *)(v16 + 36 * v22 + 552);
        }
        if ( FIELD_U32(a1, 764) == 1 )
        {
          sub_603FC760(dword_60C99DE4);
          v24.n64_u32[0] = 1176256502;
          v16 = dword_60C9A1E0;
          v25 = FIELD_F32(dword_60C9A1E0, 696);
          if ( v25 > 10000.0 )
          {
            v25 = 10000.0;
            FIELD_U32(dword_60C9A1E0, 696) = 1176256502;
          }
          v23.n64_f32[0] = v23.n64_f32[0] + v25;
          FIELD_U32(v16, 696) = vmin_f32(v23, v24).n64_u32[0];
          FIELD_U8(v16, 700) = 1;
        }
      }
      if ( v18 < v19 )
      {
        v26 = 0;
        v27 = FIELD_U32(v16, 540) + 1;
        FIELD_U32(v16, 540) = v27;
        v28 = FIELD_U32(v16, 532);
        if ( v28 >= 0x20 )
          v28 = 0;
        v29 = sub_60406440(v16 + 16 * v28 + 20, v27);
        if ( FIELD_U32(dword_60C9A1E0, 532) < 0x20u )
          v26 = FIELD_U32(dword_60C9A1E0, 532);
        v30 = sub_60406450(dword_60C9A1E0 + 16 * v26 + 20, FIELD_U32(dword_60C9A1E0, 540));
        sub_607F65E0(v4, a1, v29, v30);
        result = 589824;
LABEL_73:
        FIELD_U32(v4, 108) = result;
        return result;
      }
      FIELD_U8(v16, 544) = 1;
      return sub_607F65E0(v4, a1, 0, 45);
    case 2:
      if ( FIELD_U32(dword_60CC6D78, 32) == 1 )
      {
        v50 = 2;
        v31 = MultiPlayCourseSelectScene_create;
        goto LABEL_81;
      }
      if ( FIELD_U8(dword_60C99DEC, 530) )
        ++FIELD_U8(dword_60C99DEC, 532);
      v50 = 2;
      v32 = ResultScene_create;
      goto LABEL_62;
    case 3:
      v50 = 2;
      v31 = MultiPlayCourseSelectScene_create;
      goto LABEL_81;
    case 4:
      if ( (FIELD_U8(dword_60CC6D78, 44) & 0x10) != 0 )
      {
        v50 = 2;
        v32 = (int (__fastcall *)(int))sub_603FADF4;
LABEL_62:
        v51 = v32;
        v33 = a1;
        v34 = v5;
        return SceneMgr_doSceneChange(v4, v33, (int)&v50, v34, 0);
      }
      result = FIELD_U32(dword_60CC6D78, 32);
      switch ( result )
      {
        case 1:
          v50 = 2;
          v31 = (int (__fastcall *)(int))sub_603FADF4;
          goto LABEL_81;
        case 3:
          v14 = 196618;
          v50 = 2;
          v44 = ChallengeRetryScene_create;
LABEL_101:
          v51 = v44;
          break;
        case 2:
          v14 = 786434;
          v50 = 2;
          v51 = ChallengeResultScene_create;
          break;
        default:
          return result;
      }
      return SceneMgr_doSceneChange(v4, a1, (int)&v50, v14, 0);
    default:
      return result;
  }
}
