/* sub_607F4130
 * address: 0x607F4130   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607F4130(int a1, unsigned int a2)
{
  int v3; // r5
  int v4; // r0

  v3 = dword_60C99DD0;
  FIELD_U32(dword_60C99DD0, 3780) |= 2u;
  v4 = FIELD_U32(v3, 3668);
  if ( v4 && sub_604B6F58(v4, a2) )
  {
    FIELD_U32(v3, 3780) &= ~2u;
    FIELD_U8(a1, 49) = 1;
    if ( dword_60C99D6C )
      nullsub_5588();
  }
  else
  {
    FIELD_U8(a1, 49) = 0;
  }
}
