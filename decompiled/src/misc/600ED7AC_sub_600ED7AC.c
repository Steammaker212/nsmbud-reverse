/* sub_600ED7AC
 * address: 0x600ED7AC   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600ED7AC(int *a1)
{
  int *v2; // r5
  int v3; // r6
  void (__fastcall *v4)(int *, int); // r7
  int v5; // r0

  if ( (*(int (__fastcall **)(int *))(*a1 + 708))(a1) == 1 && !(*(int (__fastcall **)(int *))(*a1 + 896))(a1) )
  {
    v2 = a1 + 1575;
    v3 = a1[1575];
    v4 = *(void (__fastcall **)(int *, int))(*a1 + 732);
    v5 = (*(int (__fastcall **)(int *))(*a1 + 736))(a1);
    v4(a1, v5);
    if ( a1[1575] < v3 )
    {
      a1[1577] = (*(int (__fastcall **)(int *))(*a1 + 780))(a1);
      (*(void (__fastcall **)(int *))(*a1 + 768))(a1);
      if ( *v2 <= 0 )
      {
        *v2 = 0;
        (*(void (__fastcall **)(int *))(*a1 + 920))(a1);
        (*(void (__fastcall **)(int *))(*a1 + 960))(a1);
        (*(void (__fastcall **)(int *))(*a1 + 1708))(a1);
      }
      else
      {
        (*(void (__fastcall **)(int *))(*a1 + 920))(a1);
        (*(void (__fastcall **)(int *))(*a1 + 956))(a1);
        (*(void (__fastcall **)(int *))(*a1 + 864))(a1);
      }
    }
  }
  return 1;
}
