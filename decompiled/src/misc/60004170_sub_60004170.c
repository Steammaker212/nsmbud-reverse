/* sub_60004170
 * address: 0x60004170   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60004170(int a1)
{
  int v2; // r4
  int v3; // r3
  _WORD *v4; // r0

  v2 = dword_60C7B3F8;
  if ( !dword_60C7B3F8 )
  {
    v2 = operator_new_8DE2C8(0x15FCu, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60BC0200;
    dword_60C7B3F4 = v2;
    FIELD_U16(v2, 1048) = 0;
    FIELD_U32(v2, 1052) = 0;
    FIELD_U16(v2, 1056) = 0;
    FIELD_U32(v2, 5216) = 0;
    FIELD_U32(v2, 5220) = 0;
    FIELD_U32(v2, 5224) = 0;
    FIELD_U32(v2, 20) = 0;
    FIELD_U32(v2, 24) = 0;
    FIELD_U32(v2, 28) = 0;
    FIELD_U32(v2, 32) = 0;
    FIELD_U32(v2, 36) = 0;
    FIELD_U32(v2, 40) = 0;
    FIELD_U32(v2, 44) = 0;
    FIELD_U32(v2, 16) = 0;
    sub_608DEB0C((_DWORD *)(v2 + 5216), 100, v2 + 5228);
    memset((void *)(v2 + 3760), 0, 1200);
    v3 = 0;
    v4 = (_WORD *)(v2 + 1062);
    do
    {
      *((_BYTE *)v4 - 4) = -1;
      *((_BYTE *)v4 - 3) = 0;
      *v4 = 0;
      *(_BYTE *)(v2 + 3458 + v3++) = 0;
      v4 += 4;
    }
    while ( v3 != 300 );
    memset((void *)(v2 + 4960), 255, 0x100u);
    dword_60C7B3F8 = v2;
  }
  return v2;
}
