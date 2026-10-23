/* sub_60407488
 * address: 0x60407488   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60407488(int a1)
{
  int v1; // r2
  int v2; // r1
  int result; // r0
  int v4; // r1

  v1 = dword_60C99DD4 + 272;
  if ( !dword_60C99DD4 )
    v1 = dword_60C99DEC + 16;
  if ( FIELD_U8(v1, 20) )
  {
    FIELD_U32(a1, 576) = FIELD_U32(v1, 32);
    v2 = 1;
    FIELD_U8(a1, 580) = 1;
    FIELD_U32(a1, 572) = FIELD_U32(v1, 36);
    FIELD_U8(a1, 568) = 0;
  }
  else
  {
    v2 = 0;
  }
  if ( FIELD_U8(v1, 92) )
  {
    ++v2;
    FIELD_U32(a1, 612) = FIELD_U32(v1, 104);
    FIELD_U8(a1, 616) = 1;
    FIELD_U32(a1, 608) = FIELD_U32(v1, 108);
    FIELD_U8(a1, 604) = 0;
  }
  if ( FIELD_U8(v1, 164) )
  {
    ++v2;
    FIELD_U32(a1, 648) = FIELD_U32(v1, 176);
    FIELD_U8(a1, 652) = 1;
    FIELD_U32(a1, 644) = FIELD_U32(v1, 180);
    FIELD_U8(a1, 640) = 0;
  }
  if ( FIELD_U8(v1, 236) )
  {
    ++v2;
    FIELD_U32(a1, 684) = FIELD_U32(v1, 248);
    FIELD_U8(a1, 688) = 1;
    FIELD_U32(a1, 680) = FIELD_U32(v1, 252);
    FIELD_U8(a1, 676) = 0;
  }
  FIELD_U32(a1, 692) = v2;
  FIELD_U32(a1, 696) = 0;
  result = a1 + 708;
  v4 = dword_60C9A1E0;
  FIELD_U8(dword_60C9A1E0, 544) = 0;
  FIELD_U32(v4, 540) = 0;
  FIELD_U32(result, 24) = 0;
  FIELD_U32(result, 4) = 1065353216;
  FIELD_U32(result, 8) = 1065353216;
  FIELD_U32(result, 12) = 0;
  FIELD_U32(result, 16) = 0;
  FIELD_U8(result, 28) = 0;
  if ( FIELD_S32(result, 20) >= 1 )
  {
    FIELD_U32(result, 20) = 0;
    result = AreaRumbleMgr_instance;
    if ( AreaRumbleMgr_instance )
      FIELD_U32(AreaRumbleMgr_instance, 36) = 0;
  }
  return result;
}
