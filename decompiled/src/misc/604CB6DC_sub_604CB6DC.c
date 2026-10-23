/* sub_604CB6DC
 * address: 0x604CB6DC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604CB6DC(_DWORD *a1)
{
  int v1; // r3
  int v2; // r2
  int v3; // r1
  _DWORD *v4; // r12
  int v5; // r2
  int v6; // r3
  bool v7; // nf
  int v8; // r3
  int v9; // r2
  int v10; // r2

  v1 = 99;
  v2 = a1[153934];
  v3 = 99;
  if ( v2 < 99 )
    v1 = a1[153934];
  if ( v2 < 0 )
    v1 = 0;
  v4 = (_DWORD *)dword_60C99DEC;
  v5 = 99;
  FIELD_U32(dword_60C99DEC, 76) = v1;
  v6 = a1[153935];
  if ( v6 < 99 )
    v5 = a1[153935];
  v7 = v6 < 0;
  v8 = 99;
  if ( v7 )
    v5 = 0;
  v4[37] = v5;
  v9 = a1[153936];
  if ( v9 < 99 )
    v8 = a1[153936];
  v7 = v9 < 0;
  LOWORD(v9) = 25924;
  if ( v7 )
    v8 = 0;
  HIWORD(v9) = 9;
  v4[55] = v8;
  v10 = *(_DWORD *)((char *)a1 + v9);
  if ( v10 < 99 )
    v3 = v10;
  if ( v10 < 0 )
    v3 = 0;
  v4[73] = v3;
  if ( a1[5465] == -1 )
    return G_PlayerNum_00_ref_4D1C04(a1);
  else
    return CourseSelectVS_Score_00_ref(a1);
}
