/* sub_608F0B94
 * address: 0x608F0B94   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F0B94(int a1, _DWORD *a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r1
  int v7; // r6

  v4 = a1 + 4;
  sead__CriticalSection__lock(a1 + 4);
  v5 = a2[25];
  v6 = a2[26];
  if ( !v5 )
    v5 = FIELD_U32(a1, 48);
  v7 = 0;
  if ( (FIELD_U8(v6, 48) & 1) == 0 )
    v7 = sub_608ECA58(v5, v6, a2);
  sead__CriticalSection__unlock(v4);
  return v7;
}
