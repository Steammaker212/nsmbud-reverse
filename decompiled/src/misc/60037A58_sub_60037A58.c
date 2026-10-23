/* sub_60037A58
 * address: 0x60037A58   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60037A58(int a1)
{
  char v2; // r12
  int result; // r0
  int (__fastcall ***v4)(_DWORD, int *); // r5
  int v5; // r0
  float v6; // s0
  float v7; // s2
  signed int v8; // r0
  int v9; // r1
  int v10; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  BowserJrBase__vf42C();
  result = FIELD_U32(a1, 7240);
  if ( result >= 0 )
  {
    if ( (unsigned int)result >= 4 )
      result = 0;
    v4 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * result + 32);
    if ( ((unsigned int)&dword_60C7B364 & ~(1610840744 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    v5 = (**v4)(v4, &StageActor_RTTI);
    if ( v5 )
      v5 = (int)v4;
    v6 = FIELD_F32(v5, 108) - FIELD_F32(a1, 7132);
    v7 = FIELD_F32(v5, 112) - FIELD_F32(a1, 7136);
    FIELD_F32(a1, 7724) = v6;
    FIELD_F32(a1, 7728) = v7;
    FIELD_U32(a1, 7732) = 0;
    v8 = sub_6000F7B8(v6, 100.0);
    v9 = v8;
    if ( v8 >= 0x20000000 )
      v9 = 0x20000000;
    if ( v8 < -536870912 )
      v9 = 0x20000000;
    v10 = 50331648;
    target = v9;
    return moveValueTo((int *)(a1 + 7656), &target, &v10);
  }
  return result;
}
