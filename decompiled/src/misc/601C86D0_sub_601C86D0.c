/* sub_601C86D0
 * address: 0x601C86D0   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C86D0(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  void (__fastcall *v4)(_DWORD *, int, unsigned int *); // r3
  unsigned int v6[5]; // [sp+4h] [bp-14h] BYREF

  FIELD_U8(dword_60CC6D78, 512) = a1[302] == 9;
  memset(v6, 255, 12);
  v2 = a1[302];
  if ( v2 == 8 )
  {
    sub_601E0AB8(v6);
  }
  else if ( v2 == 7 )
  {
    sub_601E0A30(v6);
  }
  sub_60171B7C(dword_60C88BC8, a1 + 258, v6);
  v3 = a1[303];
  if ( v3 == 7 )
  {
    (*(void (__fastcall **)(_DWORD *, int, unsigned int *))(*a1 + 116))(a1, 5, v6);
  }
  else
  {
    v4 = *(void (__fastcall **)(_DWORD *, int, unsigned int *))(*a1 + 116);
    if ( v3 == 8 )
    {
      v4(a1, 5, v6);
      sub_601D9A30(a1);
    }
    else
    {
      v4(a1, 4, v6);
    }
  }
  a1[250] = a1[45];
  a1[253] = 0;
  return sub_60816B60(dword_60CC6B68);
}
