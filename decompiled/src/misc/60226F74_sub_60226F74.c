/* sub_60226F74
 * address: 0x60226F74   size: 1676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60226F74(_DWORD *a1)
{
  char v1; // r12
  int v3; // r7
  int v4; // r10
  int v5; // r9
  int v6; // r5
  int v7; // r0
  int *v8; // r6
  const char *v9; // r5
  int v10; // r0
  bool v11; // zf
  const char *v12; // r9
  int v13; // r5
  const char *v14; // r5
  int v15; // r5
  _DWORD *v17; // [sp+14h] [bp-74h]
  int (**v18)(); // [sp+18h] [bp-70h] BYREF
  int *v19; // [sp+1Ch] [bp-6Ch]
  int v20; // [sp+20h] [bp-68h]
  int v21; // [sp+24h] [bp-64h] BYREF

  if ( ((unsigned int)&dword_60C8D824 & ~(1612869524 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D824) )
  {
    dword_60C8D5C4[0] = (int)&sead__SafeStringBase__vtable;
    dword_60C8D5C8 = (int)&byte_60ABC94D;
    dword_60C8D5CC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D5D0 = (int)&byte_60ABC94D;
    dword_60C8D5D4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D5D8 = (int)&byte_60ABC94D;
    dword_60C8D5DC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D5E0 = (int)&byte_60ABC94D;
    dword_60C8D5E4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D5E8 = (int)"Quicksand";
    dword_60C8D5EC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D5F0 = (int)"CloudBG";
    dword_60C8D5F4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D5F8 = (int)&byte_60ABC94D;
    dword_60C8D5FC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D600 = (int)&byte_60ABC94D;
    dword_60C8D604 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D608 = (int)"Ocean";
    dword_60C8D60C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D610 = (int)&byte_60ABC94D;
    dword_60C8D614 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D618 = (int)&byte_60ABC94D;
    dword_60C8D61C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D620 = (int)&byte_60ABC94D;
    dword_60C8D624 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D628 = (int)"Aurora";
    dword_60C8D62C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D630 = (int)&byte_60ABC94D;
    dword_60C8D634 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D638 = (int)&byte_60ABC94D;
    dword_60C8D63C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D640 = (int)&byte_60ABC94D;
    dword_60C8D644 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D648 = (int)"Doku";
    dword_60C8D64C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D650 = (int)&byte_60ABC94D;
    dword_60C8D654 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D658 = (int)&byte_60ABC94D;
    dword_60C8D65C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D660 = (int)&byte_60ABC94D;
    dword_60C8D664 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D668 = (int)&byte_60ABC94D;
    dword_60C8D66C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D670 = (int)&byte_60ABC94D;
    dword_60C8D674 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D678 = (int)&byte_60ABC94D;
    dword_60C8D67C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D680 = (int)&byte_60ABC94D;
    dword_60C8D684 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D688 = (int)&byte_60ABC94D;
    dword_60C8D68C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D690 = (int)&byte_60ABC94D;
    dword_60C8D694 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D698 = (int)&byte_60ABC94D;
    dword_60C8D69C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D6A0 = (int)&byte_60ABC94D;
    dword_60C8D6A4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D6A8 = (int)"CloudBG";
    dword_60C8D6AC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D6B0 = (int)"Ocean";
    dword_60C8D6B4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D6B8 = (int)"Castle";
    dword_60C8D6BC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D6C0 = (int)"Wall";
    dword_60C8D6C4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D6C8 = (int)&byte_60ABC94D;
    dword_60C8D6CC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D6D0 = (int)&byte_60ABC94D;
    dword_60C8D6D4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D6D8 = (int)&byte_60ABC94D;
    dword_60C8D6DC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D6E0 = (int)&byte_60ABC94D;
    sub_60000288();
    _cxa_guard_release(&dword_60C8D824);
  }
  if ( ((unsigned int)&dword_60C8D828 & ~(1612869984 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D828) )
  {
    dword_60C8D6E4[0] = (int)&sead__SafeStringBase__vtable;
    dword_60C8D6E8 = (int)&byte_60ABC94D;
    dword_60C8D6EC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D6F0 = (int)&byte_60ABC94D;
    dword_60C8D6F4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D6F8 = (int)&byte_60ABC94D;
    dword_60C8D6FC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D700 = (int)&byte_60ABC94D;
    dword_60C8D704 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D708 = (int)&byte_60ABC94D;
    dword_60C8D70C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D710 = (int)&byte_60ABC94D;
    dword_60C8D714 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D718 = (int)&byte_60ABC94D;
    dword_60C8D71C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D720 = (int)&byte_60ABC94D;
    dword_60C8D724 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D728 = (int)&byte_60ABC94D;
    dword_60C8D72C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D730 = (int)&byte_60ABC94D;
    dword_60C8D734 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D738 = (int)&byte_60ABC94D;
    dword_60C8D73C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D740 = (int)&byte_60ABC94D;
    dword_60C8D744 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D748 = (int)&byte_60ABC94D;
    dword_60C8D74C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D750 = (int)&byte_60ABC94D;
    dword_60C8D754 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D758 = (int)&byte_60ABC94D;
    dword_60C8D75C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D760 = (int)&byte_60ABC94D;
    dword_60C8D764 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D768 = (int)"Doku";
    dword_60C8D76C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D770 = (int)"Ocean";
    dword_60C8D774 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D778 = (int)&byte_60ABC94D;
    dword_60C8D77C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D780 = (int)&byte_60ABC94D;
    dword_60C8D784 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D788 = (int)&byte_60ABC94D;
    dword_60C8D78C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D790 = (int)&byte_60ABC94D;
    dword_60C8D794 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D798 = (int)&byte_60ABC94D;
    dword_60C8D79C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D7A0 = (int)&byte_60ABC94D;
    dword_60C8D7A4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D7A8 = (int)&byte_60ABC94D;
    dword_60C8D7AC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D7B0 = (int)&byte_60ABC94D;
    dword_60C8D7B4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D7B8 = (int)&byte_60ABC94D;
    dword_60C8D7BC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D7C0 = (int)&byte_60ABC94D;
    dword_60C8D7C4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D7C8 = (int)"Magma";
    dword_60C8D7CC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D7D0 = (int)"CloudBG";
    dword_60C8D7D4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D7D8 = (int)&byte_60ABC94D;
    dword_60C8D7DC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D7E0 = (int)&byte_60ABC94D;
    dword_60C8D7E4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D7E8 = (int)"Universe";
    dword_60C8D7EC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D7F0 = (int)&byte_60ABC94D;
    dword_60C8D7F4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D7F8 = (int)&byte_60ABC94D;
    dword_60C8D7FC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D800 = (int)&byte_60ABC94D;
    sub_60000288();
    _cxa_guard_release(&dword_60C8D828);
  }
  v19 = &v21;
  v18 = &BufferedSafeStringBase_char_vtable_probably;
  v20 = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v18);
  v3 = 0;
  *(_BYTE *)v19 = 0;
  v18 = &off_60BD4BF0;
  v17 = a1 + 448;
  do
  {
    v4 = a1[442];
    v5 = a1[441];
    (*(void (__fastcall **)(_DWORD *))(a1[448] + 12))(v17);
    v6 = a1[449];
    v7 = v3 * 4 + 32 * v5;
    if ( v4 )
    {
      v8 = &dword_60C8D6E4[8 * v5];
      (*(void (__fastcall **)(char *))(v8[v3] + 12))((char *)dword_60C8D6E4 + v7);
    }
    else
    {
      v8 = &dword_60C8D5C4[8 * v5];
      (*(void (__fastcall **)(char *))(v8[v3] + 12))((char *)dword_60C8D5C4 + v7);
    }
    sub_608FDDF4((int)&v18, "%s_%s", v6, v8[v3 + 1]);
    sub_602276B8(a1, &v18);
    v3 += 2;
  }
  while ( v3 != 8 );
  (*(void (__fastcall **)(_DWORD *))(a1[448] + 12))(v17);
  v9 = (const char *)a1[449];
  (*((void (__cdecl **)())off_60BD92E4 + 3))();
  sub_608FDDF4((int)&v18, "%s_%s", v9, off_60BD92E8);
  sub_602276B8(a1, &v18);
  v10 = a1[441];
  v11 = v10 == 4;
  if ( v10 == 4 )
    v11 = a1[442] == 0;
  if ( v11 )
  {
    (*(void (__fastcall **)(_DWORD *))(a1[448] + 12))(v17);
    v14 = (const char *)a1[449];
    (*((void (__cdecl **)())off_60BD92E4 + 3))();
    sub_608FDDF4((int)&v18, "%s_%s2", v14, off_60BD92E8);
    sub_602276B8(a1, &v18);
    (*(void (__fastcall **)(_DWORD *))(a1[448] + 12))(v17);
    sub_608FDDF4((int)&v18, "%s_%s", (const char *)a1[449], "Fog");
    sub_602276B8(a1, &v18);
    (*(void (__fastcall **)(_DWORD *))(a1[448] + 12))(v17);
    v15 = a1[449];
    (*((void (__cdecl **)())off_60BD92E4 + 3))();
    sub_608FDDF4((int)&v18, "%s_%s1", v15, off_60BD92E8);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(a1[448] + 12))(v17);
    v12 = (const char *)a1[449];
    (*((void (__cdecl **)())off_60BD92E4 + 3))();
    sub_608FDDF4((int)&v18, "%s_%s%d", v12, off_60BD92E8, 2);
    sub_602276B8(a1, &v18);
    (*(void (__fastcall **)(_DWORD *))(a1[448] + 12))(v17);
    v13 = a1[449];
    (*((void (__cdecl **)())off_60BD92E4 + 3))();
    sub_608FDDF4((int)&v18, "%s_%s%d", v13, off_60BD92E8, 1);
  }
  return sub_602276B8(a1, &v18);
}
