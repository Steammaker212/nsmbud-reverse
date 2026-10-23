/* sub_60556C3C
 * address: 0x60556C3C   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60556C3C(_DWORD *a1)
{
  _DWORD *v2; // r5
  char v3; // r12
  int v4; // r6
  _DWORD *v5; // r7
  int v6; // r0
  _DWORD *v7; // r4
  int v8; // t1
  _DWORD v10[2]; // [sp+8h] [bp-28h] BYREF
  int v11; // [sp+10h] [bp-20h] BYREF
  const char *v12; // [sp+14h] [bp-1Ch]

  v2 = a1 + 11;
  sub_604734E4(a1 + 11, 0);
  sub_60475C8C((int)v2);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = "TeamSelect.bflyt";
  message_ref(v2, &v11, (int)(a1 + 1465), 0, 0);
  v11 = (int)&sead__SafeStringBase__vtable;
  v10[0] = &sead__SafeStringBase__vtable;
  v12 = "Pa_Return_00";
  v10[1] = "Pa_Icon_00";
  sub_6050A704((int)(a1 + 2899), (int)v2, &v11, v10, 1, 0);
  a1[2909] = 2;
  a1[2908] |= 1u;
  if ( ((unsigned int)dword_60CAD610 & ~(1616211236 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CAD610) )
  {
    dword_60CAD648 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD64C = dword_60CAD44C;
    dword_60CAD650 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD654 = dword_60CAD454;
    dword_60CAD658 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD65C = dword_60CAD45C;
    dword_60CAD660 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD664 = dword_60CAD464;
    sub_60000288();
    _cxa_guard_release(dword_60CAD610);
  }
  v11 = 4;
  sub_60476030((int)v2, &dword_60CAD648, &v11);
  v4 = (int)(a1 + 1455);
  sub_60502210((int)(a1 + 1455), &dword_60B040BC, 8);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = "TeamSelect";
  sead__SafeStringBase__operator_assign((int)(a1 + 1708), (int)&v11);
  a1[903] = sub_60473B4C((int)v2);
  sub_60556FD4(a1);
  sub_6050292C((int)(a1 + 1455), 15);
  sub_60502960((int)(a1 + 1455), 15);
  sub_60502994((int)(a1 + 1455), 15);
  sub_605029C8((int)(a1 + 1455), 15);
  sub_605029FC((int)(a1 + 1455), &dword_60B040C0, (int)"SE_SYS_BACK");
  sub_605028F0((int)(a1 + 1455), &dword_60B040C0, 1);
  v5 = a1 + 1468;
  v6 = sub_608DE61C(a1 + 1468, 2);
  v8 = a1[1471];
  v7 = a1 + 1471;
  *(_DWORD *)(v6 - v8 + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(v5, 2) - *v7 + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  sub_605029FC(v4, &dword_60B040B4, (int)"SE_SYS_BACK");
  sub_605029FC(v4, &dword_60B040B8, (int)"SE_SYS_BTN_GAME_START");
  sub_60558180(v7 + 504, 1);
  sub_6045BF58((int)(v7 - 558), 0);
  sub_6045BF58((int)(v7 - 457), 1);
  sub_6045BF58((int)(v7 - 356), 2);
  sub_6045BF58((int)(v7 - 255), 3);
  return sub_6045BF58((int)(v7 - 154), 4);
}
