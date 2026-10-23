/* throw_st_wait_f_ref
 * address: 0x600D9F38   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall throw_st_wait_f_ref(int a1)
{
  unsigned int v2; // r1
  _DWORD *v3; // r1
  int v4; // r0
  bool v5; // zf
  _DWORD *v6; // r5
  int ResArchiveById; // r1
  const char *v8; // r0
  TileCheck *v9; // r0
  float v10; // s4
  float v11; // s2
  float v12; // s0
  int v13; // r1
  __int16 v14; // r2
  int v15; // r5
  int v16; // r1
  int result; // r0
  Vec2 positionOffset; // [sp+8h] [bp-78h] BYREF
  Vec2 a3; // [sp+10h] [bp-70h] BYREF
  TileCheck v20; // [sp+18h] [bp-68h] BYREF
  TileCheck_Param v21; // [sp+64h] [bp-1Ch] BYREF

  v2 = FIELD_U32(a1, 7136);
  if ( v2 )
    v3 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
  else
    v3 = 0;
  sub_600B3444((_DWORD *)a1, v3);
  v4 = FIELD_U8(a1, 8184);
  if ( v4 == 1 )
  {
    *(_WORD *)&v21.field_0 = 0;
    v21.field_2 = FIELD_U8(a1, 86);
    v21.field_3 = FIELD_U8(a1, 87);
    v21.field_4 = 0;
    v21.field_8 = 0;
    v9 = TileCheck_ctor(&v20, &v21);
    v10 = FIELD_F32(a1, 124);
    v11 = FIELD_F32(a1, 112);
    v12 = (float)(FIELD_F32(a1, 100) * 0.5) * 5.0;
    a3.x = FIELD_F32(a1, 108) + (float)(FIELD_F32(a1, 120) * 5.0);
    a3.y = v11;
    positionOffset.x = a3.x;
    positionOffset.y = (float)((float)(v12 * 5.0) + (float)(v10 * 5.0)) + v11;
    if ( TileCheck_check(v9, 0, &a3, &positionOffset, 15) != 1 )
      goto LABEL_13;
    v6 = *(_DWORD **)(a1 + 7096);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    *(_DWORD *)&v20.field_0 = &sead__SafeStringBase__vtable;
    v8 = "throw_st_wait";
    goto LABEL_12;
  }
  v5 = v4 == 0;
  if ( !FIELD_U8(a1, 8184) )
    v5 = (FIELD_U8(a1, 2872) & 1) == 0;
  if ( v5 )
  {
    v6 = *(_DWORD **)(a1 + 7096);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    *(_DWORD *)&v20.field_0 = &sead__SafeStringBase__vtable;
    v8 = "throw_st_wait_f";
LABEL_12:
    v20.field_4 = (int)v8;
    sub_60421938(v6, ResArchiveById, (int)&v20);
    ++FIELD_U8(a1, 8184);
  }
LABEL_13:
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 7124) = sub_600B2FD4(a1, v13, v14);
  v15 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1036))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1312))(a1);
  v16 = FIELD_U32(a1, 7128);
  if ( v16 )
  {
    FIELD_U32(a1, 7128) = v16 - 1;
    result = v16 < 2;
    if ( !v15 )
      return result;
  }
  else
  {
    result = 1;
    if ( !v15 )
      return result;
  }
  if ( result == 1 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C832B4);
  return result;
}
