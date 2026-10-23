/* sub_6002E24C
 * address: 0x6002E24C   size: 1968   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002E24C(int a1)
{
  int v2; // r0
  _BYTE *v3; // r6
  int v4; // r7
  _DWORD *v5; // t1
  int v6; // r1
  unsigned int v7; // r0
  __int64 v8; // r8
  int v9; // r1
  _BYTE *v10; // r5
  int v11; // r6
  int v12; // r1
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  int v15; // r1
  unsigned int v16; // r2
  unsigned int v17; // r0
  int v18; // r0
  int *v19; // r1
  void (__fastcall *v20)(int, int *); // r2
  float v21; // s0
  TileCheck *v22; // r0
  float v23; // r0
  float v24; // s0
  TileCheck *v25; // r0
  int v26; // r0
  int v27; // r7
  int v28; // r8
  int v29; // r1
  unsigned int v30; // r0
  int v31; // r1
  unsigned int v32; // r0
  _DWORD *v33; // r0
  int result; // r0
  int v35; // r1
  unsigned int v36; // r0
  int v37; // r1
  unsigned int v38; // r0
  TileCheck_Result v39; // [sp+8h] [bp-B8h] BYREF
  TileCheck v40; // [sp+30h] [bp-90h] BYREF
  TileCheck_Param v41; // [sp+80h] [bp-40h] BYREF
  int (**v42)(); // [sp+8Ch] [bp-34h] BYREF
  Vec2 positionOffset; // [sp+90h] [bp-30h] BYREF
  Vec2 a3[5]; // [sp+98h] [bp-28h] BYREF

  v3 = (_BYTE *)(a1 + 7427);
  v2 = FIELD_U8(a1, 7427);
  switch ( v2 )
  {
    case 0:
      CollisionActor__handleSpeed((CollisionActor *)a1);
      CollisionMgr_process((_BYTE *)(a1 + 648));
      if ( (FIELD_U8(a1, 2872) & 1) != 0 )
        FIELD_U32(a1, 124) = 0;
      v5 = *(_DWORD **)(a1 + 7096);
      v4 = a1 + 7096;
      v6 = v5[3];
      v7 = v5[17];
      if ( v5[2] > v7 )
        v6 += 4 * v7;
      if ( (*(_BYTE *)(*(_DWORD *)v6 + 28) & 0x20) == 0 )
        goto LABEL_51;
      LODWORD(v8) = 0;
      sub_60813430(a1 + 6332, "SE_VOC_BKK_JUMP", 0);
      sub_60813430(a1 + 6332, "SE_BOSS_CMN_JUMP_L", 0);
      FIELD_U32(a1, 3180) |= 4u;
      FIELD_U32(a1, 3188) |= 4u;
      FIELD_U32(a1, 3204) |= 4u;
      v9 = FIELD_U8(a1, 7428);
      if ( v9 == 1 )
      {
        HIDWORD(v8) = 1090833613;
        FIELD_U32(a1, 7400) = 0;
        *v3 = 20;
        FIELD_U64(a1, 120) = v8;
        v10 = (_BYTE *)(a1 + 7426);
        if ( FIELD_U8(a1, 7426) == 6 )
          goto LABEL_51;
        v11 = FIELD_U32(a1, 7380);
        v12 = FIELD_U32(a1, 7100);
        v13 = *(_DWORD **)v4;
      }
      else
      {
        v33 = (_DWORD *)(a1 + 7400);
        if ( v9 == 2 )
        {
          *v33 = 0;
          *v3 = 20;
          FIELD_U64(a1, 120) = 0x4104CCCDC0200000LL;
          v10 = (_BYTE *)(a1 + 7426);
          if ( FIELD_U8(a1, 7426) == 6 )
            goto LABEL_51;
          v11 = FIELD_U32(a1, 7380);
          v12 = FIELD_U32(a1, 7100);
          v13 = *(_DWORD **)v4;
        }
        else
        {
          *v33 = 2;
          *v3 = 30;
          FIELD_U16(a1, 7416) = 36;
          FIELD_U64(a1, 120) = 0x4080000040200000LL;
          v10 = (_BYTE *)(a1 + 7426);
          if ( FIELD_U8(a1, 7426) == 6 )
            goto LABEL_51;
          v11 = FIELD_U32(a1, 7380);
          v12 = FIELD_U32(a1, 7100);
          v13 = *(_DWORD **)v4;
        }
      }
      sub_60421938(v13, v12, (int)&dword_60C7F750);
      v35 = *(_DWORD *)(*(_DWORD *)v4 + 12);
      v36 = *(_DWORD *)(*(_DWORD *)v4 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v36 )
        v35 += 4 * v36;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v35 + 4), 0);
      v37 = *(_DWORD *)(*(_DWORD *)v4 + 12);
      v38 = *(_DWORD *)(*(_DWORD *)v4 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v38 )
        v37 += 4 * v38;
      *(_DWORD *)(*(_DWORD *)v37 + 24) = v11;
      *v10 = 6;
      goto LABEL_51;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
      goto LABEL_19;
    case 10:
    case 20:
      CollisionActor__handleGravity((CollisionActor *)a1);
      CollisionActor__handleSpeed((CollisionActor *)a1);
      v21 = FIELD_F32(a1, 112);
      positionOffset.x = FIELD_F32(a1, 108);
      a3[0].x = positionOffset.x;
      positionOffset.y = v21;
      a3[0].y = v21 + -5.0;
      v42 = off_60BC1F98;
      *(_WORD *)&v41.field_0 = 0;
      v41.field_2 = FIELD_U8(a1, 86);
      v41.field_3 = FIELD_U8(a1, 87);
      v41.field_4 = 0;
      v41.field_8 = (int)&v42;
      v22 = TileCheck_ctor(&v40, &v41);
      v39.field_C = 0;
      v39.field_10 = 0;
      if ( !TileCheck_check(v22, &v39, a3, &positionOffset, 15) )
        FIELD_U32(a1, 116) = 1153138688;
      CollisionMgr_process((_BYTE *)(a1 + 648));
      if ( FIELD_F32(a1, 124) >= 0.0 )
        goto LABEL_51;
      FIELD_U32(a1, 3204) &= ~4u;
LABEL_28:
      *v3 = 100;
      goto LABEL_51;
    case 30:
      CollisionActor__handleGravity((CollisionActor *)a1);
      CollisionActor__handleSpeed((CollisionActor *)a1);
      v23 = FIELD_F32(a1, 108);
      v24 = FIELD_F32(a1, 112);
      *(_WORD *)&v41.field_0 = 0;
      positionOffset.x = v23;
      a3[0].x = v23;
      positionOffset.y = v24;
      a3[0].y = v24 + -5.0;
      v42 = off_60BC1F98;
      v41.field_2 = FIELD_U8(a1, 86);
      v41.field_3 = FIELD_U8(a1, 87);
      v41.field_4 = 0;
      v41.field_8 = (int)&v42;
      v25 = TileCheck_ctor(&v40, &v41);
      v39.field_C = 0;
      v39.field_10 = 0;
      if ( !TileCheck_check(v25, &v39, a3, &positionOffset, 15) )
        FIELD_U32(a1, 116) = 1153138688;
      CollisionMgr_process((_BYTE *)(a1 + 648));
      if ( FIELD_F32(a1, 124) < 0.0 )
        goto LABEL_28;
      goto LABEL_51;
    default:
      if ( v2 == 100 )
      {
        CollisionActor__handleGravity((CollisionActor *)a1);
        CollisionActor__handleSpeed((CollisionActor *)a1);
        CollisionMgr_process((_BYTE *)(a1 + 648));
        if ( !FIELD_U16(a1, 7416) && (FIELD_U8(a1, 2872) & 1) != 0 )
        {
          FIELD_U32(a1, 120) = 0;
          FIELD_U32(a1, 124) = 0;
          FIELD_U32(a1, 128) = 0;
          FIELD_U32(a1, 3180) &= ~4u;
          FIELD_U32(a1, 3188) &= ~4u;
          FIELD_U32(a1, 3204) &= ~4u;
          v26 = FIELD_U32(a1, 108);
          v40.field_4 = FIELD_U32(a1, 112);
          *(_DWORD *)&v40.field_0 = v26;
          v40.field_8 = 1166843904;
          EffectData_create(971, (Vec3 *)&v40, 0, 0);
          *(_DWORD *)&v40.field_0 = 15;
          strcpy((char *)&v40.field_4, "333?");
          sub_60813430(a1 + 6332, "SE_BOSS_KK_LAND", &v40);
          AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 6, 1, 0, 0);
          if ( !FIELD_U8(a1, 7433) )
          {
            if ( FIELD_U8(a1, 7426) != 8 )
            {
              v27 = a1 + 7096;
              v28 = FIELD_U32(a1, 7380);
              sub_60421938(*(_DWORD **)(a1 + 7096), FIELD_U32(a1, 7100), (int)&dword_60C7F760);
              v29 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
              v30 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
              if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v30 )
                v29 += 4 * v30;
              AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v29 + 4), 0);
              v31 = *(_DWORD *)(*(_DWORD *)v27 + 12);
              v32 = *(_DWORD *)(*(_DWORD *)v27 + 68);
              if ( *(_DWORD *)(*(_DWORD *)v27 + 8) > v32 )
                v31 += 4 * v32;
              *(_DWORD *)(*(_DWORD *)v31 + 24) = v28;
              FIELD_U8(a1, 7426) = 8;
            }
            ++*v3;
          }
        }
      }
      else
      {
        if ( v2 != 101 )
        {
LABEL_19:
          v19 = &dword_60C7F868;
          v20 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
LABEL_20:
          v20(a1, v19);
          goto LABEL_51;
        }
        CollisionMgr_process((_BYTE *)(a1 + 648));
        if ( (FIELD_U8(a1, 2872) & 1) != 0 )
          FIELD_U32(a1, 124) = 0;
        v14 = *(_DWORD **)(a1 + 7096);
        v15 = v14[3];
        v16 = v14[2];
        v17 = v14[17];
        if ( v16 > v17 )
          v15 += 4 * v17;
        if ( (*(_BYTE *)(*(_DWORD *)v15 + 28) & 0x20) != 0 )
        {
          v18 = FIELD_U8(a1, 7428);
          if ( v18 == 1 )
          {
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7FB60);
            goto LABEL_51;
          }
          v20 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
          if ( v18 == 2 )
            return ((int (__fastcall *)(int, int *))v20)(a1, &dword_60C7FBA0);
          v19 = &dword_60C7F7E8;
          goto LABEL_20;
        }
      }
LABEL_51:
      if ( FIELD_U16(a1, 7416) )
        --FIELD_U16(a1, 7416);
      result = FIELD_U8(a1, 7433);
      if ( FIELD_U8(a1, 7433) )
      {
        *(_DWORD *)&v40.field_0 = (int)(float)((float)(2147500000.0 * 35.0) / 180.0)
                                * byte_60AFE3F4[FIELD_U32(a1, 80)];
        *(_DWORD *)&v39.field_0 = 0x8000000;
        result = moveValueTo((int *)(a1 + 160), (int *)&v40.field_0, (int *)&v39.field_0);
        if ( result == 1 )
        {
          result = 0;
          FIELD_U8(a1, 7433) = 0;
        }
      }
      return result;
  }
}
