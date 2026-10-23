/* sub_609047B0
 * address: 0x609047B0   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_609047B0(int a1, int a2, unsigned int a3)
{
  unsigned int v6; // r7
  unsigned int v7; // r0
  unsigned int v8; // r1
  unsigned int v9; // r0
  size_t v10; // r5

  v6 = 0;
  v7 = FIELD_U32(a1, 16);
  v8 = FIELD_U32(a1, 20);
  do
  {
    if ( v7 > v8 )
    {
      v9 = v7 - v8;
      v10 = a3 - v6;
      if ( a3 - v6 > v9 )
        v10 = v9;
      qmemcpy((void *)(a2 + v6), (const void *)(FIELD_U32(a1, 8) + v8), v10);
      v6 += v10;
      FIELD_U32(a1, 20) += v10;
    }
    if ( v6 >= a3 )
      break;
    v7 = (***(int (__fastcall ****)(_DWORD, _DWORD, _DWORD))(a1 + 4))(
           FIELD_U32(a1, 4),
           FIELD_U32(a1, 8),
           FIELD_U32(a1, 12));
    v8 = 0;
    FIELD_U32(a1, 16) = v7;
    FIELD_U32(a1, 20) = 0;
  }
  while ( v7 );
  return v6;
}
