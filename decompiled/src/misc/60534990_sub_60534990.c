/* sub_60534990
 * address: 0x60534990   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60534990(int a1)
{
  unsigned int *v2; // r6
  int v3; // r5
  unsigned int v4; // r0

  v2 = (unsigned int *)(a1 + 83608);
  v3 = a1 + 15700;
  v4 = FIELD_U32(a1, 16728) - 1;
  if ( v4 <= 2 )
    *v2 = v4;
  sub_60473DE4((_DWORD *)(a1 + 12092), 0, &dword_60CAADC4, 0);
  FIELD_U8(a1, 83625) = 1;
  FIELD_U8(a1, 83629) = 1;
  FIELD_U32(a1, 52492) = *v2;
  FIELD_U32(a1, 52468) = 1;
  return sub_60502548(v3);
}
