/* sub_60110240
 * address: 0x60110240   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60110240(int a1)
{
  char v1; // r12
  unsigned int v2; // r4
  int v3; // r7
  int v4; // r8
  float v5; // r9
  ActorBuildInfo *v6; // r5
  int v7; // r5
  int v8; // r11
  int (__fastcall ***v9)(_DWORD, int *); // r6
  int v10; // r0

  v2 = a1;
  v3 = FIELD_U32(a1, 112);
  v4 = FIELD_U32(a1, 116);
  v5 = FIELD_F32(a1, 108);
  FIELD_U32(a1, 688) = v3;
  FIELD_U32(a1, 692) = v4;
  FIELD_F32(a1, 684) = v5 + (float)(FIELD_F32(a1, 716) * 0.75);
  v6 = (ActorBuildInfo *)(a1 + 668);
  FIELD_U32(a1, 668) &= ~0x10u;
  LOWORD(a1) = 2;
  if ( ((int)v6[-15].profile & 1) == 0 )
  {
    ActorMgr__create((void *)ActorMgr__instance, v6, 0);
    FIELD_F32(v2, 684) = FIELD_F32(v2, 716) + FIELD_F32(v2, 684);
    ActorMgr__create((void *)ActorMgr__instance, v6, 0);
    FIELD_F32(v2, 684) = FIELD_F32(v2, 716) + FIELD_F32(v2, 684);
    ActorMgr__create((void *)ActorMgr__instance, v6, 0);
    FIELD_F32(v2, 684) = FIELD_F32(v2, 716) + FIELD_F32(v2, 684);
    ActorMgr__create((void *)ActorMgr__instance, v6, 0);
    FIELD_F32(v2, 684) = v5;
    FIELD_U32(v2, 688) = v3;
    FIELD_U32(v2, 692) = v4;
    FIELD_U32(v2, 668) |= 0x10u;
    a1 = (FIELD_U16(v2, 658) >> 1) + 1 - (FIELD_U16(v2, 658) >> 2);
  }
  FIELD_U16(v2, 656) = a1;
  v7 = FIELD_U32(v2, 36);
  if ( v7 != v2 + 32 )
  {
    v8 = FIELD_U32(v2, 44);
    v9 = (int (__fastcall ***)(_DWORD, int *))(v7 - v8);
    do
    {
      if ( ((unsigned int)&dword_60C868C4 & ~(1611727776 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C868C4) )
      {
        dword_60C868C0 = (int)&off_60BCFCD8;
        _cxa_guard_release(&dword_60C868C4);
      }
      v10 = (**v9)(v9, &dword_60C868C0);
      if ( v9 && v10 == 1 )
        sub_601118F4(v9);
      v7 = FIELD_U32(v7, 4);
      v9 = (int (__fastcall ***)(_DWORD, int *))(v7 - v8);
    }
    while ( v7 - v8 != v2 + 32 - FIELD_U32(v2, 44) );
  }
  FIELD_U32(v2, 712) = 1;
  return 1;
}
