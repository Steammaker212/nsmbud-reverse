/* sub_600FAE18
 * address: 0x600FAE18   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600FAE18(signed int a1)
{
  _BYTE *v2; // r5
  unsigned int v3; // r0
  int v4; // r0
  unsigned int v5; // r0
  int v6; // r0
  unsigned int v7; // r0
  int v8; // r0

  v2 = (_BYTE *)(a1 + 6168);
  if ( FIELD_U8(a1, 6168) )
  {
    v3 = FIELD_U32(a1, 6156);
    if ( v3 <= 3 )
    {
      v4 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32);
      if ( v4 )
        sub_60768F28(v4, 202, 1);
    }
    *v2 = 0;
    FIELD_U8(a1, 6171) = 1;
    FIELD_U32(a1, 6176) = 0x20000000;
  }
  else
  {
    sub_600FAD44(a1, 0);
  }
  if ( FIELD_U8(a1, 6169) )
  {
    v5 = FIELD_U32(a1, 6160);
    if ( v5 <= 3 )
    {
      v6 = *(_DWORD *)(PlayerMgr_instance + 4 * v5 + 32);
      if ( v6 )
        sub_60768F28(v6, 202, 1);
    }
    FIELD_U8(a1, 6169) = 0;
    FIELD_U8(a1, 6172) = 1;
    FIELD_U32(a1, 6180) = 0x20000000;
  }
  else
  {
    sub_600FAD44(a1, 1u);
  }
  if ( !FIELD_U8(a1, 6170) )
    return sub_600FAD44(a1, 2u);
  v7 = FIELD_U32(a1, 6164);
  if ( v7 <= 3 )
  {
    v8 = *(_DWORD *)(PlayerMgr_instance + 4 * v7 + 32);
    if ( v8 )
      sub_60768F28(v8, 202, 1);
  }
  FIELD_U8(a1, 6170) = 0;
  FIELD_U8(a1, 6173) = 1;
  FIELD_U32(a1, 6184) = 0x20000000;
  return 6184;
}
