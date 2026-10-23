/* sub_608B4094
 * address: 0x608B4094   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B4094(_DWORD *a1, unsigned int a2)
{
  int v3; // r4
  int v4; // r0
  _DWORD v6[2]; // [sp+4h] [bp-2Ch] BYREF
  char v7; // [sp+Ch] [bp-24h]

  v3 = 0;
  v4 = a1[1];
  if ( v4 )
  {
    switch ( HIBYTE(a2) )
    {
      case 1u:
        sub_608A9BC0(v4, (int)v6, a2);
        goto LABEL_7;
      case 3u:
        v6[0] = -1;
        sub_608A9EC8(v4, (int)v6, a2);
        goto LABEL_7;
      case 5u:
        v6[0] = -1;
        v7 = 0;
        sub_608A9F2C(v4, a2, (int)v6);
        goto LABEL_7;
      case 6u:
        v6[0] = -1;
        v6[1] = 0;
        sub_608A9FE4(v4, (int)v6, a2);
LABEL_7:
        if ( v6[0] != -1 )
          v3 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
        break;
      default:
        return v3;
    }
  }
  return v3;
}
