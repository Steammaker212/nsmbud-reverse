/* SE_EMY_KK_SHIKO_ref
 * address: 0x603323E0   size: 1120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KK_SHIKO_ref(int a1, float a2)
{
  float v3; // s0
  int v4; // r0
  _DWORD **v5; // r5
  int v6; // r0
  int (__fastcall *v7)(int, Vec3 *); // r2
  int v8; // r0
  float *v9; // r7
  float v10; // s2
  int v11; // r1
  unsigned int v12; // r0
  float v13; // r0
  float v14; // r1
  float v15; // r2
  int (*v16)(void); // r2
  const char *v17; // r1
  _DWORD *v18; // r0
  int v19; // r7
  unsigned int v20; // r3
  int v21; // r1
  int v22; // r8
  int v23; // r1
  unsigned int v24; // r0
  int v25; // r1
  unsigned int v26; // r0
  char v27; // r0
  int v28; // r0
  float v29; // r1
  int v30; // r1
  unsigned int v31; // r0
  int v32; // r1
  unsigned int v33; // r0
  int result; // r0
  _WORD *v35; // r4
  int v36; // t1
  int speed[12]; // [sp+8h] [bp-88h] BYREF
  Vec3 position; // [sp+38h] [bp-58h] BYREF
  float v39; // [sp+44h] [bp-4Ch]
  Vec3 out[3]; // [sp+68h] [bp-28h] BYREF

  if ( (FIELD_U8(a1, 20) & 1) != 0 )
  {
    CollisionActor__handleGravity((CollisionActor *)a1);
    a2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  }
  v3 = CollisionMgr_process((_BYTE *)(a1 + 648), a2);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v4 = FIELD_U8(a1, 6995);
  if ( v4 == 2 )
  {
    if ( !FIELD_U16(a1, 6992) )
    {
      (*(void (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C93F88, v3);
      FIELD_U8(a1, 6998) = 1;
    }
    goto LABEL_38;
  }
  if ( v4 == 1 )
  {
    v19 = a1 + 6336;
    v18 = *(_DWORD **)(a1 + 6336);
    v20 = v18[17];
    v21 = v18[3];
    if ( v18[2] > v20 )
      v21 += 4 * v20;
    if ( (*(_BYTE *)(*(_DWORD *)v21 + 28) & 0x20) == 0 )
      goto LABEL_38;
    v22 = FIELD_U32(a1, 6972);
    if ( FIELD_U8(a1, 6997) < 2u )
    {
      if ( FIELD_U8(a1, 6994) )
      {
        sub_60421938(v18, FIELD_U32(a1, 6340), (int)&dword_60C93EF8);
        v30 = *(_DWORD *)(*(_DWORD *)v19 + 12);
        v31 = *(_DWORD *)(*(_DWORD *)v19 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v19 + 8) > v31 )
          v30 += 4 * v31;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v30 + 4), 1);
        v32 = *(_DWORD *)(*(_DWORD *)v19 + 12);
        v33 = *(_DWORD *)(*(_DWORD *)v19 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v19 + 8) > v33 )
          v32 += 4 * v33;
        *(_DWORD *)(*(_DWORD *)v32 + 24) = v22;
        v27 = 0;
        goto LABEL_36;
      }
    }
    else if ( FIELD_U8(a1, 6994) != 1 )
    {
      sub_60421938(v18, FIELD_U32(a1, 6340), (int)&unk_60C93F00);
      v23 = *(_DWORD *)(*(_DWORD *)v19 + 12);
      v24 = *(_DWORD *)(*(_DWORD *)v19 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v19 + 8) > v24 )
        v23 += 4 * v24;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v23 + 4), 0);
      v25 = *(_DWORD *)(*(_DWORD *)v19 + 12);
      v26 = *(_DWORD *)(*(_DWORD *)v19 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v19 + 8) > v26 )
        v25 += 4 * v26;
      *(_DWORD *)(*(_DWORD *)v25 + 24) = v22;
      v27 = 1;
LABEL_36:
      FIELD_U8(a1, 6994) = v27;
    }
LABEL_37:
    ++FIELD_U8(a1, 6995);
    goto LABEL_38;
  }
  if ( !FIELD_U8(a1, 6995) )
  {
    if ( FIELD_U8(a1, 6998) )
    {
      speed[0] = 22020096;
      position.x = 0.0;
      if ( moveValueTo((int *)(a1 + 160), (int *)&position, speed) )
        FIELD_U8(a1, 6998) = 0;
    }
    v5 = (_DWORD **)(a1 + 6336);
    v6 = **(_DWORD **)(a1 + 6336);
    v7 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v6 + 84);
    LODWORD(position.x) = &sead__SafeStringBase__vtable;
    LODWORD(position.y) = "spine";
    v8 = v7(v6, &position);
    (*(void (__fastcall **)(_DWORD, int, int *))(*(_DWORD *)**v5 + 108))(**v5, v8, speed);
    v9 = (float *)(a1 + 108);
    v10 = *(float *)&speed[7] - FIELD_F32(a1, 112);
    FIELD_F32(a1, 304) = *(float *)&speed[3] - FIELD_F32(a1, 108);
    FIELD_F32(a1, 308) = v10;
    v11 = *(_DWORD *)(FIELD_U32(a1, 6336) + 12);
    v12 = *(_DWORD *)(FIELD_U32(a1, 6336) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6336) + 8) > v12 )
      v11 += 4 * v12;
    if ( *(float *)(*(_DWORD *)v11 + 20) > 51.0 )
    {
      FIELD_U32(a1, 6960) = sub_60333938(a1, 51.0);
      v13 = *v9;
      position.y = FIELD_F32(a1, 112);
      position.x = v13;
      position.z = 4500.0;
      EffectData_create(967, &position, 0, 0);
      v14 = FIELD_F32(a1, 112);
      v15 = FIELD_F32(a1, 116);
      out[0].x = *v9;
      out[0].y = v14;
      out[0].z = v15;
      v16 = *(int (**)(void))(*(_DWORD *)**v5 + 84);
      if ( FIELD_U8(a1, 6994) == 4 )
      {
        LODWORD(position.x) = &sead__SafeStringBase__vtable;
        v17 = "ankle_r1";
      }
      else
      {
        LODWORD(position.x) = &sead__SafeStringBase__vtable;
        v17 = "ankle_l1";
      }
      LODWORD(position.y) = v17;
      v28 = v16();
      (*(void (__fastcall **)(_DWORD, int, Vec3 *))(*(_DWORD *)**v5 + 108))(**v5, v28, &position);
      out[0].x = v39;
      out[0].z = 4500.0;
      EffectData_create(968, out, 0, 0);
      FIELD_U32(a1, 304) = 0;
      FIELD_U32(a1, 308) = 1099956224;
      v29 = FIELD_F32(a1, 112);
      position.x = FIELD_F32(a1, 108);
      position.y = v29;
      mapPositionToScreen((Vec2 *)out, &position);
      sub_60813570(a1 + 6344, "SE_EMY_KK_SHIKO", out, 0);
      AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 7, 1, 0, 0);
      FIELD_U16(a1, 6992) = 30;
      goto LABEL_37;
    }
  }
LABEL_38:
  v36 = FIELD_U16(a1, 6992);
  v35 = (_WORD *)(a1 + 6992);
  result = v36;
  if ( v36 )
    *v35 = --result;
  return result;
}
