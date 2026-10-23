/* sub_60489830
 * address: 0x60489830   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60489830(int a1)
{
  int v2; // r5
  _DWORD *v3; // r0

  FIELD_U16(a1, 13816) = 0;
  sub_6042ADEC((_DWORD *)dword_60C9C0FC, 5u);
  sub_6042A8AC(dword_60C9C0FC, 5u);
  sub_608169AC(dword_60CC6B68);
  v2 = -566272;
  v3 = (_DWORD *)(a1 + 609680);
  do
  {
    v3 = sub_603FEBBC(v3) - 1106;
    v2 += 4424;
  }
  while ( v2 );
  sub_60544E84(a1 + 14248);
  sub_6045C0A0(a1 + 13824);
  sub_6047643C((_DWORD *)(a1 + 10244));
  sub_6047643C((_DWORD *)(a1 + 6704));
  sub_605021B0(a1 + 3768);
  sub_60475AE8((_DWORD *)(a1 + 36));
  return a1;
}
