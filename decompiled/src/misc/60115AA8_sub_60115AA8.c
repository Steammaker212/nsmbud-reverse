/* sub_60115AA8
 * address: 0x60115AA8   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60115AA8(int a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r6
  int v4; // r5
  unsigned int v5; // r1
  int v6; // r5
  char v7; // r12
  float v8; // s18
  unsigned int v9; // r0
  int *v10; // r5
  int v11; // r6
  float v12; // s0
  int v13; // r0
  int *v14; // r4
  int v15; // r0

  if ( FIELD_U8(a1, 7654) )
  {
    v3 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 7244);
    if ( ((unsigned int)&dword_60C86B30 & ~(1611750112 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B30) )
    {
      dword_60C86B2C = (int)&off_60BC2CD4;
      _cxa_guard_release(&dword_60C86B30);
    }
    v4 = (int)(v3 + 2337);
    if ( !(**v3)(v3, &dword_60C86B2C) )
      v4 = 9348;
    if ( !*(_DWORD *)v4 )
    {
      BowserJrBase__vf42C(a1);
      return;
    }
    v5 = FIELD_U32(a1, 7636);
    if ( v5 )
    {
      v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v5);
      if ( ((unsigned int)&dword_60C7B364 & ~(1611750284 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &StageActor_RTTI) == 1 )
      {
        FIELD_U32(a1, 7624) = FIELD_U32(v6, 108);
        FIELD_U32(a1, 7628) = FIELD_U32(v6, 112);
        FIELD_U32(a1, 7632) = FIELD_U32(v6, 116);
      }
    }
    v8 = FIELD_F32(a1, 7624) - FIELD_F32(a1, 7132);
    v9 = sub_6000F7B8(FIELD_F32(a1, 7628) - FIELD_F32(a1, 7136), sqrtf((float)(v8 * v8) + 0.0));
    FIELD_U32(a1, 7128) = v9;
    v10 = (int *)(a1 + 7128);
    v11 = v9 - FIELD_U32(a1, 164) - *(_DWORD *)(FIELD_U32(a1, 7244) + 164);
    FIELD_U32(a1, 7128) = v11;
    if ( v11 >= (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1052))(a1) )
    {
      if ( *v10 >= 536870913 )
        *v10 = 0x20000000;
    }
    else
    {
      *v10 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1052))(a1);
    }
    if ( v8 >= 0.0 )
    {
      if ( v8 <= 100.0 )
        v13 = sub_608FBB48(v8 / 100.0);
      else
        v13 = 0x40000000 - sub_608FBB48(100.0 / v8);
    }
    else
    {
      v12 = -v8;
      if ( v8 >= -100.0 )
        v13 = -sub_608FBB48(v12 / 100.0);
      else
        v13 = sub_608FBB48(100.0 / v12) - 0x40000000;
    }
    FIELD_U32(a1, 7124) = v13;
    v14 = (int *)(a1 + 7124);
    if ( v13 >= -536870912 )
    {
      if ( v13 < 536870913 )
        return;
      v15 = 0x20000000;
    }
    else
    {
      v15 = -536870912;
    }
    *v14 = v15;
  }
}
