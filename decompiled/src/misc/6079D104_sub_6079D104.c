/* sub_6079D104
 * address: 0x6079D104   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079D104(int a1, int *a2)
{
  int v2; // r2
  int v3; // r2

  v2 = 0;
  if ( (FIELD_U8(a1, 1208) & 2) != 0 )
  {
    v3 = *a2;
    FIELD_U32(a1, 88) = *a2;
    FIELD_U32(a1, 92) = v3;
    v2 = 1;
    FIELD_U32(a1, 124) = a2[1];
  }
  return v2;
}
