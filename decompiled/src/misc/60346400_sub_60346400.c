/* sub_60346400
 * address: 0x60346400   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60346400(int a1, float a2, float a3, float a4)
{
  int (__fastcall ***v8)(_DWORD, int *); // r6
  char v9; // r12
  float result; // s0
  int v11; // r5
  int v12; // r4
  int v13; // t1
  float v14; // s2
  float32x2_t v15; // [sp+0h] [bp-58h] BYREF
  int v16; // [sp+8h] [bp-50h]
  float v17; // [sp+Ch] [bp-4Ch]
  int v18; // [sp+10h] [bp-48h]
  int v19; // [sp+14h] [bp-44h]
  int v20; // [sp+18h] [bp-40h]
  float v21; // [sp+1Ch] [bp-3Ch]
  int v22; // [sp+20h] [bp-38h]
  int v23; // [sp+24h] [bp-34h]
  int v24; // [sp+28h] [bp-30h]
  int v25; // [sp+2Ch] [bp-2Ch]

  v8 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7120));
  if ( ((unsigned int)&dword_60C7B364 & ~(1614046288 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v8 )
  {
    v11 = (**v8)(v8, &StageActor_RTTI);
    if ( v11 )
      v11 = (int)v8;
  }
  else
  {
    v11 = 0;
  }
  if ( ((unsigned int)&dword_60C94730 & ~(1614046416 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C94730) )
  {
    dword_60C9472C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C94730);
  }
  if ( v11 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C9472C) == 1 )
    {
      v13 = FIELD_U32(a1, 160);
      v12 = a1 + 160;
      FIELD_U32(v11, 160) = v13;
      v15.n64_u64[0] = 1065353216;
      v16 = 0;
      v18 = 0;
      v19 = 1065353216;
      v20 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 1065353216;
      v17 = 0.0;
      v21 = 0.0;
      v25 = 0;
      Mtx34_rotateY(&v15, (unsigned int *)v12);
      Mtx34_rotateX(&v15, (unsigned int *)(v12 - 4));
      v17 = v17 + 1.0;
      v14 = v21 + 1.0;
      FIELD_F32(v11, 108) = v17 + FIELD_F32(v12, 6892);
      result = v14 + FIELD_F32(v12, 6896);
      FIELD_F32(v11, 112) = result;
      FIELD_F32(v11, 120) = a2;
      FIELD_F32(v11, 124) = a3;
      FIELD_F32(v11, 128) = a4;
    }
  }
  return result;
}
