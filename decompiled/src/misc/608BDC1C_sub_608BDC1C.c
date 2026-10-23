/* sub_608BDC1C
 * address: 0x608BDC1C   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BDC1C(int a1)
{
  int v1; // r6
  int v3; // r1
  _DWORD *v4; // r5
  int v5; // r0
  int result; // r0
  int v7; // r2
  _DWORD *v8; // r5
  int i; // r7
  int v10; // r7
  _DWORD *v11; // r5
  int v12; // r5
  bool v13; // zf
  int v14; // r1
  int v15; // r6
  int v16; // t1
  int v17; // t1
  _DWORD *v18; // r5
  int v19; // t1

  if ( FIELD_U32(a1, 204) )
    sub_608D73E0();
  v3 = FIELD_U32(a1, 996);
  if ( v3 >= 1 )
  {
    v1 = 0;
    v4 = (_DWORD *)(a1 + 1028);
    do
    {
      if ( *v4 )
      {
        sub_608C93B0();
        v3 = FIELD_U32(a1, 996);
      }
      ++v1;
      v4 += 832;
    }
    while ( v1 < v3 );
  }
  if ( FIELD_U8(a1, 185) )
  {
    v5 = sub_608C3C60(FIELD_U8(a1, 185));
    sub_608C411C(v5, a1 + 164);
    FIELD_U8(a1, 185) = 0;
  }
  if ( FIELD_U8(a1, 37) )
    FIELD_U8(a1, 37) = 0;
  result = FIELD_U8(a1, 176);
  if ( FIELD_U8(a1, 176) )
  {
    FIELD_U8(a1, 178) = 1;
    v7 = FIELD_U32(a1, 996);
    if ( v7 >= 1 )
    {
      v8 = (_DWORD *)(a1 + 1024);
      v1 = 0;
      for ( i = 0; i < v7; ++i )
      {
        if ( *v8 )
        {
          sub_608D7020(FIELD_U32(a1, 208));
          *v8 = 0;
          v7 = FIELD_U32(a1, 996);
        }
        v8 += 832;
      }
      if ( v7 >= 1 )
      {
        v1 = 0;
        v10 = 0;
        v11 = (_DWORD *)(a1 + 1028);
        do
        {
          if ( *v11 )
          {
            sub_608C932C();
            *v11 = 0;
            v7 = FIELD_U32(a1, 996);
          }
          ++v10;
          v11 += 832;
        }
        while ( v10 < v7 );
      }
    }
    v12 = FIELD_U32(a1, 204);
    v13 = v12 == 0;
    if ( v12 )
    {
      v1 = FIELD_U32(a1, 200);
      v13 = v1 == 0;
    }
    if ( !v13 )
    {
      if ( sub_608D75B8(FIELD_U32(a1, 204)) == 1 )
      {
        v16 = FIELD_U32(v1, 28);
        v15 = v1 + 28;
        v14 = v16;
      }
      else
      {
        sub_608D73A4(v12);
        v17 = FIELD_U32(v1, 20);
        v15 = v1 + 20;
        v14 = v17;
      }
      v19 = FIELD_U32(v12, 9992);
      v18 = (_DWORD *)(v12 + 9992);
      *v18 = v14;
      FIELD_U32(v19, 4) = v15;
      *(_DWORD *)(*(_DWORD *)v15 + 4) = v18;
      *(_DWORD *)v15 = v19;
      FIELD_U32(a1, 204) = 0;
    }
    FIELD_U32(a1, 208) = 0;
    result = sub_608D3B00(a1);
    FIELD_U8(a1, 36) = 0;
    FIELD_U8(a1, 176) = 0;
  }
  return result;
}
