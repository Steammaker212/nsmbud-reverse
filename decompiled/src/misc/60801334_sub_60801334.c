/* sub_60801334
 * address: 0x60801334   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60801334(int a1, int a2)
{
  int v4; // r0
  int v6; // r6
  int v7; // r0

  v4 = FIELD_U32(a1, 28);
  if ( v4 )
  {
    sub_60800CC0(v4, a2);
    return 0;
  }
  else
  {
    v6 = 0;
    if ( !FIELD_U8(a1, 40) )
    {
      sub_60801818(FIELD_U32(a1, 32), a2);
      v6 = sub_608016C8(FIELD_U32(a1, 32));
    }
    v7 = FIELD_U32(a1, 36);
    if ( v7 )
      ((void (__fastcall *)(int, int, _DWORD))loc_60802020)(v7, a2, FIELD_U32(a1, 32));
    return v6;
  }
}
