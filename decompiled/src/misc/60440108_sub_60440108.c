/* sub_60440108
 * address: 0x60440108   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60440108(_DWORD *a1)
{
  int v2; // r4
  char *v3; // r0
  char *v4; // r6
  int v5; // r1
  int i; // r2
  int (**v8)(); // [sp+0h] [bp-28h] BYREF
  char *v9; // [sp+4h] [bp-24h]

  v2 = 0;
  while ( 1 )
  {
    v3 = off_60BFABCC[v2];
    v8 = &sead__SafeStringBase__vtable;
    v9 = v3;
    (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
    v4 = (char *)a1[1];
    ((void (__fastcall *)(int (***)()))v8[3])(&v8);
    if ( v4 == v9 )
      break;
    v5 = a1[1];
    for ( i = 1; *(unsigned __int8 *)(v5 + i - 1) == (unsigned __int8)v9[i - 1]; i += 2 )
    {
      if ( !*(_BYTE *)(v5 + i - 1) )
        return v2;
      if ( i > 0x80000 || *(unsigned __int8 *)(v5 + i) != (unsigned __int8)v9[i] )
        break;
      if ( !*(_BYTE *)(v5 + i) )
        return v2;
    }
    if ( ++v2 >= 8 )
      return 0;
  }
  return v2;
}
