/* sub_60939758
 * address: 0x60939758   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60939758(int a1)
{
  int v2; // r1

  *(_DWORD *)a1 = &off_60C5E308;
  v2 = FIELD_U32(a1, 64);
  if ( v2 )
  {
    if ( FIELD_U8(a1, 85) )
      sub_6093EA98(dword_60CD09F8, v2);
    FIELD_U8(a1, 85) = 0;
    FIELD_U32(a1, 64) = 0;
  }
  return a1;
}
