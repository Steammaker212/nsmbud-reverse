/* sub_608423B8
 * address: 0x608423B8   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608423B8(int a1)
{
  int v1; // r1

  LOBYTE(v1) = 127;
  if ( a1 != -128 )
    return (char)-(unsigned __int8)a1;
  return (char)v1;
}
