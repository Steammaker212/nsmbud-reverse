/* sub_604734E4
 * address: 0x604734E4   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604734E4(_DWORD *a1, void *a2)
{
  int CurrentHeap_const; // r2
  _DWORD *v5; // r6
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  _DWORD *v10; // r0
  int result; // r0

  CurrentHeap_const = (int)a2;
  if ( !a2 )
    CurrentHeap_const = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  a1[5] = CurrentHeap_const;
  sub_60855B70(sub_604793E0, sub_604793FC);
  (*(void (__fastcall **)(_DWORD *, void *))(*a1 + 12))(a1, a2);
  v5 = (_DWORD *)operator_new_8DE25C(0x54u, a2, 4);
  v6 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
  sub_60479C44(v5, v6);
  a1[4] = v5;
  v7 = operator_new_8DE25C(0xF0u, a2, 16);
  v8 = sub_60853EC0(v7);
  *(_DWORD *)v8 = off_60BFCACC;
  FIELD_U32(v8, 224) = 0;
  FIELD_U8(v8, 228) = 0;
  FIELD_U32(v8, 232) = v8 + 232;
  FIELD_U32(v8, 236) = v8 + 232;
  a1[6] = v8;
  v9 = operator_new_8DE25C(0x3Cu, a2, 4);
  v10 = (_DWORD *)sub_60987E7C(v9, FIELD_U32(dword_60CD0C84, 852), FIELD_U32(dword_60CD0C84, 856));
  *v10 = off_60BFD19C;
  v10[14] = 1065353216;
  a1[879] = v10;
  result = operator_new_8DE25C(0x30u, a2, 16);
  a1[7] = result;
  return result;
}
