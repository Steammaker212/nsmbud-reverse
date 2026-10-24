/* sub_602350E4
 * address: 0x602350E4   size: 960   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_602350E4(sead_IDisposer *a1, int a2, int a3, _DWORD *a4)
{
  signed int v7; // r7
  int *v8; // r4
  int *v9; // r8
  int v10; // r0
  bool v11; // cc
  int v12; // r7
  int v13; // r8
  signed int v14; // r4
  int *v16; // [sp+0h] [bp-78h]
  int v17; // [sp+4h] [bp-74h] BYREF
  int (**v18)(); // [sp+8h] [bp-70h] BYREF
  int *v19; // [sp+Ch] [bp-6Ch]
  int v20; // [sp+10h] [bp-68h]
  int v21; // [sp+14h] [bp-64h] BYREF

  sead_IDisposer_ctor(a1);
  v7 = 0;
  FIELD_U32(a1, 0x0) = (int)off_60BD9550;
  FIELD_U32(a1 + (1) * 16, 0x4) = (int)&FIELD_U32(a1 + (1) * 16, 0x4);
  FIELD_U32(a1 + (1) * 16, 0x8) = (int)&FIELD_U32(a1 + (1) * 16, 0x4);
  FIELD_U32(a1 + (1) * 16, 0xC) = 0;
  FIELD_U32(a1 + (1) * 16, 0x0) = (int)&off_60BD959C;
  sub_608209E4(&a1[2], &FIELD_U32(a1 + (1) * 16, 0x4), "mProjOffset");
  a1[4].containingHeap = 0;
  a1[4].field_8 = 0;
  a1[2].vtable = (int)off_60BD9560;
  sub_608209E4(&a1[4].field_C, &FIELD_U32(a1 + (1) * 16, 0x4), "mTypeDirY");
  a1[4].field_C = (int)off_60BD9574;
  a1[7].vtable = 0;
  sub_608209E4(&a1[7].containingHeap, &FIELD_U32(a1 + (1) * 16, 0x4), "mMagnifProjOffsetY");
  a1[7].containingHeap = (int)off_60BD9588;
  a1[9].field_8 = 1050253722;
  sub_608209E4(&a1[9].field_C, &FIELD_U32(a1 + (1) * 16, 0x4), "mMagnifCameraPosY");
  a1[9].field_C = (int)off_60BD9588;
  a1[12].vtable = 0;
  sub_608209E4(&a1[12].containingHeap, &FIELD_U32(a1 + (1) * 16, 0x4), "mModelOffsetX");
  a1[12].containingHeap = (int)off_60BD9588;
  a1[14].field_8 = 0;
  sub_608209E4(&a1[14].field_C, &FIELD_U32(a1 + (1) * 16, 0x4), "mModelOffsetY");
  a1[14].field_C = (int)off_60BD9588;
  a1[17].vtable = 0;
  sub_608209E4(&a1[17].containingHeap, &FIELD_U32(a1 + (1) * 16, 0x4), "mModelOffsetZ");
  a1[17].containingHeap = (int)off_60BD9588;
  a1[19].field_8 = 0;
  sub_608209E4(&a1[19].field_C, &FIELD_U32(a1 + (1) * 16, 0x4), "mIndirectScrollSpd");
  a1[22].vtable = 0;
  a1[22].containingHeap = 0;
  a1[19].field_C = (int)off_60BD9560;
  a1[22].field_8 = a3;
  v19 = &v21;
  v18 = &BufferedSafeStringBase_char_vtable_probably;
  v20 = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v18);
  v18 = &off_60BD4C08;
  v8 = v19;
  (*(void (__fastcall **)(_DWORD *))(*a4 + 12))(a4);
  v9 = (int *)a4[1];
  if ( v8 != v9 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a4 + 12))(a4);
    v10 = a4[1];
    while ( *(_BYTE *)(v10 + v7) )
    {
      if ( !*(_BYTE *)(v10 + v7 + 1) )
      {
        ++v7;
        break;
      }
      if ( !*(_BYTE *)(v10 + v7 + 2) )
      {
        v7 += 2;
        break;
      }
      v11 = v7 + 2 <= 0x7FFFF;
      v7 += 3;
      if ( !v11 )
      {
        v7 = 0;
        break;
      }
    }
    if ( v7 >= v20 )
      v7 = v20 - 1;
    qmemcpy(v8, v9, v7);
    *((_BYTE *)v8 + v7) = 0;
  }
  v18 = &off_60BD4BF0;
  v16 = v19;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v18);
  v12 = 0;
  while ( *((_BYTE *)v19 + v12) )
  {
    if ( !*((_BYTE *)v19 + v12 + 1) )
    {
      ++v12;
      break;
    }
    if ( !*((_BYTE *)v19 + v12 + 2) )
    {
      v12 += 2;
      break;
    }
    v11 = v12 + 2 <= 0x7FFFF;
    v12 += 3;
    if ( !v11 )
    {
      v12 = 0;
      break;
    }
  }
  v13 = 0;
  v14 = 0;
  if ( v12 > 0 )
    v13 = v12;
  while ( aCamera[v14] )
  {
    if ( v14 > 0x7FFFF )
    {
      v14 = 0;
      break;
    }
    if ( !aCamera[v14 + 1] )
    {
      ++v14;
      break;
    }
    v14 += 2;
  }
  if ( v14 >= v20 - v13 )
    v14 = v20 - v13 - 1;
  if ( v14 >= 1 )
  {
    qmemcpy((char *)v16 + v13, ".camera", v14);
    if ( v14 + v13 > v12 )
      *((_BYTE *)v16 + v14 + v13) = 0;
  }
  v17 = 0;
  if ( sub_608226EC(ArchiveManagerMaybe_instance, a4, &v18, &v17) )
    sub_6023566C(&a1[1]);
  return a1;
}
