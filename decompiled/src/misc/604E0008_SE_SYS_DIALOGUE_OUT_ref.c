/* SE_SYS_DIALOGUE_OUT_ref
 * address: 0x604E0008   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_DIALOGUE_OUT_ref(int a1)
{
  int v2; // r0

  sub_60478680((int)"SE_SYS_DIALOGUE_OUT", 9);
  v2 = *(_DWORD *)(a1 + 4 * FIELD_U8(a1, 4075) + 4060);
  FIELD_U32(v2, 36) |= 2u;
  FIELD_U8(a1, 4073) = 1;
  return 1;
}
