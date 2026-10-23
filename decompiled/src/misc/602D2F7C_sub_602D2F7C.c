/* sub_602D2F7C
 * address: 0x602D2F7C   size: 1160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D2F7C(int a1)
{
  int v2; // r7
  float v3; // s0
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int result; // r0
  int *v8; // r6
  _DWORD *v9; // r1
  unsigned int v10; // r0
  unsigned int v11; // r5
  int v12; // r0
  int v13; // r8
  float *v14; // r0
  float v15; // r10
  float v16; // r11
  float v17; // r9
  _BYTE *v18; // r5
  char v19; // r12
  int v20; // r9
  bool v21; // zf
  _DWORD *v22; // r1
  unsigned int v23; // r0
  int v24; // r1
  int v25; // r0
  int v26; // r0
  int v27; // r1
  _BYTE *v28; // r5
  _DWORD *v29; // r4
  unsigned int v30; // t1
  int v31; // r8
  char v32; // r12
  _BYTE *v33; // r8
  int v34; // t1
  _DWORD *v35; // r1
  unsigned int v36; // r0
  int v37; // r1
  unsigned int v38; // r0
  ActorBuildInfo v39; // [sp+0h] [bp-50h] BYREF

  v2 = a1 + 6856;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6856));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v4 = FIELD_U32(a1, 80);
  v5 = (int)(float)((float)dword_60AFE3EC[v4] * 0.125) + FIELD_U32(a1, 160);
  FIELD_U32(a1, 160) = v5;
  if ( v5 < 0 && v5 != 0x80000000 )
    v5 = -v5;
  v6 = dword_60AF2028[v4];
  if ( v5 >= abs32(v6) )
    FIELD_U32(a1, 160) = v6;
  v8 = (int *)(a1 + 6860);
  result = FIELD_U32(a1, 6860);
  if ( result == 3 )
  {
    v22 = *(_DWORD **)(*(_DWORD *)v2 + 12);
    v23 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v23 )
      v22 += v23;
    if ( !sub_60418548(*v22 + 4) )
      goto LABEL_49;
    v25 = FIELD_U32(a1, 80);
    if ( v25 == 1 )
    {
      v26 = 6700;
      v27 = 6696;
    }
    else
    {
      if ( v25 )
      {
LABEL_46:
        v39.settings1 = v24;
        v39.settings2 = v25;
        v39.parentId = 1166843904;
        if ( (FIELD_U8(a1, 2872) & 1) != 0 )
        {
          EffectData_setEffectId((EffectData *)(a1 + 6988), 646);
          sub_60237208(a1 + 6972, (Vec3 *)&v39, 0, 0);
        }
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91B00);
LABEL_49:
        v37 = *(_DWORD *)(*(_DWORD *)v2 + 12);
        v38 = *(_DWORD *)(*(_DWORD *)v2 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v38 )
          v37 += 4 * v38;
        result = *(_DWORD *)v37;
        if ( *(float *)(*(_DWORD *)v37 + 20) >= 40.0 )
          return (*(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C91B00, 40.0);
        return result;
      }
      v26 = 6688;
      v27 = 6684;
    }
    v25 = *(_DWORD *)(a1 + v26);
    v24 = *(_DWORD *)(a1 + v27);
    goto LABEL_46;
  }
  if ( result != 2 )
  {
    if ( result == 1 )
    {
      v9 = *(_DWORD **)(*(_DWORD *)v2 + 12);
      v10 = *(_DWORD *)(*(_DWORD *)v2 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v10 )
        v9 += v10;
      result = sub_60418548(*v9 + 4);
      if ( result == 1 )
      {
        result = FIELD_U8(a1, 6673);
        if ( !FIELD_U8(a1, 6673) )
        {
          v11 = FIELD_U32(a1, 80);
          v12 = 0;
          v13 = 0;
          if ( v11 < 2 )
            v12 = FIELD_U32(a1, 80);
          v14 = (float *)(a1 + 48 * v12);
          v15 = v14[1700];
          v16 = v14[1696];
          v17 = v14[1692];
          memset(&v39.settings2, 0, 40);
          v39.settings1 = v11;
          v39.profile = Profile__get(0x2FFu);
          v39.position.x = v17;
          v39.position.y = v16;
          v39.position.z = v15;
          v39.field_1C = FIELD_U32(a1, 160);
          v39.field_20 = 0;
          v18 = ActorMgr__create((void *)ActorMgr__instance, &v39, 0);
          if ( ((unsigned int)&dword_60C88030 & ~(1613574436 << v19) & 1) == 0 && _cxa_guard_acquire(&dword_60C88030) )
          {
            dword_60C8802C = (int)&off_60BD20C4;
            _cxa_guard_release(&dword_60C88030);
          }
          v20 = 3;
          if ( v18 )
          {
            v21 = (**(int (__fastcall ***)(_BYTE *, int *))v18)(v18, &dword_60C8802C) == 1;
            v13 = 0;
            result = 0;
            if ( v21 )
            {
              v20 = 2;
              *((_DWORD *)v18 + 1619) = FIELD_U32(a1, 8);
              result = 1;
              v13 = *((_DWORD *)v18 + 2);
            }
          }
          else
          {
            result = 0;
          }
          FIELD_U32(a1, 6852) = v13;
          FIELD_U8(a1, 6673) = result;
          *v8 = v20;
        }
      }
    }
    return result;
  }
  v28 = (_BYTE *)(a1 + 6673);
  if ( !FIELD_U8(a1, 6673) )
  {
    v29 = (_DWORD *)(a1 + 6852);
LABEL_42:
    *v29 = 0;
    goto LABEL_43;
  }
  v30 = FIELD_U32(a1, 6852);
  v29 = (_DWORD *)(a1 + 6852);
  v31 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v30);
  if ( ((unsigned int)&dword_60C88030 & ~(1613574728 << v32) & 1) == 0 && _cxa_guard_acquire(&dword_60C88030) )
  {
    dword_60C8802C = (int)&off_60BD20C4;
    _cxa_guard_release(&dword_60C88030);
  }
  if ( !v31 )
    goto LABEL_42;
  if ( (**(int (__fastcall ***)(int, int *))v31)(v31, &dword_60C8802C) != 1 )
    goto LABEL_42;
  v34 = FIELD_U8(v31, 6480);
  v33 = (_BYTE *)(v31 + 6480);
  if ( v34 )
    goto LABEL_42;
  v35 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v36 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v36 )
    v35 += v36;
  result = sub_60418548(*v35 + 4);
  if ( result == 1 )
  {
    *v33 = 1;
LABEL_43:
    *v28 = 0;
    *v8 = 3;
    return 3;
  }
  return result;
}
