/* sub_6098A724
 * address: 0x6098A724   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6098A724(int r0_0, void *a2, _DWORD *a3)
{
  int v5; // r4
  char v6; // r12
  int v7; // r0
  int v8; // r0
  int (**v11)(); // [sp+8h] [bp-110h] BYREF
  char *v12; // [sp+Ch] [bp-10Ch]
  int v13; // [sp+10h] [bp-108h]
  int v14; // [sp+14h] [bp-104h] BYREF
  char v15; // [sp+57h] [bp-C1h] BYREF
  sead_IDisposer a1; // [sp+58h] [bp-C0h] BYREF
  int v17; // [sp+68h] [bp-B0h]
  int v18; // [sp+6Ch] [bp-ACh]
  sead_IDisposer *p_a1; // [sp+70h] [bp-A8h]
  int v20; // [sp+74h] [bp-A4h]
  int (**v21)(); // [sp+78h] [bp-A0h] BYREF
  _BYTE *v22; // [sp+7Ch] [bp-9Ch]
  int v23; // [sp+80h] [bp-98h]
  _BYTE v24[56]; // [sp+84h] [bp-94h] BYREF
  _DWORD v25[2]; // [sp+BCh] [bp-5Ch] BYREF
  void *v26; // [sp+C4h] [bp-54h]
  void *v27; // [sp+C8h] [bp-50h]
  int v28; // [sp+CCh] [bp-4Ch]
  int v29; // [sp+D0h] [bp-48h]
  int v30; // [sp+D4h] [bp-44h]
  int v31; // [sp+D8h] [bp-40h]
  int v32; // [sp+DCh] [bp-3Ch]
  sead_IDisposer *v33; // [sp+E0h] [bp-38h]
  int v34; // [sp+E4h] [bp-34h]
  int v35; // [sp+E8h] [bp-30h]
  char v36; // [sp+ECh] [bp-2Ch]
  char *v37; // [sp+F0h] [bp-28h]

  v25[0] = &sead__SafeStringBase__vtable;
  v25[1] = &byte_60B3BA34;
  v26 = 0;
  v27 = 0;
  v28 = 32;
  v35 = 0;
  v34 = 0;
  v33 = 0;
  v32 = 0;
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v36 = 1;
  v37 = 0;
  a1.vtable = (int)off_60C5CB68;
  v17 = 0;
  v18 = 0;
  p_a1 = &a1;
  v20 = 0;
  sead_IDisposer_ctor(&a1);
  a1.vtable = (int)off_60C5CB68;
  v22 = v24;
  v21 = &BufferedSafeStringBase_char_vtable_probably;
  v23 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v21);
  *v22 = 0;
  v15 = 0;
  v21 = &off_60BD4C20;
  a1.vtable = (int)off_60C5FF98;
  v24[52] = 0;
  sead__SafeStringBase__operator_assign((int)v25, (int)a3);
  v26 = a2;
  v27 = a2;
  v11 = &sead__SafeStringBase__vtable;
  v28 = 4;
  v29 = 4096;
  v33 = &a1;
  v37 = &v15;
  v12 = &byte_60ABC94D;
  v5 = sub_60902A08((_DWORD *)sead__ResourceMgr__sInstance, v25, (int)&v11, 0);
  if ( ((unsigned int)&dword_60C9BB2C & ~(1620617360 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB2C) )
  {
    dword_60C9BB28 = (int)&off_60BF9F4C;
    _cxa_guard_release(&dword_60C9BB2C);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C9BB28) )
  {
    v12 = (char *)&v14;
    v11 = &BufferedSafeStringBase_char_vtable_probably;
    v13 = 64;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v11);
    *v12 = 0;
    v11 = &off_60BD4BF0;
    sub_608E978C((int)&v11, a3);
    v7 = operator_new_8DE25C(0x70u, a2, 4);
    v8 = timg___Combined_bntx_ref(v7, r0_0, &v11, FIELD_U32(v5, 4));
    sead__ListNode__insertFront((sead_ListNode *)(r0_0 + 4), (sead_ListNode *)(FIELD_U32(r0_0, 16) + v8));
    ++FIELD_U32(r0_0, 12);
  }
  return sub_60902104(&a1);
}
