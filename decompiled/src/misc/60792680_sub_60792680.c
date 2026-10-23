/* sub_60792680
 * address: 0x60792680   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60792680(_DWORD *a1, int a2)
{
  int v3; // r1
  int *v4; // r2
  int v5; // r5
  void (__fastcall *v6)(int, int, int); // r6
  int v7; // r0

  v3 = 0;
  if ( a1[75] == 2 )
  {
    v4 = (int *)a1[73];
    if ( v4 )
    {
      v5 = *v4;
      v6 = *(void (__fastcall **)(int, int, int))(*(_DWORD *)*v4 + 108);
      v7 = (*(int (__fastcall **)(_DWORD *))(*a1 + 264))(a1);
      v6(v5, v7, a2);
      return 1;
    }
  }
  return v3;
}
