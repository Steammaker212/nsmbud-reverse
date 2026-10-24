/* SE_BOSS_WOOGAN_FIRED_ref_2
 * address: 0x603E15C0   size: 752   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_WOOGAN_FIRED_ref_2(int a1, int a2)
{
  int result; // r0
  Actor *v5; // r4
  int v6; // r1
  _BYTE *v7; // r4
  float v8; // s2
  float v9; // s4
  float v10; // s6
  float v11; // r2
  float v12; // s2
  float v13; // s6
  float v14; // s0
  int v15; // r3
  int v16; // r3
  int v17; // r2
  char *v18; // r1
  char v19; // t1
  char v20; // r0
  int v21; // r3
  int v22; // r0
  void (__fastcall *v23)(int, const char *, int, _DWORD, float); // r12
  const char *v24; // r1
  float v25; // s2
  float v26; // s6
  float v27; // s4
  float v28; // r2
  float v29; // s2
  float v30; // s6
  int v31; // r3
  int v32; // r3
  char *v33; // r1
  char v34; // t1
  char v35; // r0
  int v36; // r3

  result = FIELD_U32(a2, 136);
  if ( result != 15 )
  {
    v5 = *(Actor **)(a2 + 64);
    v6 = FIELD_U32(a1, 64);
    result = BYTE1(v5[6].field_34);
    if ( (unsigned int)(result - 1) < 2 )
    {
      if ( FIELD_U32(v5 + (16) * 80, 0x24) == (sead_ListNode *)5 )
        return (*(int (__fastcall **)(_DWORD, int, int))(FIELD_U32(v5, 0x0) + 1164))(FIELD_U32(a2, 64), a1, a2);
      else
        return (*(int (__fastcall **)(Actor *, int, int))(FIELD_U32(v5, 0x0) + 1168))(v5, v6, 9);
    }
    else
    {
      if ( !BYTE1(v5[6].field_34) )
      {
        if ( !v6 )
          return result;
        result = FIELD_U32(a2, 140);
        if ( result == 2 )
        {
          v7 = (_BYTE *)(v6 + 8240);
          result = FIELD_U8(v6, 8240);
          if ( FIELD_U8(v6, 8240) )
            return result;
          v25 = FIELD_F32(v6, 8200);
          v26 = FIELD_F32(v6, 8204);
          v27 = FIELD_F32(v6, 8208);
          FIELD_U32(v6, 8232) = 1008981770;
          v28 = 0.8;
          v29 = v25 + -0.05;
          v30 = v26 + -0.05;
          v14 = v27 + -0.05;
          v31 = 1061997773;
          if ( v29 > 0.8 )
            v31 = LODWORD(v29);
          FIELD_U32(v6, 8200) = v31;
          v32 = 1061997773;
          if ( v29 > 0.8 )
          {
            v32 = LODWORD(v30);
            v28 = v27 + -0.05;
          }
          FIELD_U32(v6, 8204) = v32;
          FIELD_F32(v6, 8208) = v28;
          v17 = a1 + 84;
          v34 = FIELD_U8(v6, 8243);
          v33 = (char *)(v6 + 8243);
          v35 = v34 - 1;
          v36 = (char)(v34 - 1);
          if ( v36 <= -5 )
            v35 = -5;
          *v33 = v35;
          v22 = Global_BasicSoundActor1;
          v23 = *(void (__fastcall **)(int, const char *, int, _DWORD, float))(*(_DWORD *)Global_BasicSoundActor1 + 36);
          if ( v36 < -4 )
            v24 = "SE_BOSS_WOOGAN_THAW_NO_DAMAGE";
          else
            v24 = "SE_BOSS_WOOGAN_THAW";
        }
        else
        {
          if ( result != 1 )
            return result;
          v7 = (_BYTE *)(v6 + 8239);
          result = FIELD_U8(v6, 8239);
          if ( FIELD_U8(v6, 8239) )
            return result;
          v8 = FIELD_F32(v6, 8200);
          v9 = FIELD_F32(v6, 8208);
          v10 = FIELD_F32(v6, 8204);
          FIELD_U32(v6, 8232) = 1008981770;
          v11 = 1.2;
          v12 = v8 + 0.05;
          v13 = v10 + 0.05;
          v14 = v9 + 0.05;
          v15 = 1067030938;
          if ( v12 < 1.2 )
            v15 = LODWORD(v12);
          FIELD_U32(v6, 8200) = v15;
          v16 = 1067030938;
          if ( v12 < 1.2 )
          {
            v16 = LODWORD(v13);
            v11 = v9 + 0.05;
          }
          FIELD_U32(v6, 8204) = v16;
          FIELD_F32(v6, 8208) = v11;
          v17 = a1 + 84;
          v19 = FIELD_U8(v6, 8243);
          v18 = (char *)(v6 + 8243);
          v20 = v19 + 1;
          v21 = (char)(v19 + 1);
          if ( v21 >= 5 )
            v20 = 5;
          *v18 = v20;
          v22 = Global_BasicSoundActor1;
          v23 = *(void (__fastcall **)(int, const char *, int, _DWORD, float))(*(_DWORD *)Global_BasicSoundActor1 + 36);
          if ( v21 > 4 )
            v24 = "SE_BOSS_WOOGAN_FIRED_NO_DAMAGE";
          else
            v24 = "SE_BOSS_WOOGAN_FIRED";
        }
        v23(v22, v24, v17, 0, v14);
        *v7 = 1;
        return 1;
      }
      if ( result == 3 )
      {
        if ( Actor__getProfileId(*(Actor **)(a2 + 64)) == 521 )
          return (int)sub_6025E064((int)v5);
        if ( Actor__getProfileId(v5) == 522 )
          return (int)sub_6025E064((int)v5);
        result = Actor__getProfileId(v5);
        if ( result == 523 )
          return (int)sub_6025E064((int)v5);
      }
    }
  }
  return result;
}
