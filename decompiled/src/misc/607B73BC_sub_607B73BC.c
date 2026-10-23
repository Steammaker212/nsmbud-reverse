/* sub_607B73BC
 * address: 0x607B73BC   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607B73BC(int a1)
{
  int v2; // r5
  char v3; // r12
  float v4; // r0
  float v5; // r1
  float v6; // r2
  float v7[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( (FIELD_U8(a1, 1217) & 0x10) != 0 )
  {
    v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 9952));
    if ( ((unsigned int)&dword_60C7B374 & ~(1618703368 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B370) == 1 )
    {
      if ( Player_setupWristNodes_7B7140(v2, v7) == 1 )
      {
        v4 = v7[0];
        v5 = v7[1];
        v6 = v7[2];
        FIELD_F32(a1, 108) = v7[0];
        FIELD_F32(a1, 112) = v5;
        FIELD_F32(a1, 116) = v6;
        FIELD_F32(a1, 584) = v4;
        FIELD_F32(a1, 588) = v5;
        FIELD_F32(a1, 592) = v6;
        FIELD_F32(a1, 608) = v4;
        FIELD_F32(a1, 612) = v5;
        FIELD_F32(a1, 616) = v6;
      }
      if ( (FIELD_U8(a1, 1229) & 4) != 0 )
      {
        FIELD_U32(a1, 80) = FIELD_U32(v2, 80);
        FIELD_U32(a1, 160) = sub_60796A4C(v2);
      }
    }
  }
}
