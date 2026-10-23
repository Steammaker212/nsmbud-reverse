/* sub_607C49AC
 * address: 0x607C49AC   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_607C49AC(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  float *result; // r0

  v2 = a1 + 688;
  FIELD_U32(a1, 1212) |= 0x2000000u;
  v3 = sub_6078663C(a1 + 688);
  v4 = FIELD_U32(a1, 6900);
  if ( v3 == 1 )
  {
    if ( (v4 & 0x100000) != 0 )
    {
      if ( ((int (__fastcall *)(int))loc_60763E28)(a1) )
      {
        FIELD_U32(a1, 124) = 1065353216;
        result = &flt_60B0A898[FIELD_U32(a1, 80)];
        FIELD_F32(a1, 88) = *result * 0.5;
      }
      else
      {
        Player_changeState(a1, (StateBase *)&dword_60CC4D24, 0);
        return (float *)SE_PLY_SWIM_ref_3(a1);
      }
    }
    else
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1024))(a1);
      result = (float *)(FIELD_U32(a1, 1228) | 0x20000);
      FIELD_U32(a1, 1228) = result;
    }
  }
  else if ( (v4 & 1) != 0 && (sub_60786974(v2) || (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1020))(a1) != 1) )
  {
    result = (float *)FIELD_U8(a1, 6902);
    if ( ((unsigned __int8)result & 4) == 0 )
    {
      FIELD_U32(a1, 9940) = 0;
      FIELD_U32(a1, 1224) |= 0x400u;
      FIELD_U32(a1, 1228) &= ~0x20000u;
      JUMPOUT(0x607BC420);
    }
  }
  else
  {
    return (float *)Player_changeState(a1, (StateBase *)&dword_60CC4D24, 0);
  }
  return result;
}
