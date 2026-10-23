/* sub_600A6CBC
 * address: 0x600A6CBC   size: 1012   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A6CBC(int a1)
{
  int v2; // r6
  char v3; // r12
  int result; // r0
  unsigned int v5; // r1
  unsigned int *v6; // r10
  int v7; // r5
  int v8; // r1
  unsigned int v9; // r0
  int settings2; // r1
  int parentId; // r2
  _DWORD *v12; // r1
  unsigned int v13; // r0
  char v14; // r12
  int v15; // r0
  _DWORD *v16; // r9
  int v17; // r5
  int v18; // r0
  _DWORD *v19; // r6
  float v21; // s16
  float v22; // r7
  float v23; // r5
  _DWORD *v24; // r1
  int v25; // r1
  ActorBuildInfo v26[2]; // [sp+0h] [bp-60h] BYREF

  CollisionMgr_process((_BYTE *)(a1 + 648));
  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  FIELD_U32(a1, 7124) = sub_600B2FD4(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  result = FIELD_U32(a1, 7092);
  if ( result == 2 )
  {
    v8 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v9 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v9 )
      v8 += 4 * v9;
    result = *(unsigned __int8 *)(*(_DWORD *)v8 + 28);
    if ( (result & 0x20) != 0 )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C82D98);
  }
  else if ( result == 1 )
  {
    v6 = (unsigned int *)(a1 + 7136);
    v5 = FIELD_U32(a1, 7136);
    if ( v5 )
      v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v5);
    else
      v7 = 0;
    if ( ((unsigned int)dword_60C81F18 & ~(1611296188 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
    {
      dword_60C81F14 = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C81F18);
    }
    if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C81F14) == 1 )
    {
      sub_600A8F84(a1, v26);
      settings2 = v26[0].settings2;
      parentId = v26[0].parentId;
      FIELD_U32(v7, 108) = v26[0].settings1;
      FIELD_U32(v7, 112) = settings2;
      FIELD_U32(v7, 116) = parentId;
    }
    v12 = *(_DWORD **)(*(_DWORD *)v2 + 12);
    v13 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v13 )
      v12 += v13;
    result = sub_60418548(*v12 + 4);
    if ( result == 1 )
    {
      v16 = (_DWORD *)(a1 + 7180);
      v15 = FIELD_U32(a1, 7180);
      if ( v15 == 2 )
      {
        if ( FIELD_U32(a1, 8632) != 4 )
          goto LABEL_25;
      }
      else if ( v15 != 1 || FIELD_U32(a1, 8632) != 5 )
      {
LABEL_25:
        if ( *v6 )
          v17 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v6);
        else
          v17 = 0;
        if ( ((unsigned int)dword_60C81F18 & ~(1611296512 << v14) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
        {
          dword_60C81F14 = (int)&off_60BC00C8;
          _cxa_guard_release(dword_60C81F18);
        }
        if ( v17 && (**(int (__fastcall ***)(int, int *))v17)(v17, &dword_60C81F14) == 1 )
        {
          FIELD_U32(v17, 80) = FIELD_U32(a1, 80);
          FIELD_F32(v17, 116) = FIELD_F32(a1, 116) + 600.0;
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 216))(v17);
        }
        v19 = (_DWORD *)(a1 + 8632);
        v18 = FIELD_U32(a1, 8632);
        FIELD_U32(a1, 8632) = v18 - 1;
        if ( v18 > 1 )
        {
          v21 = FIELD_F32(a1, 116);
          v22 = FIELD_F32(a1, 112);
          v23 = FIELD_F32(a1, 108);
          memset(v26, 0, 44);
          v26[0].parentId = FIELD_U32(a1, 8);
          v26[0].profile = Profile__get(0x2CAu);
          v26[0].position.x = v23;
          v26[0].position.y = v22;
          v26[0].position.z = v21 + 600.0;
          result = (int)ActorMgr__create((void *)ActorMgr__instance, v26, 0);
          *v6 = FIELD_U32(result, 8);
          FIELD_U8(result, 6764) = 1;
          v24 = (_DWORD *)(result + 6768);
          if ( *v16 == 1 )
          {
            *v24 = 5;
            v25 = *v19 - 1;
          }
          else
          {
            *v24 = 4;
            v25 = 4 - *v19;
          }
          FIELD_U32(result, 6772) = v25;
          FIELD_F32(a1, 8636) = FIELD_F32(a1, 8636) + 1.0;
        }
        else if ( (*v16)-- == 1 )
        {
          FIELD_U32(a1, 7092) = 2;
          return 2;
        }
        else
        {
          return fly_throw2_ref(a1);
        }
        return result;
      }
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1332))(a1);
      goto LABEL_25;
    }
  }
  return result;
}
