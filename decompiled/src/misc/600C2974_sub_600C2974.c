/* sub_600C2974
 * address: 0x600C2974   size: 740   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600C2974(int a1)
{
  int **v2; // r8
  _DWORD *v3; // t1
  _DWORD *v4; // r1
  unsigned int v5; // r0
  _DWORD *v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  _DWORD *v9; // r4
  int v10; // r0
  _DWORD *v11; // r5
  int v12; // r6
  int v13; // r0
  Profile *profile; // r6
  int v15; // r11
  float v16; // r9
  int *v17; // r3
  int v18; // r6
  unsigned int v19; // r1
  unsigned int v20; // r2
  int v21; // r0
  float v22; // s0
  int v23; // r5
  int v24; // r0
  int result; // r0
  int v26; // [sp+4h] [bp-64h]
  int (**v27)(); // [sp+8h] [bp-60h] BYREF
  const char *v28; // [sp+Ch] [bp-5Ch]
  ActorBuildInfo v29; // [sp+10h] [bp-58h] BYREF
  float v30; // [sp+3Ch] [bp-2Ch]

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v3 = *(_DWORD **)(a1 + 7100);
  v2 = (int **)(a1 + 7100);
  v4 = (_DWORD *)v3[3];
  v5 = v3[17];
  if ( v3[2] > v5 )
    v4 += v5;
  if ( sub_60418548(*v4 + 4) )
    AreaRumbleMgr_rumble2(AreaRumbleMgr_instance, 8, 2, 0);
  v6 = (_DWORD *)(*v2)[3];
  v7 = (*v2)[17];
  if ( (*v2)[2] > v7 )
    v6 += v7;
  if ( sub_60418548(*v6 + 4) )
    sub_60400BE4(AreaRumbleMgr_instance);
  v9 = (_DWORD *)(a1 + 9764);
  v8 = FIELD_U32(a1, 9764);
  if ( !v8 || (v10 = v8 - 1, (*v9 = v10) == 0) )
  {
    v11 = (_DWORD *)(a1 + 7136);
    if ( FIELD_S32(a1, 7136) <= 4 )
    {
      v27 = &sead__SafeStringBase__vtable;
      v28 = "Tongue1";
      v12 = **v2;
      v13 = (*(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v12 + 84))(v12, &v27);
      (*(void (__fastcall **)(int, int, ActorBuildInfo *))(*(_DWORD *)v12 + 108))(v12, v13, &v29);
      profile = v29.profile;
      v15 = v29.field_1C;
      v16 = v30;
      v26 = FIELD_U32(a1, 80);
      v27 = (int (**)())dword_60AF5B10[*v11];
      memset(&v29, 0, sizeof(v29));
      v29.profile = Profile__get(0x2CEu);
      LODWORD(v29.position.x) = profile;
      LODWORD(v29.position.y) = v15;
      v29.position.z = v16;
      sub_600CC2A8(&v29.field_1C, v26, &v27);
      v29.settings1 = 0;
      ActorMgr__create((void *)ActorMgr__instance, &v29, 0);
      *v9 = 22;
      ++*v11;
    }
  }
  v17 = *v2;
  v18 = (*v2)[3];
  v19 = (*v2)[2];
  v20 = (*v2)[17];
  v21 = v18;
  if ( v19 > v20 )
    v21 = v18 + 4 * v20;
  v22 = *(float *)(*(_DWORD *)v21 + 20);
  if ( v22 >= 50.0 && v22 <= 170.0 )
  {
    FIELD_U32(a1, 7812) = 1093;
    v27 = &sead__SafeStringBase__vtable;
    v28 = "ef_flame";
    v23 = *v17;
    v24 = (*(int (__fastcall **)(int, int (***)()))(*(_DWORD *)*v17 + 84))(*v17, &v27);
    (*(void (__fastcall **)(int, int, ActorBuildInfo *))(*(_DWORD *)v23 + 108))(v23, v24, &v29);
    sub_602372C0(a1 + 7816, 1093, &v29, 1);
    v18 = (*v2)[3];
    v19 = (*v2)[2];
    v20 = (*v2)[17];
  }
  if ( v19 > v20 )
    v18 += 4 * v20;
  result = *(_DWORD *)(*(_DWORD *)v18 + 28);
  if ( (result & 1) != 0 )
  {
    if ( (result & 4) == 0 )
      return result;
    return sub_600C69CC(a1);
  }
  if ( (result & 0x30) != 0 )
    return sub_600C69CC(a1);
  return result;
}
