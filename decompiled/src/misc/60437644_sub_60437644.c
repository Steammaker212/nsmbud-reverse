/* sub_60437644
 * address: 0x60437644   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60437644(_DWORD *a1, int a2)
{
  int result; // r0
  int v5; // r6
  int v6; // r7
  _DWORD *v7; // r0
  int *v8; // r2
  int v9; // r1
  void (*v10)(void); // r2
  bool v11; // zf
  int v12; // [sp+0h] [bp-28h] BYREF
  __int64 v13; // [sp+8h] [bp-20h]

  result = sub_6041B800(a1[288], a2);
  if ( result == 1 )
  {
    a1[255] = a2;
    v5 = a1[19];
    v6 = a1[279];
    sub_6041B818((int)&v12, a1[288], a2);
    v7 = (_DWORD *)(v5 + 72 * v6);
    v8 = (int *)v7[12];
    v9 = *v8;
    *v8 = v12;
    *(_QWORD *)v7[13] = v13;
    v10 = (void (*)(void))v7[17];
    v11 = v10 == 0;
    if ( v10 )
      v11 = v9 == v12;
    if ( !v11 )
      v10();
    result = sub_608FBBD0(a1[254], a2) - 1;
    a1[280] = result;
  }
  return result;
}
