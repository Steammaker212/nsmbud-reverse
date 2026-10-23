/* sub_607B0680
 * address: 0x607B0680   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_607B0680(int a1)
{
  int v2; // r0

  v2 = FIELD_U32(a1, 9936);
  FIELD_U32(a1, 9940) = v2;
  if ( v2 == 1 )
  {
    FIELD_U32(a1, 88) = 0;
    (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(a1 + 11360) + 84))(
      FIELD_U32(a1, 11360),
      10,
      2.0,
      0.0,
      0.0);
  }
  FIELD_U32(a1, 1224) |= 0x9F50u;
  return sub_60782550();
}
