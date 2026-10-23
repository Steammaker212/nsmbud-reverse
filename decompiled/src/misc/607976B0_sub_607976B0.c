/* sub_607976B0
 * address: 0x607976B0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607976B0(int a1, int a2)
{
  int v4; // [sp+0h] [bp-18h]
  float v5; // [sp+4h] [bp-14h]
  int v6; // [sp+8h] [bp-10h]

  v4 = FIELD_U32(a1, 672);
  v6 = FIELD_U32(a1, 680);
  v5 = FIELD_F32(a1, 676) + (float)(FIELD_F32(a1, 1244) * 0.5);
  sub_6075F980(a1);
  *(_DWORD *)a2 = v4;
  FIELD_F32(a2, 4) = v5;
  FIELD_U32(a2, 8) = v6;
  return v6;
}
