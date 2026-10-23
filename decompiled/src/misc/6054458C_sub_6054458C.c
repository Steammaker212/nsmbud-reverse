/* sub_6054458C
 * address: 0x6054458C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054458C(int a1, unsigned int a2)
{
  int v3; // r5
  int v4; // r0

  v3 = dword_60C99DD0;
  FIELD_U32(dword_60C99DD0, 3780) |= 2u;
  v4 = FIELD_U32(v3, 3668);
  if ( v4 && sub_604B6F58(v4, a2) )
  {
    FIELD_U32(v3, 3780) &= ~2u;
    sub_60815858(dword_60CC6B68, 0);
  }
  FIELD_U8(a1, 33497) = 1;
  return 33497;
}
