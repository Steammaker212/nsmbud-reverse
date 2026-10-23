/* sub_601EF634
 * address: 0x601EF634   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EF634(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // r1
  float v5; // s0
  float v6; // s2
  int v7; // r0
  float v8[7]; // [sp+Ch] [bp-1Ch] BYREF

  v2 = FIELD_U32(a1, 376);
  if ( v2 )
  {
    result = v2 - 1;
    FIELD_U32(a1, 376) = result;
  }
  else
  {
    v4 = a1 + 328;
    v5 = FIELD_F32(a1, 332) - FIELD_F32(a1, 84);
    v6 = FIELD_F32(a1, 336) - FIELD_F32(a1, 88);
    v8[0] = FIELD_F32(a1, 328) - FIELD_F32(a1, 80);
    v8[1] = v5;
    v8[2] = v6;
    if ( FIELD_S32(a1, 364) > 1 )
    {
      ((void (__fastcall *)(int, int, _DWORD, _DWORD, float, float, float, _DWORD, float *))loc_60185F9C)(
        a1,
        v4,
        0,
        FIELD_U32(a1, 368),
        FIELD_F32(a1, 372),
        2.3,
        2.3,
        FIELD_U32(a1, 368),
        v8);
      StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)&unk_60C8B4E8);
      sub_601E4C88((_DWORD *)dword_60C8B13C, 124, (_DWORD *)(a1 + 80));
    }
    else
    {
      ((void (__fastcall *)(int, int, _DWORD, int, float, float, float, int, float *))loc_60185F9C)(
        a1,
        v4,
        0,
        30,
        15.0,
        2.3,
        2.3,
        30,
        v8);
      StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)&unk_60C8B4C4);
    }
    v7 = FIELD_U32(a1, 364);
    FIELD_U32(a1, 364) = v7 + 1;
    if ( FIELD_U32(dword_60CC6D78, 412) == 6 )
      FIELD_U32(a1, 364) = v7 + 2;
    return sub_601ECD14(a1, 3);
  }
  return result;
}
