/* sub_604E4844
 * address: 0x604E4844   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E4844(int a1)
{
  int v2; // r3
  int v3; // r1
  int v4; // r0
  _DWORD v6[4]; // [sp+0h] [bp-10h] BYREF

  if ( dword_60CC6D78 )
  {
    v2 = *(_DWORD *)(sub_60834614(dword_60CC6D78) + 452);
    FIELD_U32(a1, 544) = v2;
    v3 = FIELD_U32(a1, 62840);
    if ( v3 )
    {
      v4 = FIELD_U32(v3, 176);
      v6[0] = &sead__SafeStringBase__vtable;
      v6[1] = v4;
      sub_6047E0EC(v6, v3, 1, v2);
    }
  }
  sub_604E7960(a1, 1);
  FIELD_U8(a1, 4512) = 0;
  return 4512;
}
