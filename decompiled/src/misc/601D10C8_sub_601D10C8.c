/* sub_601D10C8
 * address: 0x601D10C8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D10C8(int a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r0
  int v5; // r1
  int v6; // r0
  _DWORD v8[24]; // [sp+0h] [bp-60h] BYREF

  v2 = sub_601698C4(867, (_DWORD *)(a1 + 1032));
  v8[0] = 0;
  memset(&v8[2], 0, 72);
  sub_601905DC(v8);
  v3 = FIELD_U32(a1, 1032);
  if ( v3 == 7 )
  {
    v4 = FIELD_U32(a1, 1208);
    if ( v4 == 7 )
    {
      v5 = 76;
    }
    else if ( v4 == 8 )
    {
      v5 = 81;
      if ( FIELD_U8(dword_60CC6D78, 522) )
        v5 = 79;
    }
    else
    {
      v5 = 78;
    }
  }
  else
  {
    v6 = FIELD_U32(a1, 1208);
    if ( v3 != 8 )
    {
      if ( v6 != 7 )
      {
        v5 = 76;
        if ( v6 != 8 )
          goto LABEL_18;
        if ( !FIELD_U8(dword_60CC6D78, 522) )
        {
          v5 = 80;
          goto LABEL_18;
        }
      }
      v5 = 77;
      goto LABEL_18;
    }
    v5 = 76;
    if ( v6 != 8 )
    {
      v5 = 78;
      if ( v6 == 7 )
        v5 = 79;
    }
  }
LABEL_18:
  v8[0] = v5;
  v8[1] = sub_601916C8(dword_60C8996C, v5);
  v8[2] = FIELD_U32(v2, 8);
  return sub_60191160((_DWORD *)dword_60C8996C, v8);
}
