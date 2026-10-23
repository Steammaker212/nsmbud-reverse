/* sub_608F65C0
 * address: 0x608F65C0   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F65C0(int a1)
{
  int v2; // r6
  int v3; // r4
  int v4; // r0
  int v6; // r5

  v2 = FIELD_U32(a1, 36);
  if ( !v2 )
    return FIELD_U32(a1, 32);
  v3 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v3 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
    v2 = FIELD_U32(a1, 36);
  }
  if ( (FIELD_U8(v2, 120) & 1) != 0 )
    sead__CriticalSection__lock(v2 + 84);
  if ( FIELD_U32(a1, 80) == 1 )
    v4 = sub_608F6664(a1);
  else
    v4 = sub_608F6730(a1);
  v6 = v4;
  if ( (FIELD_U8(v2, 120) & 1) != 0 )
    sead__CriticalSection__unlock(v2 + 84);
  if ( v3 )
    sead__CriticalSection__unlock(v3);
  return v6;
}
