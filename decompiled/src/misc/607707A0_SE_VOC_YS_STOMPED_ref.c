/* SE_VOC_YS_STOMPED_ref
 * address: 0x607707A0   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_YS_STOMPED_ref(int a1)
{
  float *v2; // r8
  float *v3; // r6
  float *v4; // r7
  float *v5; // r5
  char v6; // r12
  int v7; // r0
  bool v8; // zf
  float v9; // s4
  float v10; // s10
  float v11; // s2
  _BOOL4 v12; // r0
  char v13; // r12
  bool v14; // zf
  float v15; // r1
  float v16; // r2
  float v17; // s6
  int v18; // r0
  float v20[3]; // [sp+4h] [bp-34h] BYREF
  Vec3 v21; // [sp+10h] [bp-28h] BYREF

  FIELD_U32(a1, 9992) = 0;
  v2 = (float *)(a1 + 9992);
  FIELD_U32(a1, 9996) = 0;
  v3 = (float *)(a1 + 9996);
  FIELD_U32(a1, 10000) = 0;
  v4 = (float *)(a1 + 10000);
  FIELD_U32(a1, 1208) |= 0x200u;
  v5 = (float *)ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 9952));
  if ( ((unsigned int)&dword_60C7B37C & ~(1618413592 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v5 && (**(int (__fastcall ***)(float *, int *))v5)(v5, &dword_60C7B378) == 1 )
  {
    v7 = (*(int (__fastcall **)(float *))(*(_DWORD *)v5 + 636))(v5);
    v8 = v7 == 0;
    if ( !v7 )
      v8 = (*((_BYTE *)v5 + 1238) & 1) == 0;
    if ( v8 )
    {
      (*(void (__fastcall **)(float *))(*(_DWORD *)v5 + 212))(v5);
      sub_60765948(a1, (int)v5, 5);
      v9 = v5[29];
      v10 = FIELD_F32(a1, 116);
      v11 = FIELD_F32(a1, 112) - v5[28];
      *v2 = FIELD_F32(a1, 108) - v5[27];
      *v3 = v11;
      *v4 = v10 - v9;
      v12 = sub_6075EDF8(a1);
      v14 = v12;
      if ( v12 )
        v14 = *((_BYTE *)v5 + 533) == 2;
      if ( v14 )
      {
        v15 = v2[1];
        v16 = v2[2];
        v21.x = *v2;
        v21.y = v15;
        v21.z = v16;
        if ( ((unsigned int)&dword_60C7B408 & ~(1618413856 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
        {
          dword_60C7B404 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B408);
        }
        if ( (**(int (__fastcall ***)(float *, int *))v5)(v5, &dword_60C7B404) == 1 && sub_607CE020(v5, v20) == 1 )
        {
          v17 = *v4;
          v21.x = v20[0] + *v2;
          v21.y = v20[1];
          v21.z = v20[2] + v17;
          sub_607734E8((int)v5, (int)"SE_VOC_YS_STOMPED", 0, 0);
        }
        sub_60236E40(FIELD_S8(a1, 84), 376, &v21, 0, 0);
      }
    }
  }
  FIELD_U32(a1, 9988) = FIELD_U32(a1, 88);
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 124) = 0;
  v18 = FIELD_U32(a1, 648);
  if ( *(_DWORD *)(FIELD_U32(v18, 4) + 28) != 20 )
    PlayerBase_dispatchVirtual3(v18, 7);
  FIELD_U32(a1, 9940) = sub_60786A98(a1 + 688, 5);
  FIELD_U32(a1, 9948) = 0;
  return 9948;
}
