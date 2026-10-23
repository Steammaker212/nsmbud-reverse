/* sub_60253F94
 * address: 0x60253F94   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60253F94(int a1, int a2, char a3)
{
  unsigned __int16 v3; // r12
  int v4; // r3
  _BYTE *v5; // r3
  int v6; // t1
  int v7; // r3
  int v8; // t1
  int v10; // lr

  v3 = 0;
  while ( 1 )
  {
    v4 = a1 + v3;
    v6 = FIELD_U8(v4, 416);
    v5 = (_BYTE *)(v4 + 416);
    if ( v6 == 255 )
    {
      v10 = v3;
      goto LABEL_8;
    }
    v7 = a1 + (v3 | 1);
    v8 = FIELD_U8(v7, 416);
    v5 = (_BYTE *)(v7 + 416);
    if ( v8 == 255 )
      break;
    v3 += 2;
    if ( v3 >= 0x64u )
      return 0xFFFF;
  }
  v10 = v3 | 1;
  v3 |= 1u;
LABEL_8:
  *(_DWORD *)(a1 + 4 * v10 + 16) = a2;
  *v5 = a3;
  return v3;
}
