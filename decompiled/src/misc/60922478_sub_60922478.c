/* sub_60922478
 * address: 0x60922478   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60922478(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = &off_60C5D71C;
  v2 = (_DWORD *)(a1 + 248);
  if ( FIELD_U32(a1, 248) )
  {
    dword_60CC7464(a1 + 8);
    FIELD_U8(a1, 64) = 0;
    FIELD_U8(a1, 76) = 0;
    FIELD_U8(a1, 88) = 0;
    FIELD_U8(a1, 100) = 0;
    FIELD_U8(a1, 112) = 0;
    FIELD_U8(a1, 124) = 0;
    FIELD_U8(a1, 136) = 0;
    FIELD_U8(a1, 148) = 0;
    FIELD_U8(a1, 160) = 0;
    FIELD_U8(a1, 172) = 0;
    FIELD_U8(a1, 184) = 0;
    FIELD_U8(a1, 196) = 0;
    FIELD_U8(a1, 208) = 0;
    FIELD_U8(a1, 220) = 0;
    FIELD_U8(a1, 232) = 0;
    FIELD_U8(a1, 244) = 0;
    sub_60913AD4(v2);
    FIELD_U32(a1, 260) = 0;
    FIELD_U32(a1, 264) = 0;
    FIELD_U32(a1, 268) = 0;
  }
  return a1;
}
