/* sub_6059AB2C
 * address: 0x6059AB2C   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059AB2C(int a1, int a2, float *a3)
{
  int v6; // r0
  int *v7; // r7

  v7 = (int *)(a1 + 6260);
  v6 = FIELD_U32(a1, 6260);
  if ( (v6 & 0x80000) != 0 )
  {
    if ( sub_6015C6B0(a1 + 13488, 0, a3) != 1 )
      return 1;
    v6 = *v7;
  }
  if ( (v6 & 0x20000) == 0 )
    return sub_605DEF3C(a1, a2, a3);
  if ( (v6 & 0x400000) == 0 || !FIELD_U32(a1, 13468) )
    sub_605D8994(a1);
  return 1;
}
