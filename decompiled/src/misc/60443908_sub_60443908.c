/* sub_60443908
 * address: 0x60443908   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60443908(int a1, int a2, int a3, float a4)
{
  if ( !a3 )
    a3 = 1;
  if ( (float)(a4 + 1.0) <= 0.00000011921 && (float)(a4 + 1.0) >= -0.00000011921 )
    a4 = FIELD_F32(a1, 504);
  return dword_60CC78FC(FIELD_U32(a2, 192), a4, (float)a3 * FIELD_F32(a1, 500), 0.0);
}
