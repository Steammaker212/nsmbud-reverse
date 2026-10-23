/* sub_6034D558
 * address: 0x6034D558   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034D558(int a1)
{
  if ( FIELD_U8(a1, 6840) )
    return 0;
  else
    return ShellEnemy__vf2D8();
}
