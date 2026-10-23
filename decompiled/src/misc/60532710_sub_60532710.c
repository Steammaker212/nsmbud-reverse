/* sub_60532710
 * address: 0x60532710   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60532710(int a1)
{
  int v1; // r4
  float v2; // s16
  int v3; // r6
  int i; // r2
  int v5; // r0

  v1 = a1 + 36;
  v2 = 0.0;
  if ( sub_6047482C(a1 + 36, 0x13u) )
  {
    v3 = *(_DWORD *)(sub_6047482C(v1, 0x13u) + 56);
    (*(void (__fastcall **)(int *))(dword_60CAACF0 + 12))(&dword_60CAACF0);
    (*(void (__fastcall **)(int *))(dword_60CAACF0 + 12))(&dword_60CAACF0);
    if ( dword_60CAACF4 == v3 )
    {
LABEL_10:
      v5 = sub_6047482C(v1, 0x13u);
      return (float)(unsigned int)sub_608502E4(v5);
    }
    else
    {
      for ( i = 1; *(unsigned __int8 *)(dword_60CAACF4 + i - 1) == *(unsigned __int8 *)(v3 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(dword_60CAACF4 + i - 1) )
          goto LABEL_10;
        if ( i > 0x80000 || *(unsigned __int8 *)(dword_60CAACF4 + i) != *(unsigned __int8 *)(v3 + i) )
          break;
        if ( !*(_BYTE *)(dword_60CAACF4 + i) )
          goto LABEL_10;
      }
    }
  }
  return v2;
}
