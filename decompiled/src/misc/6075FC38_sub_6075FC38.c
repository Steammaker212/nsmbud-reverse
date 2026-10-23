/* sub_6075FC38
 * address: 0x6075FC38   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6075FC38(int a1)
{
  int v2; // r0
  int v3; // r5
  _DWORD v5[2]; // [sp+4h] [bp-1Ch] BYREF
  char v6; // [sp+Ch] [bp-14h]

  v2 = FIELD_U32(a1, 6900);
  if ( (v2 & 1) == 0 )
    return 0;
  if ( FIELD_U32(a1, 1316) == 5 )
  {
    if ( (v2 & 0x40000) != 0 )
      return 0;
  }
  else if ( FIELD_U32(a1, 6904) & 0x800000 | v2 & 0x40000 )
  {
    return 0;
  }
  if ( (FIELD_U8(a1, 1222) & 8) != 0 )
    return 0;
  if ( (*(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 648) + 4) + 196) & 1) == 0
    || !((int (__fastcall *)(int))loc_60763E28)(a1) )
  {
    if ( sub_6078663C(a1 + 688) == 1 )
    {
      v3 = 1;
      v5[0] = 0;
      v5[1] = 1;
      v6 = 1;
      sub_60773E6C(a1, &unk_60CBF840, v5);
      return v3;
    }
    return 0;
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1024))(a1) != 0;
}
