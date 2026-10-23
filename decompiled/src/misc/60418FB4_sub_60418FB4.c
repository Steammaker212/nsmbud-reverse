/* sub_60418FB4
 * address: 0x60418FB4   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60418FB4(_DWORD *a1, _DWORD *a2, void *a3)
{
  void *CurrentHeap_const; // r8
  int v6; // r0
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r9
  int v11; // r0
  int v12; // r0
  int v13; // r2
  int v14; // r0
  int v15; // r1
  int v16; // r3
  int v17; // r7
  int v18; // r0
  int v19; // r0
  int v21; // [sp+0h] [bp-58h]
  int v22; // [sp+4h] [bp-54h]
  int v23; // [sp+14h] [bp-44h] BYREF
  int (**v24)(); // [sp+18h] [bp-40h] BYREF
  const char *v25; // [sp+1Ch] [bp-3Ch]
  int v26; // [sp+20h] [bp-38h]
  int v27; // [sp+24h] [bp-34h]
  int v28; // [sp+28h] [bp-30h]
  int v29; // [sp+2Ch] [bp-2Ch]
  int v30; // [sp+30h] [bp-28h]
  int v31; // [sp+34h] [bp-24h]

  CurrentHeap_const = a3;
  if ( !a3 )
    CurrentHeap_const = (void *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  sub_6041925C(a1, a2, CurrentHeap_const);
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  v24 = 0;
  sub_6083DC30(&v24);
  sub_6083B2BC(a1 + 16, FIELD_U32(dword_60CCFC8C, 24), &v24);
  v6 = sub_60916308(dword_60CCFC8C, a1[18], "MiiSampler");
  a1[47] = 0;
  a1[46] = v6;
  v7 = a2[5];
  v8 = a2[6];
  v9 = a2[7];
  a1[48] = a2[4];
  a1[49] = v7;
  a1[50] = v8;
  a1[52] = sub_6041A338(a1 + 53, v9);
  v10 = sub_6083E954();
  v11 = sub_6083E9F4(a1[52], a1[53], a1 + 48, FIELD_U32(dword_60CCFC8C, 24));
  v12 = (*(int (__fastcall **)(void *, int, int))(*(_DWORD *)CurrentHeap_const + 24))(CurrentHeap_const, v10, v11);
  a1[54] = v12;
  v21 = a1[52];
  v22 = a1[53];
  sub_6083E9FC((nn__util__BinaryFileHeader *)(a1 + 51), v12, v10);
  sub_60419380(a1, a2[8], a2[9], CurrentHeap_const, v21, v22, a1 + 48);
  sub_60419574(a1, CurrentHeap_const);
  sub_60419720(a1, CurrentHeap_const);
  sub_604198EC(a1, a2[10], a2[11], a2[12], CurrentHeap_const);
  v13 = a2[13];
  v14 = a2[14];
  v15 = a2[15];
  a1[197] = v13;
  a1[198] = v14;
  a1[199] = v15;
  v16 = a2[17];
  if ( v16 )
  {
    v14 = a2[18];
    v15 = a2[19];
    a1[200] = v16;
  }
  else
  {
    a1[200] = v13;
  }
  a1[201] = v14;
  a1[202] = v15;
  sub_60419A64(a1, CurrentHeap_const);
  sub_60419C88(a1);
  v17 = a2[20];
  v23 = a2[21];
  v18 = operator_new_8DE25C(0x94u, CurrentHeap_const, 4);
  v24 = &sead__SafeStringBase__vtable;
  v25 = "MiiResource";
  v19 = sub_6090891C(v18, &v24, a1 + 510, CurrentHeap_const, v17, 1, 0x7FFFFFFF, 0x20000, 32);
  a1[509] = v19;
  sub_60908478(v19, &v23);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)a1[509] + 24))(a1[509]);
  v24 = &sead__SafeStringBase__vtable;
  v25 = "MiiResourse";
  nullsub_123(a1 + 655, 1, &v24, CurrentHeap_const);
  a1[777] = 0;
  return 0;
}
