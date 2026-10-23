/* sub_605119FC
 * address: 0x605119FC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605119FC(int a1)
{
  int v1; // r6
  int v2; // r0
  int v3; // r1
  int i; // r3
  unsigned int v5; // r0

  v1 = dword_60CA84C4;
  v2 = sub_6047482C(a1 + 56, 5u);
  if ( v2 )
  {
    v3 = FIELD_U32(v2, 56);
    if ( v1 == v3 )
    {
LABEL_10:
      v5 = (int)FIELD_F32(v2, 16);
      if ( v5 <= 4 )
        return dword_60B03830[v5];
    }
    else
    {
      for ( i = 1; *(unsigned __int8 *)(v1 + i - 1) == *(unsigned __int8 *)(v3 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(v1 + i - 1) )
          goto LABEL_10;
        if ( i > 0x80000 || *(unsigned __int8 *)(v1 + i) != *(unsigned __int8 *)(v3 + i) )
          break;
        if ( !*(_BYTE *)(v1 + i) )
          goto LABEL_10;
      }
    }
  }
  return 0;
}
