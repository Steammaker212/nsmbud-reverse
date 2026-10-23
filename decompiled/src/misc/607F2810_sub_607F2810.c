/* sub_607F2810
 * address: 0x607F2810   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F2810(int a1)
{
  int result; // r0
  int v3; // r5
  _BYTE *v4; // r5
  int v5; // t1
  int v6; // r3
  int v7; // r0
  int v8; // r2
  int v9; // r1
  bool v10; // zf

  result = sub_608194EC((_BYTE *)dword_60CC6BE4, a1);
  if ( !result )
  {
    v3 = dword_60C99E2C;
    sub_603FF334(dword_60C99E2C);
    v5 = FIELD_U8(v3, 820548);
    v4 = (_BYTE *)(v3 + 820548);
    if ( v5 )
    {
      v6 = -1014693888;
      v7 = FIELD_U8(dword_60C99DEC, 522);
      FIELD_U32(a1, 552) = 0;
      v8 = v7;
      if ( v7 )
        v8 = 1145896960;
      v9 = 1158578176;
      FIELD_U32(a1, 556) = v8;
      if ( v7 )
        v9 = 1160380416;
      v10 = v7 == 0;
      if ( v7 )
      {
        v7 = 0;
        v6 = 0;
      }
      FIELD_U32(a1, 560) = v9;
      FIELD_U32(a1, 564) = 0;
      if ( !v10 )
      {
        HIWORD(v7) = 16800;
        HIWORD(v6) = 17302;
      }
      FIELD_U32(a1, 568) = v7;
      FIELD_U32(a1, 572) = v6;
      (*(void (__fastcall **)(int, int))(FIELD_U32(a1, 500) + 16))(a1 + 500, a1 + 504);
      *v4 = 0;
    }
    StateMgr__execute((StateMgr *)(a1 + 212));
    sub_60499498(dword_60CA059C);
    sub_603F8084(dword_60C99DD0);
    sub_60401F34(dword_60C99E68);
    sub_6081F2E0(dword_60CC6D78);
    return sub_60238B84(dword_60C8D9DC, 0);
  }
  return result;
}
