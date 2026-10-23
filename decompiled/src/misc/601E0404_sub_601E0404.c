/* sub_601E0404
 * address: 0x601E0404   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_601E0404(int a1, int a2, int a3)
{
  int v5; // r0
  int *v7; // r6
  int v8; // r0
  int (**v9)(); // [sp+0h] [bp-18h] BYREF
  int v10; // [sp+4h] [bp-14h]

  if ( a2 >= 0 )
  {
    v5 = sub_601A4454(dword_60C89E18, a1, a2);
LABEL_3:
    v9 = &sead__SafeStringBase__vtable;
    v10 = a3;
    return sub_601786A8(v5, &v9);
  }
  v7 = 0;
  v8 = sub_601A4454(dword_60C89E18, a1, 0);
  if ( v8 )
  {
    v9 = &sead__SafeStringBase__vtable;
    v10 = a3;
    v7 = sub_601786A8(v8, &v9);
    if ( !v7 )
    {
      v5 = sub_601A4454(dword_60C89E18, a1, 1);
      v7 = 0;
      if ( v5 )
        goto LABEL_3;
    }
  }
  return v7;
}
