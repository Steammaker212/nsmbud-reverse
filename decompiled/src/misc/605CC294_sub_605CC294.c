/* sub_605CC294
 * address: 0x605CC294   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CC294(int a1)
{
  signed int v2; // r1
  int v3; // r2
  int result; // r0
  int v5; // r0
  bool v6; // zf
  int v7; // r1
  int v8; // r0
  __int16 v9; // r1
  _WORD *v10; // r4
  int v11; // t1

  v2 = CollisionActor__beforeExecute((StageActor *)a1);
  result = 0;
  if ( v2 == 1 )
  {
    v5 = FIELD_U32(a1, 6124);
    v6 = (v5 & 4) == 0;
    if ( (v5 & 4) != 0 )
    {
      v3 = FIELD_U8(a1, 538);
      v6 = (v3 & 2) == 0;
    }
    if ( !v6 )
    {
      FIELD_U32(a1, 6124) = v5 | (8 * v3) & 0x20 | 0x10;
      v7 = 0;
      if ( (v5 & 4) != 0 )
      {
        v8 = FIELD_S8(a1, 84);
        if ( (unsigned __int8)v8 != 255 )
        {
          if ( (unsigned __int8)v8 >= 4u )
            v8 = 0;
          v7 = *(_DWORD *)(PlayerMgr_instance + 4 * v8 + 48);
        }
      }
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 244))(a1, v7);
    }
    if ( FIELD_U16(a1, 6128) )
      --FIELD_U16(a1, 6128);
    if ( FIELD_U16(a1, 6130) )
      --FIELD_U16(a1, 6130);
    if ( FIELD_U16(a1, 6132) )
      --FIELD_U16(a1, 6132);
    v11 = FIELD_U16(a1, 6134);
    v10 = (_WORD *)(a1 + 6134);
    v9 = v11;
    result = 1;
    if ( v11 )
      *v10 = v9 - 1;
  }
  return result;
}
