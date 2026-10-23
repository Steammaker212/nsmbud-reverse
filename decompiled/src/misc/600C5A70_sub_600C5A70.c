/* sub_600C5A70
 * address: 0x600C5A70   size: 716   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600C5A70(StateActor *a1, int a2, unsigned int a3, int *a4)
{
  int v8; // r1
  int v9; // r7
  int v10; // r6
  int result; // r0
  unsigned int v12; // r6
  signed int direction; // r7
  int *v14; // r0
  int v15; // r5
  int v16; // r0
  _DWORD v17[2]; // [sp+0h] [bp-68h] BYREF
  Vec3 v18; // [sp+8h] [bp-60h] BYREF
  int v19; // [sp+14h] [bp-54h] BYREF
  int v20; // [sp+18h] [bp-50h]
  int v21; // [sp+1Ch] [bp-4Ch]
  float v22; // [sp+20h] [bp-48h]
  int *v23; // [sp+24h] [bp-44h]
  char v24; // [sp+28h] [bp-40h]
  signed int v25; // [sp+2Ch] [bp-3Ch]
  float v26; // [sp+30h] [bp-38h]

  sub_600C5D7C(a1, a3);
  sub_602A3EFC(&a1[1]._.collisionMgr[1016], 24);
  v8 = a4[1];
  v19 = *a4;
  v20 = v8;
  v21 = 0;
  v9 = dword_60AF59F0[a3];
  koopa_damage_ice_ref_2(a1, &v19, 0, v9);
  v10 = **(_DWORD **)(*(_DWORD *)&a1[1]._.collisionMgr[352] + 20);
  TexAnim_play(v10, *(_DWORD *)&a1[1]._.collisionMgr[344], &dword_60C83DA0);
  AnimationCtrl_setRepeat((ModelAnimation *)(v10 + 4), dword_60C83DA8);
  *(_DWORD *)&a1[1]._.collisionMgr[368] = 3;
  if ( *(_DWORD *)&a1[1]._.collisionMgr[372] > v9 )
    v9 = *(_DWORD *)&a1[1]._.collisionMgr[372];
  *(_DWORD *)&a1[1]._.collisionMgr[372] = v9;
  if ( a3 > 4 || (result = 1, ((1 << a3) & 0x15) == 0) )
  {
    a1[1]._.collisionMgr[404] = 0;
    if ( a2 )
      v12 = FIELD_U8(a2, 84);
    else
      v12 = 255;
    (*(void (__fastcall **)(StateActor *, _DWORD))(FIELD_U32(a1, 0x0) + 68))(a1, (char)v12);
    if ( v12 > 3 )
    {
      if ( a3 == 5 || (sub_600229B0(0.0, 24.0, dword_60C7F52C, (int)a1, 6), a3 != 3) )
      {
LABEL_14:
        if ( a2 )
          direction = sub_6000AED0((int)a1, a2);
        else
          direction = FIELD_U32(a1, 0x50);
        if ( (a3 | 4) == 5 )
        {
          v17[0] = &sead__SafeStringBase__vtable;
          v17[1] = "Spine";
          v15 = **(_DWORD **)&a1[1]._.collisionMgr[352];
          v16 = (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v15 + 84))(v15, v17);
          (*(void (__fastcall **)(int, int, int *))(*(_DWORD *)v15 + 108))(v15, v16, &v19);
          v18.x = v22;
          v18.y = v26;
          v18.z = 4500.0;
          EffectData_create(1173, &v18, 0, (int)&FIELD_U32(a1, 0x90));
          v14 = &dword_60C83A98;
        }
        else
        {
          v14 = &dword_60C83A74;
        }
        goto LABEL_20;
      }
    }
    else
    {
      sub_60022760(0.0, 24.0, dword_60C7F52C, (int)a1, 6u, (char)v12);
      if ( a3 != 3 )
        goto LABEL_14;
    }
    direction = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x6C));
    v14 = &dword_60C83A74;
LABEL_20:
    v19 = 0;
    v20 = 1077936128;
    v21 = -1065353216;
    v22 = -0.1875;
    v23 = v14;
    v24 = -1;
    v25 = direction;
    LOBYTE(v26) = v12;
    return sub_602A852C((int)&a1[1]._._._.heap, &v19);
  }
  return result;
}
