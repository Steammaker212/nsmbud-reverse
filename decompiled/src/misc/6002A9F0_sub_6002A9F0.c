/* sub_6002A9F0
 * address: 0x6002A9F0   size: 1272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002A9F0(int a1)
{
  char *v2; // r6
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
  _DWORD **v13; // r7
  int v14; // r0
  int (__fastcall *v15)(int, Vec3 *); // r2
  int v16; // r0
  float *v17; // r5
  float v18; // s0
  float v19; // s2
  int v20; // r1
  unsigned int v21; // r0
  float v22; // r0
  float v23; // r1
  float v24; // r2
  int (*v25)(void); // r2
  const char *v26; // r1
  _DWORD *v27; // r0
  int v28; // r7
  unsigned int v29; // r3
  int v30; // r1
  int v31; // r8
  int v32; // r1
  unsigned int v33; // r0
  int v34; // r1
  unsigned int v35; // r0
  char v36; // r0
  int v37; // r0
  int v38; // r1
  unsigned int v39; // r0
  int v40; // r1
  unsigned int v41; // r0
  int result; // r0
  _WORD *v43; // r4
  int v44; // t1
  int speed[12]; // [sp+8h] [bp-90h] BYREF
  Vec3 target; // [sp+38h] [bp-60h] BYREF
  float v47; // [sp+44h] [bp-54h]
  Vec3 v48; // [sp+68h] [bp-30h] BYREF

  v2 = (char *)(a1 + 7426);
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
  v12 = FIELD_U8(a1, 7427);
  if ( v12 == 2 )
  {
    if ( !FIELD_U16(a1, 7422) )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7F7E8);
      FIELD_U8(a1, 7433) = 1;
    }
    goto LABEL_46;
  }
  if ( v12 == 1 )
  {
    v28 = a1 + 7096;
    v27 = *(_DWORD **)(a1 + 7096);
    v29 = v27[17];
    v30 = v27[3];
    if ( v27[2] > v29 )
      v30 += 4 * v29;
    if ( (*(_BYTE *)(*(_DWORD *)v30 + 28) & 0x20) == 0 )
      goto LABEL_46;
    v31 = FIELD_U32(a1, 7380);
    if ( FIELD_U8(a1, 7430) < 2u )
    {
      if ( *v2 )
      {
        sub_60421938(v27, FIELD_U32(a1, 7100), (int)&dword_60C7F720);
        v38 = *(_DWORD *)(*(_DWORD *)v28 + 12);
        v39 = *(_DWORD *)(*(_DWORD *)v28 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v28 + 8) > v39 )
          v38 += 4 * v39;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v38 + 4), 1);
        v40 = *(_DWORD *)(*(_DWORD *)v28 + 12);
        v41 = *(_DWORD *)(*(_DWORD *)v28 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v28 + 8) > v41 )
          v40 += 4 * v41;
        *(_DWORD *)(*(_DWORD *)v40 + 24) = v31;
        v36 = 0;
        goto LABEL_44;
      }
    }
    else if ( *v2 != 1 )
    {
      sub_60421938(v27, FIELD_U32(a1, 7100), (int)&unk_60C7F728);
      v32 = *(_DWORD *)(*(_DWORD *)v28 + 12);
      v33 = *(_DWORD *)(*(_DWORD *)v28 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v28 + 8) > v33 )
        v32 += 4 * v33;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v32 + 4), 0);
      v34 = *(_DWORD *)(*(_DWORD *)v28 + 12);
      v35 = *(_DWORD *)(*(_DWORD *)v28 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v28 + 8) > v35 )
        v34 += 4 * v35;
      *(_DWORD *)(*(_DWORD *)v34 + 24) = v31;
      v36 = 1;
LABEL_44:
      *v2 = v36;
    }
LABEL_45:
    ++FIELD_U8(a1, 7427);
    goto LABEL_46;
  }
  if ( !FIELD_U8(a1, 7427) )
  {
    if ( FIELD_U8(a1, 7433) )
    {
      speed[0] = 22020096;
      target.x = 0.0;
      if ( moveValueTo((int *)(a1 + 160), (int *)&target, speed) )
        FIELD_U8(a1, 7433) = 0;
    }
    v13 = (_DWORD **)(a1 + 7096);
    v14 = **(_DWORD **)(a1 + 7096);
    v15 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v14 + 84);
    LODWORD(target.x) = &sead__SafeStringBase__vtable;
    LODWORD(target.y) = "spine";
    v16 = v15(v14, &target);
    (*(void (__fastcall **)(_DWORD, int, int *))(*(_DWORD *)**v13 + 108))(**v13, v16, speed);
    v17 = (float *)(a1 + 108);
    v18 = *(float *)&speed[3] - FIELD_F32(a1, 108);
    v19 = *(float *)&speed[7] - FIELD_F32(a1, 112);
    FIELD_F32(a1, 304) = v18;
    FIELD_F32(a1, 308) = v19;
    FIELD_F32(a1, 6836) = v18;
    FIELD_F32(a1, 6840) = v19;
    v20 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
    v21 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v21 )
      v20 += 4 * v21;
    if ( *(float *)(*(_DWORD *)v20 + 20) > 51.0 )
    {
      FIELD_U32(a1, 7316) = sub_6002F978(a1);
      v22 = *v17;
      target.y = FIELD_F32(a1, 112);
      target.x = v22;
      target.z = 4500.0;
      EffectData_create(969, &target, 0, 0);
      v23 = FIELD_F32(a1, 112);
      v24 = FIELD_F32(a1, 116);
      v48.x = *v17;
      v48.y = v23;
      v48.z = v24;
      v25 = *(int (**)(void))(*(_DWORD *)**v13 + 84);
      if ( *v2 == 4 )
      {
        LODWORD(target.x) = &sead__SafeStringBase__vtable;
        v26 = "ankle_r1";
      }
      else
      {
        LODWORD(target.x) = &sead__SafeStringBase__vtable;
        v26 = "ankle_l1";
      }
      LODWORD(target.y) = v26;
      v37 = v25();
      (*(void (__fastcall **)(_DWORD, int, Vec3 *))(*(_DWORD *)**v13 + 108))(**v13, v37, &target);
      v48.x = v47;
      v48.z = 4500.0;
      EffectData_create(970, &v48, 0, 0);
      FIELD_U32(a1, 304) = 0;
      FIELD_U32(a1, 308) = 1099956224;
      FIELD_U32(a1, 6836) = 0;
      FIELD_U32(a1, 6840) = 1103101952;
      sub_60813430(a1 + 6332, "SE_BOSS_KK_SHIKO", 0);
      AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 0, 1, 0, 0);
      sub_6002FAA0(a1);
      FIELD_U16(a1, 7422) = 30;
      goto LABEL_45;
    }
  }
LABEL_46:
  v44 = FIELD_U16(a1, 7422);
  v43 = (_WORD *)(a1 + 7422);
  result = v44;
  if ( v44 )
    *v43 = --result;
  return result;
}
