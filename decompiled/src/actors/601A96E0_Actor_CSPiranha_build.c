/* Actor_CSPiranha_build
 * address: 0x601A96E0   size: 120   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CSPiranha_build(unsigned __int8 *a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x198u);
  result = sub_6018668C(v2, a1);
  *(_DWORD *)result = off_60BD628C;
  FIELD_U32(result, 372) = 0;
  FIELD_U32(result, 376) = 0;
  FIELD_U32(result, 380) = 0;
  FIELD_U32(result, 384) = 0;
  FIELD_U32(result, 388) = 0;
  FIELD_U32(result, 392) = 0;
  FIELD_U32(result, 396) = 0;
  FIELD_U32(result, 400) = 0;
  FIELD_U8(result, 404) = -1;
  FIELD_U8(result, 405) = 0;
  FIELD_U8(result, 406) = 0;
  FIELD_U8(result, 407) = 0;
  FIELD_U32(result, 128) = 1074161254;
  FIELD_U32(result, 132) = 1074161254;
  FIELD_U32(result, 136) = 1074161254;
  return result;
}
