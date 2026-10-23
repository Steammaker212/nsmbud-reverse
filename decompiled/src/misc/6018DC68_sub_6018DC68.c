/* sub_6018DC68
 * address: 0x6018DC68   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6018DC68(int a1, _DWORD *a2, const char **a3)
{
  char v5; // r10
  int i; // r6
  int v7; // r0
  int v8; // r5
  _DWORD v10[20]; // [sp+0h] [bp-50h] BYREF

  v5 = 0;
  for ( i = 97; ; ++i )
  {
    (*((void (__fastcall **)(const char **))*a3 + 3))(a3);
    sub_6017D524(v10, "%s%c", a3[1], i);
    v7 = sub_601A0EC0(dword_60C89E00, *a2, v10);
    v8 = v7;
    if ( !v7 )
      break;
    if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v7 + 36))(v7) )
    {
      sub_60220E60(v8);
      v5 = 1;
    }
  }
  return v5 & 1;
}
