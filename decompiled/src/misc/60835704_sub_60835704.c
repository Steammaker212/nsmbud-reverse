/* sub_60835704
 * address: 0x60835704   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60835704(int a1, int a2)
{
  int v4; // r7
  int v5; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r5
  int v9; // r2

  if ( !FIELD_U8(a2, 1) )
  {
    sub_60835934(a1, a2 + 80);
    v4 = FIELD_U8(a2, 77);
    v5 = FIELD_U32(a1, 184);
    if ( FIELD_U8(a2, 77) )
    {
      v6 = FIELD_U32(a2, 40);
      do
      {
        dword_60CC77F8(v5, v6);
        v5 = FIELD_U32(a1, 184);
        v6 += 8;
        --v4;
      }
      while ( v4 );
    }
    dword_60CC77FC(v5, a2 + 52);
    dword_60CC7800(FIELD_U32(a1, 184), a2 + 48);
    dword_60CC78F0(FIELD_U32(a1, 184), a2 + 56);
    dword_60CC780C(FIELD_U32(a1, 184), a2 + 128);
    dword_60CC78E4(FIELD_U32(a1, 184), 3, FIELD_U32(a2, 136));
    dword_60CC78E8(FIELD_U32(a1, 184), 3, FIELD_U32(a2, 140));
    dword_60CC78EC(FIELD_U32(a1, 184), 2, FIELD_U32(a2, 144));
    dword_60CC78EC(FIELD_U32(a1, 184), 1, FIELD_U32(a2, 148));
    if ( (FIELD_U8(a2, 154) & 8) == 0 )
      dword_60CC78C4(FIELD_U32(a1, 184), 0, 0.0, 1.0);
    dword_60CC7810(FIELD_U32(a1, 184), FIELD_U32(a2, 16), FIELD_U32(a2, 32));
    dword_60CC7814(FIELD_U32(a1, 184), FIELD_U32(a2, 12), FIELD_U32(a2, 24));
    if ( (FIELD_U8(a2, 2) & 1) != 0 )
      dword_60CC784C(FIELD_U32(a1, 184), FIELD_U32(a2, 160));
  }
  v7 = FIELD_U32(a2, 168);
  if ( !v7 )
  {
    v8 = 0;
    goto LABEL_13;
  }
  v8 = FIELD_U32(v7, 8);
  if ( (FIELD_U8(v7, 1) & 1) != 0 )
  {
LABEL_13:
    v9 = sub_6083AC38(63);
    return dword_60CC7818(FIELD_U32(a1, 184), v8, v9);
  }
  v9 = FIELD_U32(v7, 4);
  return dword_60CC7818(FIELD_U32(a1, 184), v8, v9);
}
