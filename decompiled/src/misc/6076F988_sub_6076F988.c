/* sub_6076F988
 * address: 0x6076F988   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076F988(int a1)
{
  int v2; // r0
  int result; // r0
  int (__fastcall *v4)(int); // r1

  v2 = FIELD_U32(a1, 648);
  if ( *(_DWORD *)(FIELD_U32(v2, 4) + 28) != 18 )
    PlayerBase_dispatchVirtual3(v2, 18);
  if ( (FIELD_U8(a1, 6900) & 1) == 0 )
  {
    result = sub_60786974(a1 + 688);
    if ( result == 1 )
    {
      FIELD_U32(a1, 9940) = 2;
      FIELD_U32(a1, 104) = 1036831949;
      FIELD_U32(a1, 92) = 0;
      FIELD_U32(a1, 100) = *(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1100))(a1);
      FIELD_U32(a1, 96) = -1061158912;
      FIELD_U32(a1, 124) = -1061158912;
      FIELD_U32(a1, 1208) |= 0x10000u;
      result = 9944;
      FIELD_U32(a1, 9944) = 5;
    }
    return result;
  }
  if ( sub_60793CA8(*(_DWORD *)(FIELD_U32(a1, 648) + 4)) != 1 )
  {
    if ( !sub_60762E40(a1) )
      return sub_60773F4C(a1);
    FIELD_F32(a1, 88) = sub_60772990(a1);
    v4 = *(int (__fastcall **)(int))(*(_DWORD *)a1 + 992);
    return v4(a1);
  }
  if ( !sub_60786744(a1 + 688) )
  {
    FIELD_U32(a1, 1228) &= ~0x100000u;
    v4 = *(int (__fastcall **)(int))(*(_DWORD *)a1 + 1012);
    return v4(a1);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1004))(a1);
  result = sub_6040E538(LevelInfo_instance);
  if ( !result )
  {
    result = a1 + 9944;
    if ( (FIELD_U8(a1, 6908) & 8) != 0 )
    {
      *(_DWORD *)result = 15;
    }
    else
    {
      result = *(_DWORD *)result;
      if ( !result )
      {
        FIELD_U32(a1, 1228) &= ~0x100000u;
        FIELD_U32(a1, 9940) = 6;
        PlayerBase_dispatchVirtual3(FIELD_U32(a1, 648), 19);
        result = FIELD_U32(a1, 1208) & 0xFEFBFFFF;
        FIELD_U32(a1, 1208) = result;
      }
    }
  }
  return result;
}
