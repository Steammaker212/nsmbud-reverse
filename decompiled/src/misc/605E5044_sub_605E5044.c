/* sub_605E5044
 * address: 0x605E5044   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605E5044(int a1)
{
  int v2; // r5
  int v3; // r0
  unsigned int v4; // r6
  int v5; // r5
  int v6; // r7
  int v7; // r3

  v2 = 0;
  if ( (FIELD_U8(a1, 6268) & 8) == 0 )
  {
    v3 = sub_605DBDAC(a1);
    if ( v3 )
    {
      v4 = FIELD_S8(v3, 84);
      v5 = 0;
      if ( v4 > 3 )
        return v5 != 0;
      v6 = 31;
      if ( (FIELD_U8(v3, 1215) & 0x10) == 0 )
        v6 = dword_60B05A98[FIELD_U32(a1, 6252)];
      v7 = dword_60C99DD4 + 272;
      if ( !dword_60C99DD4 )
        v7 = dword_60C99DEC + 16;
      if ( (*(_DWORD *)(v7 + 72 * v4 + 4 * (v6 >> 5) + 52) & (1 << (v6 & 0x1F))) != 0 )
        return v5 != 0;
      if ( v6 == 31 )
      {
        v5 = sub_607AE2BC();
        if ( !v5 )
          return v5 != 0;
      }
      else
      {
        v5 = sub_607AE088();
        if ( v5 != 1 )
          return v5 != 0;
      }
      sub_605E52E4(a1, v6);
      return v5 != 0;
    }
  }
  return v2;
}
