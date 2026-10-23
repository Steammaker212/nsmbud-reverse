/* sub_60299B20
 * address: 0x60299B20   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x2_t __fastcall sub_60299B20(int a1)
{
  int v2; // r5
  float32x2_t result; // d0
  char v4; // r12
  int v5; // r5
  int v6; // r0
  float32x2_t v7; // d2
  int v8; // r2
  float32x2_t v9; // d0
  signed int v10; // [sp+4h] [bp-1Ch] BYREF
  int speed; // [sp+8h] [bp-18h] BYREF
  int target[5]; // [sp+Ch] [bp-14h] BYREF

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6780));
  if ( ((unsigned int)&dword_60C7B364 & ~(1613339488 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &StageActor_RTTI) == 1 )
  {
    v5 = dword_60AF1FD8[FIELD_F32(v2, 108) < FIELD_F32(a1, 108)];
    if ( Actor__getProfileId((Actor *)a1) == 480 )
    {
      v5 = -v5;
    }
    else if ( Actor__getProfileId((Actor *)a1) == 484 )
    {
      v5 = -v5;
    }
    target[0] = v5;
    speed = 0x20000000;
    moveValueTo((int *)(a1 + 160), target, &speed);
    target[0] = 872415232;
    speed = 0x10000000;
    v10 = 0x1000000;
    sub_608322C0((int *)(a1 + 6744), target, &speed, &v10);
    v6 = FIELD_U32(a1, 6744);
    v7.n64_u32[0] = 0.75;
    FIELD_U32(a1, 6676) = v6;
    v8 = -(v6 >> 1);
    FIELD_U32(a1, 6688) = v8;
    FIELD_U32(a1, 6692) = -(v6 >> 2);
    FIELD_U32(a1, 6696) = -v6;
    FIELD_U32(a1, 6700) = v8;
    v9.n64_f32[0] = FIELD_F32(a1, 144) + -0.02;
    result.n64_u64[0] = vmax_f32(v9, v7).n64_u64[0];
    FIELD_U32(a1, 144) = result.n64_u32[0];
    FIELD_U32(a1, 148) = result.n64_u32[0];
    FIELD_U32(a1, 152) = result.n64_u32[0];
  }
  return result;
}
