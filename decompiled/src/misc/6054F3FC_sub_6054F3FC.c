/* sub_6054F3FC
 * address: 0x6054F3FC   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054F3FC(int a1)
{
  int v2; // r2
  int v3; // r5
  int v4; // r0
  int v5; // r1
  int v6; // r1
  int result; // r0
  bool v8; // nf
  int v9; // r5
  char v10; // r12
  int v11; // r1
  int v12; // r2

  v3 = sub_60407DB4(dword_60C9A1E8, a1, FIELD_U32(a1, 3824));
  if ( v3 )
  {
    *(_BYTE *)(FIELD_U32(a1, 3680) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3684) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3688) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3692) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3696) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3700) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3704) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3708) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3648) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3652) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3656) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3660) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3664) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3668) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3672) + 64) &= ~1u;
    v4 = FIELD_U32(a1, 3676);
    v5 = FIELD_U8(v4, 64) & 0xFE;
    FIELD_U8(v4, 64) = v5;
    PointGet_1UP_00_ref(a1, v5, v2);
    StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CACD8C);
    FIELD_U32(a1, 3800) = 0;
    FIELD_U8(a1, 3816) = 0;
    v6 = FIELD_U32(a1, 3792);
    result = v6 + FIELD_U32(v3, 3832) - 26;
    v8 = v6 + FIELD_U32(v3, 3832) - 31 < 0;
    FIELD_U32(v3, 3832) = result;
    if ( v8 == __OFSUB__(result, 5) )
    {
      FIELD_U32(v3, 3832) = 5;
      result = 1;
      FIELD_U8(v3, 3840) = 1;
    }
  }
  else
  {
    v9 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 3824));
    if ( v9 )
    {
      if ( ((unsigned int)&dword_60C7B408 & ~(1616180660 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
      {
        dword_60C7B404 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B408);
      }
      if ( (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C7B404) == 1 )
        FIELD_U32(a1, 3828) = FIELD_U32(v9, 11464);
    }
    v11 = FIELD_U32(a1, 3828);
    v12 = FIELD_U32(a1, 3832);
    result = v11 + FIELD_U32(a1, 3792) + v12 - 26;
    v8 = v11 + FIELD_U32(a1, 3792) + v12 - 31 < 0;
    FIELD_U32(a1, 3832) = result;
    if ( v8 == __OFSUB__(result, 5) )
    {
      FIELD_U32(a1, 3832) = 5;
      FIELD_U8(a1, 3840) = 1;
      return 1;
    }
  }
  return result;
}
