/* sub_608F8F44
 * address: 0x608F8F44   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F8F44(int a1, int a2)
{
  int v3; // r6
  unsigned int v4; // r7
  int v5; // r8
  unsigned int v6; // r1
  unsigned int v7; // r0

  v3 = 0;
  v4 = abs32(a2);
  if ( ((v4 - 1) & v4) == 0 )
  {
    v5 = 0;
    if ( (FIELD_U8(a1, 120) & 1) != 0 )
    {
      v5 = a1 + 84;
      sead__CriticalSection__lock(a1 + 84);
    }
    v6 = FIELD_U32(a1, 128);
    v7 = (FIELD_U32(a1, 124) + v4 - 1) & -v4;
    v3 = v6 - v7;
    if ( v6 < v7 )
      v3 = 0;
    if ( v5 )
      sead__CriticalSection__unlock(v5);
  }
  return v3;
}
