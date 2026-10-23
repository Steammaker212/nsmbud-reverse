/* sub_60952F14
 * address: 0x60952F14   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60952F14(int a1, int a2, int a3, int a4, _DWORD *a5, int a6)
{
  unsigned int v10; // r4
  int v11; // r7
  int v12; // r6
  int v13; // r6
  void (__fastcall ***v14)(_DWORD, _DWORD *); // r0
  bool v15; // zf
  char *v16; // r0
  _BYTE *v17; // r0
  _BYTE *v18; // r5
  void (__fastcall ***v19)(_DWORD, _DWORD *); // r0
  bool v20; // zf
  _DWORD v22[252]; // [sp+10h] [bp-490h] BYREF
  _DWORD v23[12]; // [sp+41Ch] [bp-84h] BYREF
  _DWORD v24[2]; // [sp+44Ch] [bp-54h] BYREF
  _DWORD v25[7]; // [sp+454h] [bp-4Ch] BYREF
  char v26; // [sp+470h] [bp-30h]
  void *v27; // [sp+474h] [bp-2Ch] BYREF

  v10 = FIELD_U16(a3, 24);
  v11 = sub_609200A0(a3);
  v12 = FIELD_U16(a3, 26);
  v25[0] = &sead__SafeStringBase__vtable;
  v25[1] = &byte_60B3BA34;
  sead__SafeStringBase__operator_assign((int)v25, (int)a5);
  if ( v10 <= 1 )
    v10 = 1;
  if ( v11 > v12 )
    v12 = v11;
  v24[1] = FIELD_U32(a1, 1684);
  v25[3] = FIELD_U32(a1, 36);
  v25[4] = v10;
  v25[5] = v12;
  v26 = FIELD_U8(a1, 864);
  v25[6] = a4;
  v25[2] = &v27;
  if ( FIELD_U8(a1, 40) )
  {
    v13 = 0;
    if ( !sub_609745B0(a2, &v27, a4, 1, a3, a6) )
      return v13;
  }
  else
  {
    v13 = 0;
    if ( sub_609740C0(a2, &v27, a4, 1, a3, a6, a6) != 1 )
      return v13;
  }
  v14 = *(void (__fastcall ****)(_DWORD, _DWORD *))(a1 + 1636);
  v15 = v14 == 0;
  if ( v14 )
    v15 = (FIELD_U8(a1, 1672) & 1) == 0;
  if ( !v15 )
  {
    v24[0] = 0;
    (**v14)(v14, v24);
  }
  (*(void (__fastcall **)(_DWORD *))(*a5 + 12))(a5);
  (*(void (__fastcall **)(_DWORD *))(*a5 + 12))(a5);
  v16 = (char *)a5[1];
  if ( v16 != &byte_60ABC94D && *v16 )
  {
    memset(&v23[1], 0, 44);
    v23[0] = &off_60BF9CF0;
    v17 = (_BYTE *)sub_608E6578(*(_BYTE **)(dword_60CD0B48 + 20), v23, (int)a5, 1, 0);
    v18 = v17;
    if ( v17 )
    {
      v22[0] = 0;
      sub_608E6964(v17, (int)v22, (int)v23, (int)v27);
      sub_608E6738(v18, (int)v23);
      if ( v27 )
        operator_delete(v27);
      v19 = *(void (__fastcall ****)(_DWORD, _DWORD *))(a1 + 1636);
      v13 = 1;
      v20 = v19 == 0;
      if ( v19 )
        v20 = (FIELD_U8(a1, 1672) & 2) == 0;
      if ( !v20 )
      {
        v13 = 1;
        v24[0] = 1;
        (**v19)(v19, v24);
      }
    }
    else
    {
      if ( FIELD_U8(a1, 1624) )
      {
        (*(void (__fastcall **)(_DWORD *))(*a5 + 12))(a5);
        sub_604209A4(v22, aErrorS, a5[1]);
      }
      v13 = 0;
      if ( v27 )
        operator_delete(v27);
    }
    v23[0] = &off_60BF9CF0;
    if ( v23[2] )
      sub_608E6738((_BYTE *)v23[2], (int)v23);
  }
  else
  {
    v13 = 0;
    if ( v27 )
      operator_delete(v27);
  }
  return v13;
}
