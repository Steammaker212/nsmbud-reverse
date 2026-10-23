/* sub_607AF508
 * address: 0x607AF508   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AF508(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r6
  int v7; // r1
  int v8; // r0

  v4 = FIELD_U32(a1, 1204);
  if ( v4 < 0 )
  {
    v7 = 126;
LABEL_15:
    v8 = a1 + 11356;
    return sub_60794954(v8, v7, 0.0, 0.0);
  }
  if ( (FIELD_U8(a1, 1212) & 0x40) != 0 )
  {
    v7 = 73;
    v8 = a1 + 11356;
    return PlayerBase_dispatchVirtual3(v8, v7, 0.0);
  }
  if ( (v4 & 0x10000000) != 0 )
  {
    v7 = 69;
    goto LABEL_15;
  }
  if ( (v4 & 0x8000000) != 0 )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1) != 1 )
      return PlayerBase_dispatchVirtual3(a1 + 11356, 122, 0.0);
    v4 = FIELD_U32(a1, 1204);
  }
  if ( (v4 & 0x40000000) == 0 )
  {
    v5 = FIELD_U32(a1, 12072);
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        sub_60773630(a1, 21, 0);
        v6 = 8;
      }
      else
      {
        sub_60773630(a1, 22, 0);
        v6 = 11;
      }
    }
    else
    {
      v6 = 5;
    }
    if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1) )
      sub_60793B2C(FIELD_U32(a1, 11360), FIELD_U32(a1, 12072) == 1);
    v7 = v6;
    v8 = a1 + 11356;
    if ( a2 )
      return PlayerBase_dispatchVirtual3(v8, v7, 0.0);
    return sub_60794954(v8, v7, 0.0, 0.0);
  }
  return PlayerBase_dispatchVirtual3(a1 + 11356, 123, 0.0);
}
