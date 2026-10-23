/* sub_6043B2D8
 * address: 0x6043B2D8   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6043B2D8(int a1, _DWORD *a2, int a3, void *a4)
{
  _DWORD *v8; // r7
  int v9; // r4
  int v10; // r0
  int v11; // r2
  int v12; // r3
  bool v13; // nf
  _DWORD *v14; // r0
  signed int result; // r0
  int v16; // r5
  sead_IDisposer *v17; // r10
  void *containingHeap; // r7
  const void *v19; // r9
  int v20; // r0
  signed int v21; // r5
  bool v22; // cc
  signed int v23; // r0
  sead_IDisposer *v24; // [sp+0h] [bp-28h] BYREF

  v8 = *(_DWORD **)(a1 + 16);
  if ( v8 )
  {
    while ( 2 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v9 = a2[1];
      (*(void (__fastcall **)(_DWORD *))(v8[4] + 12))(v8 + 4);
      v10 = v8[5];
      if ( v9 == v10 )
      {
LABEL_13:
        result = 0;
        if ( *(_DWORD *)(v8[6] + 60) )
          return result;
      }
      else
      {
        v11 = 0;
        while ( 1 )
        {
          v12 = *(unsigned __int8 *)(a2[1] + v11);
          v13 = v12 - *(unsigned __int8 *)(v10 + v11) < 0;
          if ( v12 != *(unsigned __int8 *)(v10 + v11) )
            break;
          if ( *(_BYTE *)(a2[1] + v11) )
          {
            if ( ++v11 < 0x80000 )
              continue;
          }
          if ( !v8 )
            goto LABEL_14;
          goto LABEL_13;
        }
        v14 = v8 + 2;
        if ( v13 )
          v14 = v8 + 1;
        v8 = (_DWORD *)*v14;
        if ( *v14 )
          continue;
      }
      break;
    }
  }
LABEL_14:
  v16 = operator_new_8DE25C(0x208u, a4, 4);
  sub_60439BC8(v16);
  if ( !v16 )
    return 0;
  output_bfres_ref(v16, a3, (int)a4);
  v17 = (sead_IDisposer *)operator_new_8DE25C(0x40u, a4, 4);
  sead_IDisposer_ctor(v17);
  FIELD_U32(v17, 0x0) = (int)off_60BFAA04;
  v17[1].containingHeap = (int)&v17[1].field_C;
  v17[1].vtable = (int)&BufferedSafeStringBase_char_vtable_probably;
  v17[1].field_8 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v17[1]);
  *(_BYTE *)v17[1].containingHeap = 0;
  v17[1].vtable = (int)&off_60BD4C20;
  v17[3].field_C = v16;
  containingHeap = (void *)v17[1].containingHeap;
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v19 = (const void *)a2[1];
  if ( containingHeap != v19 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v20 = a2[1];
    v21 = 0;
    while ( *(_BYTE *)(v20 + v21) )
    {
      if ( !*(_BYTE *)(v20 + v21 + 1) )
      {
        ++v21;
        break;
      }
      if ( !*(_BYTE *)(v20 + v21 + 2) )
      {
        v21 += 2;
        break;
      }
      v22 = v21 + 2 < 0x80000;
      v21 += 3;
      if ( !v22 )
      {
        v21 = 0;
        break;
      }
    }
    v23 = v17[1].field_8;
    if ( v21 >= v23 )
      v21 = v23 - 1;
    qmemcpy(containingHeap, v19, v21);
    *((_BYTE *)containingHeap + v21) = 0;
  }
  v24 = v17;
  sub_6043B624(a1 + 16, a2, &v24);
  return 1;
}
