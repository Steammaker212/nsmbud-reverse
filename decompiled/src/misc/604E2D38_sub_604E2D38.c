/* sub_604E2D38
 * address: 0x604E2D38   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E2D38(int result)
{
  int v1; // r2

  v1 = 120;
  if ( FIELD_U32(dword_60C99DEC, 508) == 1 )
    v1 = 300;
  FIELD_U32(result, 20516) = v1;
  return result;
}
