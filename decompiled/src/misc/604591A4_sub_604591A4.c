/* sub_604591A4
 * address: 0x604591A4   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604591A4(int a1)
{
  int v2; // r4

  v2 = dword_60C9CFB8;
  if ( !dword_60C9CFB8 )
  {
    v2 = operator_new_8DE2C8(0x58u, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60BFB1E4;
    dword_60C9CFB4 = v2;
    FIELD_U32(v2, 16) = 0;
    FIELD_U8(v2, 20) = 0;
    FIELD_U32(v2, 76) = 0;
    FIELD_U8(v2, 84) = 1;
    FIELD_U8(v2, 85) = 0;
    FIELD_U32(v2, 24) = 1;
    FIELD_U8(v2, 81) = 0;
    FIELD_U32(v2, 28) = 30;
    FIELD_U32(v2, 32) = 30;
    FIELD_U32(v2, 36) = 420;
    FIELD_U8(v2, 82) = 0;
    FIELD_U8(v2, 83) = 0;
    FIELD_U8(v2, 80) = 0;
    memset((void *)(v2 + 40), 0, 36);
    dword_60C9CFB8 = v2;
  }
  return v2;
}
