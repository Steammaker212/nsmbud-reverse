/* SE_BOSS_JR_C_ref
 * address: 0x60121AF4   size: 1860   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_C_ref(int a1)
{
  int *v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r0
  float v10; // s16
  float v11; // s18
  float v12; // s20
  float v13; // s0
  float v14; // s0
  float *v15; // r7
  int v16; // r5
  int v17; // r6
  float v18; // r0
  float *v19; // r7
  float *v20; // r5
  float *v21; // r6
  float v22; // s2
  float v23; // s20
  float v24; // s22
  float v25; // s18
  float v26; // s16
  float v27; // s0
  float v28; // s0
  float v29; // s0
  float v30; // r0
  float v31; // s2
  float v32; // r1
  int v33; // r1
  int v34; // r5
  int v35; // r6
  int v36; // r1
  int v37; // r1
  float v38; // r1
  int v39; // r5
  int v40; // r6
  _DWORD *v41; // r0
  int v42; // r1
  unsigned int v43; // r2
  unsigned int v44; // r0
  int result; // r0
  unsigned int v46; // r3
  int v47; // r1
  char v48; // r3
  int *v49; // r4
  int v50; // t1
  Vec2 out; // [sp+8h] [bp-50h] BYREF
  Vec3 position; // [sp+10h] [bp-48h] BYREF

  v2 = (int *)(a1 + 9196);
  switch ( FIELD_U32(a1, 9196) )
  {
    case 1:
      v3 = FIELD_U32(a1, 9248) - 1;
      FIELD_U32(a1, 9248) = v3;
      if ( !v3 )
      {
        FIELD_U8(a1, 9241) = 0;
        *v2 = 2;
        if ( !*(_DWORD *)((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1) + 6300) )
        {
          (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 9232) + 1140))(FIELD_U32(a1, 9232));
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C86D50);
        }
      }
      goto LABEL_51;
    case 2:
      CollisionActor__handleSpeed((CollisionActor *)a1);
      CollisionMgr_process((_BYTE *)(a1 + 648));
      v4 = FIELD_U32(a1, 2872);
      if ( (v4 & 0x440000) != 0 && (v4 & 0x10000000) == 0 || (v4 & 0x880000) != 0 && (v4 & 0x20000000) == 0 )
      {
        FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
        sub_60813430(a1 + 7008, "SE_BOSS_JR_CROWN_BOUND", 0);
        v4 = FIELD_U32(a1, 2872);
      }
      if ( (v4 & 1) != 0 || (v4 & 0x10400) == 0x400 )
      {
        FIELD_F32(a1, 124) = -FIELD_F32(a1, 124);
        sub_60813430(a1 + 7008, "SE_BOSS_JR_CROWN_BOUND", 0);
      }
      v5 = FIELD_U32(a1, 9252);
      FIELD_U32(a1, 9252) = v5 - 1;
      if ( v5 <= 1 )
        *v2 = 3;
      goto LABEL_50;
    case 3:
      CollisionActor__handleSpeed((CollisionActor *)a1);
      CollisionMgr_process((_BYTE *)(a1 + 648));
      v6 = FIELD_U32(a1, 2872);
      if ( (v6 & 1) != 0 )
      {
        sub_6011F2B4(a1, 0);
        v33 = 5;
        if ( !FIELD_U8(a1, 9329) )
          v33 = 4;
        v8 = a1 + 7008;
        *v2 = v33;
        goto LABEL_49;
      }
      if ( (v6 & 0x10400) == 0x400 )
      {
        sub_6011F2B4(a1, 1);
        v7 = 5;
        if ( !FIELD_U8(a1, 9329) )
          v7 = 4;
        v8 = a1 + 7008;
        *v2 = v7;
LABEL_49:
        sub_60813430(v8, "SE_BOSS_JR_CROWN_BOUND", 0);
        goto LABEL_50;
      }
      if ( (v6 & 0x440000) != 0 && (v6 & 0x10000000) == 0 || (v6 & 0x880000) != 0 && (v6 & 0x20000000) == 0 )
      {
        if ( FIELD_F32(a1, 108) < FIELD_F32(a1, 8940) )
          v36 = 2;
        else
          v36 = 3;
        sub_6011F2B4(a1, v36);
        v37 = 5;
        if ( !FIELD_U8(a1, 9329) )
          v37 = 4;
        v8 = a1 + 7008;
        *v2 = v37;
        goto LABEL_49;
      }
LABEL_50:
      v38 = FIELD_F32(a1, 112);
      v39 = FIELD_U32(a1, 8);
      v40 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v38;
      mapPositionToScreen(&out, &position);
      SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v40, "SE_BOSS_JR_CLOWN_DAMAGE", v39, &out, 0);
LABEL_51:
      v41 = *(_DWORD **)(a1 + 6304);
      v42 = v41[3];
      v43 = v41[2];
      v44 = v41[17];
      if ( v43 > v44 )
        v42 += 4 * v44;
      if ( (*(_BYTE *)(*(_DWORD *)v42 + 28) & 0x20) != 0 )
        FIELD_U32(a1, 160) += 0x2000000;
      position.x = 0.0;
      out.x = 9.404e-38;
      moveValueTo((int *)(a1 + 156), (int *)&position, (int *)&out);
      position.x = 0.0;
      out.x = 9.404e-38;
      moveValueTo((int *)(a1 + 164), (int *)&position, (int *)&out);
      result = 9416;
      v46 = FIELD_U8(a1, 9416);
      if ( v46 <= 2 )
      {
        result = a1 + 6312;
        v47 = FIELD_U32(a1, 6312);
        if ( (FIELD_U8(v47, 28) & 4) != 0 )
        {
          v48 = v46 + 1;
          FIELD_U8(a1, 9416) = v48;
          if ( v48 == 3 )
          {
            FIELD_U32(v47, 20) = 0;
            FIELD_U32(v47, 28) |= 2u;
            *(_DWORD *)(*(_DWORD *)result + 24) = 0;
            v50 = FIELD_U32(a1, 6324);
            v49 = (int *)(a1 + 6324);
            FIELD_U32(v50, 20) = 0;
            FIELD_U32(v50, 28) |= 2u;
            result = *v49;
            *(_DWORD *)(*v49 + 24) = 0;
          }
        }
      }
      return result;
    case 4:
      CollisionActor__handleSpeed((CollisionActor *)a1);
      CollisionMgr_process((_BYTE *)(a1 + 648));
      v9 = FIELD_U32(a1, 2872);
      if ( (v9 & 0x440000) != 0 && (v9 & 0x10000000) == 0
        || (v9 & 0x880000) != 0 && (v9 & 0x20000000) == 0
        || (v9 & 1) != 0
        || (v9 & 0x10400) == 0x400 )
      {
        v10 = sqrtf(
                (float)((float)(FIELD_F32(a1, 124) * FIELD_F32(a1, 124))
                      + (float)((float)(FIELD_F32(a1, 120) * 0.5) * (float)(FIELD_F32(a1, 120) * 0.5)))
              + (float)(FIELD_F32(a1, 128) * FIELD_F32(a1, 128)));
        v11 = FIELD_F32(a1, 9028) - FIELD_F32(a1, 112);
        v12 = FIELD_F32(a1, 9024) - FIELD_F32(a1, 108);
        v13 = sqrtf(
                (float)((float)(v11 * v11) + (float)(v12 * v12))
              + (float)((float)(FIELD_F32(a1, 9032) - FIELD_F32(a1, 116))
                      * (float)(FIELD_F32(a1, 9032) - FIELD_F32(a1, 116))));
        if ( v13 > 0.0 )
        {
          v14 = 1.0 / v13;
          v11 = v11 * v14;
          v12 = v12 * v14;
        }
        v15 = (float *)(a1 + 112);
        FIELD_F32(a1, 120) = (float)(v10 * v12) + (float)(v10 * v12);
        FIELD_F32(a1, 124) = v10 * v11;
        *v2 = 5;
        sub_60813430(a1 + 7008, "SE_BOSS_JR_CROWN_BOUND", 0);
      }
      else
      {
        v15 = (float *)(a1 + 112);
      }
      v16 = FIELD_U32(a1, 8);
      v17 = Global_BasicSoundActor2;
      v18 = *v15;
      position.x = FIELD_F32(a1, 108);
      position.y = v18;
      mapPositionToScreen(&out, &position);
      SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v17, "SE_BOSS_JR_CLOWN_DAMAGE", v16, &out, 0);
      goto LABEL_51;
    case 5:
      v19 = (float *)(a1 + 9024);
      v20 = (float *)(a1 + 9028);
      v21 = (float *)(a1 + 9032);
      v22 = FIELD_F32(a1, 9028) - FIELD_F32(a1, 112);
      if ( sqrtf(
             (float)((float)(v22 * v22)
                   + (float)((float)(FIELD_F32(a1, 9024) - FIELD_F32(a1, 108))
                           * (float)(FIELD_F32(a1, 9024) - FIELD_F32(a1, 108))))
           + (float)((float)(FIELD_F32(a1, 9032) - FIELD_F32(a1, 116))
                   * (float)(FIELD_F32(a1, 9032) - FIELD_F32(a1, 116)))) >= 16.0 )
      {
        CollisionActor__handleSpeed((CollisionActor *)a1);
        v30 = FIELD_F32(a1, 108);
        v32 = FIELD_F32(a1, 112);
LABEL_38:
        v34 = FIELD_U32(a1, 8);
        position.x = v30;
        position.y = v32;
        v35 = Global_BasicSoundActor2;
        mapPositionToScreen(&out, &position);
        SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v35, "SE_BOSS_JR_CLOWN_DAMAGE", v34, &out, 0);
        goto LABEL_51;
      }
      v23 = *v20 - FIELD_F32(a1, 112);
      v24 = *v19 - FIELD_F32(a1, 108);
      v25 = *v21 - FIELD_F32(a1, 116);
      v26 = (float)((float)(v23 * v23) + (float)(v24 * v24)) + (float)(v25 * v25);
      if ( sqrtf(v26) > 1.5 )
      {
        v27 = sqrtf(v26);
        if ( v27 > 0.0 )
        {
          v28 = 1.0 / v27;
          v25 = v25 * v28;
          v23 = v23 * v28;
          v24 = v24 * v28;
        }
        v29 = FIELD_F32(a1, 108) + (float)(v24 * 1.5);
        FIELD_F32(a1, 108) = v29;
        v30 = v29;
        v31 = FIELD_F32(a1, 112) + (float)(v23 * 1.5);
        FIELD_F32(a1, 112) = v31;
        v32 = v31;
        FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + (float)(v25 * 1.5);
        goto LABEL_38;
      }
      FIELD_F32(a1, 108) = *v19;
      FIELD_F32(a1, 112) = *v20;
      FIELD_F32(a1, 116) = *v21;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C86D2C);
    default:
      goto LABEL_51;
  }
}
