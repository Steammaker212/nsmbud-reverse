/* sub_6041F17C
 * address: 0x6041F17C   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041F17C(int a1, int a2)
{
  int v4; // r6
  int v5; // r4
  int v6; // r10
  int v7; // r4
  int v8; // r6
  unsigned int v9; // r7
  int v10; // r2

  v4 = dword_60C9BAF4;
  dword_60CC7970(FIELD_U32(a2, 192), 48);
  sub_6083EAF4(v4 + 204, a2 + 8, a1 + 1740, v4 + 184);
  v5 = dword_60C9BAF4;
  dword_60CC7970(FIELD_U32(a2, 192), 48);
  if ( FIELD_S32(a1, 1400) >= 1 )
  {
    v6 = v5 + 184;
    v7 = v5 + 204;
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = FIELD_U32(a1, 2056);
      if ( FIELD_U32(a1, 2052) > v9 )
        v10 += v8;
      sub_6083EAFC(v7, a2 + 8, v10, v6);
      ++v9;
      v8 += 312;
    }
    while ( (signed int)v9 < FIELD_U32(a1, 1400) );
  }
  if ( (FIELD_U8(a1, 24) & 2) != 0 )
    sub_6041F274(a1, a2);
  return dword_60CC7978(FIELD_U32(a2, 192), a1 + 4664, 0, 1);
}
