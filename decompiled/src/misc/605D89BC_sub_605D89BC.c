/* sub_605D89BC
 * address: 0x605D89BC   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D89BC(int *a1, int a2, unsigned int a3)
{
  int (__fastcall *v6)(int *, int, unsigned int); // r3
  int v7; // r0
  int v8; // r1

  if ( (a1[1565] & 2) != 0 || (*((_BYTE *)a1 + 6265) & 0x20) != 0 )
    return 0;
  if ( !a2 )
    goto LABEL_6;
  if ( sub_605DEA30(a1, a2) )
    return 0;
  sub_605DE950(a1, a2, 3);
LABEL_6:
  a1[1942] = a3;
  if ( a3 < 2 )
  {
    v7 = sub_605DBD64(a1);
    v8 = *a1;
    if ( v7 == 1 )
      v6 = *(int (__fastcall **)(int *, int, unsigned int))(v8 + 368);
    else
      v6 = *(int (__fastcall **)(int *, int, unsigned int))(v8 + 364);
    return v6(a1, a2, a3);
  }
  if ( a3 - 3 >= 2 )
  {
    if ( a3 == 2 )
      return (*(int (__fastcall **)(int *, int, int))(*a1 + 372))(a1, a2, 2);
    return 0;
  }
  v6 = *(int (__fastcall **)(int *, int, unsigned int))(*a1 + 376);
  return v6(a1, a2, a3);
}
