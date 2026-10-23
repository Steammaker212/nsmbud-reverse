/* SE_VOC_YS_EAT_ref
 * address: 0x607D0D44   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_YS_EAT_ref(_DWORD *a1, int a2)
{
  float v4; // s16
  _DWORD *v5; // r0
  int v6; // r6
  char v7; // r12
  int v8; // r0
  int v9; // r1
  bool v10; // zf
  int v11; // r1
  _DWORD *v12; // r0
  Vec3 v14; // [sp+4h] [bp-24h] BYREF

  a1[2861] = 0;
  a1[2858] = 0;
  if ( a2 )
  {
    v4 = 15.0;
  }
  else
  {
    v5 = (_DWORD *)a1[2842];
    if ( v5[7] == 105 )
      v4 = (*(float (__fastcall **)(_DWORD *))(*v5 + 120))(v5);
    else
      v4 = 0.0;
  }
  v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[2839]);
  if ( ((unsigned int)&dword_60C7B364 & ~(1618808284 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &StageActor_RTTI) == 1 )
  {
    v8 = FIELD_U32(v6, 620);
    if ( v8 )
    {
      v9 = FIELD_U32(v8, 16);
      v10 = v9 == 4;
      if ( v9 != 4 )
        v10 = a2 == 1;
      if ( v10 )
      {
        sub_607949A4((int)(a1 + 2841), 106);
        sub_60793114((_DWORD *)a1[2842], v4);
        v11 = 4;
      }
      else
      {
        v12 = a1 + 2841;
        if ( v9 == 3 )
        {
          sub_607949A4((int)v12, 106);
          sub_60793114((_DWORD *)a1[2842], v4);
          a1[2857] = 3;
          *((_BYTE *)a1 + 11461) = 1;
          if ( a2 )
            return sub_607734E8((unsigned __int8 *)a1, (int)"SE_VOC_YS_EAT", 0, 0);
          goto LABEL_23;
        }
        sub_607949A4((int)v12, 104);
        sub_60793114((_DWORD *)a1[2842], v4);
        v11 = 2;
      }
      a1[2857] = v11;
    }
    if ( !a2 )
    {
LABEL_23:
      v14.x = FIELD_F32(v6, 108) + FIELD_F32(v6, 572);
      v14.y = FIELD_F32(v6, 112) + FIELD_F32(v6, 576);
      v14.z = FIELD_F32(v6, 116) + FIELD_F32(v6, 580);
      EffectData_create(430, &v14, 0, 0);
    }
  }
  return sub_607734E8((unsigned __int8 *)a1, (int)"SE_VOC_YS_EAT", 0, 0);
}
