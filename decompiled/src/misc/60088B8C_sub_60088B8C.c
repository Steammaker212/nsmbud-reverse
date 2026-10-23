/* sub_60088B8C
 * address: 0x60088B8C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60088B8C(_BYTE *a1)
{
  int (__fastcall *v1)(_BYTE *, int *); // r2

  a1[7248] = 1;
  v1 = *(int (__fastcall **)(_BYTE *, int *))(*(_DWORD *)a1 + 192);
  if ( (a1[7616] & 1) != 0 )
    return v1(a1, &dword_60C81B2C);
  else
    return v1(a1, &dword_60C81CCC);
}
