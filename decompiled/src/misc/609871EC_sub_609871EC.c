/* sub_609871EC
 * address: 0x609871EC   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609871EC(_DWORD *a1, int a2, int a3)
{
  _DWORD *v4; // r8
  signed int v5; // r4
  unsigned int v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r6
  int v10; // r0
  unsigned int v11; // r4
  unsigned int v12; // r10
  int v13; // r7
  int v14; // r1
  _DWORD v17[2]; // [sp+8h] [bp-1C0h] BYREF
  _BYTE v18[80]; // [sp+10h] [bp-1B8h] BYREF
  int v19; // [sp+60h] [bp-168h]
  int v20; // [sp+64h] [bp-164h]
  int (**v21)(); // [sp+68h] [bp-160h]
  _BYTE v22[40]; // [sp+6Ch] [bp-15Ch] BYREF
  int (**v23)(); // [sp+94h] [bp-134h] BYREF
  _BYTE *v24; // [sp+98h] [bp-130h]
  int v25; // [sp+9Ch] [bp-12Ch]
  _BYTE v26[296]; // [sp+A0h] [bp-128h] BYREF

  v4 = a1 + 6;
  a1[10] = a3;
  sub_6098DA18(a1 + 6, a2);
  v5 = *(_DWORD *)(a1[6] + 36);
  if ( v5 >= 1 )
  {
    v6 = 12 * v5 + 8;
    if ( v6 < 12 * v5 )
      v6 = -1;
    if ( !is_mul_ok(0xCu, v5) )
      v6 = -1;
    v7 = (_DWORD *)sub_608DE334(v6, a2, 4);
    if ( v7 )
    {
      *v7 = 12;
      v7[1] = v5;
      v8 = v7 + 2;
      v9 = 12 * v5;
      v10 = (int)(v7 + 2);
      do
      {
        v9 -= 12;
        v10 = sub_60987664(v10) + 12;
      }
      while ( v9 );
      a1[7] = v5;
      a1[8] = v8;
    }
  }
  sub_6043C320((int)v18, 0);
  v20 = -1;
  memset(v22, 0, sizeof(v22));
  v21 = &off_60BFAA14;
  v24 = v26;
  v23 = &BufferedSafeStringBase_char_vtable_probably;
  v25 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v23);
  *v24 = 0;
  v23 = &off_60BD94BC;
  v26[256] = 0;
  sub_6098DBCC(v4, v18);
  if ( sub_6098DC7C(v18) == 1 )
  {
    do
    {
      v17[0] = &sead__SafeStringBase__vtable;
      v17[1] = ".msbt";
      if ( sub_6018506C(&v23, v17) >= 0 )
      {
        v11 = v20;
        v12 = a1[7];
        v13 = a1[8];
        v14 = (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v19 + 28))(v19, v20, 0);
        if ( v12 > v11 )
          v13 += 12 * v11;
        sub_609118FC(v13, v14, a2);
      }
    }
    while ( sub_6098DC7C(v18) );
  }
  return sub_6098DC24(v18);
}
