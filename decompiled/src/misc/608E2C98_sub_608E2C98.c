/* sub_608E2C98
 * address: 0x608E2C98   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E2C98(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r8
  int v10; // r5
  __int64 v11; // r0
  int v13; // [sp+4h] [bp-24h] BYREF

  v8 = sub_608E78F8(a1, a2);
  v9 = v8;
  if ( a4 == 2 )
  {
    v10 = 0;
    v13 = 0;
    if ( (*(int (__fastcall **)(int, int *, int))(*(_DWORD *)a1 + 84))(a1, &v13, a2) != 1 )
      return v10;
    v11 = (unsigned int)(v13 + a3);
LABEL_8:
    FIELD_U64(v9, 8) = v11;
    return 1;
  }
  if ( a4 == 1 )
  {
    v11 = FIELD_U64(v8, 8) + a3;
    goto LABEL_8;
  }
  v10 = 0;
  if ( !a4 )
  {
    FIELD_U64(v8, 8) = a3;
    return 1;
  }
  return v10;
}
