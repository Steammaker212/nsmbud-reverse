/* sub_607B0700
 * address: 0x607B0700   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B0700(int a1)
{
  int result; // r0
  int *v3; // r6

  sub_607712D4(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
  ((void (__fastcall *)(int))loc_60771910)(a1);
  ((void (__fastcall *)(int))loc_60770F74)(a1);
  sub_60773F4C(a1);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 972))(a1);
  if ( result )
    return result;
  if ( (FIELD_U8(a1, 6900) & 0x60) != 0 )
    sub_607865BC(a1 + 688, 2);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1392))(a1) == 1 )
    return Player_changeState(a1, (StateBase *)&dword_60CC4BBC, 1);
  if ( !FIELD_U32(a1, 9940) )
  {
    if ( FIELD_F32(a1, 88) == 0.0 && sub_60793CA8(FIELD_U32(a1, 11360)) != 1 )
    {
      result = sub_6075EDF8(a1);
      if ( result != 1 )
        return result;
      result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1);
      if ( result != 1 )
        return result;
      *(_BYTE *)(FIELD_U32(a1, 11360) + 236) = 1;
      if ( sub_607868D4(a1 + 688, 0) == 1 && (float)(FIELD_F32(a1, 88) * FIELD_F32(a1, 92)) < 0.0 )
      {
        result = ((int (__fastcall *)(int))loc_607743E8)(a1);
        if ( result )
          return result;
      }
    }
    else if ( sub_607868D4(a1 + 688, 0) == 1 && (float)(FIELD_F32(a1, 88) * FIELD_F32(a1, 92)) < 0.0 )
    {
      result = ((int (__fastcall *)(int))loc_607743E8)(a1);
      if ( result )
        return result;
    }
    return Player_changeState(a1, (StateBase *)&dword_60CC4BBC, 1);
  }
  FIELD_U32(a1, 88) = 0;
  v3 = (int *)(a1 + 11360);
  if ( sub_607868D4(a1 + 688, 0) == 1 && sub_60793184(*v3) >= 10.0 || (result = sub_60793CA8(*v3), result == 1) )
  {
    if ( sub_607868D4(a1 + 688, 0) != 1 )
      return Player_changeState(a1, (StateBase *)&dword_60CC4BBC, 1);
    if ( (float)(FIELD_F32(a1, 88) * FIELD_F32(a1, 92)) >= 0.0 )
      return Player_changeState(a1, (StateBase *)&dword_60CC4BBC, 1);
    result = ((int (__fastcall *)(int))loc_607743E8)(a1);
    if ( !result )
      return Player_changeState(a1, (StateBase *)&dword_60CC4BBC, 1);
  }
  return result;
}
