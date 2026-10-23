/* sub_600CE584
 * address: 0x600CE584   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600CE584(int *a1)
{
  int v3; // [sp+4h] [bp-1Ch] BYREF
  int v4; // [sp+8h] [bp-18h] BYREF
  int speed; // [sp+Ch] [bp-14h] BYREF

  speed = 0x2000000;
  moveValueTo(a1 + 1779, a1 + 1782, &speed);
  v4 = 50331648;
  moveValueTo(a1 + 1778, a1 + 1781, &v4);
  v3 = 50331648;
  return moveValueTo(a1 + 1777, a1 + 1780, &v3);
}
