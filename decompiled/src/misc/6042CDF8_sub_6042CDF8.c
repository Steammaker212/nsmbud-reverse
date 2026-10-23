/* sub_6042CDF8
 * address: 0x6042CDF8   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042CDF8(int a1)
{
  int v2; // r6
  int v3; // r4
  int *v4; // r7

  v2 = 0;
  v3 = 0;
  if ( FIELD_U32(dword_60C9CD58, 16) >= 0xAu )
    v3 = *(_DWORD *)(FIELD_U32(dword_60C9CD58, 24) + 36);
  Undefined_ref_91CC00(v3, 29, a1);
  v4 = &dword_60C9C118;
  do
  {
    sub_6091CD98(v3, v2++, v4);
    v4 += 2;
  }
  while ( v2 != 29 );
  Undefined_ref_91CE08(v3, 3, a1);
  sub_6091CFA0(v3, 0, (int)&dword_60C9C29C);
  sub_6091CFA0(v3, 1u, (int)&dword_60C9C2A4);
  sub_6091CFA0(v3, 2u, (int)&dword_60C9C2AC);
  Undefined_ref(v3, 3, a1);
  sub_6091CB20(v3, 0, &dword_60C9C2B4);
  sub_6091CB20(v3, 1, &dword_60C9C2BC);
  return sub_6091CB20(v3, 2, &dword_60C9C2C4);
}
