/* sub_601C68A8
 * address: 0x601C68A8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C68A8(int a1, int a2, int a3)
{
  int v6; // r5
  int v7; // r7

  v6 = 0;
  v7 = 0;
  if ( (unsigned int)(a2 - 6) <= 0x1A )
  {
    v7 = 1;
    if ( ((1 << (a2 - 6)) & 0x7B00001) != 0 )
    {
      if ( !(*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 140))(a1, 16.0) )
        v7 = (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 140))(a1, 36.0);
    }
    else
    {
      v7 = 0;
    }
  }
  if ( (unsigned int)(a2 - 11) > 1 )
    v6 = 1;
  return ((a3 == 3) | v6) & v7;
}
