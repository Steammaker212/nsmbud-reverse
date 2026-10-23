/* sub_60440F90
 * address: 0x60440F90   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60440F90(int a1)
{
  int v2; // r4

  v2 = 0;
  if ( FIELD_U32(dword_60C9CD58, 16) >= 0xCu )
    v2 = *(_DWORD *)(FIELD_U32(dword_60C9CD58, 24) + 44);
  Undefined_ref_91CC00(v2, 2, a1);
  sub_6091CD98(v2, 0, &dword_60C9CCC8);
  sub_6091CD98(v2, 1, &dword_60C9CCD0);
  Undefined_ref_91CE08(v2, 1, a1);
  sub_6091CFA0(v2, 0, (int)&dword_60C9CCC0);
  Undefined_ref(v2, 2, a1);
  sub_6091CB20(v2, 0, &dword_60C9CCD8);
  return sub_6091CB20(v2, 1, &dword_60C9CCE0);
}
