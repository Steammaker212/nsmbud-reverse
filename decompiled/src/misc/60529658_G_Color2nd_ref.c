/* G_Color2nd_ref
 * address: 0x60529658   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall G_Color2nd_ref(int a1, unsigned int a2, int a3)
{
  char v3; // r12
  int v7; // r1
  int v8; // r0
  int v9; // r9
  int v10; // r2
  int v11; // r1
  unsigned int v12; // r2
  int *v13; // r6
  int v14; // t1
  int v15; // r0
  _DWORD *v16; // r5
  unsigned int v17; // r0
  unsigned int v18; // r7
  unsigned int v19; // r1
  _DWORD v21[10]; // [sp+8h] [bp-28h] BYREF

  if ( ((unsigned int)&dword_60CAA2F4[4] & ~(1616025216 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA2F4[4]) )
  {
    dword_60CAA388 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA38C = (int)"G_Color2nd_00";
    dword_60CAA390 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA394 = (int)"G_Color2nd_01";
    dword_60CAA398 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA39C = (int)"G_Color2nd_02";
    sub_60000288();
    _cxa_guard_release(&dword_60CAA2F4[4]);
  }
  v7 = a3 + 62;
  v8 = a1 + 3772;
  if ( (unsigned int)(a3 + 62) >= 0x43 )
    v7 = 0;
  v9 = dword_60C99DEC;
  *(_BYTE *)(*(_DWORD *)(v8 + 4 * v7) + 64) |= 1u;
  v10 = a3 + 13;
  if ( (unsigned int)(a3 + 13) >= 0x13 )
    v10 = 0;
  *(_BYTE *)(*(_DWORD *)(a1 + 4 * v10 + 4040) + 64) |= 1u;
  v11 = *(_DWORD *)(v8 + 4 * v7);
  v12 = dword_60B03878[4 * FIELD_U32(a1, 4620) - 4 + a2];
  if ( v12 >= 0x43 )
    v12 = 0;
  FIELD_U32(v11, 24) = *(_DWORD *)(*(_DWORD *)(v8 + 4 * v12) + 24);
  FIELD_U8(v11, 64) |= 0x10u;
  v13 = &dword_60CAA370[2 * a3];
  v14 = v13[6];
  v13 += 6;
  (*(void (__fastcall **)(int *))(v14 + 12))(v13);
  v15 = v13[1];
  v16 = (_DWORD *)(a1 + 44);
  v21[0] = &sead__SafeStringBase__vtable;
  v21[1] = v15;
  v17 = sub_604746E4((int)v16, &dword_60CA9984, v21);
  v18 = a2 + 4;
  sub_604742D0(v16, a2 + 4, &dword_60CA9984, v17, 1.0, 0);
  v19 = a2 + 4;
  if ( a2 >= 6 )
    a2 = 0;
  sub_6047455C((int)v16, v19, (float)*(unsigned int *)(v9 + 72 * a2 + 52));
  sub_6047459C((int)v16, v18);
  return sub_60473B58(v16, 5u, 0);
}
