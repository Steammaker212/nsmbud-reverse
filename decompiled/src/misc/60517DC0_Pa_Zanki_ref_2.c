/* Pa_Zanki_ref_2
 * address: 0x60517DC0   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_Zanki_ref_2(int a1)
{
  _DWORD *v2; // r4
  const char *v3; // r7
  char v4; // r12
  char v5; // r12
  int v7; // [sp+8h] [bp-78h] BYREF
  int (**v8)(); // [sp+Ch] [bp-74h] BYREF
  int *v9; // [sp+10h] [bp-70h]
  int v10; // [sp+14h] [bp-6Ch]
  int v11; // [sp+18h] [bp-68h] BYREF

  v2 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C((int)v2);
  v9 = &v11;
  v8 = &BufferedSafeStringBase_char_vtable_probably;
  v10 = 70;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v8);
  *(_BYTE *)v9 = 0;
  v8 = &off_60BFD5C8;
  (*(void (__fastcall **)(int *))(dword_60CA8878 + 12))(&dword_60CA8878);
  v3 = (const char *)dword_60CA887C;
  (*(void (__fastcall **)(int *))(dword_60CA8880 + 12))(&dword_60CA8880);
  sub_608FDDF4((int)&v8, "%s.%s", v3, (const char *)dword_60CA8884);
  message_ref(v2, &v8, 0, 0, 0);
  if ( ((unsigned int)dword_60CA8870 & ~(1615953576 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60CA8870) )
  {
    dword_60CA8910 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8914 = (int)"Pa_Zanki_00";
    dword_60CA8918 = (int)&sead__SafeStringBase__vtable;
    dword_60CA891C = (int)"Pa_Zanki_01";
    dword_60CA8920 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8924 = (int)"Pa_Zanki_02";
    dword_60CA8928 = (int)&sead__SafeStringBase__vtable;
    dword_60CA892C = (int)"Pa_Zanki_03";
    dword_60CA8930 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8934 = (int)"Pa_Zanki_04";
    sub_60000288();
    _cxa_guard_release(dword_60CA8870);
  }
  sub_6050D95C(a1 + 3652);
  sub_6050D95C(a1 + 7256);
  sub_6050D95C(a1 + 10860);
  sub_6050D95C(a1 + 14464);
  sub_6050D95C(a1 + 18068);
  if ( ((unsigned int)&dword_60CA8870[1] & ~(1615953856 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA8870[1]) )
  {
    dword_60CA88F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA88F4 = dword_60CA888C;
    dword_60CA88F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA88FC = dword_60CA8894;
    dword_60CA8900 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8904 = dword_60CA889C;
    dword_60CA8908 = (int)&sead__SafeStringBase__vtable;
    dword_60CA890C = dword_60CA88A4;
    sub_60000288();
    _cxa_guard_release(&dword_60CA8870[1]);
  }
  v7 = 4;
  return sub_60476030((int)v2, &dword_60CA88F0, &v7);
}
