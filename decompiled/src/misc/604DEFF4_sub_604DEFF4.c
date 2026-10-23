/* sub_604DEFF4
 * address: 0x604DEFF4   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DEFF4(int a1)
{
  int v2; // r0
  int v3; // r1
  char v4; // r2
  int v5; // r0
  char v6; // r1
  int v7; // r0
  char v8; // r1

  v2 = sub_603FD0B4((_BYTE *)(dword_60C99DEC + 16));
  v3 = FIELD_U32(a1, 6096);
  v4 = FIELD_U8(v3, 64);
  if ( v2 == 1 )
  {
    FIELD_U8(v3, 64) = v4 | 1;
    v5 = FIELD_U32(a1, 6100);
    v6 = FIELD_U8(v5, 64);
    if ( FIELD_U8(dword_60CC6D78, 20) )
    {
      FIELD_U8(v5, 64) = v6 | 1;
      v7 = FIELD_U32(a1, 6104);
      v8 = FIELD_U8(v7, 64) & 0xFE;
    }
    else
    {
      FIELD_U8(v5, 64) = v6 & 0xFE;
      v7 = FIELD_U32(a1, 6104);
      v8 = FIELD_U8(v7, 64) | 1;
    }
    FIELD_U8(v7, 64) = v8;
  }
  else
  {
    FIELD_U8(v3, 64) = v4 & 0xFE;
  }
  sub_60473DE4((_DWORD *)(a1 + 44), 0, &dword_60CA508C, 0);
  sub_60502548(a1 + 3592);
  FIELD_U16(a1, 4644) = 0;
  sub_6047EABC((_DWORD *)(a1 + 3632));
  FIELD_U8(a1, 6297) = 1;
  return 6297;
}
