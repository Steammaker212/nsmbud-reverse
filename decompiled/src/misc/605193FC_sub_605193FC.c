/* sub_605193FC
 * address: 0x605193FC   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605193FC(_DWORD *a1)
{
  _DWORD *v2; // r8
  char v3; // r12
  int v4; // r7
  int v5; // r0
  unsigned int v6; // r1
  int v7; // r0
  int v9[2]; // [sp+4h] [bp-74h] BYREF
  unsigned int v10; // [sp+Ch] [bp-6Ch]
  int (**v11)(); // [sp+10h] [bp-68h] BYREF
  char *v12; // [sp+14h] [bp-64h]
  int (**v13)(); // [sp+18h] [bp-60h]
  char *v14; // [sp+1Ch] [bp-5Ch]
  int (**v15)(); // [sp+20h] [bp-58h]
  char *v16; // [sp+24h] [bp-54h]
  int (**v17)(); // [sp+28h] [bp-50h]
  char *v18; // [sp+2Ch] [bp-4Ch]
  int (**v19)(); // [sp+30h] [bp-48h]
  char *v20; // [sp+34h] [bp-44h]
  int (**v21)(); // [sp+38h] [bp-40h]
  char *v22; // [sp+3Ch] [bp-3Ch]
  int (**v23)(); // [sp+40h] [bp-38h]
  char *v24; // [sp+44h] [bp-34h]
  int (**v25)(); // [sp+48h] [bp-30h]
  char *v26; // [sp+4Ch] [bp-2Ch]
  int (**v27)(); // [sp+50h] [bp-28h]
  char *v28; // [sp+54h] [bp-24h]

  v2 = a1 + 9;
  sub_604734E4(a1 + 9, 0);
  sub_60475C8C((int)v2);
  v11 = &sead__SafeStringBase__vtable;
  v12 = "PreGameFree.bflyt";
  message_ref(v2, &v11, 0, 0, 0);
  sub_605196A8(a1);
  sub_605197DC(a1);
  if ( ((unsigned int)&dword_60CA8BC0 & ~(1615959188 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CA8BC0) )
  {
    dword_60CA8BC4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8BC8 = (int)"Pa_Icon1P_00";
    dword_60CA8BCC = (int)&sead__SafeStringBase__vtable;
    dword_60CA8BD0 = (int)"Pa_Icon2P_00";
    dword_60CA8BD4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8BD8 = (int)"Pa_Icon3P_00";
    dword_60CA8BDC = (int)&sead__SafeStringBase__vtable;
    dword_60CA8BE0 = (int)"Pa_Icon4P_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA8BC0);
  }
  sub_60506F20(a1 + 955, (int)v2, &dword_60CA8BC4);
  sub_60506F20(a1 + 1860, (int)v2, &dword_60CA8BCC);
  sub_60506F20(a1 + 2765, (int)v2, &dword_60CA8BD4);
  sub_60506F20(a1 + 3670, (int)v2, &dword_60CA8BDC);
  v4 = 0;
  v11 = &sead__SafeStringBase__vtable;
  v12 = &byte_60B3BA34;
  v13 = &sead__SafeStringBase__vtable;
  v14 = &byte_60B3BA34;
  v15 = &sead__SafeStringBase__vtable;
  v16 = &byte_60B3BA34;
  v17 = &sead__SafeStringBase__vtable;
  v18 = &byte_60B3BA34;
  v19 = &sead__SafeStringBase__vtable;
  v20 = &byte_60B3BA34;
  v21 = &sead__SafeStringBase__vtable;
  v22 = &byte_60B3BA34;
  v23 = &sead__SafeStringBase__vtable;
  v24 = &byte_60B3BA34;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60B3BA34;
  v27 = &sead__SafeStringBase__vtable;
  v28 = &byte_60B3BA34;
  do
  {
    v10 = v4;
    v5 = sub_6051A8DC(v4);
    v9[0] = (int)&sead__SafeStringBase__vtable;
    v9[1] = v5;
    v6 = v10;
    if ( v10 >= 9 )
      v6 = 0;
    ((void (__fastcall *)(int (***)(), int *))(&v11)[2 * v6][2])(&(&v11)[2 * v6], v9);
    v7 = v4 + 1;
    if ( v4 > 8 )
      v7 = 9;
    v4 = v7;
  }
  while ( v7 != 9 );
  v9[0] = 9;
  sub_60476030((int)v2, &v11, v9);
  return sub_60473B58(v2, 0xEu, 0);
}
