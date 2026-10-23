/* sub_6019B73C
 * address: 0x6019B73C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

double __fastcall sub_6019B73C(int a1, const char *a2)
{
  unsigned int v4; // s16
  unsigned int v5; // s18
  int v6; // r7
  int v7; // r6
  const char *v8; // r0
  _DWORD v10[11]; // [sp+0h] [bp-60h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 92))(a1);
  if ( v6 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = (const char *)(*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 88))(a1, v7);
      if ( v8 )
      {
        if ( !strcmp(v8, a2) )
          break;
      }
      if ( ++v7 >= v6 )
        return COERCE_DOUBLE(__PAIR64__(v5, v4));
    }
    (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)a1 + 108))(a1, v7, v10);
    v4 = v10[3];
    v5 = v10[7];
  }
  return COERCE_DOUBLE(__PAIR64__(v5, v4));
}
