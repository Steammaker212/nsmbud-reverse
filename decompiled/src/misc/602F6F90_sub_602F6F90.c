/* sub_602F6F90
 * address: 0x602F6F90   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602F6F90(int a1, int a2, int a3)
{
  if ( FIELD_U8(a1, 6320) )
    return 0;
  sub_603FFD60(dword_60C99DD4 + 852);
  return Enemy__collisionPropellerDrill((int *)a1, a2, a3);
}
