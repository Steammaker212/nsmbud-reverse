/* SE_SYS_CE_BTN_OVER_ref_2_helper
 * address: 0x605009F0   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CE_BTN_OVER_ref_2_helper(int a1)
{
  _DWORD *v2; // r4
  const char *v3; // r5
  char v4; // r12
  int v6; // [sp+8h] [bp-78h] BYREF
  int (**v7)(); // [sp+Ch] [bp-74h] BYREF
  int *v8; // [sp+10h] [bp-70h]
  int v9; // [sp+14h] [bp-6Ch]
  int v10; // [sp+18h] [bp-68h] BYREF

  v2 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C((int)v2);
  v8 = &v10;
  v7 = &BufferedSafeStringBase_char_vtable_probably;
  v9 = 70;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v7);
  *(_BYTE *)v8 = 0;
  v7 = &off_60BFD5C8;
  (*(void (__fastcall **)(int *))(dword_60CA75B0 + 12))(&dword_60CA75B0);
  v3 = (const char *)dword_60CA75B4;
  (*(void (__fastcall **)(int *))(dword_60CA75B8 + 12))(&dword_60CA75B8);
  sub_608FDDF4((int)&v7, "%s.%s", v3, (const char *)dword_60CA75BC);
  message_ref(v2, &v7, a1 + 3628, 0, 0);
  if ( ((unsigned int)dword_60CA7598 & ~(1615858424 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60CA7598) )
  {
    dword_60CA7620 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7624 = dword_60CA74BC;
    dword_60CA7628 = (int)&sead__SafeStringBase__vtable;
    dword_60CA762C = dword_60CA74C4;
    sub_60000288();
    _cxa_guard_release(dword_60CA7598);
  }
  v6 = 2;
  return sub_60476030((int)v2, &dword_60CA7620, &v6);
}
