/* firebar_L_ref
 * address: 0x606D0514   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall firebar_L_ref(int a1)
{
  int v1; // r5
  void *ResArchiveById; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int v7; // r11
  int v8; // r10
  int v9; // r0
  _BYTE *v10; // r7
  _BYTE *v11; // r5
  int v12; // t1
  int result; // r0
  unsigned int v14; // r9
  int v15; // r0
  unsigned int v16; // r1
  void *resource; // [sp+18h] [bp-30h]
  sead__SafeString a2; // [sp+1Ch] [bp-2Ch] BYREF

  v1 = a1;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  Model2 = (void *)Resource_getModel2(
                     ResArchiveById,
                     (sead__SafeString *)&dword_60CBB458[2 * FIELD_U32(v1, 34312)],
                     0,
                     0,
                     0,
                     0,
                     0,
                     0,
                     0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v5, ResArchiveById, 0, 0);
  FIELD_U32(v1, 6324) = v4;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v4, 0x0) + 68))(FIELD_U32(v4, 0x0), v1 + 144);
  resource = (void *)Profile__getResArchiveById(*(Profile **)(v1 + 12), 1u);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "firebar_L";
  v6 = Resource_getModel2(resource, &a2, 0, 0, 0, 0, 0, 0, 0);
  v7 = v1 + 144;
  FIELD_U32(v1, 6456) = v6;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v6 + 68))(v6, v1 + 144);
  v8 = v1;
  v10 = (_BYTE *)(v1 + 12565);
  v9 = FIELD_U8(v1, 12565);
  v1 += 12565;
  v12 = *(unsigned __int8 *)(v1 - 1);
  v11 = (_BYTE *)(v1 - 1);
  result = v9 * v12;
  if ( (_BYTE)result )
  {
    v14 = 0;
    do
    {
      a2.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = "firebar_L";
      v15 = Resource_getModel2(resource, &a2, 0, 0, 0, 0, 0, 0, 0);
      v16 = 0;
      if ( v14 < 0x20 )
        v16 = v14;
      *(_DWORD *)(v8 + 4 * v16 + 6328) = v15;
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v15 + 68))(v15, v7);
      ++v14;
      result = (unsigned __int8)(*v10 * *v11);
    }
    while ( (int)v14 < result );
  }
  return result;
}
