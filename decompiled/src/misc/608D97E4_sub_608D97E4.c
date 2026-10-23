/* sub_608D97E4
 * address: 0x608D97E4   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D97E4(int a1)
{
  int v1; // r1

  LOBYTE(v1) = 64;
  if ( (*(_BYTE *)a1 & 1) != 0 )
    return (unsigned __int8)FIELD_U32(a1, 4);
  return (unsigned __int8)v1;
}
