/* sub_608D97FC
 * address: 0x608D97FC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D97FC(int a1)
{
  int v1; // r1

  LOBYTE(v1) = 0;
  if ( (*(_BYTE *)a1 & 1) != 0 )
    return (char)BYTE1(FIELD_U32(a1, 4));
  return (char)v1;
}
