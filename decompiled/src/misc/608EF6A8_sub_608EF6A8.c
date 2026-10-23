/* sub_608EF6A8
 * address: 0x608EF6A8   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EF6A8(int a1)
{
  int v2; // r8
  int v3; // r1
  int v4; // r6
  int v5; // r7
  int v6; // r0
  int v7; // r0

  v2 = FIELD_U32(a1, 92) + 4;
  sead__CriticalSection__lock(v2);
  v3 = dword_60CCEEA4;
  if ( dword_60CCEEA4 >= 1 )
  {
    v4 = a1 + 84;
    v5 = 0;
    do
    {
      v6 = 0;
      if ( v3 > (unsigned int)v5 )
        v6 = v5;
      v7 = *(_DWORD *)(a1 + 4 * v6 + 68);
      if ( v7 && !*(_BYTE *)(v4 + v5) )
      {
        *(_BYTE *)(v4 + v5) = 1;
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7);
        v3 = dword_60CCEEA4;
      }
      ++v5;
    }
    while ( v5 < v3 );
  }
  return sead__CriticalSection__unlock(v2);
}
