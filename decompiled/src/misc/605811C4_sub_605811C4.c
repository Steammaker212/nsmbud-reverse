/* sub_605811C4
 * address: 0x605811C4   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605811C4(int a1)
{
  float v2; // s0
  _BYTE *v3; // r6
  int v4; // r5
  int ProfileId; // r0
  int v6; // r7
  float v7; // s0
  int v8; // r0
  unsigned int v9; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U8(a1, 6059) = FIELD_U32(a1, 2872) & 1;
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  sub_60003840(a1);
  v3 = (_BYTE *)(a1 + 7513);
  if ( FIELD_U8(a1, 7513) && FIELD_F32(a1, 124) < 0.0 )
  {
    FIELD_U8(a1, 6056) = 1;
    *v3 = 0;
  }
  if ( (FIELD_U8(a1, 23) & 1) != 0 && FIELD_F32(a1, 124) <= 0.0 )
  {
    FIELD_U32(a1, 3204) &= ~1u;
    FIELD_U32(a1, 3196) &= ~1u;
    FIELD_U32(a1, 3180) &= ~1u;
    FIELD_U32(a1, 3188) &= ~1u;
  }
  if ( !sub_6057AA48((_DWORD *)a1) )
  {
    v4 = ((int (__fastcall *)(int, int, _DWORD, float))loc_6057AC94)(a1, 1, 0, FIELD_F32(a1, 7484));
    if ( (v4 & 0xC) == 0xC )
      FIELD_F32(a1, 7484) = -FIELD_F32(a1, 7484);
    ProfileId = Actor__getProfileId((Actor *)a1);
    if ( v4 && ProfileId == 403 )
      sub_6057AF58(a1);
    sub_6057A460((StageActor *)a1);
  }
  sub_6057A200(a1);
  if ( (FIELD_U8(a1, 23) & 1) != 0 || !FIELD_U8(a1, 7512) )
    sub_6057A3E4(a1);
  else
    sub_605D01D4(a1);
  if ( Actor__getProfileId((Actor *)a1) != 403 )
  {
    v6 = FIELD_U8(a1, 7404);
    SE_OBJ_CMN_SPLASH_ref_57A6E4(a1);
    if ( v6 && !FIELD_U8(a1, 7404) )
      *v3 = 1;
    v7 = 8.0;
    v8 = FIELD_U32(a1, 5952);
    if ( (unsigned __int16)v8 == 0x10 )
    {
      v9 = BYTE2(v8);
      if ( v9 <= 0x10 && ((1 << v9) & 0x10050) != 0 )
        v7 = 7.0;
    }
    FIELD_F32(a1, 7356) = v7;
  }
  return sub_6057AEC8(a1);
}
