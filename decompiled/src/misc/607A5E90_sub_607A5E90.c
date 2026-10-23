/* sub_607A5E90
 * address: 0x607A5E90   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A5E90(_DWORD *a1)
{
  _BYTE *v2; // r4
  int result; // r0

  a1[307] |= 0x2000000u;
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 624))(a1, 3);
  if ( sub_6079D894((int)a1) )
    sub_6079EA38(a1);
  a1[2426] = 0;
  a1[22] = 0;
  a1[23] = 0;
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  PlayerBase_dispatchVirtual3(a1[162], 0, 0.0);
  a1[39] = 0;
  *((_BYTE *)a1 + 9892) = 0;
  v2 = a1 + 2473;
  result = sub_6078A55C(PlayerMgr_instance, (char)*(v2 - 9808));
  if ( result == 1 )
  {
    *v2 = 1;
    sub_60777C18(dword_60CBFA90);
    result = dword_60C99D88;
    FIELD_U8(dword_60C99D88, 31) = 0;
  }
  return result;
}
