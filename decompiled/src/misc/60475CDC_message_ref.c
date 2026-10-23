/* message_ref
 * address: 0x60475CDC   size: 788   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall message_ref(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v9; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r6
  int v13; // r5
  int v14; // r7
  int v15; // r4
  int v16; // r4
  int v17; // r5
  int v18; // r0
  int v19; // r2
  int v20; // r1
  int v21; // r1
  int v22; // r0
  _BYTE v24[8]; // [sp+1Ch] [bp-564h] BYREF
  _DWORD v25[3]; // [sp+24h] [bp-55Ch] BYREF
  int (**v26)(); // [sp+30h] [bp-550h] BYREF
  int *v27; // [sp+34h] [bp-54Ch]
  int v28; // [sp+38h] [bp-548h]
  int v29; // [sp+3Ch] [bp-544h] BYREF
  int (**v30)(); // [sp+43Ch] [bp-144h] BYREF
  int *v31; // [sp+440h] [bp-140h]
  int v32; // [sp+444h] [bp-13Ch]
  int v33; // [sp+448h] [bp-138h] BYREF
  _BYTE v34[16]; // [sp+548h] [bp-38h] BYREF
  _DWORD v35[10]; // [sp+558h] [bp-28h] BYREF

  sub_6090B310(dword_60CCF464);
  sub_60476A60(v34, a3, a4, a5);
  v31 = &v33;
  v30 = &BufferedSafeStringBase_char_vtable_probably;
  v32 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v30);
  *(_BYTE *)v31 = 0;
  v30 = &off_60BD94BC;
  sub_608E978C(&v30, a2);
  v9 = (*(int (__fastcall **)(_DWORD, int (***)()))(**(_DWORD **)(dword_60CD0C84 + 836) + 32))(
         FIELD_U32(dword_60CD0C84, 836),
         &v30);
  sub_60982EE0(a1[880], FIELD_U32(v9, 104), FIELD_U32(v9, 108));
  v10 = s_msbt_ref(FIELD_U32(dword_60CD0C84, 852), &v30);
  if ( !v10 )
  {
    v11 = FIELD_U32(dword_60CD0C84, 852);
    v25[0] = &sead__SafeStringBase__vtable;
    v25[1] = "message";
    v10 = s_msbt_ref(v11, v25);
  }
  sub_609897B0(v25, v10, a1[879]);
  v25[0] = &off_60BFD2FC;
  v27 = &v29;
  v26 = &off_60BFCA1C;
  v28 = 512;
  sub_608FDDB4(&v26);
  v12 = 0;
  *(_WORD *)v27 = 0;
  v26 = &off_60BFCAE0;
  v13 = a1[880];
  v14 = a1[4];
  v15 = FIELD_U32(dword_60CCF464, 36);
  LOBYTE(v35[0]) = 0;
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  if ( sub_60855E14(v14, v24, v15, v13, v34, v25, v35, a2[1], 0) == 1 )
  {
    v16 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
    v17 = dword_60CD0C84;
    ((void (__fastcall *)(int (***)()))v30[3])(&v30);
    sub_6098C20C(v16, v17, v31);
    v18 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
    v19 = a1[4];
    v20 = FIELD_U32(v19, 12);
    v35[0] = 0;
    sub_6098BD10(v18, v20, v19, v35);
    v21 = a1[4];
    if ( FIELD_U32(v21, 56) )
    {
      sub_60989E30();
      v21 = a1[4];
    }
    v22 = FIELD_U32(v21, 64);
    if ( v22 )
      (*(void (__fastcall **)(int, float))(*(_DWORD *)v22 + 88))(v22, 1.0);
    *(_DWORD *)(a1[6] + 184) = dword_60CD0C84 + 40;
    sub_6098F300(a1[6], a1[4] + 20);
    sub_6098B5A8(FIELD_U32(dword_60CD0C84, 864), a1[6]);
    (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)a1[4] + 52))(a1[4], a1[879]);
    v12 = 1;
  }
  sub_6090B32C(dword_60CCF464);
  return v12;
}
