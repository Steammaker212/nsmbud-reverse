/* SE_PLY_MOVE_ROLLING_ref
 * address: 0x607B8FAC   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_MOVE_ROLLING_ref(float *a1)
{
  _DWORD *v2; // r5
  int result; // r0
  _BOOL4 v4; // r1
  int v5; // r0
  int v6; // r0

  if ( !*((_DWORD *)a1 + 2486) )
    *((_DWORD *)a1 + 304) &= ~0x200000u;
  sub_607712D4((int)a1);
  ((void (__fastcall *)(float *))loc_60771910)(a1);
  sub_607711C8((int)a1);
  sub_60773F4C((int)a1);
  v2 = a1 + 2487;
  if ( *((_DWORD *)a1 + 2487) && sub_6078663C((int)(a1 + 172)) == 1 )
    return (*(int (__fastcall **)(float *, int, _DWORD, int, float, float))(*(_DWORD *)a1 + 748))(
             a1,
             1,
             0,
             1,
             3.628,
             a1[22] * 0.8);
  result = *((_DWORD *)a1 + 2485);
  if ( result == 3 )
  {
    a1[22] = 0.0;
    a1[23] = 0.0;
    result = sub_60793CA8(*((_DWORD *)a1 + 2840));
    if ( result == 1 )
      return sub_60772D04((int)a1, 1);
  }
  else if ( result == 2 )
  {
    a1[23] = 0.0;
    result = sub_60793CA8(*((_DWORD *)a1 + 2840));
    if ( result == 1 )
      return Player_changeState((int)a1, (StateBase *)&unk_60CC4C4C, 1);
  }
  else
  {
    if ( result )
      return result;
    sub_60773558((int)a1, (int)"SE_PLY_MOVE_ROLLING", 0);
    if ( !*v2 )
    {
      a1[26] = 0.0;
      sub_60793088(*((_DWORD **)a1 + 2840), 1.5);
      result = *((_DWORD *)a1 + 1725);
      if ( (result & 1) != 0 )
      {
        *v2 = 1;
        a1[22] = flt_60B0A898[*((_DWORD *)a1 + 20)];
        v6 = 0x40000000;
      }
      else
      {
        if ( (result & 0x60) == 0 )
          return result;
        *v2 = 1;
        v5 = *((_DWORD *)a1 + 20) ^ 1;
        *((_DWORD *)a1 + 20) = v5;
        a1[22] = flt_60B0A898[v5];
        v6 = 0;
      }
      *((_DWORD *)a1 + 31) = v6;
      return sub_60793114(*((_DWORD **)a1 + 2840), 0.0);
    }
    sub_60793088(*((_DWORD **)a1 + 2840), 0.6);
    result = *((unsigned __int8 *)a1 + 6900);
    if ( (result & 1) != 0 )
    {
      if ( sub_60786974((int)(a1 + 172)) )
        return sub_60773464(a1);
      v4 = sub_6075EDF8((int)a1);
      result = sub_60773398(a1, v4);
      if ( !result )
        return sub_60773464(a1);
    }
  }
  return result;
}
