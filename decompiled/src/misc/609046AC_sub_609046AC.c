/* sub_609046AC
 * address: 0x609046AC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_609046AC(_DWORD *a1, int a2, unsigned int a3)
{
  unsigned int v6; // r6
  unsigned int v7; // r1
  unsigned int v8; // r0
  unsigned int v9; // r1
  size_t v10; // r5

  v6 = 0;
  do
  {
    v7 = a1[3];
    v8 = a1[4];
    if ( v7 > v8 )
    {
      v9 = v7 - v8;
      v10 = a3 - v6;
      if ( v9 < a3 - v6 )
        v10 = v9;
      qmemcpy((void *)(a1[2] + v8), (const void *)(a2 + v6), v10);
      v6 += v10;
      a1[4] += v10;
    }
  }
  while ( v6 < a3 && (*(int (__fastcall **)(_DWORD *))(*a1 + 20))(a1) );
  return v6;
}
