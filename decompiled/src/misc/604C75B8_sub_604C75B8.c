/* sub_604C75B8
 * address: 0x604C75B8   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C75B8(int a1)
{
  _DWORD *v2; // r4
  int v3; // r5
  int v5; // r10
  int v6; // r7
  int v7; // r8
  unsigned int v8; // r9
  _BYTE *v9; // r4

  *(_BYTE *)(FIELD_U32(a1, 13796) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 13800) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 13804) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 13808) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 13812) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 13816) + 64) &= ~1u;
  v2 = (_DWORD *)(a1 + 14144);
  v3 = FIELD_U32(a1, 14144);
  if ( v3 < 0 || (unsigned int)(v3 - 24) <= 0xD && ((1 << (v3 - 24)) & 0x207F) != 0 )
  {
    FIELD_U8(a1, 14017) = 0;
    return 14017;
  }
  v5 = dword_60C99DEC;
  v6 = FIELD_U32(dword_60CC6D78, 412);
  v7 = sub_60408230(dword_60CC6D78 + 52, v6, FIELD_U32(a1, 14144));
  v8 = 0;
  if ( FIELD_U32(v5, 16) != -1 && v6 == FIELD_U8(v5, 20) && *v2 == FIELD_U8(v5, 21) )
  {
    v8 = 0;
    if ( FIELD_S8(v5, 32) >= 0 )
      v8 = (v7 & 1) == 0;
    if ( FIELD_S8(v5, 33) >= 0 )
      v8 = (v7 & 2 | v8) ^ 2;
    if ( FIELD_S8(v5, 34) >= 0 )
      v8 |= ~v7 & 4;
  }
  v9 = (_BYTE *)(a1 + 14017);
  if ( !sub_6040E244((unsigned __int8)v3) )
  {
    *v9 = 0;
    return 0;
  }
  *v9 = 1;
  if ( ((v8 | v7) & 1) != 0 )
  {
    sub_604C7288(a1, 0, v8 & 1);
    if ( (((unsigned __int8)v8 | (unsigned __int8)v7) & 2) != 0 )
      goto LABEL_22;
  }
  else
  {
    sub_604C7438(a1, 0);
    if ( (((unsigned __int8)v8 | (unsigned __int8)v7) & 2) != 0 )
    {
LABEL_22:
      sub_604C7288(a1, 1, (v8 >> 1) & 1);
      if ( (((unsigned __int8)v8 | (unsigned __int8)v7) & 4) == 0 )
        return sub_604C7438(a1, 2);
      return sub_604C7288(a1, 2, (v8 >> 2) & 1);
    }
  }
  sub_604C7438(a1, 1);
  if ( (((unsigned __int8)v8 | (unsigned __int8)v7) & 4) == 0 )
    return sub_604C7438(a1, 2);
  return sub_604C7288(a1, 2, (v8 >> 2) & 1);
}
