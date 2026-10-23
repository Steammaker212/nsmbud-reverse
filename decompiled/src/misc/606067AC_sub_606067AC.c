/* sub_606067AC
 * address: 0x606067AC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606067AC(_DWORD *a1)
{
  int v2; // r0
  void (__fastcall ***v3)(_DWORD, _DWORD, int); // r0

  v2 = operator_new(0x74u);
  v3 = (void (__fastcall ***)(_DWORD, _DWORD, int))sub_6068B390(v2);
  *a1 = v3;
  (**v3)(v3, 0, 8);
  return sub_606067E4(a1);
}
