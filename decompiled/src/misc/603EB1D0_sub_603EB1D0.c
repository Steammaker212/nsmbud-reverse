/* sub_603EB1D0
 * address: 0x603EB1D0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603EB1D0(int result)
{
  int v1; // r1
  int v2; // r1
  int v3; // r1
  int v4; // r2
  int v5; // [sp+4h] [bp-14h] BYREF
  int v6; // [sp+8h] [bp-10h]
  int v7; // [sp+Ch] [bp-Ch]

  v1 = FIELD_U32(result, 28);
  if ( !v1 || (v2 = v1 - 1, (FIELD_U32(result, 28) = v2) == 0) )
  {
    v5 = FIELD_U32(dword_60CC6484, 116);
    v6 = FIELD_U32(dword_60CC6484, 128);
    v7 = 0;
    sub_60833074((float *)&v5);
    v3 = v6;
    v4 = dword_60CC62E4 + 116;
    FIELD_U32(dword_60CC62E4, 116) = v5;
    FIELD_U32(v4, 4) = v3;
    FIELD_U32(v4, 8) = 0;
    return sub_603F4998(AreaTask_intance);
  }
  return result;
}
