/* sub_6053AE44
 * address: 0x6053AE44   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053AE44(int a1)
{
  int v2; // r5
  unsigned int *v3; // r6
  unsigned int v4; // r0

  v2 = a1 + 15680;
  v3 = (unsigned int *)(a1 + 83548);
  v4 = FIELD_U32(a1, 16708) - 1;
  if ( v4 <= 2 )
    *v3 = v4;
  sub_60473DE4((_DWORD *)(a1 + 12092), 0, &dword_60CAB454, 0);
  FIELD_U8(a1, 83565) = 1;
  FIELD_U8(a1, 83569) = 1;
  FIELD_U32(a1, 52472) = *v3;
  FIELD_U32(a1, 52448) = 1;
  return sub_60502548(v2);
}
