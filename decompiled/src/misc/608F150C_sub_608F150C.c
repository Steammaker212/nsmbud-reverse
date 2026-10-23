/* sub_608F150C
 * address: 0x608F150C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F150C(float a1, int a2, int a3, unsigned int a4, int a5, int a6)
{
  int result; // r0

  if ( (a4 & 1) != 0 )
    result = dword_60CC7894(FIELD_U32(a3, 192), 0, a5, 15);
  if ( (a4 & 6) != 0 )
    return dword_60CC78A0(FIELD_U32(a3, 192), (a4 >> 1) & 1, a6, (a4 >> 2) & 1, a1);
  return result;
}
