/* sub_607701BC
 * address: 0x607701BC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607701BC(int a1)
{
  int v2; // r5

  v2 = 0;
  if ( (FIELD_U8(a1, 6900) & 1) != 0 && !sub_60766714(a1) )
  {
    Player_changeState(a1, &stru_60CBFA38, 0);
    FIELD_U32(a1, 88) = 0;
    FIELD_U32(a1, 124) = 1082130432;
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 1056))(a1, 5);
    return 1;
  }
  return v2;
}
