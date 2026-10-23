/* sub_600D5D78
 * address: 0x600D5D78   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600D5D78(int r0_0)
{
  signed int v1; // r5
  float v3; // r1
  signed int result; // r0
  char v5; // r12
  int (__fastcall ***v6)(_DWORD, int *); // r5
  int v7; // r0
  float v8; // s2
  Vec2 v9; // [sp+0h] [bp-20h] BYREF
  Vec2 a1; // [sp+8h] [bp-18h] BYREF

  v1 = 0;
  a1.x = 0.0;
  a1.y = 0.0;
  v3 = FIELD_F32(r0_0, 112);
  v9.x = FIELD_F32(r0_0, 108);
  v9.y = v3;
  result = distanceToPLayer(&a1, &v9);
  FIELD_U32(r0_0, 6128) = result;
  if ( result >= 0 )
  {
    if ( (unsigned int)result < 4 )
      v1 = result;
    v6 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v1 + 32);
    if ( ((unsigned int)&dword_60C7B364 & ~(1611488740 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    v7 = (**v6)(v6, &StageActor_RTTI);
    if ( v7 )
      v7 = (int)v6;
    v8 = FIELD_F32(v7, 112) - FIELD_F32(r0_0, 112);
    FIELD_F32(r0_0, 6116) = FIELD_F32(v7, 108) - FIELD_F32(r0_0, 108);
    FIELD_F32(r0_0, 6120) = v8;
    FIELD_U32(r0_0, 6124) = 0;
    return 6124;
  }
  return result;
}
