/* sub_607578C8
 * address: 0x607578C8   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607578C8(int a1, int a2, int a3, int a4, int a5)
{
  int (**v7)(); // r0
  const char *v8; // r1
  int v9; // r0
  unsigned int v10; // r1
  int *v11; // r0
  int v12; // r5
  int v13; // r0
  unsigned int v14; // r1
  int *v15; // r0
  int v16; // r5
  _DWORD v18[2]; // [sp+Ch] [bp-34h] BYREF
  _DWORD v19[2]; // [sp+14h] [bp-2Ch] BYREF
  int (**v20)(); // [sp+1Ch] [bp-24h] BYREF
  const char *v21; // [sp+20h] [bp-20h]
  int v22; // [sp+24h] [bp-1Ch]
  int v23; // [sp+28h] [bp-18h] BYREF

  sub_6078C444(a1, &dword_60CBEEA0, a2, a3, a4, a5);
  *(_DWORD *)a1 = off_60C23E94;
  v20 = &sead__SafeStringBase__vtable;
  v21 = "KinopioAnm";
  FIELD_U32(a1, 544) = LoadResource(ResourceMgrRelated_instance, &v20);
  FIELD_U32(a1, 548) = 0;
  FIELD_U32(a1, 552) = 0;
  FIELD_U32(a1, 556) = 0;
  FIELD_U32(a1, 560) = 0;
  FIELD_U8(dword_60C9BBD4, 18064) = FIELD_U8(a1, 540);
  v20 = 0;
  v21 = 0;
  v22 = 0;
  sub_608DEB0C(&v20, 2, (int)&v23);
  v7 = v20;
  v8 = v21;
  if ( (int)v20 < (int)v21 )
  {
    *(_DWORD *)(v22 + 4 * (_DWORD)v20) = FIELD_U32(a1, 20);
    v7 = (int (**)())((char *)v20 + 1);
    v20 = (int (**)())((char *)v20 + 1);
    v8 = v21;
  }
  if ( (int)v7 < (int)v8 )
  {
    *(_DWORD *)(v22 + 4 * (_DWORD)v7) = FIELD_U32(a1, 544);
    v20 = (int (**)())((char *)v20 + 1);
  }
  sub_6078C590(a1, &v20);
  FIELD_U8(dword_60C9BBD4, 18064) = 1;
  sub_6078E5A8(a1, FIELD_U32(a1, 472));
  if ( a2 == 4 )
  {
    v9 = FIELD_U32(a1, 24);
    v19[0] = &sead__SafeStringBase__vtable;
    v19[1] = "KB_npc";
    if ( v9 )
    {
      v10 = FIELD_U32(v9, 24);
      v11 = *(int **)(v9 + 28);
      if ( v10 > 1 )
        ++v11;
      v12 = *v11;
      sub_60446088(*v11, FIELD_U32(a1, 16), v19);
      AnimationCtrl_setRepeat((ModelAnimation *)(v12 + 4), 0);
      FIELD_U32(v12, 20) = 0;
      FIELD_U32(v12, 28) |= 2u;
    }
    v13 = FIELD_U32(a1, 292);
    v18[0] = &sead__SafeStringBase__vtable;
    v18[1] = "KH_npc";
    if ( v13 )
    {
      v14 = FIELD_U32(v13, 24);
      v15 = *(int **)(v13 + 28);
      if ( v14 > 1 )
        ++v15;
      v16 = *v15;
      sub_60446088(*v15, FIELD_U32(a1, 16), v18);
      AnimationCtrl_setRepeat((ModelAnimation *)(v16 + 4), 0);
      FIELD_U32(v16, 20) = 0;
      FIELD_U32(v16, 28) |= 2u;
    }
  }
  return a1;
}
