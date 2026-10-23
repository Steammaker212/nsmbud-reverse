/* sub_601D9D84
 * address: 0x601D9D84   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601D9D84(int a1)
{
  int v2; // r5

  v2 = sub_601A443C(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  return sub_6018301C(v2, FIELD_U32(a1, 8), 2)
      || sub_6018301C(v2, FIELD_U32(a1, 8), 4)
      || sub_6018301C(v2, FIELD_U32(a1, 8), 8)
      || sub_6018301C(v2, FIELD_U32(a1, 8), 16)
      || sub_6018301C(v2, FIELD_U32(a1, 8), 32) != 0;
}
