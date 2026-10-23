/* sub_608D0E10
 * address: 0x608D0E10   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D0E10(_DWORD *a1)
{
  _DWORD *v2; // r8
  int v3; // r6
  int v4; // r0
  int v5; // r7
  int v6; // r1
  int v7; // r5

  v2 = a1 + 1;
  nn__os__LockMutex(a1 + 1);
  v3 = (*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
  if ( v3 >= 1 )
  {
    v4 = a1[7];
    v5 = 0;
    do
    {
      v6 = v4 + 8 * v5;
      v7 = FIELD_U32(v6, 4);
      if ( v7 != v6 )
      {
        do
        {
          sub_608CDCE8(v7 - 4);
          v4 = a1[7];
          v7 = FIELD_U32(v7, 4);
        }
        while ( v7 != v4 + 8 * v5 );
      }
      ++v5;
    }
    while ( v5 != v3 );
  }
  return nn__os__UnlockMutex(v2);
}
