/* sub_607A49CC
 * address: 0x607A49CC   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A49CC(int a1)
{
  _DWORD *v2; // r0
  int result; // r0

  FIELD_U32(a1, 1232) |= 0x8000u;
  sub_6078667C((_DWORD *)(a1 + 688), 1);
  PlayerBase_dispatchVirtual3(a1 + 11356, 141, 0.0);
  sub_607780C4(dword_60CBFA90, 1);
  sub_60777C68(dword_60CBFA90);
  v2 = (_DWORD *)(a1 + 9704);
  if ( (FIELD_U16(PlayerMgr_instance, 206) & (unsigned __int16)(1 << FIELD_U8(a1, 84))) != 0 )
  {
    *v2 = 0;
    result = FIELD_U32(a1, 1232) | 0x20000000;
    FIELD_U32(a1, 1232) = result;
  }
  else
  {
    *v2 = 3;
    FIELD_U32(a1, 9712) = 60;
    return 9712;
  }
  return result;
}
