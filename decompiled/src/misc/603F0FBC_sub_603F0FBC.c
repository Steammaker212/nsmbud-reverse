/* sub_603F0FBC
 * address: 0x603F0FBC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F0FBC(int a1, int a2, int a3)
{
  int result; // r0

  if ( !a3 )
  {
    result = dword_60CBD830;
    if ( dword_60CBD830 )
      return gbuffer_texture_ref_2();
  }
  return result;
}
