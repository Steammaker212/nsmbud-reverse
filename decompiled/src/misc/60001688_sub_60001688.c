/* sub_60001688
 * address: 0x60001688   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60001688(int a1, int a2, int a3)
{
  int v6; // r0

  if ( !a3 )
  {
    sub_603F0040(dword_60C99D6C, 0, a2, 0);
    sub_603F02F4(dword_60C99D6C, 0, a2);
    sub_603F01A0(dword_60C99D6C, 1, a2, 0);
    goto LABEL_5;
  }
  sub_603F01A0(dword_60C99D6C, 0, a2, 0);
  if ( a3 == 1 )
  {
    sub_603F0040(dword_60C99D6C, 1, a2, 0);
    sub_603F02F4(dword_60C99D6C, 1, a2);
LABEL_5:
    sub_603F01A0(dword_60C99D6C, 2, a2, 0);
LABEL_6:
    v6 = dword_60C99D6C;
    goto LABEL_7;
  }
  sub_603F01A0(dword_60C99D6C, 1, a2, 0);
  if ( a3 == 2 )
  {
    sub_603F0040(dword_60C99D6C, 2, a2, 0);
    sub_603F02F4(dword_60C99D6C, 2, a2);
    goto LABEL_6;
  }
  sub_603F01A0(dword_60C99D6C, 2, a2, 0);
  v6 = dword_60C99D6C;
  if ( a3 == 3 )
  {
    sub_603F0040(dword_60C99D6C, 3, a2, 0);
    sub_603F02F4(dword_60C99D6C, 3, a2);
    goto LABEL_8;
  }
LABEL_7:
  sub_603F01A0(v6, 3, a2, 0);
LABEL_8:
  FIELD_U8(a1, 85) = -1;
  return 255;
}
