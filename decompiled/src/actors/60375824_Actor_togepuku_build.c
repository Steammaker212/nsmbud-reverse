/* Actor_togepuku_build
 * address: 0x60375824   size: 76   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_togepuku_build(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x2EC0u);
  result = sub_603728E8(v2, a1);
  *(_DWORD *)result = off_60BF0FEC;
  FIELD_U32(result, 11956) = 0;
  FIELD_U32(result, 11960) = 0;
  FIELD_U8(result, 11964) = 0;
  return result;
}
