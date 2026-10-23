/* sub_60770294
 * address: 0x60770294   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60770294(float *a1)
{
  int result; // r0

  sub_607712D4();
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 1104))(a1);
  ((void (__fastcall *)(float *))loc_60771910)(a1);
  result = ((int (__fastcall *)(float *))loc_60770F74)(a1);
  if ( a1[31] <= 0.0 )
    return Player_changeState((int)a1, (StateBase *)&dword_60CBF864, 1);
  return result;
}
