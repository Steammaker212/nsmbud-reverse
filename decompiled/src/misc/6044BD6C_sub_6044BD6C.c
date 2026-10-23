/* sub_6044BD6C
 * address: 0x6044BD6C   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044BD6C(int a1, int a2, int a3, int a4)
{
  int v7; // r1
  int v8; // r2
  unsigned int v9; // r3
  _DWORD *v10; // r6
  _DWORD *v11; // r6
  _DWORD *v12; // r6
  __int16 v15; // [sp+10h] [bp-80h] BYREF
  char v16; // [sp+12h] [bp-7Eh]
  int v17; // [sp+14h] [bp-7Ch]
  char v18; // [sp+38h] [bp-58h]
  char v19; // [sp+3Ah] [bp-56h]
  char v20; // [sp+3Ch] [bp-54h]
  char v21; // [sp+3Dh] [bp-53h]
  __int16 v22; // [sp+68h] [bp-28h]

  FIELD_U32(a1, 56) = a2;
  sub_60450CBC(dword_60C9CEF0, 7, 7, 7, 1, 2, 1);
  sub_60450C78(dword_60C9CEF0, a3, a4, 1);
  (**(void (__fastcall ***)(int, int))a1)(a1, 150);
  FIELD_U32(a1, 184) = operator_new_8DE09C(0x258u);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  FIELD_U32(a1, 52) = 150;
  do
  {
    v10 = *(_DWORD **)(a1 + 72);
    if ( FIELD_U32(a1, 68) > v9 )
      v10 = (_DWORD *)((char *)v10 + v7);
    v7 += 12;
    *v10 = 0;
    v10[1] = 0;
    v10[2] = 0;
    v11 = *(_DWORD **)(a1 + 104);
    if ( FIELD_U32(a1, 100) > v9 )
      v11 = (_DWORD *)((char *)v11 + v8);
    *v11 = 0;
    *(_DWORD *)(FIELD_U32(a1, 184) + v8) = 0;
    v12 = *(_DWORD **)(a1 + 120);
    if ( FIELD_U32(a1, 116) > v9++ )
      v12 = (_DWORD *)((char *)v12 + v8);
    v8 += 4;
    *v12 = 0;
  }
  while ( v9 != 150 );
  sub_6090B350(&v15);
  v16 = 1;
  v17 |= 1u;
  v20 = 1;
  v21 = 1;
  v18 = 5;
  v19 = 6;
  v15 = 1;
  v22 = 260;
  sub_60450C98(dword_60C9CEF0, &v15, 1);
  return 1;
}
