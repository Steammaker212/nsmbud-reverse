/* sub_608AB144
 * address: 0x608AB144   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AB144(int a1, int a2)
{
  return FIELD_U32(a1, 36) + 92 * (a2 & 0xFFFFFF);
}
