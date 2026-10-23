/* sub_604D17A0
 * address: 0x604D17A0   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D17A0(int a1)
{
  int result; // r0
  int v3; // r4
  int v4; // r5
  _DWORD *v5; // r7
  int v6; // r6
  int v7; // r9
  int v8; // r4
  _DWORD *v9; // r5
  int *v10; // r6
  int v11; // r0
  int v12; // r9
  int v13; // r4
  _DWORD *v14; // r5
  int *v15; // r6
  int v16; // r0
  int v17; // r9
  int v18; // r4
  _DWORD *v19; // r5
  int *v20; // r6
  int v21; // r0

  result = FIELD_U8(a1, 20240);
  if ( result )
  {
    StateMgr__execute((StateMgr *)(a1 + 24));
    sub_6050229C(a1 + 3800);
    sub_60473B58((_DWORD *)(a1 + 40), 0xEu, 0);
    v3 = 10;
    v4 = a1 + 93148;
    v5 = (_DWORD *)(a1 + 141864);
    v6 = a1 + 89268;
    do
    {
      if ( FIELD_U8(v6, 24) )
      {
        if ( *v5 )
        {
          StateMgr__execute((StateMgr *)v6);
          sub_6050229C(v4);
        }
        sub_60473B58((_DWORD *)(v6 + 40), 0xEu, 0);
      }
      v4 += 52644;
      v5 += 13161;
      v6 += 52644;
      --v3;
    }
    while ( v3 );
    if ( FIELD_U8(a1, 21904) )
    {
      StateMgr__execute((StateMgr *)(a1 + 21888));
      sub_6050229C(a1 + 25508);
      sub_6050A8A4(a1 + 28016);
      sub_60473B58((_DWORD *)(a1 + 21908), 0xEu, 0);
    }
    if ( FIELD_U8(a1, 35268) )
    {
      StateMgr__execute((StateMgr *)(a1 + 35252));
      sub_6050229C(a1 + 38924);
      sub_6050A8A4(a1 + 48512);
      sub_60473B58((_DWORD *)(a1 + 35276), 0xEu, 0);
    }
    sub_605454B8(a1 + 55740);
    v7 = FIELD_U32(a1, 20076);
    if ( v7 )
    {
      v8 = 0;
      v9 = (_DWORD *)(a1 + 20068);
      v10 = (int *)(a1 + 20072);
      do
      {
        v11 = *v10;
        if ( v8 + *v10 >= *v9 )
          v11 -= *v9;
        sub_6050D014(*(_DWORD *)(FIELD_U32(a1, 20064) + 4 * (v8 + v11)));
        ++v8;
      }
      while ( v7 != v8 );
    }
    v12 = FIELD_U32(a1, 20132);
    if ( v12 )
    {
      v13 = 0;
      v14 = (_DWORD *)(a1 + 20124);
      v15 = (int *)(a1 + 20128);
      do
      {
        v16 = *v15;
        if ( v13 + *v15 >= *v14 )
          v16 -= *v14;
        sub_60507028(*(_DWORD *)(FIELD_U32(a1, 20120) + 4 * (v13 + v16)));
        ++v13;
      }
      while ( v12 != v13 );
    }
    result = 20160;
    v17 = FIELD_U32(a1, 20160);
    if ( v17 )
    {
      v18 = 0;
      v19 = (_DWORD *)(a1 + 20152);
      v20 = (int *)(a1 + 20156);
      do
      {
        v21 = *v20;
        if ( v18 + *v20 >= *v19 )
          v21 -= *v19;
        result = sub_60507028(*(_DWORD *)(FIELD_U32(a1, 20148) + 4 * (v18 + v21)));
        ++v18;
      }
      while ( v17 != v18 );
    }
  }
  return result;
}
