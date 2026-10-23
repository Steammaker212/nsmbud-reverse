/* Kanibo__beginState_RockUp
 * address: 0x6030E73C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall Kanibo__beginState_RockUp(Enemy *this)
{
  Enemy *v1; // r0

  *((_DWORD *)this + 1588) = 0;
  v1 = (Enemy *)((char *)this + 6344);
  FIELD_U32(v1, 0x0) = 1;
  sub_60421AD4(v1[-1].field_1870);
}
