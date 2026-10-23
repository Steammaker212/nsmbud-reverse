/* sub_6042F294
 * address: 0x6042F294   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042F294(void *a1, _DWORD *a2)
{
  int v3; // r5
  unsigned int v4; // r2
  nn__mii__CharInfoAccessor *v5; // r0
  int v7; // r0
  unsigned int v8; // r1
  nn__mii__CharInfoAccessor *v9; // r0
  _DWORD v10[26]; // [sp+0h] [bp-68h] BYREF

  v3 = 1;
  v4 = *a2 & 0xFFFFFF;
  switch ( HIBYTE(*a2) )
  {
    case 0:
      qmemcpy(a1, (const void *)sub_6042EF64(FIELD_U32(dword_60C9C0FC, 724), 2u, v4), 0x5Cu);
      v5 = (nn__mii__CharInfoAccessor *)nn__mii__CharInfoAccessor__ctor(v10, a1);
      return nn__mii__CharInfoAccessor__IsValid_const(v5);
    case 1:
      v3 = 0;
      v7 = FIELD_U32(dword_60C9C0FC, 724);
      v10[0] = 0;
      if ( FIELD_U32(v7, 24) )
      {
        v8 = 0;
      }
      else
      {
        v10[0] = 2;
        if ( !FIELD_U32(v7, 48) )
          return v3;
        v8 = 2;
      }
      qmemcpy(a1, (const void *)sub_6042EF64(v7, v8, v4), 0x5Cu);
      v9 = (nn__mii__CharInfoAccessor *)nn__mii__CharInfoAccessor__ctor(v10, a1);
      return nn__mii__CharInfoAccessor__IsValid_const(v9);
    case 2:
      qmemcpy(a1, (const void *)sub_60828E04(dword_60CC6E04, *a2 & 0xFFFFFF), 0x5Cu);
      return v3;
    case 4:
      return 0;
    case 5:
      v10[0] = 3;
      v10[1] = 2;
      v10[2] = 3;
      sub_6042EF9C(FIELD_U32(dword_60C9C0FC, 724));
      return v3;
    default:
      return v3;
  }
}
