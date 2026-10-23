/* sub_60086BD4
 * address: 0x60086BD4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60086BD4(int a1)
{
  int result; // r0

  FIELD_U32(a1, 328) = 0;
  sub_6015913C((ActiveCollider *)(a1 + 188), 16);
  result = sub_600009FC((StageActor *)a1);
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 104) = 0;
  return result;
}
