/* sub_607A56D8
 * address: 0x607A56D8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607A56D8(_BYTE *a1, int a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r4
  int v8; // [sp+0h] [bp-28h] BYREF
  float v9[9]; // [sp+4h] [bp-24h] BYREF

  v4 = 0;
  if ( (a1[1235] & 0x20) == 0 )
  {
    v5 = sub_6079D894((int)a1);
    v6 = v5;
    if ( a2 || !v5 )
      JUMPOUT(0x6076A35C);
    v4 = 0;
    if ( sub_60769D94(v5, 0) )
    {
      if ( sub_60769E7C(a1, (int)v9, (int)&v8, 0) == 1 )
      {
        ((void (__fastcall *)(int, _DWORD, float, float, float))loc_6076A210)(v6, 0, v9[0], v9[1], v9[2]);
        return sub_6076A5C0(v6, v8, 0) != 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return v4;
}
