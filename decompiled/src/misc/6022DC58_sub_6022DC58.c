/* sub_6022DC58
 * address: 0x6022DC58   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6022DC58(int a1, unsigned int a2)
{
  int v2; // r4
  int v3; // r1
  int v4; // r0
  int v7[5]; // [sp+4h] [bp-14h] BYREF

  v2 = 0;
  v3 = 0;
  if ( a2 <= 9 )
  {
    v3 = dword_60AFD640[a2];
    a1 = dword_60AFD610[a2];
  }
  if ( (FIELD_U16(dword_60CC6D78, 520) & (unsigned __int16)(1 << a1)) != 0 )
  {
    v7[0] = a1;
    v2 = 0;
    v7[2] = -1;
    v7[1] = (unsigned int)(a1 - 7) <= 1;
    if ( sub_601D9F00(v7, v3) == 1 )
    {
      v4 = sub_601E08C8(v7);
      return sub_6022DD38(v4, v4) != 0;
    }
  }
  return v2;
}
