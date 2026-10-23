/* sub_6080A0CC
 * address: 0x6080A0CC   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080A0CC(_DWORD *a1, float a2)
{
  int result; // r0

  if ( a1[19] )
  {
    sub_608B0388(a2);
    sub_6080C13C(dword_60CC6B0C, a2);
  }
  if ( a1[17] )
  {
    sub_608B0388(a2);
    sub_6080C13C(dword_60CC6B0C, a2);
  }
  result = a1[16];
  if ( result )
  {
    sub_608B0388(a2);
    return sub_6080C13C(dword_60CC6B0C, a2);
  }
  return result;
}
