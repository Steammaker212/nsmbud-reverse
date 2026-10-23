/* sub_607B8A08
 * address: 0x607B8A08   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B8A08(int a1, int a2)
{
  int v2; // r12

  v2 = 0;
  if ( !FIELD_U32(a1, 9952) )
  {
    FIELD_U32(a1, 9952) = FIELD_U32(a2, 8);
    Player_changeState(a1, (StateBase *)&dword_60CC514C, 0);
    return 1;
  }
  return v2;
}
