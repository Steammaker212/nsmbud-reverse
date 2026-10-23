/* SE_OBJ_KAKIKAE_B_ref
 * address: 0x605CF244   size: 1012   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall SE_OBJ_KAKIKAE_B_ref(int a1, int a2, int a3, int a4)
{
  int v4; // r5
  int v5; // r9
  _DWORD *result; // r0
  int v7; // t1
  int v8; // r4
  const char *v9; // r0
  unsigned int v10; // r2
  unsigned int *v11; // r8
  unsigned __int16 v12; // r1
  int v13; // r3
  int v14; // r10
  unsigned __int16 v15; // r6
  int *v16; // r7
  unsigned __int16 v17; // r4
  float v18; // r1
  float v19; // r0
  int v20; // r5
  int v21; // r1
  unsigned __int16 v22; // r4
  unsigned __int16 v23; // r11
  float v24; // r1
  float v25; // r0
  int v26; // r5
  int v27; // r1
  unsigned __int16 v28; // [sp+8h] [bp-98h]
  _DWORD *v30; // [sp+10h] [bp-90h]
  int v31; // [sp+14h] [bp-8Ch]
  int v32; // [sp+18h] [bp-88h]
  int *v33; // [sp+30h] [bp-70h]
  float v34; // [sp+34h] [bp-6Ch]
  char *name; // [sp+3Ch] [bp-64h]
  int v38; // [sp+50h] [bp-50h]
  Vec3 position; // [sp+54h] [bp-4Ch] BYREF
  Vec2 out; // [sp+60h] [bp-40h] BYREF

  v4 = FIELD_U32(a1, 6132);
  v38 = 0;
  v33 = (int *)(a1 + 6132);
  v5 = v4 != 2;
  if ( a2 )
    v38 = dword_60B0589C[FIELD_U32(a1, 6124)];
  v7 = FIELD_U32(a1, 6116);
  result = (_DWORD *)(a1 + 6116);
  v30 = result;
  if ( v7 )
  {
    v8 = 0;
    v28 = (unsigned int)*((float *)result - 1502) & 0xFFF0;
    v9 = "SE_OBJ_KAKIKAE_B_APPEAR";
    v11 = (unsigned int *)(a1 + 6112);
    v10 = FIELD_U32(a1, 6112);
    if ( !a2 )
      v9 = "SE_OBJ_KAKIKAE_B_DISAPPEAR";
    name = (char *)v9;
    v12 = (unsigned int)(float)-FIELD_F32(a1, 112) & 0xFFF0;
    v13 = v4 != 2;
    do
    {
      v14 = v12;
      v32 = v8;
      v31 = v13;
      if ( v10 )
      {
        v34 = (float)(-8 - v12);
        if ( a3 )
        {
          v15 = v28;
          v16 = v33;
          v17 = 0;
          do
          {
            if ( (_WORD)v5 )
            {
              TileMgr_setTile(TileMgr_instance, v15, v14, 0, v38);
              if ( !a4 )
              {
                if ( FIELD_U8(dword_60CC6D8C, 17) )
                {
                  v18 = v34;
                  v19 = (float)v15 + 8.0;
                }
                else
                {
                  v19 = FIELD_F32(a1, 108);
                  v18 = FIELD_F32(a1, 112);
                }
                position.x = v19;
                position.y = v18;
                v20 = Global_BasicSoundActor2;
                mapPositionToScreen(&out, &position);
                BasicSoundActor2_play(v20, name, &out.x, 0);
                v16 = v33;
              }
            }
            v4 = *v16;
            v10 = *v11;
            ++v17;
            v15 += 16;
            v21 = *v16;
            if ( *v16 )
              v21 = 1;
            v5 ^= v21;
          }
          while ( v17 < v10 );
        }
        else
        {
          v22 = v28;
          v23 = 0;
          do
          {
            if ( (_WORD)v5 )
            {
              TileMgr_setTile(TileMgr_instance, v22, v14, 0, v38);
              if ( FIELD_U32(a1, 6124) != 2 )
              {
                position.x = (float)v22 + 8.0;
                position.y = (float)(-8 - v14);
                position.z = FIELD_F32(a1, 116);
                if ( Actor__getProfileId((Actor *)a1) == 750 )
                  position.y = position.y + 8.0;
                EffectData_create(1143, &position, 0, 0);
              }
              if ( !a4 )
              {
                if ( FIELD_U8(dword_60CC6D8C, 17) )
                {
                  v24 = v34;
                  v25 = (float)v22 + 8.0;
                }
                else
                {
                  v25 = FIELD_F32(a1, 108);
                  v24 = FIELD_F32(a1, 112);
                }
                position.x = v25;
                position.y = v24;
                v26 = Global_BasicSoundActor2;
                mapPositionToScreen(&out, &position);
                BasicSoundActor2_play(v26, name, &out.x, 0);
              }
            }
            v4 = *v33;
            v10 = *v11;
            ++v23;
            v22 += 16;
            v27 = *v33;
            if ( *v33 )
              v27 = 1;
            v5 ^= v27;
          }
          while ( v23 < v10 );
        }
      }
      else
      {
        v10 = 0;
      }
      v12 = v14 + 16;
      v13 = v31 ^ 1;
      v8 = v32 + 1;
      if ( v4 )
        v5 = v31 ^ 1;
      else
        v13 = v31;
      result = v30;
    }
    while ( (unsigned int)(unsigned __int16)v8 < *v30 );
  }
  return result;
}
