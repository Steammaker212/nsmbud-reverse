/* SE_PLY_PRPL_FLY_ref_2
 * address: 0x607B67D8   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_PRPL_FLY_ref_2(int a1)
{
  float v2; // s0
  int v3; // r0
  int *v4; // r2
  int *v5; // r5
  unsigned int v6; // r2
  int *v7; // r5
  int result; // r0

  v2 = FIELD_F32(a1, 124);
  v3 = FIELD_U32(a1, 1212);
  v4 = &dword_60B0B48C;
  if ( v2 < 0.0 )
  {
    v3 &= ~8u;
    FIELD_U32(a1, 1212) = v3;
  }
  if ( (v3 & 0x10) != 0 )
    v4 = &dword_60B0B490;
  FIELD_U32(a1, 96) = *v4;
  FIELD_U32(a1, 1228) = FIELD_U32(a1, 1228) & 0xFFFF3FFF | 0x8000;
  FIELD_U32(a1, 1224) |= 0x10u;
  if ( (FIELD_U8(a1, 6900) & 1) != 0 )
  {
    sub_6076F0E0(a1);
    PlayerBase_dispatchVirtual3(a1 + 11356, 7, 0.0);
    return Player_changeState(a1, (StateBase *)&dword_60CC4C28, 0);
  }
  else
  {
    v5 = (int *)(a1 + 12100);
    v6 = v3 & 0xFFFFFFEF;
    if ( FIELD_S32(a1, 12100) >= 131072000 )
      v6 = v3 | 0x10;
    FIELD_U32(a1, 1212) = v6;
    SE_PLY_PRPL_FLY_ref_2_helper(a1);
    if ( *v5 >= 65536000 )
    {
      v7 = (int *)(a1 + 11360);
    }
    else
    {
      *v5 = 65536000;
      v7 = (int *)(a1 + 11360);
      if ( *(_DWORD *)(FIELD_U32(a1, 11360) + 28) != 166 )
        PlayerBase_dispatchVirtual3(a1 + 11356, 166, 0.0);
    }
    result = *v7;
    if ( *(_DWORD *)(*v7 + 28) == 166 )
    {
      if ( sub_60793DA0(result, 8.0) )
        return sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_PRPL_FLY", 0, 0);
      result = sub_60793DA0(*v7, 19.0);
      if ( result == 1 )
        return sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_PRPL_FLY", 0, 0);
    }
  }
  return result;
}
