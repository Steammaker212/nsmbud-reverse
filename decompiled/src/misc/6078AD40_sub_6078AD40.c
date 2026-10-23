/* sub_6078AD40
 * address: 0x6078AD40   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078AD40(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int result; // r0
  _BYTE *v6; // r1
  int v7; // r5
  int v8; // r0
  int v9; // r5
  int v10; // r0
  int v11; // r5
  int v12; // r0
  int v13; // r4
  int v14; // r0

  sub_608175CC(dword_60CC6B68);
  v2 = a1[8];
  if ( v2 )
  {
    if ( !FIELD_U8(v2, 13060) )
    {
      if ( FIELD_U32(v2, 13056) )
      {
        FIELD_U8(v2, 13060) = 1;
        v7 = a1[8];
        if ( v7 )
        {
          v8 = sub_607C7184(a1[8]);
          if ( !v8 )
            v8 = v7;
          sub_6076EAB8(v8);
          sub_604005D0(AreaRumbleMgr_instance, 0, 3, 3, 18, 0);
        }
      }
    }
  }
  v3 = a1[9];
  if ( v3 )
  {
    if ( !FIELD_U8(v3, 13060) )
    {
      if ( FIELD_U32(v3, 13056) )
      {
        FIELD_U8(v3, 13060) = 1;
        v9 = a1[9];
        if ( v9 )
        {
          v10 = sub_607C7184(a1[9]);
          if ( !v10 )
            v10 = v9;
          sub_6076EAB8(v10);
          sub_604005D0(AreaRumbleMgr_instance, 1, 3, 3, 18, 0);
        }
      }
    }
  }
  v4 = a1[10];
  if ( v4 )
  {
    if ( !FIELD_U8(v4, 13060) )
    {
      if ( FIELD_U32(v4, 13056) )
      {
        FIELD_U8(v4, 13060) = 1;
        v11 = a1[10];
        if ( v11 )
        {
          v12 = sub_607C7184(a1[10]);
          if ( !v12 )
            v12 = v11;
          sub_6076EAB8(v12);
          sub_604005D0(AreaRumbleMgr_instance, 2, 3, 3, 18, 0);
        }
      }
    }
  }
  result = a1[11];
  if ( result )
  {
    v6 = (_BYTE *)(result + 13060);
    if ( !FIELD_U8(result, 13060) )
    {
      result = FIELD_U32(result, 13056);
      if ( result )
      {
        result = 1;
        *v6 = 1;
        v13 = a1[11];
        if ( v13 )
        {
          v14 = sub_607C7184(v13);
          if ( !v14 )
            v14 = v13;
          sub_6076EAB8(v14);
          return sub_604005D0(AreaRumbleMgr_instance, 3, 3, 3, 18, 0);
        }
      }
    }
  }
  return result;
}
