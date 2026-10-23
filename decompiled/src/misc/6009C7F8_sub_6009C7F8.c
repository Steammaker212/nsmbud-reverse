/* sub_6009C7F8
 * address: 0x6009C7F8   size: 1168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6009C7F8(int a1)
{
  char v1; // r12
  unsigned int v3; // r1
  int v4; // r5
  bool v5; // zf
  _DWORD *v6; // r7
  int v7; // r5
  char v8; // r12
  bool v9; // zf
  char v10; // r12
  bool v11; // zf
  char v12; // r12
  int v13; // r6
  ActorBuildInfo v15; // [sp+0h] [bp-58h] BYREF
  Vec3 v16; // [sp+2Ch] [bp-2Ch] BYREF
  _BYTE v17[4]; // [sp+38h] [bp-20h] BYREF
  _DWORD v18[7]; // [sp+3Ch] [bp-1Ch] BYREF

  v3 = FIELD_U32(a1, 7136);
  if ( v3 )
    v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
  else
    v4 = 0;
  if ( ((unsigned int)&dword_60C82840 & ~(1611253836 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C82840) )
  {
    dword_60C8283C = (int)&off_60BC763C;
    _cxa_guard_release(&dword_60C82840);
  }
  if ( !v4 || (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C8283C) != 1 )
    goto LABEL_13;
  v5 = FIELD_U8(v4, 6761) == 0;
  if ( FIELD_U8(v4, 6761) )
    v5 = FIELD_U8(v4, 6760) == 0;
  if ( !v5 )
  {
    ((void (__fastcall *)(_BYTE *, _DWORD *, int, _DWORD))checkLiquidCollisions)(
      v17,
      v18,
      v4 + 108,
      FIELD_U8(a1, 86));
    v16.x = FIELD_F32(v4, 108);
    LODWORD(v16.y) = v18[0];
    v16.z = 4500.0;
    EffectData_create(1008, &v16, 0, 0);
    memset(&v15, 0, sizeof(v15));
    v15.parentId = FIELD_U32(a1, 8);
    v15.profile = Profile__get(0x2C2u);
    v15.position.x = FIELD_F32(v4, 108);
    v15.position.y = FIELD_F32(v4, 112);
    v15.position.z = -2600.0;
    FIELD_U32(a1, 8132) = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v15, 0) + 2);
    FIELD_U32(a1, 7136) = 0;
    return 1;
  }
  else
  {
LABEL_13:
    v6 = (_DWORD *)(a1 + 8120);
    v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 8120));
    if ( ((unsigned int)&dword_60C82840 & ~(1611254020 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C82840) )
    {
      dword_60C8283C = (int)&off_60BC763C;
      _cxa_guard_release(&dword_60C82840);
    }
    if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C8283C) == 1 )
    {
      v9 = FIELD_U8(v7, 6761) == 0;
      if ( FIELD_U8(v7, 6761) )
        v9 = FIELD_U8(v7, 6760) == 0;
      if ( !v9 )
        goto LABEL_38;
    }
    v6 = (_DWORD *)(a1 + 8124);
    v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 8124));
    if ( ((unsigned int)&dword_60C82840 & ~(1611254204 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C82840) )
    {
      dword_60C8283C = (int)&off_60BC763C;
      _cxa_guard_release(&dword_60C82840);
    }
    if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C8283C) == 1 )
    {
      v11 = FIELD_U8(v7, 6761) == 0;
      if ( FIELD_U8(v7, 6761) )
        v11 = FIELD_U8(v7, 6760) == 0;
      if ( !v11 )
        goto LABEL_38;
    }
    v6 = (_DWORD *)(a1 + 8128);
    v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 8128));
    if ( ((unsigned int)&dword_60C82840 & ~(1611254388 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C82840) )
    {
      dword_60C8283C = (int)&off_60BC763C;
      _cxa_guard_release(&dword_60C82840);
    }
    v13 = 0;
    if ( v7 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C8283C) == 1
        && FIELD_U8(v7, 6761)
        && FIELD_U8(v7, 6760) )
      {
LABEL_38:
        ((void (__fastcall *)(_BYTE *, _DWORD *, int, _DWORD))checkLiquidCollisions)(
          v17,
          v18,
          v7 + 108,
          FIELD_U8(a1, 86));
        v16.x = FIELD_F32(v7, 108);
        LODWORD(v16.y) = v18[0];
        v16.z = 4500.0;
        EffectData_create(1008, &v16, 0, 0);
        memset(&v15, 0, sizeof(v15));
        v15.parentId = FIELD_U32(a1, 8);
        v15.profile = Profile__get(0x2C2u);
        v15.position.x = FIELD_F32(v7, 108);
        v15.position.y = FIELD_F32(v7, 112);
        v15.position.z = -2600.0;
        v13 = 1;
        FIELD_U32(a1, 8132) = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v15, 0) + 2);
        *v6 = 0;
      }
    }
    return v13;
  }
}
