/* sub_60919544
 * address: 0x60919544   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60919544(int a1)
{
  unsigned int result; // r0
  unsigned int v3; // r7

  result = FIELD_U32(a1, 4);
  if ( result )
  {
    dword_60CC73E8(result);
    v3 = 0;
    do
    {
      sub_609085CC();
      ++v3;
      result = (FIELD_U32(a1, 24) >> 2) + 4;
    }
    while ( v3 < result );
  }
  return result;
}
