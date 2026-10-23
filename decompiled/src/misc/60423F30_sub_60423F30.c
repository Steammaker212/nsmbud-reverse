/* sub_60423F30
 * address: 0x60423F30   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60423F30(int a1)
{
  float result; // s0

  LODWORD(result) = (int)(float)(FIELD_F32(a1, 12)
                               * (float)*(int *)(**(_DWORD **)(FIELD_U32(dword_60C9A698, 229616) + 4 * *(_DWORD *)a1)
                                               + 56));
  FIELD_F32(a1, 4) = result;
  return result;
}
