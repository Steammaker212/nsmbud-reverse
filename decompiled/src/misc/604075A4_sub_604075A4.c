/* sub_604075A4
 * address: 0x604075A4   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604075A4(int a1)
{
  int v1; // r1
  int v2; // r2
  int result; // r0
  int v4; // r1

  v1 = 0;
  FIELD_U8(a1, 580) = 0;
  FIELD_U32(a1, 560) = 0;
  FIELD_U32(a1, 556) = 0;
  FIELD_U32(a1, 552) = 0;
  FIELD_U32(a1, 548) = 0;
  FIELD_U32(a1, 572) = 4;
  FIELD_U32(a1, 576) = 7;
  FIELD_U8(a1, 616) = 0;
  FIELD_U32(a1, 596) = 0;
  FIELD_U32(a1, 592) = 0;
  FIELD_U32(a1, 588) = 0;
  FIELD_U32(a1, 584) = 0;
  FIELD_U32(a1, 608) = 4;
  FIELD_U32(a1, 612) = 7;
  FIELD_U8(a1, 652) = 0;
  FIELD_U32(a1, 632) = 0;
  FIELD_U32(a1, 628) = 0;
  FIELD_U32(a1, 624) = 0;
  FIELD_U32(a1, 620) = 0;
  FIELD_U32(a1, 644) = 4;
  FIELD_U32(a1, 648) = 7;
  FIELD_U8(a1, 688) = 0;
  FIELD_U32(a1, 668) = 0;
  FIELD_U32(a1, 664) = 0;
  FIELD_U32(a1, 660) = 0;
  FIELD_U32(a1, 656) = 0;
  FIELD_U32(a1, 680) = 4;
  FIELD_U32(a1, 684) = 7;
  v2 = dword_60C99DD4 + 272;
  if ( !dword_60C99DD4 )
    v2 = dword_60C99DEC + 16;
  if ( FIELD_U8(v2, 20) )
  {
    FIELD_U32(a1, 576) = FIELD_U32(v2, 32);
    v1 = 1;
    FIELD_U8(a1, 580) = 1;
    FIELD_U32(a1, 572) = FIELD_U32(v2, 36);
    FIELD_U8(a1, 568) = 0;
  }
  if ( FIELD_U8(v2, 92) )
  {
    ++v1;
    FIELD_U32(a1, 612) = FIELD_U32(v2, 104);
    FIELD_U8(a1, 616) = 1;
    FIELD_U32(a1, 608) = FIELD_U32(v2, 108);
    FIELD_U8(a1, 604) = 0;
  }
  if ( FIELD_U8(v2, 164) )
  {
    ++v1;
    FIELD_U32(a1, 648) = FIELD_U32(v2, 176);
    FIELD_U8(a1, 652) = 1;
    FIELD_U32(a1, 644) = FIELD_U32(v2, 180);
    FIELD_U8(a1, 640) = 0;
  }
  if ( FIELD_U8(v2, 236) )
  {
    ++v1;
    FIELD_U32(a1, 684) = FIELD_U32(v2, 248);
    FIELD_U8(a1, 688) = 1;
    FIELD_U32(a1, 680) = FIELD_U32(v2, 252);
    FIELD_U8(a1, 676) = 0;
  }
  FIELD_U32(a1, 692) = v1;
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
