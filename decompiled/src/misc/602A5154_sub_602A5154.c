/* sub_602A5154
 * address: 0x602A5154   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_602A5154()
{
  int v0; // r1
  int v1; // r2
  int v3; // [sp+4h] [bp-14h] BYREF
  int v4; // [sp+8h] [bp-10h]
  int v5; // [sp+Ch] [bp-Ch]

  v3 = FIELD_U32(dword_60CC6484, 116);
  v4 = FIELD_U32(dword_60CC6484, 128);
  v5 = 0;
  sub_60833074((float *)&v3);
  v0 = v4;
  v1 = dword_60CC62E4 + 116;
  FIELD_U32(dword_60CC62E4, 116) = v3;
  FIELD_U32(v1, 4) = v0;
  FIELD_U32(v1, 8) = 0;
  return sub_603F4998(AreaTask_intance);
}
