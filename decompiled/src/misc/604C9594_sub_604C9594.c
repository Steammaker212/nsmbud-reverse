/* sub_604C9594
 * address: 0x604C9594   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C9594(int a1)
{
  int v2; // r5
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  sub_60502548(a1 + 3800);
  v2 = 0;
  FIELD_U16(a1, 4852) = 0;
  sub_6047EABC((_DWORD *)(a1 + 3840));
  if ( FIELD_U8(a1, 615720) )
  {
    if ( FIELD_U32(a1, 615700) < 0xAu )
      v2 = FIELD_U32(a1, 615700);
    ((void (__fastcall *)(int, int))loc_604D23A8)(a1 + 52644 * v2 + 89248, 1);
  }
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = sub_604DABE0(3);
  return sub_60473DE4((_DWORD *)(a1 + 40), 4u, v4, 0);
}
