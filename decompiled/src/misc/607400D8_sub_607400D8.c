/* sub_607400D8
 * address: 0x607400D8   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607400D8(int a1)
{
  void *v2; // r4
  int v3; // r6
  void *Model2; // r5
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int result; // r0
  unsigned int v11; // r4
  int *v12; // r9
  unsigned int *v13; // r11
  char *v14; // r1
  _DWORD *v15; // r0
  int v16; // r1
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "miniGame_slot";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  v3 = 0;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "slotPanel";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 2, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 2, 2, 0, 0, 0);
  j_ModelWrapper_setupModel(v6, v2, 0, 0);
  FIELD_U32(a1, 6300) = v5;
  v7 = (int)*FIELD_U32(v5, 0xC);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "slotPanel_wait";
  SkeletalAnim_play(v7, (int)v2, (const char **)&a2);
  v8 = **(_DWORD **)(FIELD_U32(a1, 6300) + 20);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "slotPanel_changeF";
  TexAnim_play(v8, (int)v2, &a2);
  v9 = **(_DWORD **)(FIELD_U32(a1, 6300) + 20);
  FIELD_F32(v9, 20) = (float)FIELD_S32(a1, 6372);
  FIELD_U32(v9, 28) |= 2u;
  result = sub_60740438(a1);
  if ( result )
  {
    v11 = 0;
    v12 = (int *)(result + 6696);
    v13 = (unsigned int *)(result + 6692);
    do
    {
      v14 = off_60C230E4[v11];
      v15 = **(_DWORD ***)(FIELD_U32(a1, 6300) + 20);
      a2.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = v14;
      v16 = *v12;
      if ( *v13 > v11 )
        v16 += v3;
      result = sub_604511EC(v15, &a2, v16 + 296);
      ++v11;
      v3 += 832;
    }
    while ( v11 != 20 );
  }
  return result;
}
