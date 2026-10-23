/* sub_603A6004
 * address: 0x603A6004   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A6004(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r0
  int v5; // r1
  int v6; // r3
  int v7; // r2
  int v8; // r3
  int v9; // r2
  int v10; // r2
  int v11; // r2
  _BYTE *v13; // r4

  v2 = FIELD_U32(a1, 23608);
  if ( v2 == 2 )
  {
    v3 = FIELD_U32(PlayerMgr_instance, 32);
    if ( v3 )
    {
      v4 = FIELD_U8(a1, 23620);
      v5 = ((FIELD_U32(v3, 1216) >> 27) & 1) == 0;
      if ( FIELD_U8(a1, 23620) )
        v4 = v5;
    }
    else
    {
      v5 = 0;
      v4 = 0;
    }
    v6 = FIELD_U32(PlayerMgr_instance, 36);
    if ( v6 )
    {
      v7 = ((FIELD_U32(v6, 1216) >> 27) & 1) == 0;
      if ( FIELD_U8(a1, 23621) )
        v4 += v7;
      v5 += v7;
    }
    v8 = FIELD_U32(PlayerMgr_instance, 40);
    if ( v8 )
    {
      v9 = ((FIELD_U32(v8, 1216) >> 27) & 1) == 0;
      if ( FIELD_U8(a1, 23622) )
        v4 += v9;
      v5 += v9;
    }
    v10 = FIELD_U32(PlayerMgr_instance, 44);
    if ( v10 )
    {
      v11 = ((FIELD_U32(v10, 1216) >> 27) & 1) == 0;
      if ( FIELD_U8(a1, 23623) )
        v4 += v11;
      v5 += v11;
    }
    if ( v5 >= 1 && v4 == v5 )
    {
      if ( FIELD_U8(dword_60CC6D8C, 17) && Actor__getProfileId((Actor *)a1) == 195 && FIELD_U8(a1, 540) )
        EventMgr_set(EventMgr__instance, (unsigned __int8)(FIELD_U8(a1, 540) - 1), 0, 1, 0, 0, 0, 0);
      goto LABEL_31;
    }
  }
  else if ( !v2
         && (FIELD_U8(a1, 23620) || FIELD_U8(a1, 23621) || FIELD_U8(a1, 23622) || FIELD_U8(a1, 23623)) )
  {
LABEL_31:
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C97878);
  }
  FIELD_U8(a1, 23620) = 0;
  v13 = (_BYTE *)(a1 + 23620);
  v13[3] = 0;
  v13[2] = 0;
  v13[1] = 0;
  return 23620;
}
