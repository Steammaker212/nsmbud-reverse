/* sub_604B7B70
 * address: 0x604B7B70   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B7B70(int a1)
{
  _DWORD *v2; // r4
  void *CurrentHeap_const; // r1
  int v4; // r0
  _DWORD *v5; // r0
  const char *v6; // r6
  int v8; // [sp+8h] [bp-78h] BYREF
  int (**v9)(); // [sp+Ch] [bp-74h] BYREF
  int *v10; // [sp+10h] [bp-70h]
  int v11; // [sp+14h] [bp-6Ch]
  int v12; // [sp+18h] [bp-68h] BYREF

  v2 = (_DWORD *)(a1 + 4);
  sub_604734E4((_DWORD *)(a1 + 4), 0);
  sub_60475C8C((int)v2);
  FIELD_U32(a1, 3652) = 0;
  CurrentHeap_const = (void *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  if ( CurrentHeap_const )
  {
    v4 = operator_new_8DE25C(0x854u, CurrentHeap_const, 4);
    v5 = (_DWORD *)SE_SYS_DECIDE_ref_50208C(v4);
    v5[532] = a1;
    v5[520] = 256;
    v5[521] = 256;
    v5[522] = 256;
    v5[523] = 256;
    v5[524] = 256;
    v5[525] = 256;
    v5[526] = 256;
    v5[527] = 256;
    v5[528] = 256;
    v5[529] = 256;
    v5[530] = 256;
    v5[531] = 256;
    FIELD_U32(a1, 3652) = v5;
  }
  v10 = &v12;
  v9 = &BufferedSafeStringBase_char_vtable_probably;
  v11 = 70;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v9);
  *(_BYTE *)v10 = 0;
  v9 = &off_60BFD5C8;
  (*(void (__fastcall **)(int *))(dword_60CA2444 + 12))(&dword_60CA2444);
  v6 = (const char *)dword_60CA2448;
  (*(void (__fastcall **)(int *))(dword_60CA244C + 12))(&dword_60CA244C);
  sub_608FDDF4((int)&v9, "%s.%s", v6, (const char *)dword_60CA2450);
  message_ref(v2, &v9, FIELD_U32(a1, 3652) + 40, 0, 0);
  v8 = 9;
  return sub_60476030((int)v2, &dword_60CA24B0, &v8);
}
