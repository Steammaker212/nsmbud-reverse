/* sub_60434684
 * address: 0x60434684   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60434684(int a1)
{
  int v1; // r6
  int v3; // r5
  int result; // r0
  bool v5; // zf
  int v6; // r7
  int v7; // r5

  v3 = a1 + 40;
  sub_6086D84C(a1 + 40, 0);
  sub_6086DA64(v3, 0);
  sub_6086DAF0(v3, 0);
  result = FIELD_U32(a1, 172);
  v5 = result == 0;
  if ( result )
  {
    v1 = FIELD_U16(a1, 64);
    v5 = v1 == 0;
  }
  if ( !v5 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      result = FIELD_U32(a1, 72);
      if ( *(_BYTE *)(*(_DWORD *)(result + v6) + 104) )
      {
        result = **(unsigned __int8 **)(result + v6 + 28);
        if ( (result & 1) != 0 )
          result = sub_60434714(a1, v7);
      }
      ++v7;
      v6 += 56;
    }
    while ( v1 != v7 );
  }
  return result;
}
