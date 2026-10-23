/* sub_60343F00
 * address: 0x60343F00   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60343F00(int a1)
{
  int v2; // r1

  if ( FIELD_U32(a1, 80) )
    v2 = 3;
  else
    v2 = 4;
  sub_60345A00(a1, v2);
  FIELD_U32(a1, 7096) = sub_60345D14(a1);
  sub_60345EA4(a1);
  sub_60346188(a1);
  ((void (__fastcall *)(int, _DWORD, _DWORD))loc_603453AC)(a1, FIELD_U32(a1, 80), 0);
  FIELD_U8(a1, 7110) = 1;
  FIELD_U32(a1, 7092) = 0;
  return 7092;
}
