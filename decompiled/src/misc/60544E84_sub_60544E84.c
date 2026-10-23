/* sub_60544E84
 * address: 0x60544E84   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60544E84(int a1)
{
  _BYTE *v2; // r5

  *(_DWORD *)a1 = off_60C0065C;
  v2 = (_BYTE *)(a1 + 33504);
  if ( FIELD_U8(a1, 33504) )
  {
    sub_608169AC(dword_60CC6B68);
    *v2 = 0;
  }
  sub_6045C0A0(a1 + 33064);
  sub_6045C0A0(a1 + 32660);
  sub_6045C0A0(a1 + 32256);
  sub_6045C0A0(a1 + 31852);
  sub_6045C0A0(a1 + 31448);
  sub_6050A4C4(a1 + 24204);
  sub_60547AA4(a1 + 5712);
  sub_605021B0((_DWORD *)(a1 + 3632));
  sub_60475AE8((_DWORD *)(a1 + 44));
  return a1;
}
