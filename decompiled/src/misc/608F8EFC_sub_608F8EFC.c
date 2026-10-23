/* sub_608F8EFC
 * address: 0x608F8EFC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F8EFC(int a1)
{
  int v3; // r5
  int v4; // r6
  int v5; // r4

  if ( (FIELD_U8(a1, 120) & 1) == 0 )
    return FIELD_U32(a1, 128) - FIELD_U32(a1, 124);
  v3 = a1 + 84;
  sead__CriticalSection__lock(a1 + 84);
  v4 = FIELD_U32(a1, 124);
  v5 = FIELD_U32(a1, 128);
  sead__CriticalSection__unlock(v3);
  return v5 - v4;
}
