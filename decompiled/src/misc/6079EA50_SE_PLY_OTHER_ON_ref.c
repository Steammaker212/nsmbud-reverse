/* SE_PLY_OTHER_ON_ref
 * address: 0x6079EA50   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_OTHER_ON_ref(unsigned int *a1)
{
  int v2; // r5
  unsigned int *v3; // r7
  int (__fastcall ***v4)(_DWORD, int *); // r6
  char v5; // r12
  int v6; // r1
  float v7; // s0
  float v8; // s1
  _BOOL4 v9; // r0
  bool v10; // zf
  int v11; // r0
  int v12; // r0
  int v13; // r6
  int v14; // r9
  int (__fastcall ***v15)(_DWORD, int *); // r7
  char v16; // r12
  int v17; // r0

  v2 = 0;
  a1[305] &= 0xFF3FFFFF;
  a1[307] |= 0x400u;
  a1[304] |= 0x2000u;
  a1[3039] = 0;
  v3 = a1 + 2852;
  v4 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[2852]);
  if ( ((unsigned int)&dword_60C7B374 & ~(1618602692 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( v4 )
  {
    v2 = (**v4)(v4, &dword_60C7B370);
    if ( v2 )
      v2 = (int)v4;
  }
  (*(void (__fastcall **)(unsigned int *, int))(*a1 + 1212))(a1, v2);
  if ( v2 )
    v6 = 20;
  else
    v6 = 18;
  sub_60773630((int)a1, v6, 0);
  sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_OTHER_ON", 0, 0);
  sub_607946B0(a1[2840]);
  if ( v2 )
    *(_DWORD *)(a1[2840] + 40) = *(_DWORD *)(FIELD_U32(v2, 648) + 4);
  if ( sub_6075EDF8((int)a1) )
  {
    v7 = 0.0;
    v8 = 49.0;
  }
  else
  {
    v9 = sub_6075EE0C((int)a1);
    v10 = v9;
    if ( v9 )
      v10 = a1[330] == 9;
    if ( !v10 )
    {
      v7 = 0.0;
      v11 = (int)(a1 + 2839);
      v8 = 0.0;
      goto LABEL_20;
    }
    v8 = 0.0;
    v7 = 10.0;
  }
  v11 = (int)(a1 + 2839);
LABEL_20:
  sub_60794954(v11, 114, v7, v8);
  AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, *((char *)a1 + 84), 8, 0, 0);
  v12 = sub_6014B69C((int)(a1 + 332));
  v13 = v12;
  if ( v12 )
  {
    v14 = FIELD_U32(v12, 144);
    v15 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, *v3);
    if ( ((unsigned int)&dword_60C8F394 & ~(1618603120 << v16) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F394) )
    {
      dword_60C8F390 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C8F394);
    }
    if ( v15 )
    {
      v17 = (**v15)(v15, &dword_60C8F390);
      if ( v17 )
        v17 = (int)v15;
      if ( v14 == v17 )
        goto LABEL_30;
    }
    else if ( !v14 )
    {
LABEL_30:
      sub_6016024C(v13, (int)(a1 + 332));
    }
  }
  a1[22] = 0;
  a1[31] = 1050253722;
  a1[3025] = 655360000;
  a1[3041] = 0;
  return 12164;
}
