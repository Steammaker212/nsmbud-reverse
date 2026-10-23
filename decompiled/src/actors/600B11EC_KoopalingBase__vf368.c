/* KoopalingBase__vf368
 * address: 0x600B11EC   size: 384   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600268C8
// 
// Overridden by: None
int __fastcall KoopalingBase__vf368(int *a1)
{
  int v3; // r5
  int *v4; // r6
  void (__fastcall *v5)(int *, int); // r7
  int v6; // r0

  if ( (*(int (__fastcall **)(int *))(*a1 + 896))(a1) == 1 )
  {
    sub_602A3EFC(a1 + 1672, 24);
    return 1;
  }
  else
  {
    v4 = a1 + 1575;
    v3 = a1[1575];
    v5 = *(void (__fastcall **)(int *, int))(*a1 + 732);
    v6 = (*(int (__fastcall **)(int *))(*a1 + 736))(a1);
    v5(a1, v6);
    if ( a1[1575] < v3 )
    {
      a1[1577] = (*(int (__fastcall **)(int *))(*a1 + 780))(a1);
      (*(void (__fastcall **)(int *))(*a1 + 768))(a1);
      sub_602A3EFC(a1 + 1672, 24);
      if ( *v4 <= 0 )
      {
        *v4 = 0;
        (*(void (__fastcall **)(int *))(*a1 + 920))(a1);
        (*(void (__fastcall **)(int *))(*a1 + 968))(a1);
        (*(void (__fastcall **)(int *))(*a1 + 800))(a1);
        (*(void (__fastcall **)(int *))(*a1 + 868))(a1);
        (*(void (__fastcall **)(int *))(*a1 + 880))(a1);
      }
      else
      {
        (*(void (__fastcall **)(int *))(*a1 + 920))(a1);
        (*(void (__fastcall **)(int *))(*a1 + 964))(a1);
        (*(void (__fastcall **)(int *))(*a1 + 864))(a1);
        (*(void (__fastcall **)(int *))(*a1 + 876))(a1);
      }
    }
    return 1;
  }
}
