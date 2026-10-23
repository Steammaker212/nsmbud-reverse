/* sub_607C8E7C
 * address: 0x607C8E7C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C8E7C(int a1, int a2)
{
  int v2; // r4
  float v3; // s0

  v2 = FIELD_U32(a1, 648);
  if ( a2 != 1 )
    return PlayerBase_dispatchVirtual3(FIELD_U32(a1, 648), 135, 0.0);
  v3 = sub_60769BB0();
  return (*(int (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(v2 + 4) + 84))(
           FIELD_U32(v2, 4),
           135,
           0.0,
           5.0,
           v3);
}
