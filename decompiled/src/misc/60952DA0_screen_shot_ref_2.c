/* screen_shot_ref_2
 * address: 0x60952DA0   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall screen_shot_ref_2(_DWORD *a1, int a2, unsigned __int16 *a3)
{
  int v6; // r0
  int v7; // r1
  int v8; // r1
  int v9; // r10
  unsigned int v10; // r7
  int v11; // r0
  int v12; // r5
  int v13; // r9
  int v14; // r1
  unsigned __int16 *v15; // r7
  int v16; // r0
  _DWORD v18[267]; // [sp+24h] [bp-42Ch] BYREF

  v6 = a1[420];
  if ( v6 == 2 )
  {
    v7 = a1[425];
    if ( !v7 )
      goto LABEL_7;
    sub_6093EA98(dword_60CD09F8, v7);
    v6 = a1[420];
  }
  if ( v6 == 3 )
  {
    v8 = a1[426];
    if ( v8 )
      sub_6093EA98(dword_60CD09F8, v8);
  }
LABEL_7:
  v9 = a3[30];
  v10 = a3[12];
  v11 = sub_609200A0((int)a3);
  v12 = 0;
  v13 = dword_60CD09F8;
  v14 = a3[13];
  v18[0] = &sead__SafeStringBase__vtable;
  if ( v11 > v14 )
    v14 = v11;
  v18[1] = "screen_shot";
  if ( v10 <= 1 )
    v10 = 1;
  v15 = (unsigned __int16 *)sub_6093E948(dword_60CD09F8, a2, (int)v18, v9, v10, v14, 1, 0, 3, 1, 0);
  if ( v15 )
  {
    screen_shot_ref_2_helper(a3, a2, v15, 0, 0);
    v16 = a1[420];
    if ( v16 == 3 )
    {
      a1[426] = v15;
    }
    else if ( v16 == 2 )
    {
      a1[425] = v15;
    }
    else
    {
      sub_6093EA98(v13, (int)v15);
    }
    return 1;
  }
  else
  {
    sub_604209A4(v18, aError);
  }
  return v12;
}
