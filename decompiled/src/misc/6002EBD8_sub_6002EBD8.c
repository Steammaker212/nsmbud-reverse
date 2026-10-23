/* sub_6002EBD8
 * address: 0x6002EBD8   size: 1144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002EBD8(int a1)
{
  _BYTE *v2; // r6
  _DWORD *v3; // r0
  int v4; // r5
  _DWORD *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r0
  const char *v9; // r1
  _DWORD *v10; // r1
  unsigned int v11; // r0
  int v12; // r0
  char *v13; // r11
  _DWORD **v14; // r7
  int v15; // r0
  int (__fastcall *v16)(int, Vec3 *); // r2
  int v17; // r0
  float *v18; // r5
  float v19; // s0
  float v20; // s2
  int v21; // r1
  unsigned int v22; // r0
  float v23; // r0
  float v24; // r1
  float v25; // r2
  int (*v26)(void); // r2
  const char *v27; // r1
  _DWORD *v28; // r0
  int v29; // r5
  unsigned int v30; // r3
  int v31; // r1
  int v32; // r7
  int v33; // r1
  unsigned int v34; // r0
  int v35; // r1
  unsigned int v36; // r0
  int v37; // r0
  char v38; // r0
  int result; // r0
  _WORD *v40; // r4
  int v41; // t1
  int speed[12]; // [sp+8h] [bp-90h] BYREF
  Vec3 target; // [sp+38h] [bp-60h] BYREF
  float v44; // [sp+44h] [bp-54h]
  Vec3 v45; // [sp+68h] [bp-30h] BYREF

  v2 = (_BYTE *)(a1 + 7426);
  if ( (unsigned __int8)(FIELD_U8(a1, 7426) - 3) <= 1u )
  {
    v4 = a1 + 7096;
    v3 = *(_DWORD **)(a1 + 7096);
    v5 = (_DWORD *)v3[3];
    v6 = v3[2];
    v7 = v3[17];
    if ( v6 > v7 )
      v5 += v7;
    if ( sub_60418548(*v5 + 4) )
    {
      v8 = a1 + 6332;
      v9 = "SE_VOC_BKK_SHIKO1";
LABEL_10:
      sub_60813430(v8, v9, 0);
      goto LABEL_11;
    }
    v10 = *(_DWORD **)(*(_DWORD *)v4 + 12);
    v11 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v11 )
      v10 += v11;
    if ( sub_60418548(*v10 + 4) )
    {
      v8 = a1 + 6332;
      v9 = "SE_VOC_BKK_SHIKO2";
      goto LABEL_10;
    }
  }
LABEL_11:
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v13 = (char *)(a1 + 7427);
  v12 = FIELD_U8(a1, 7427);
  if ( v12 == 2 )
  {
    if ( !FIELD_U16(a1, 7422) )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7FB60);
      FIELD_U8(a1, 7433) = 1;
    }
  }
  else if ( v12 == 1 )
  {
    v29 = a1 + 7096;
    v28 = *(_DWORD **)(a1 + 7096);
    v30 = v28[17];
    v31 = v28[3];
    if ( v28[2] > v30 )
      v31 += 4 * v30;
    if ( (*(_BYTE *)(*(_DWORD *)v31 + 28) & 0x20) != 0 )
    {
      if ( !*v2 )
      {
        v38 = 2;
        goto LABEL_39;
      }
      v32 = FIELD_U32(a1, 7380);
      sub_60421938(v28, FIELD_U32(a1, 7100), (int)&dword_60C7F720);
      v33 = *(_DWORD *)(*(_DWORD *)v29 + 12);
      v34 = *(_DWORD *)(*(_DWORD *)v29 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v29 + 8) > v34 )
        v33 += 4 * v34;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v33 + 4), 1);
      v35 = *(_DWORD *)(*(_DWORD *)v29 + 12);
      v36 = *(_DWORD *)(*(_DWORD *)v29 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v29 + 8) > v36 )
        v35 += 4 * v36;
      *(_DWORD *)(*(_DWORD *)v35 + 24) = v32;
      *v2 = 0;
LABEL_37:
      v38 = *v13 + 1;
LABEL_39:
      *v13 = v38;
    }
  }
  else if ( !FIELD_U8(a1, 7427) )
  {
    if ( FIELD_U8(a1, 7433) )
    {
      speed[0] = 22020096;
      target.x = 0.0;
      if ( moveValueTo((int *)(a1 + 160), (int *)&target, speed) )
        FIELD_U8(a1, 7433) = 0;
    }
    v14 = (_DWORD **)(a1 + 7096);
    v15 = **(_DWORD **)(a1 + 7096);
    v16 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v15 + 84);
    LODWORD(target.x) = &sead__SafeStringBase__vtable;
    LODWORD(target.y) = "spine";
    v17 = v16(v15, &target);
    (*(void (__fastcall **)(_DWORD, int, int *))(*(_DWORD *)**v14 + 108))(**v14, v17, speed);
    v18 = (float *)(a1 + 108);
    v19 = *(float *)&speed[3] - FIELD_F32(a1, 108);
    v20 = *(float *)&speed[7] - FIELD_F32(a1, 112);
    FIELD_F32(a1, 304) = v19;
    FIELD_F32(a1, 308) = v20;
    FIELD_F32(a1, 6836) = v19;
    FIELD_F32(a1, 6840) = v20;
    v21 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
    v22 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v22 )
      v21 += 4 * v22;
    if ( *(float *)(*(_DWORD *)v21 + 20) > 51.0 )
    {
      FIELD_U32(a1, 7316) = sub_6002F978(a1);
      v23 = *v18;
      target.y = FIELD_F32(a1, 112);
      target.x = v23;
      target.z = 4500.0;
      EffectData_create(969, &target, 0, 0);
      v24 = FIELD_F32(a1, 112);
      v25 = FIELD_F32(a1, 116);
      v45.x = *v18;
      v45.y = v24;
      v45.z = v25;
      v26 = *(int (**)(void))(*(_DWORD *)**v14 + 84);
      if ( *v2 == 4 )
      {
        LODWORD(target.x) = &sead__SafeStringBase__vtable;
        v27 = "ankle_r1";
      }
      else
      {
        LODWORD(target.x) = &sead__SafeStringBase__vtable;
        v27 = "ankle_l1";
      }
      LODWORD(target.y) = v27;
      v37 = v26();
      (*(void (__fastcall **)(_DWORD, int, Vec3 *))(*(_DWORD *)**v14 + 108))(**v14, v37, &target);
      v45.x = v44;
      v45.z = 4500.0;
      EffectData_create(970, &v45, 0, 0);
      FIELD_U32(a1, 304) = 0;
      FIELD_U32(a1, 308) = 1099956224;
      FIELD_U32(a1, 6836) = 0;
      FIELD_U32(a1, 6840) = 1103101952;
      sub_60813430(a1 + 6332, "SE_BOSS_KK_SHIKO", 0);
      AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 0, 1, 0, 0);
      sub_6002FAA0(a1);
      FIELD_U16(a1, 7422) = 30;
      goto LABEL_37;
    }
  }
  v41 = FIELD_U16(a1, 7422);
  v40 = (_WORD *)(a1 + 7422);
  result = v41;
  if ( v41 )
    *v40 = --result;
  return result;
}
