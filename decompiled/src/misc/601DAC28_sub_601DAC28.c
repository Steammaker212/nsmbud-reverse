/* sub_601DAC28
 * address: 0x601DAC28   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601DAC28(int a1)
{
  int v2; // r5

  v2 = sub_601A443C(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  return sub_60183038(v2, FIELD_U32(a1, 8), 0x80000)
      || sub_60183038(v2, FIELD_U32(a1, 8), 0x100000)
      || sub_60183038(v2, FIELD_U32(a1, 8), 0x200000)
      || sub_60183038(v2, FIELD_U32(a1, 8), 0x400000)
      || sub_60183038(v2, FIELD_U32(a1, 8), 0x800000)
      || sub_60183038(v2, FIELD_U32(a1, 8), 0x1000000)
      || sub_60183038(v2, FIELD_U32(a1, 8), 0x2000000) != 0;
}
