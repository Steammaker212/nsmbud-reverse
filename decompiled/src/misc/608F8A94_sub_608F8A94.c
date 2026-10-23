/* sub_608F8A94
 * address: 0x608F8A94   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F8A94(int a1)
{
  int v2; // r4
  int v3; // r0
  bool v4; // zf
  int v5; // r1
  int v6; // r1
  int result; // r0

  v2 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v2 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
  }
  sub_608F98A4(a1, 0, 0);
  v3 = FIELD_U32(a1, 28);
  v4 = FIELD_U32(a1, 80) == 1;
  v5 = v3;
  if ( FIELD_U32(a1, 80) == 1 )
    v5 = v3 + 132;
  FIELD_U32(a1, 124) = v5;
  v6 = FIELD_U32(a1, 32);
  if ( !v4 )
    v6 -= 132;
  result = v6 + v3;
  FIELD_U32(a1, 128) = result;
  if ( v2 )
    return sead__CriticalSection__unlock(v2);
  return result;
}
