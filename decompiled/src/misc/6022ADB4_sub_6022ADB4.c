/* sub_6022ADB4
 * address: 0x6022ADB4   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022ADB4(int a1)
{
  int v2; // r5
  int result; // r0
  int i; // r7
  unsigned int v5; // r0
  _DWORD v6[2]; // [sp+4h] [bp-24h] BYREF
  int v7; // [sp+Ch] [bp-1Ch]

  v2 = sub_601A443C(dword_60C89E18, 2, 0);
  v6[0] = 2;
  v6[1] = 0;
  v7 = -1;
  result = FIELD_U32(v2, 28);
  if ( result >= 1 )
  {
    for ( i = 0; i < result; ++i )
    {
      v7 = i;
      if ( sub_601DA52C((int)v6) )
      {
        v5 = FIELD_U32(a1, 340);
        if ( v5 >= 0x10 )
          v5 = 0;
        sub_6019EC34((_DWORD *)(a1 + 16 * v5 + 84), v6);
        ++FIELD_U32(a1, 340);
      }
      result = FIELD_U32(v2, 28);
    }
  }
  return result;
}
