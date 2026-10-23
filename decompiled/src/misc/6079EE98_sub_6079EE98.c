/* sub_6079EE98
 * address: 0x6079EE98   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079EE98(float *a1, float32x2_t a2, double a3)
{
  int *v4; // r5
  int v5; // r0
  int v6; // r0
  int result; // r0
  int v8; // r1
  signed int v9[4]; // [sp+0h] [bp-30h] BYREF
  int v10[8]; // [sp+10h] [bp-20h] BYREF

  v4 = (int *)(a1 + 3041);
  v5 = *((_DWORD *)a1 + 3041) + 1;
  a2.n64_u32[0] = 1.0;
  *v4 = v5;
  *(float *)&a3 = (float)v5 / 30.0;
  *(v4 - 2) = vmin_f32(*(float32x2_t *)&a3, a2).n64_u32[0];
  v10[0] = 0;
  v9[0] = 16384000;
  sub_6083224C(v4 - 16, v10, v9);
  v6 = *(v4 - 16);
  if ( v6 )
    *((_DWORD *)a1 + 40) += v6;
  else
    sub_60773F4C((int)a1);
  sub_6079F31C(a1);
  sub_607712D4((int)a1);
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 1104))(a1);
  if ( *v4 <= 18 )
  {
    a1[23] = 0.0;
    sub_607711C8((int)a1);
    goto LABEL_6;
  }
  ((void (__fastcall *)(float *))loc_60771D8C)(a1);
  sub_607711C8((int)a1);
  if ( sub_607C16A0(a1, 0) == 1 )
  {
    result = sub_607868D4((int)(a1 + 172), v10);
    if ( result == 1 )
    {
      v8 = v10[0];
      a1[20] = *(float *)v10;
      result = sub_60773F3C((int)a1, v8);
      *((_DWORD *)a1 + 40) = result;
    }
  }
  else
  {
    if ( !sub_6075FC38((int)a1) )
    {
LABEL_6:
      result = sub_60793CA8(*((_DWORD *)a1 + 2840));
      if ( result == 1 )
        return Player_changeState((int)a1, (StateBase *)&dword_60CC4BBC, 1);
      return result;
    }
    v10[2] = (int)a1[1724];
    v10[1] = (int)a1[1723];
    v10[0] = (int)a1[1722];
    v9[2] = (signed int)a1[1718];
    v9[1] = (signed int)a1[1717];
    v9[0] = (signed int)a1[1716];
    ((void (__fastcall *)(float *, int *, signed int *, int))loc_6079AE3C)(a1, v10, v9, 1);
    result = sub_6079AFAC(a1, (float *)v10, (int)v9);
    if ( result == 2 )
    {
      result = (_DWORD)a1[3040] & 0xFFFFFFFE;
      if ( result != 2 )
        return sub_6079E724(a1);
    }
    else if ( result == 1 )
    {
      result = *((_DWORD *)a1 + 304) | 0x10000;
      *((_DWORD *)a1 + 304) = result;
    }
  }
  return result;
}
