/* sub_601BCA68
 * address: 0x601BCA68   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601BCA68(int *a1)
{
  int v2; // r0
  int v3; // r1
  _BYTE *v4; // r0
  int (__fastcall *v5)(int *); // r1

  if ( (a1[66] | 1) == 7 )
  {
    v2 = sub_603FD44C(dword_60C99DEC + 16);
    v3 = *a1;
    if ( v2 != 1 )
      goto LABEL_6;
  }
  else
  {
    v4 = (_BYTE *)sub_601C5718(a1);
    v3 = *a1;
    if ( !*v4 )
    {
LABEL_6:
      v5 = *(int (__fastcall **)(int *))(v3 + 128);
      return v5(a1);
    }
  }
  v5 = *(int (__fastcall **)(int *))(v3 + 124);
  return v5(a1);
}
