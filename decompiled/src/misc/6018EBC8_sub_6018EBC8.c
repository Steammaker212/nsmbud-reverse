/* sub_6018EBC8
 * address: 0x6018EBC8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6018EBC8()
{
  int v0; // r2
  int v1; // r0
  int v3; // [sp+4h] [bp-14h]
  int v4; // [sp+8h] [bp-10h]
  int v5; // [sp+Ch] [bp-Ch]

  v0 = FIELD_U32(dword_60CC6D78, 432);
  v1 = FIELD_U32(dword_60CC6D78, 436);
  v3 = FIELD_U32(dword_60CC6D78, 428);
  v4 = v0;
  v5 = v1;
  return sub_6018EC04();
}
