/* sub_6008B9E4
 * address: 0x6008B9E4   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6008B9E4(int a1)
{
  int **v2; // r6
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  int v5; // r0
  float v6; // s16
  float v7; // s18
  float v8; // s20
  int v9; // r0
  int (__fastcall *v10)(int, _DWORD *); // r2
  int v11; // r0
  float result; // s0
  unsigned int v13; // r1
  float v14; // s26
  float v15; // s24
  float v16; // s22
  int v17; // r5
  char v18; // r12
  float v19; // s22
  float v20; // s24
  float v21; // s26
  unsigned int v22; // r1
  int v23; // r4
  char v24; // r12
  _DWORD v25[2]; // [sp+0h] [bp-80h] BYREF
  _DWORD v26[3]; // [sp+8h] [bp-78h] BYREF
  float v27; // [sp+14h] [bp-6Ch]
  float v28; // [sp+24h] [bp-5Ch]
  float v29; // [sp+34h] [bp-4Ch]

  v2 = (int **)(a1 + 7100);
  v3 = **(_DWORD **)(a1 + 7100);
  v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v3 + 84);
  v26[0] = &sead__SafeStringBase__vtable;
  v26[1] = "wrist_l1";
  v5 = v4(v3, v26);
  (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v2 + 108))(**v2, v5, v26);
  v6 = v27;
  v7 = v28;
  v8 = v29;
  v9 = **v2;
  v10 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v9 + 84);
  v25[0] = &sead__SafeStringBase__vtable;
  v25[1] = "wrist_r1";
  v11 = v10(v9, v25);
  (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v2 + 108))(**v2, v11, v26);
  v13 = (unsigned int)v2[143];
  if ( v13 )
  {
    v14 = v27;
    v15 = v28;
    v16 = v29;
    v17 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v13);
    if ( ((unsigned int)&dword_60C7B364 & ~(1611184868 << v18) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    v19 = v16 - v8;
    v20 = v15 - v7;
    v21 = v14 - v6;
    if ( v17 && (**(int (__fastcall ***)(int, int *))v17)(v17, &StageActor_RTTI) == 1 )
    {
      result = 0.0;
      FIELD_F32(v17, 108) = v6 + (float)(v21 * 0.0);
      FIELD_F32(v17, 112) = v7 + (float)(v20 * 0.0);
      FIELD_F32(v17, 116) = v8 + (float)(v19 * 0.0);
    }
    v22 = FIELD_U32(a1, 7676);
    if ( v22 )
    {
      v23 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v22);
      if ( ((unsigned int)&dword_60C7B364 & ~(1611185080 << v24) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v23 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v23)(v23, &StageActor_RTTI) == 1 )
        {
          FIELD_F32(v23, 108) = v6 + v21;
          FIELD_F32(v23, 112) = v7 + v20;
          FIELD_F32(v23, 116) = v8 + v19;
          return v6 + v21;
        }
      }
    }
  }
  return result;
}
