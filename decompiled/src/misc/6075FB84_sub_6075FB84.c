/* sub_6075FB84
 * address: 0x6075FB84   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075FB84(int a1, char a2, int a3)
{
  int v6; // r5
  char v7; // r0
  bool v8; // zf
  _DWORD v10[2]; // [sp+4h] [bp-24h] BYREF
  char v11; // [sp+Ch] [bp-1Ch]

  v6 = 0;
  v7 = FIELD_U8(a1, 6902);
  v8 = (v7 & 4) == 0;
  if ( (v7 & 4) == 0 )
    v8 = (FIELD_U8(a1, 1222) & 8) == 0;
  if ( !v8 )
    return v6;
  if ( (*(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 648) + 4) + 196) & 1) == 0
    || ((int (__fastcall *)(int))loc_60763E28)(a1) != 1 )
  {
    if ( sub_6078663C(a1 + 688) == 1 )
    {
      v10[0] = 0;
      v10[1] = a3;
      v11 = a2;
      sub_60773E6C(a1, &unk_60CBF840, v10);
      return 1;
    }
    return v6;
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1024))(a1);
}
