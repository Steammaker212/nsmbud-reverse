/* sub_602A7BAC
 * address: 0x602A7BAC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A7BAC(int a1, int a2)
{
  if ( FIELD_U8(a1, 6054) )
    return (int)(float)((float)a2 * 0.5);
  return a2;
}
