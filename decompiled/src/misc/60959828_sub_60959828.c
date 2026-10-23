/* sub_60959828
 * address: 0x60959828   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60959828(char *a1, int a2, int a3)
{
  int result; // r0
  char *v7; // r7
  _DWORD *v8; // r4
  int i; // r5
  int v10; // r0
  int v11; // r0
  int v12; // [sp+4h] [bp-2Ch] BYREF
  int v13; // [sp+8h] [bp-28h] BYREF

  result = *((_DWORD *)a1 + 65);
  if ( result >= 1 )
  {
    v7 = a1 + 4;
    v8 = a1 + 16;
    for ( i = 0; i < result; ++i )
    {
      v10 = sub_60918700(a3, LOBYTE(v8[4 * i]));
      if ( v10 )
      {
        v11 = FIELD_U32(v10, 144);
        v13 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 144) + 8 * LOBYTE(v8[4 * i]));
      }
      else
      {
        v13 = 36;
        v11 = 35;
      }
      v12 = v11;
      sub_60918934(a2, v7, &v13, &v12);
      result = *((_DWORD *)a1 + 65);
      v7 += 16;
    }
  }
  return result;
}
