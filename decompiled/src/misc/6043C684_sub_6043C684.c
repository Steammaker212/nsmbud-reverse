/* sub_6043C684
 * address: 0x6043C684   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6043C684(int a1, _DWORD *a2, int a3, void *a4)
{
  sead_IDisposer *v7; // r6
  void *containingHeap; // r7
  const void *v9; // r9
  int v10; // r0
  signed int v11; // r5
  bool v12; // cc
  signed int v13; // r0
  sead_IDisposer *v15; // [sp+4h] [bp-24h] BYREF

  v7 = (sead_IDisposer *)operator_new_8DE25C(0x40u, a4, 4);
  sead_IDisposer_ctor(v7);
  FIELD_U32(v7, 0x0) = (int)off_60BFAA04;
  FIELD_U32(v7 + (1) * 16, 0x4) = (int)&FIELD_U32(v7 + (1) * 16, 0xC);
  FIELD_U32(v7 + (1) * 16, 0x0) = (int)&BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(v7 + (1) * 16, 0x8) = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v7[1]);
  *(_BYTE *)FIELD_U32(v7 + (1) * 16, 0x4) = 0;
  FIELD_U32(v7 + (1) * 16, 0x0) = (int)&off_60BD4C20;
  FIELD_U32(v7 + (3) * 16, 0xC) = a3;
  containingHeap = (void *)FIELD_U32(v7 + (1) * 16, 0x4);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v9 = (const void *)a2[1];
  if ( containingHeap != v9 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v10 = a2[1];
    v11 = 0;
    while ( *(_BYTE *)(v10 + v11) )
    {
      if ( !*(_BYTE *)(v10 + v11 + 1) )
      {
        ++v11;
        break;
      }
      if ( !*(_BYTE *)(v10 + v11 + 2) )
      {
        v11 += 2;
        break;
      }
      v12 = v11 + 2 < 0x80000;
      v11 += 3;
      if ( !v12 )
      {
        v11 = 0;
        break;
      }
    }
    v13 = FIELD_U32(v7 + (1) * 16, 0x8);
    if ( v11 >= v13 )
      v11 = v13 - 1;
    qmemcpy(containingHeap, v9, v11);
    *((_BYTE *)containingHeap + v11) = 0;
  }
  v15 = v7;
  return sub_6043B624(a1 + 16, a2, &v15);
}
