/* SE_BOSS_JR_CLOWN_DAMAGE_ref_2
 * address: 0x60102060   size: 1632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall SE_BOSS_JR_CLOWN_DAMAGE_ref_2(int a1)
{
  int *v2; // r7
  int v3; // r5
  char v4; // r12
  int v5; // r0
  int v6; // r5
  int v7; // r1
  int v8; // r0
  float v9; // r1
  float v10; // s0
  unsigned int v11; // r0
  int v12; // r0
  unsigned int v13; // r0
  signed int v14; // r8
  int v15; // r0
  float v16; // r1
  int v17; // r0
  float v18; // s0
  int v19; // r5
  int v20; // r6
  float v21; // r0
  int v22; // r0
  float v23; // s2
  int v24; // r5
  int v25; // r6
  float v26; // r0
  int v27; // r0
  float v28; // s0
  int v29; // r6
  int v30; // r7
  float v31; // r0
  int v32; // r5
  int v33; // r0
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
  v2 = (int *)(a1 + 9456);
  switch ( FIELD_U32(a1, 9456) )
  {
    case 1:
      if ( !FIELD_U16(a1, 6276) )
      {
        sub_600D1DE0(a1);
        v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
        if ( ((unsigned int)dword_60C81768 & ~(1611669748 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C81768) )
        {
          dword_60C81764 = (int)&off_60BC2CB4;
          _cxa_guard_release(dword_60C81768);
        }
        if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C81764) == 1 )
        {
          *(_DWORD *)(FIELD_U32(v3, 7104) + 24) = 0;
          v5 = FIELD_U32(v3, 7104);
          FIELD_U32(v5, 20) = 0;
          FIELD_U32(v5, 28) |= 2u;
        }
        FIELD_U16(a1, 6276) = 6;
        *v2 = 2;
      }
      goto LABEL_48;
    case 2:
      if ( !FIELD_U16(a1, 6276) )
      {
        FIELD_U16(a1, 6276) = 130;
        v6 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
        if ( v6 == (*(int (**)(void))(dword_60C85E94 + 8))() )
        {
          v7 = 4;
        }
        else
        {
          v32 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
          v33 = (*(int (**)(void))(dword_60C85F94 + 8))();
          v7 = 3;
          if ( v32 == v33 )
            v7 = 4;
        }
        *v2 = v7;
      }
      goto LABEL_48;
    case 3:
      CollisionActor__handleGravity((CollisionActor *)a1);
      CollisionActor__handleSpeed((CollisionActor *)a1);
      FIELD_U32(a1, 160) -= 0x8000000;
      v8 = FIELD_U32(a1, 80);
      if ( !v8 )
      {
        v9 = FIELD_F32(a1, 108);
        if ( v9 < (float)(FIELD_F32(dword_60CC6484, 120) + -32.0) )
          goto LABEL_32;
        goto LABEL_30;
      }
      if ( v8 == 1 )
      {
        v9 = FIELD_F32(a1, 108);
        if ( v9 > (float)(FIELD_F32(dword_60CC6484, 112) + 32.0) )
          goto LABEL_32;
LABEL_30:
        v17 = v8 ^ 1;
        v18 = (float)byte_60AFE3F4[v17];
        FIELD_U32(a1, 80) = v17;
        FIELD_F32(a1, 120) = v18 + v18;
        goto LABEL_32;
      }
      v9 = FIELD_F32(a1, 108);
LABEL_32:
      v19 = FIELD_U32(a1, 8);
      v20 = Global_BasicSoundActor2;
      v21 = FIELD_F32(a1, 112);
      position.x = v9;
      position.y = v21;
      mapPositionToScreen(&out, &position);
      SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v20, "SE_BOSS_JR_CLOWN_DAMAGE", v19, &out, 0);
      if ( FIELD_F32(a1, 112) >= FIELD_F32(a1, 6812) )
      {
        FIELD_U32(a1, 9420) = 0;
        *v2 = 4;
      }
      goto LABEL_48;
    case 4:
      v10 = FIELD_F32(a1, 120) + FIELD_F32(a1, 108);
      FIELD_F32(a1, 108) = v10;
      if ( (FIELD_U8(a1, 2872) & 1) == 0 )
      {
        v11 = FIELD_U32(a1, 9420) + dword_60C86024;
        FIELD_U32(a1, 9420) = v11;
        FIELD_F32(a1, 112) = FIELD_F32(a1, 6812)
                             + (float)((float)(*(float *)((char *)sinLutTable + ((v11 >> 20) & 0xFF0))
                                             + (float)((float)((float)(v11 & 0xFFFFFF)
                                                             * *(float *)((char *)&sinLutTable[1] + ((v11 >> 20) & 0xFF0)))
                                                     * 0.000000059605))
                                     * 16.0);
      }
      FIELD_U32(a1, 160) -= 0x8000000;
      v12 = FIELD_U32(a1, 80);
      if ( v12 )
      {
        if ( v12 != 1 || v10 > (float)(FIELD_F32(dword_60CC6484, 112) + 32.0) )
        {
LABEL_37:
          v24 = FIELD_U32(a1, 8);
          v25 = Global_BasicSoundActor2;
          v26 = FIELD_F32(a1, 112);
          position.x = v10;
          position.y = v26;
          mapPositionToScreen(&out, &position);
          SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v25, "SE_BOSS_JR_CLOWN_DAMAGE", v24, &out, 0);
          if ( !FIELD_U16(a1, 6276) )
            *v2 = 5;
          goto LABEL_48;
        }
      }
      else if ( v10 < (float)(FIELD_F32(dword_60CC6484, 120) + -32.0) )
      {
        goto LABEL_37;
      }
      v22 = v12 ^ 1;
      v23 = (float)byte_60AFE3F4[v22];
      FIELD_U32(a1, 80) = v22;
      FIELD_F32(a1, 120) = v23 + v23;
      goto LABEL_37;
    case 5:
      FIELD_F32(a1, 108) = FIELD_F32(a1, 120) + FIELD_F32(a1, 108);
      if ( (FIELD_U8(a1, 2872) & 1) == 0 )
      {
        v13 = FIELD_U32(a1, 9420) + dword_60C86024;
        FIELD_U32(a1, 9420) = v13;
        FIELD_F32(a1, 112) = FIELD_F32(a1, 6812)
                             + (float)((float)(*(float *)((char *)sinLutTable + ((v13 >> 20) & 0xFF0))
                                             + (float)((float)((float)(v13 & 0xFFFFFF)
                                                             * *(float *)((char *)&sinLutTable[1] + ((v13 >> 20) & 0xFF0)))
                                                     * 0.000000059605))
                                     * 16.0);
      }
      position.x = 0.0;
      out.x = -1.0385e34;
      v14 = sub_6083246C((int *)(a1 + 160), (int *)&position, (signed int *)&out);
      v15 = FIELD_U32(a1, 80);
      if ( !v15 )
      {
        v16 = FIELD_F32(a1, 108);
        if ( v16 < (float)(FIELD_F32(dword_60CC6484, 120) + -32.0) )
          goto LABEL_43;
        goto LABEL_41;
      }
      if ( v15 == 1 )
      {
        v16 = FIELD_F32(a1, 108);
        if ( v16 > (float)(FIELD_F32(dword_60CC6484, 112) + 32.0) )
          goto LABEL_43;
LABEL_41:
        v27 = v15 ^ 1;
        v28 = (float)byte_60AFE3F4[v27];
        FIELD_U32(a1, 80) = v27;
        FIELD_F32(a1, 120) = v28 + v28;
        goto LABEL_43;
      }
      v16 = FIELD_F32(a1, 108);
LABEL_43:
      v29 = FIELD_U32(a1, 8);
      v30 = Global_BasicSoundActor2;
      v31 = FIELD_F32(a1, 112);
      position.x = v16;
      position.y = v31;
      mapPositionToScreen(&out, &position);
      SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v30, "SE_BOSS_JR_CLOWN_DAMAGE", v29, &out, 0);
      if ( v14 == 1 )
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85FD8);
LABEL_48:
      position.x = 0.0;
      out.x = 9.404e-38;
      moveValueTo((int *)(a1 + 156), (int *)&position, (int *)&out);
      position.x = 0.0;
      out.x = 9.404e-38;
      return moveValueTo((int *)(a1 + 164), (int *)&position, (int *)&out);
    default:
      goto LABEL_48;
  }
}
