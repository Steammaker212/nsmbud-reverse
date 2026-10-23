/* sub_60677174
 * address: 0x60677174   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60677174(_BYTE *a1)
{
  int result; // r0
  __int64 v3; // r0
  int v4; // r2
  __int64 v5; // r0
  int v6; // r2
  bool v7; // zf
  _BYTE *v8; // r0

  result = (unsigned __int8)a1[6130];
  if ( result == 2 )
  {
    v5 = sub_6072A6DC(EventMgr__instance, (unsigned __int8)a1[539], (unsigned __int8)a1[540]);
    v6 = EventMgr__instance;
    v7 = (FIELD_U64(EventMgr__instance, 16) & v5) == 0;
    v8 = a1 + 6104;
    if ( v7 )
    {
      *v8 = 0;
      result = 255;
    }
    else
    {
      *v8 = 1;
      result = FIELD_U8(v6, 2328);
    }
    goto LABEL_8;
  }
  if ( result == 1 )
  {
    v3 = sub_6072A6DC(EventMgr__instance, (unsigned __int8)a1[539], (unsigned __int8)a1[540]);
    v4 = EventMgr__instance;
    result = FIELD_U32(EventMgr__instance, 16) & v3
           | ((FIELD_U64(EventMgr__instance, 16) & (unsigned __int64)v3) >> 32);
    if ( result )
    {
      a1[6104] = 1;
      result = FIELD_U8(v4, 2328);
LABEL_8:
      a1[84] = result;
    }
  }
  return result;
}
