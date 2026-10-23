/* sub_60903620
 * address: 0x60903620   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60903620(int a1, _DWORD *a2, _BYTE **a3)
{
  char *v5; // r1
  int result; // r0
  int i; // r3

  if ( !*a3[1]
    || ((*((void (__fastcall **)(_BYTE **))*a3 + 3))(a3),
        (*((void (__fastcall **)(_BYTE **))*a3 + 3))(a3),
        v5 = a3[1],
        v5 == "/") )
  {
LABEL_8:
    *a2 = 0;
    return 1;
  }
  else
  {
    result = 0;
    for ( i = 0; i <= 0x80000; ++i )
    {
      if ( v5[i] != asc_60AE4148[i] )
        break;
      if ( !v5[i] )
        goto LABEL_8;
    }
  }
  return result;
}
