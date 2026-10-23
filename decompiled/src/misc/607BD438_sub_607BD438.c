/* sub_607BD438
 * address: 0x607BD438   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607BD438(int *a1)
{
  int v2; // r5
  unsigned int result; // r0
  _DWORD *v4; // r5
  int v5; // r1
  int v6; // r5
  int v7; // [sp+0h] [bp-18h] BYREF
  int target[5]; // [sp+4h] [bp-14h] BYREF

  v2 = (int)(a1 + 172);
  if ( sub_6078663C((int)(a1 + 172)) == 1 && (a1[2485] != 2 || sub_60786738(v2) == 1) )
    a1[3102] = 20;
  if ( ((int (__fastcall *)(int *))loc_607BF96C)(a1) == 1 )
  {
    result = a1[2485];
    if ( result == 3 )
    {
      result = a1[3099];
      if ( !result )
        return SE_PLY_THROW_ICEBALL_ref((int)a1, 0);
    }
    return result;
  }
  if ( a1[330] == 5 || sub_6075EE0C((int)a1) )
  {
    a1[304] |= 8u;
    ((void (__fastcall *)(int *, _DWORD))loc_607BF0EC)(a1, 0);
    target[0] = sub_60773F3C((int)a1, a1[20]);
    v7 = 0x4000000;
    moveValueTo(a1 + 40, target, &v7);
    target[0] = 0;
    v7 = 50331648;
    moveValueTo(a1 + 39, target, &v7);
  }
  else
  {
    ((void (__fastcall *)(int *))loc_607BE9F8)(a1);
  }
  v4 = a1 + 3099;
  result = a1[3099];
  if ( result == 1 )
  {
    if ( sub_607AA954((int)a1) == 1 )
    {
      a1[306] &= ~0x10u;
      a1[2485] = 3;
      *v4 = 0;
      if ( a1[39] >= 402653185 )
        v5 = 35;
      else
        v5 = 34;
      PlayerBase_dispatchVirtual3((int)(a1 + 2839), v5, 0.0);
      sub_60793114((_DWORD *)a1[2840], 0.0);
      a1[39] = 0;
      a1[40] = sub_60773F3C((int)a1, a1[20]);
      result = a1[20];
      a1[3012] = result;
      return result;
    }
    result = sub_60793CA8(a1[2840]);
    if ( result != 1 )
      return result;
    goto LABEL_27;
  }
  if ( result )
    return result;
  if ( sub_60793DA0(a1[2840], 4.0) == 1 )
  {
    SE_PLY_THROW_ICEBALL_ref((int)a1, 0);
    *v4 = 1;
    return 1;
  }
  result = sub_6075EE0C((int)a1);
  if ( result == 1 )
  {
    result = a1[330];
    if ( result > 6 || ((1 << result) & 0x64) == 0 )
    {
LABEL_27:
      if ( (*(int (__fastcall **)(int *))(*a1 + 1064))(a1) == 1 )
      {
        if ( sub_6079DF08((int)a1) )
        {
          v6 = 2;
          if ( sub_6079B7A4((int)a1) )
            v6 = 3;
        }
        else
        {
          v6 = 0;
        }
      }
      else
      {
        v6 = 1;
        if ( a1[330] != 5 && !sub_6075EE0C((int)a1) )
          v6 = sub_6075EDF8((int)a1);
      }
      return ((int (__fastcall *)(int *, int, int))loc_607BBBF8)(a1, v6, 1);
    }
  }
  return result;
}
