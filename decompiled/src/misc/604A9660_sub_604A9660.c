/* sub_604A9660
 * address: 0x604A9660   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A9660(int a1)
{
  int v1; // r7
  int v2; // r1
  unsigned int v3; // r2
  unsigned int v4; // r5
  int v5; // r5
  _DWORD *v6; // r4
  int result; // r0
  _DWORD v8[10]; // [sp+8h] [bp-28h] BYREF

  v1 = 0;
  v2 = FIELD_U32(a1, 279736);
  if ( v2 >= 1 )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = 0;
      if ( v3 < 4 )
        v4 = v3;
      v5 = a1 + 20556 * v4;
      if ( FIELD_U8(v5, 24276) )
      {
        if ( FIELD_U32(v5, 24228) == 6 )
          break;
      }
      if ( (int)++v3 >= v2 )
      {
        v1 = 0;
        goto LABEL_10;
      }
    }
    v1 = 1;
  }
LABEL_10:
  v6 = (_DWORD *)(a1 + 64);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = dword_60CA178C;
  sub_6047467C((_DWORD *)(a1 + 64), 1u, v8, (int)&unk_60CA1738, 1.0, 0);
  sub_6047467C(v6, 2u, v8, (int)&dword_60CA1740, 1.0, 0);
  result = sub_6047467C(v6, 3u, v8, (int)&dword_60CA1748, 1.0, 0);
  if ( v1 == 1 )
    return sub_6047467C(v6, 5u, v8, (int)&dword_60CA1758, 1.0, 0);
  return result;
}
