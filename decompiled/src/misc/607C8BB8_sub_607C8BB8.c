/* sub_607C8BB8
 * address: 0x607C8BB8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C8BB8(int a1)
{
  int v2; // r1
  int v3; // r0
  int result; // r0
  int v5; // r1
  int v6; // r1

  if ( (FIELD_U8(a1, 1212) & 0x40) != 0 )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1) == 1 )
      *(_BYTE *)(FIELD_U32(a1, 11360) + 236) = 1;
    v6 = 73;
    v3 = a1 + 11356;
    return PlayerBase_dispatchVirtual3(v3, v6, 0.0);
  }
  v2 = FIELD_U32(a1, 1204);
  if ( (v2 & 0x10000000) != 0 )
    return sub_60794954(a1 + 11356, 69, 0.0, 0.0);
  v3 = a1 + 11356;
  if ( (v2 & 0x40000000) != 0 )
  {
    v6 = 123;
    return PlayerBase_dispatchVirtual3(v3, v6, 0.0);
  }
  sub_60794954(v3, 5, 0.0, 0.0);
  result = FIELD_U32(a1, 12072);
  if ( result )
  {
    if ( result == 1 )
      v5 = 21;
    else
      v5 = 22;
    return sub_60773630(a1, v5, 0);
  }
  return result;
}
