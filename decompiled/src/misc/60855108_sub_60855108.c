/* sub_60855108
 * address: 0x60855108   size: 804   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60855108(int a1, int a2)
{
  int result; // r0
  int v5; // r0
  bool v6; // zf
  void (__fastcall ***v7)(_DWORD); // r6
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int i; // r6
  int v12; // r0
  int v13; // r7
  int v14; // r7
  int v15; // r7
  int v16; // r7
  int v17; // r7
  int v18; // r5
  int v19; // r6

  result = FIELD_U8(a1, 784);
  if ( result )
  {
    FIELD_U8(a1, 784) = 0;
    sub_60835494(a1 + 448);
    sub_60835494(a1 + 360);
    if ( FIELD_U8(a1, 344) )
      sub_60836614(a1 + 72);
    sub_6085C0E0(a1, a2, 0);
    if ( FIELD_U32(a1, 44) )
      ((void (*)(void))sub_60855BF0)();
    FIELD_U32(a1, 44) = 0;
    FIELD_U32(a1, 48) = 0;
    v5 = FIELD_U8(a1, 785);
    v6 = v5 == 0;
    if ( FIELD_U8(a1, 785) )
    {
      v5 = FIELD_U32(a1, 64);
      v6 = v5 == 0;
    }
    if ( !v6 )
    {
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v5 + 12))(v5, a2);
      sub_60855BF0(*(_DWORD *)(FIELD_U32(a1, 64) + 1032));
      v7 = *(void (__fastcall ****)(_DWORD))(a1 + 64);
      if ( v7 )
      {
        (**v7)(FIELD_U32(a1, 64));
        sub_60855BF0(v7);
      }
      FIELD_U32(a1, 64) = 0;
    }
    v8 = FIELD_U32(a1, 40);
    if ( v8 )
    {
      sub_60855BF0(v8);
      FIELD_U32(a1, 40) = 0;
    }
    v9 = FIELD_U32(a1, 32);
    if ( v9 )
    {
      sub_60855BF0(v9);
      FIELD_U32(a1, 32) = 0;
    }
    v10 = FIELD_U32(a1, 536);
    if ( v10 )
    {
      for ( i = 0; ; i += 1440 )
      {
        sub_6083B4C8(v10 + i);
        sub_6083B4C8(FIELD_U32(a1, 536) + i + 120);
        sub_6083B4C8(FIELD_U32(a1, 536) + i + 240);
        sub_6083B4C8(FIELD_U32(a1, 536) + i + 360);
        sub_6083B4C8(FIELD_U32(a1, 536) + i + 480);
        sub_6083B4C8(FIELD_U32(a1, 536) + i + 600);
        sub_6083B4C8(FIELD_U32(a1, 536) + i + 720);
        sub_6083B4C8(FIELD_U32(a1, 536) + i + 840);
        sub_6083B4C8(FIELD_U32(a1, 536) + i + 960);
        sub_6083B4C8(FIELD_U32(a1, 536) + i + 1080);
        sub_6083B4C8(FIELD_U32(a1, 536) + i + 1200);
        sub_6083B4C8(FIELD_U32(a1, 536) + i + 1320);
        if ( i == 2880 )
          break;
        v10 = FIELD_U32(a1, 536);
      }
      sub_60855BF0(FIELD_U32(a1, 536));
      FIELD_U32(a1, 536) = 0;
    }
    v12 = FIELD_U32(a1, 540);
    if ( v12 )
    {
      sub_60855BF0(v12);
      FIELD_U32(a1, 540) = 0;
    }
    v13 = sub_6083C538(a1 + 544);
    sub_6083C790(a1 + 544);
    sub_60855BF0(v13);
    v14 = sub_6083C538(a1 + 584);
    sub_6083C790(a1 + 584);
    sub_60855BF0(v14);
    v15 = sub_6083C538(a1 + 624);
    sub_6083C790(a1 + 624);
    sub_60855BF0(v15);
    v16 = sub_6083C538(a1 + 664);
    sub_6083C790(a1 + 664);
    sub_60855BF0(v16);
    v17 = sub_6083C538(a1 + 704);
    sub_6083C790(a1 + 704);
    sub_60855BF0(v17);
    v18 = a1 + 744;
    v19 = sub_6083C538(v18);
    sub_6083C790(v18);
    return sub_60855BF0(v19);
  }
  return result;
}
