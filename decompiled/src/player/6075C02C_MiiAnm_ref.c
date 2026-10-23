/* MiiAnm_ref
 * address: 0x6075C02C   size: 500   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MiiAnm_ref(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  bool v14; // zf
  int v15; // r0
  int v16; // r0
  int (**v17)(); // r0
  const char *v18; // r1
  int v20; // [sp+Ch] [bp-84h] BYREF
  int (**v21)(); // [sp+10h] [bp-80h] BYREF
  const char *v22; // [sp+14h] [bp-7Ch]
  int v23; // [sp+18h] [bp-78h]
  int v24; // [sp+1Ch] [bp-74h] BYREF

  v20 = a6;
  v14 = sub_6042F294(&v21, &v20) == 1;
  v15 = 0;
  if ( v14 )
  {
    v15 = sub_6042F170((int)&v21);
    if ( v15 != 1 )
      v15 = 0;
  }
  sub_6078C444(a1, &dword_60CBF198[2 * (v15 | (16 * v15))], a2, a3, a4, a9);
  *(_DWORD *)a1 = off_60C240DC;
  v21 = &sead__SafeStringBase__vtable;
  v22 = "MiiAnm";
  FIELD_U32(a1, 544) = LoadResource(ResourceMgrRelated_instance, &v21);
  FIELD_U32(a1, 548) = a5;
  FIELD_U32(a1, 552) = v20;
  v16 = 2;
  if ( a10 )
    v16 = 4;
  FIELD_U32(a1, 556) = v16;
  FIELD_U32(a1, 560) = a7;
  FIELD_U32(a1, 564) = 0;
  agl_TextureData_ref(a1 + 568);
  agl_TextureData_ref(a1 + 840);
  memset(a1 + 1112, 0, 71);
  if ( FIELD_S32(a1, 548) >= 4 )
    FIELD_U32(a1, 548) = 3;
  FIELD_U8(dword_60C9BBD4, 18064) = FIELD_U8(a1, 540);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  sub_608DEB0C(&v21, 2, (int)&v24);
  v17 = v21;
  v18 = v22;
  if ( (int)v21 < (int)v22 )
  {
    *(_DWORD *)(v23 + 4 * (_DWORD)v21) = FIELD_U32(a1, 20);
    v17 = (int (**)())((char *)v21 + 1);
    v21 = (int (**)())((char *)v21 + 1);
    v18 = v22;
  }
  if ( (int)v17 < (int)v18 )
  {
    *(_DWORD *)(v23 + 4 * (_DWORD)v17) = FIELD_U32(a1, 544);
    v21 = (int (**)())((char *)v21 + 1);
  }
  sub_6078C590(a1, &v21);
  sub_6075C23C(a1);
  sub_6075C304(a1, &v21);
  FIELD_U8(dword_60C9BBD4, 18064) = 1;
  sub_6078E5A8(a1, FIELD_U32(a1, 472));
  return a1;
}
