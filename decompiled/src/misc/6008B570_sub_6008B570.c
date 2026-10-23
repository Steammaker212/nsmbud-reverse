/* sub_6008B570
 * address: 0x6008B570   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008B570(_DWORD *a1, float *a2)
{
  int result; // r0
  int v5; // r8
  void (__fastcall *v6)(_DWORD *, int); // r7
  int v7; // r0

  result = a1[1678];
  if ( result <= 0 )
  {
    sub_60088678((int)a1, a2);
    result = (*(int (__fastcall **)(_DWORD *))(*a1 + 1080))(a1);
    if ( result == 1 )
    {
      v5 = a1[1575];
      v6 = *(void (__fastcall **)(_DWORD *, int))(*a1 + 732);
      v7 = (*(int (__fastcall **)(_DWORD *))(*a1 + 736))(a1);
      v6(a1, v7);
      (*(void (__fastcall **)(_DWORD *))(*a1 + 964))(a1);
      result = a1[1575];
      if ( result < v5 )
      {
        a1[1577] = (*(int (__fastcall **)(_DWORD *))(*a1 + 780))(a1);
        (*(void (__fastcall **)(_DWORD *))(*a1 + 768))(a1);
        (*(void (__fastcall **)(_DWORD *, float *))(*a1 + 1084))(a1, a2);
        return (*(int (__fastcall **)(_DWORD *))(*a1 + 876))(a1);
      }
    }
  }
  return result;
}
